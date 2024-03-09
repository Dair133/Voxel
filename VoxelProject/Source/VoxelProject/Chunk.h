// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <VoxelProject/Enums.h>
#include "Chunk.generated.h"

enum class EDirection1;
class FastNoiseLite;
class UProceduralMeshComponent;

UCLASS()
class AChunk : public AActor
{
    GENERATED_BODY()

    struct FMask
    {
        EBlock Block;
        int Normal;
    };

public:
    struct actorData {

        FVector Location;
        FRotator Rotation;

    };
    // Sets default values for this actor's properties
    AChunk();
    void ModifyVoxel(const FIntVector Position, const EBlock Block);

    UPROPERTY(EditAnywhere, Category = "Chunk")
    int Size = 64;

    UPROPERTY(EditAnywhere, Category = "Chunk")
    int Scale = 1;

    UPROPERTY(EditAnywhere, Category = "Materials")
    UMaterialInterface* BaseMaterial;

    UPROPERTY()
    UStaticMesh* MyTreeMesh;

    int VerticalHeight = 160;
    UClass* MyTreeBPClass;
    UClass* MyGrassBPClass;
    // UFUNCTION(BlueprintCallable, Category = "Chunk")
    //     void ModifyVoxel(const FIntVector Position, const EBlock Block);

    UPROPERTY(EditAnywhere, Category = "Chunk")
    int AmtBlocksVertically = 1;


    int FrameCounter = 0;
    int CurrentX, CurrentY;
    int MaxX, MaxY;
    FTimerHandle WorkTimerHandle;
    TArray<FGraphEventRef> TaskList;
    float ChunkSizeInMeters = 32.0;
    TArray<FVector> TreeLocations;
    void GenerateBlocks();
    void RespawnTrees();


protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

private:
    UProceduralMeshComponent* Mesh;
    FastNoiseLite* MainNoise;
    FastNoiseLite* SecondaryNoise;
    bool tree = false;
    TArray<EBlock> Blocks;
    TArray<actorData> Trees;
    TArray<FVector> VertexData;
    TArray<FVector> NormalData;
    TArray<int> TriangleData;
    TArray<FVector2D> UVData;
    TArray<FColor> VertexColors;
    FCriticalSection CriticalSection;
    FCriticalSection VertexCriticalSection;
    int VertexCount = 0;

    void ModifyVoxelData(const FIntVector Position, EBlock Block);
    void ClearMesh();

    const FVector BlockVertexData[8] = {
            FVector(100,100,100),
            FVector(100,0,100),
            FVector(100,0,0),
            FVector(100,100,0),
            FVector(0,0,100),
            FVector(0,100,100),
            FVector(0,100,0),
            FVector(0,0,0)
    };

    const int BlockTriangleData[24] = {
            0,1,2,3, // Forward
            5,0,3,6, // Right
            4,5,6,7, // Back
            1,4,7,2, // Left
            5,4,1,0, // Up
            3,2,7,6  // Down
    };



    void GenerateMesh();

    void SpawnTree(const FVector& Location);

    void ApplyMesh();

    void CreateQuad(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);

    int GetBlockIndex(int x, int y, int z) const;

    EBlock GetBlock(FIntVector Index) const;

    bool CompareMask(FMask M1, FMask M2) const;

    FColor GetColorFromBlock(EBlock Block, FIntVector Location);

    void DelayedBeginPlay();

    void SpawnActorAtLocation(float X, float Y, float Z, UClass* ActorToSpawn, FRotator Rotation);

    //    void GenerateTreeMap(const FVector& PlayerPosition);
    //    void SpawnTrees(const FVector& PlayerPosition);
    //    TArray<FVector2D> TreeMap;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;



};
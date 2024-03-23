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



public:
    struct FMask
    {
        EBlock Block;
        int Normal;
    };

    struct actorData {

        FVector Location;
        FRotator Rotation;

    };
    struct FQuadData
    {
        FMask CurrentMask;
        FIntVector AxisMask;
        FIntVector ChunkItr;
        FIntVector DeltaAxis1;
        FIntVector DeltaAxis2;
        EBlock Block;
    };
    TQueue<FQuadData> QuadDataQueueOne;
    TQueue<FQuadData> QuadDataQueueTwo;
    TQueue<FQuadData> QuadDataQueueThree;




    TArray<FGraphEventRef> TaskDependencies;

    int quadOneSize = 0;
    int quadTwoSize = 0;
    int quadThreeSize = 0;


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

    int VerticalHeight = 450;
    UClass* MyTreeBPClass;
    UClass* MyGrassBPClass;
    // UFUNCTION(BlueprintCallable, Category = "Chunk")
    //     void ModifyVoxel(const FIntVector Position, const EBlock Block);

    UPROPERTY(EditAnywhere, Category = "Chunk")
    int AmtBlocksVertically = 1;

   
    int frameCounter = 0;
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
    UProceduralMeshComponent* MeshOne;
    UProceduralMeshComponent* MeshTwo;
    UProceduralMeshComponent* MeshThree;
    FastNoiseLite* HillyPlains;
    FastNoiseLite* ColorNoise;
    FastNoiseLite* SecondaryNoise;
    bool tree = false;

    // Primcary block storage array
    TArray<EBlock> Blocks;
    TArray<int> NoiseNumbers;
    TArray<actorData> Trees;

    TArray<FVector> AxisOneVertexData;
    TArray<FVector> AxisOneNormalData;
    TArray<int> AxisOneTriangleData;
    TArray<FVector2D> AxisOneUVData;
    TArray<FColor> AxisOneVertexColors;

    TArray<FVector> AxisTwoVertexData;
    TArray<FVector> AxisTwoNormalData;
    TArray<int> AxisTwoTriangleData;
    TArray<FVector2D> AxisTwoUVData;
    TArray<FColor> AxisTwoVertexColors;

    TArray<FVector> AxisThreeVertexData;
    TArray<FVector> AxisThreeNormalData;
    TArray<int> AxisThreeTriangleData;
    TArray<FVector2D> AxisThreeUVData;
    TArray<FColor> AxisThreeVertexColors;

    TArray<FVector> VertexData;
    TArray<FVector> NormalData;
    TArray<int> TriangleData;
    TArray<FVector2D> UVData;
    TArray<FColor> VertexColors;

    TArray<FVector> EmptyArray;


    FCriticalSection CriticalSection;
    FCriticalSection VertexCriticalSection;
    FCriticalSection GenerateBlocksLock;

    int VertexCount = 0;
    bool finishedCreateQuad = false;
    bool resetQuadFrameTimer = false;

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

    float QueryNoiseValue(const std::vector<float>& noiseOutput, int x, int y, int z, int Width, int Height);

    void GenerateMesh();
    void PerformBusyWait(int32 NumberOfIterations);
    void SetupBiomeNoise();
    void CreateQuads();
    void StartSequentialTasksWithDelay();
    void DispatchTaskOne();
    void DispatchTaskTwo();
    void DispatchTaskThree();
    void RemoveDegenerateTriangles(TArray<int32>& TriangleData);
    void SpawnTree(const FVector& Location);

    void ApplyMesh();

    void CreateQuadOne(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);
    void CreateQuadTwo(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);
       void CreateQuadThree(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);
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
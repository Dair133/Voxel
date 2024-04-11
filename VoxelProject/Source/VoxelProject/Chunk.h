// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <VoxelProject/Enums.h>
#include <DynamicMesh/DynamicMesh3.h>
#include <DynamicMesh/DynamicAttribute.h>
#include <DynamicMesh/DynamicVertexAttribute.h>
#include <DynamicMesh/DynamicMeshAttributeSet.h>
#include <GeometryCoreModule.h>
#include <GeometryBase.h>
#include <DynamicMeshActor.h>
#include <DynamicMesh/ColliderMesh.h>
#include "Chunk.generated.h"

enum class EDirection1;
class FastNoiseLite;
class UProceduralMeshComponent;

UCLASS()
class AChunk : public AActor
{
    GENERATED_BODY()



public:

    UFUNCTION(BlueprintCallable, Category = "ChunkFunction")
    void ModifyVoxel(FVector WorldPosition, EBlock Block);
    FIntVector WorldToLocal(FIntVector WorldLocation);
    FIntVector ConvertLocalCoordsToVoxel(FIntVector LocalCoords);
    void ModifyVoxelData(FIntVector Position, EBlock Block);
    FIntVector WorldToLocal(FVector WorldPosition);

   
    bool mountainBiome = false;
    bool plainsBiome = false;
    bool mountainPlainsTransition = false;


    bool regeneratingMesh = false;
    bool modifyingVoxel = false;

    struct NoiseStruct
    {
        float noiseValue;
        float biomeNumber;
    };
    TArray<NoiseStruct> globalNoiseMap;
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

    TArray<FQuadData> QuadDataArrayOne;
    TArray<FQuadData> QuadDataArrayTwo;
    TArray<FQuadData> QuadDataArrayThree;


    int generateRandomNumber(int min, int max);
    bool outOfBounds = false;

    TArray<FGraphEventRef> TaskDependencies;

    int quadOneSize = 0;
    int quadTwoSize = 0;
    int quadThreeSize = 0;


    // Sets default values for this actor's properties
    AChunk();

    UPROPERTY(EditAnywhere, Category = "Chunk")
    int Size = 32;

    UPROPERTY(EditAnywhere, Category = "Chunk")
    int Scale = 1;

    UPROPERTY(EditAnywhere, Category = "Materials")
    UMaterialInterface* BaseMaterial;

    UPROPERTY()
    UStaticMesh* MyTreeMesh;

    int VerticalHeight = 470;
    UClass* MyTreeBPClass;
    UClass* MyGrassBPClass;
    // UFUNCTION(BlueprintCallable, Category = "Chunk")
    //     void ModifyVoxel(const FIntVector Position, const EBlock Block);

    UPROPERTY(EditAnywhere, Category = "Chunk")
    int AmtBlocksVertically = 1;

    int meshCounter = 0;
    int frameCounter = 0;
    int CurrentX, CurrentY;
    int MaxX, MaxY;
    FTimerHandle WorkTimerHandle;
    TArray<FGraphEventRef> TaskList;
    float ChunkSizeInMeters = 32.0;
    TArray<FVector> TreeLocations;
    void GenerateBlocks();
    void RespawnTrees();
    void StaticMeshConversion();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

private:
    void AddingOverlay();
    APawn* PlayerPawn;

  
    UStaticMesh* StaticMeshOne;
    UStaticMesh* StaticMeshTwo;
    UStaticMesh* StaticMeshThree;

    UDynamicMeshComponent* CombinedAxisMesh;
    UDynamicMeshComponent* AxisOneMesh;
    UDynamicMeshComponent* AxisTwoMesh;
    UDynamicMeshComponent* AxisThreeMesh;

    FDynamicMesh3 DynamicMeshAxisCombined;
    //UE::Geometry::FDynamicMeshUVOverlay* UVOverlay = DynamicMeshAxisCombined.Attributes()->PrimaryUV();
    UE::Geometry::FDynamicMeshUVOverlay* UVOverlay;
    UE::Geometry::FDynamicMeshNormalOverlay* NormalOverlay;

    FDynamicMesh3 DynamicMeshAxisOne;
    UE::Geometry::FDynamicMeshUVOverlay* AxisOneUVOverlay;
    UE::Geometry::FDynamicMeshNormalOverlay* AxisOneNormalOverlay;


    FDynamicMesh3 DynamicMeshAxisTwo;
    UE::Geometry::FDynamicMeshUVOverlay* AxisTwoUVOverlay;
    UE::Geometry::FDynamicMeshNormalOverlay* AxisTwoNormalOverlay;



    FDynamicMesh3 DynamicMeshAxisThree;
    UE::Geometry::FDynamicMeshUVOverlay* AxisThreeUVOverlay;
    UE::Geometry::FDynamicMeshNormalOverlay* AxisThreeNormalOverlay;

    FastNoiseLite* HillyPlains;
    FastNoiseLite* PlainsNoise;
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

    TArray<FVector2D> placeholderUVData;
    FCriticalSection CreateQuadLockOne;
    FCriticalSection CreateQuadLockTwo;
    FCriticalSection CreateQuadLockThree;
    FCriticalSection VertexCriticalSection;
    FCriticalSection GenerateBlocksLock;
    int VertexCount = 0;
    int AxisOneVertexCount = 0;
    int AxisTwoVertexCount = 0;
    int AxisThreeVertexCount = 0;
    bool finishedCreateQuad = false;
    bool resetQuadFrameTimer = false;

    // Keeps track of whether all axis of a chunk have been generated
    // So for mountain biomes we initially generate axis 1 and 2 
    // when we generate axis 3 fullAxisGenerated will be set to true
    bool fullAxisGenerated = false;

    // Keeps track of whether the initial axis has been generated, so for a mountain biome
    // keeps track of whether axis 1 and 2 have been generated
    bool allAxisGenerated = false;

    bool axisOneGenerated = false;
    bool axisTwoGenerated = false;
    bool axisThreeGenerated = false;
    bool initialAxisGenerated = false;

  
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



    void CreateQuadOnePartOne(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);
    //void CreateQuadTwo(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);
    //void CreateQuadThree(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);


    void CreateQuadOne(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);
    void CreateQuadTwo(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);
    void CreateQuadThree(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block);





    int GetBlockIndex(int x, int y, int z) const;

    EBlock GetBlock(FIntVector Index);

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
    void ApplyCombinedAxis();
    void ApplyAxisOne();
    void ApplyAxisTwo();
    void ApplyAxisThree();
    bool isApplyingMeshReady = false;

    bool collisionActive;



};
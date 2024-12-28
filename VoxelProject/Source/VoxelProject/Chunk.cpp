// // Fill out your copyright notice in the Description page of Project Settings.
   //FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
          //   {
          //        Code to be executed in the worker thread

          //        ...

          //        Code executed in the worker thread is complete
          //   }, TStatId(), nullptr, ENamedThreads::GameThread);

//    UE_LOG(LogTemp, Display, TEXT("CLEARING MESH"));
#include "Chunk.h"
#include <system_error>
#include <VoxelProject/FastNoiseLite.h>
#include <GeometryCoreModule.h>
#include <GeometryBase.h>
#include <DynamicMeshActor.h>
#include <DynamicMesh/ColliderMesh.h>
#include "ProceduralMeshComponent.h"
#include <random>
#include <Engine/StaticMeshActor.h>
#include <__msvc_chrono.hpp>
#include <thread>
#include <vector>
#include <NiagaraComponent.h>
#include "NiagaraFunctionLibrary.h"
#include <random>
#include <chrono>
#include <cmath>
#include <iostream>
#include <Tickable.h>
#include <DynamicMesh/DynamicBoneAttribute.h>
#include <DynamicMesh/MeshAttributeUtil.h>
#include <DynamicMesh/DynamicMeshOverlay.h>
#include <DynamicMesh/DynamicMesh3.h>
#include <DynamicMesh/DynamicAttribute.h>
#include <DynamicMesh/DynamicVertexAttribute.h>
#include <DynamicMesh/DynamicMeshAttributeSet.h>
#include <DynamicMesh/MeshAttributeUtil.h>
#include <DynamicMesh/Operations/SplitAttributeWelder.h>
#include <Engine.h>
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include <cmath> // For std::sin
#include "MyPawn.h"
#include "VoxelGameModeBase.h"


//#include "Octree/CubeRange.h"
FTimerHandle MyTimerHandle;
// Sets default valuessadasdassad




std::string ToStringEnum(EBlock blockType) {
    switch (blockType) {
    case EBlock::Null: return "Null";
    case EBlock::Air: return "Air";
    case EBlock::Stone: return "Stone";
    case EBlock::Dirt: return "Dirt";
    case EBlock::Grass: return "Grass";
    case EBlock::Sand: return "Sand";
    case EBlock::Water: return "Water";
    case EBlock::SnowGrass: return "SnowGrass";
    default: return "Unknown";
    }
}

AChunk::AChunk()
{
    treeLocations.SetNum(4);
    flowerLocations.SetNum(300);
    mountainTreeLocations.SetNum(100);
    treeScale = FVector(1.9f, 1.9f, 1.85f);
    grassScale = FVector(0.1f, 0.1f, 0.1f);
    flowerScale = FVector(0.1f, 0.1f, 0.1f);

    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create a default scene component as the root
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));


    //CombinedAxisMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshOne");
    AxisOneMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshTwo");
    AxisTwoMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshThree");
    AxisThreeMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshFour");

    // Attach the mesh components to the root component
   // CombinedAxisMesh->SetupAttachment(RootComponent);
    AxisOneMesh->SetupAttachment(RootComponent);
    AxisTwoMesh->SetupAttachment(RootComponent);
    AxisThreeMesh->SetupAttachment(RootComponent);

    // Initialize Blocks
    Blocks.SetNum(Size * Size * VerticalHeight);

    // Mesh Settings
    //CombinedAxisMesh->SetCastShadow(false);
    AxisOneMesh->SetCastShadow(false);
    AxisTwoMesh->SetCastShadow(false);
    AxisThreeMesh->SetCastShadow(true);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("Material'/Game/Cubedeps/Materials/Basecube.Basecube'"));
    if (Material.Succeeded())
    {
        BaseMaterial = Material.Object;
    }
    // Get the current game mode using UGameplayStatics
    AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);


    static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CubeDeps/treeTestActor.treeTestActor'"));
    // static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/Objects/Trees/Tree01.Tree01'"));
    if (MyTreeBlueprintFinder.Succeeded())
    {
        MyTreeBPClass = (UClass*)MyTreeBlueprintFinder.Object->GeneratedClass;
        // UE_LOG(LogTemp, Warning, TEXT("Blueprint loaded successfully."));
    }
    else
    {
        //UE_LOG(LogTemp, Warning, TEXT("tree bp not working."));

    }



}



void AChunk::ApplyAxisOne()
{




    TArray<int32> ColorAttributeIndices;
    // Some reason the below array is not being set correctly? should probably not just multiply this by 10
    ColorAttributeIndices.SetNum(AxisOneVertexColors.Num() * 10);

    // Append vertices to the dynamic mesh
  //  FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
    //    {
    // Append color elements to the color overlay and store the returned indices
    for (int32 i = 0; i < AxisOneVertexColors.Num(); ++i) {
        FColor Color = AxisOneVertexColors[i];
        FVector4f ColorVector(Color.R / 255.0f, Color.G / 255.0f, Color.B / 255.0f, 1.0f);
        ColorAttributeIndices[i] = DynamicMeshAxisOne.Attributes()->PrimaryColors()->AppendElement(ColorVector);
    }
    //   }, TStatId(), nullptr, ENamedThreads::HighTaskPriority);
  // Taskx->Wait();
   // Get the color overlay
    UE::Geometry::FDynamicMeshColorOverlay* ColorOverlay = DynamicMeshAxisOne.Attributes()->PrimaryColors();

    ParallelFor(DynamicMeshAxisOne.TriangleCount(), [&](int32 TriangleIndex) {

        // Iterate over the base mesh triangles and set the color attribute indices for each triangle
       // for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisOne.TriangleCount(); ++TriangleIndex) {
            // Get the vertex indices of the current triangle
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisOne.GetTriangle(TriangleIndex);

        // Map the triangle vertex indices to the color attribute indices
        UE::Geometry::FIndex3i ColorAttributeTriangleIndices(
            ColorAttributeIndices[TriangleVertexIndices.A],
            ColorAttributeIndices[TriangleVertexIndices.B],
            ColorAttributeIndices[TriangleVertexIndices.C]
        );

        // Set the color attribute indices for the current triangle
        ColorOverlay->SetTriangle(TriangleIndex, ColorAttributeTriangleIndices);

        TriangleVertexIndices = DynamicMeshAxisOne.GetTriangle(TriangleIndex);
        AxisOneNormalOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
        }, EParallelForFlags::None);

    // Copy the color overlay to the primary colors attribute
    DynamicMeshAxisOne.Attributes()->PrimaryColors()->Copy(*ColorOverlay);

    ParallelFor(AxisOneVertexColors.Num(), [&](int32 i) {

        DynamicMeshAxisOne.SetVertexColor(i, FVector3f(AxisOneVertexColors[i]));

        }, EParallelForFlags::None);

    // Somehow add color here?
    AxisOneMesh->GetDynamicMesh()->SetMesh(MoveTemp(DynamicMeshAxisOne));
    AxisOneMesh->SetMaterial(0, BaseMaterial);
    collisionActive = false;
}

void AChunk::ApplyAxisTwo()
{

    TArray<int32> ColorAttributeIndices;
    ColorAttributeIndices.SetNum(AxisTwoVertexColors.Num() * 2);
    DynamicMeshAxisTwo.Attributes()->PrimaryColors()->InitializeTriangles(AxisTwoVertexColors.Num());
    // Append vertices to the dynamic mesh

    // Append color elements to the color overlay and store the returned indices
    for (int32 i = 0; i < AxisTwoVertexColors.Num(); ++i) {
        FColor Color = AxisTwoVertexColors[i];
        FVector4f ColorVector(Color.R / 255.0f, Color.G / 255.0f, Color.B / 255.0f, 1.0f);
        ColorAttributeIndices[i] = i;
        //DynamicMeshAxisTwo.Attributes()->PrimaryColors()->SetElement(i,ColorVector);
        ColorAttributeIndices[i] = DynamicMeshAxisTwo.Attributes()->PrimaryColors()->AppendElement(ColorVector);
    }

    // Get the color overlay
    UE::Geometry::FDynamicMeshColorOverlay* ColorOverlay = DynamicMeshAxisTwo.Attributes()->PrimaryColors();

    ParallelFor(DynamicMeshAxisTwo.TriangleCount(), [&](int32 TriangleIndex) {

        // Iterate over the base mesh triangles and set the color attribute indices for each triangle
       // for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisTwo.TriangleCount(); ++TriangleIndex) {
            // Get the vertex indices of the current triangle
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisTwo.GetTriangle(TriangleIndex);

        // Map the triangle vertex indices to the color attribute indices
        UE::Geometry::FIndex3i ColorAttributeTriangleIndices(
            ColorAttributeIndices[TriangleVertexIndices.A],
            ColorAttributeIndices[TriangleVertexIndices.B],
            ColorAttributeIndices[TriangleVertexIndices.C]
        );

        // Set the color attribute indices for the current triangle
        ColorOverlay->SetTriangle(TriangleIndex, ColorAttributeTriangleIndices);

        TriangleVertexIndices = DynamicMeshAxisTwo.GetTriangle(TriangleIndex);
        AxisTwoNormalOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
        }, EParallelForFlags::None);

    // Copy the color overlay to the primary colors attribute
    DynamicMeshAxisTwo.Attributes()->PrimaryColors()->Copy(*ColorOverlay);

    ParallelFor(AxisTwoVertexColors.Num(), [&](int32 i) {

        DynamicMeshAxisTwo.SetVertexColor(i, FVector3f(AxisTwoVertexColors[i]));

        }, EParallelForFlags::None);
    // Dont know what the 'CopyVertex' functions do but they seem work


    // Somehow add color here?
    AxisTwoMesh->GetDynamicMesh()->SetMesh(MoveTemp(DynamicMeshAxisTwo));
    AxisTwoMesh->SetMaterial(0, BaseMaterial);
    collisionActive = false;
}
void AChunk::ApplyAxisThree()
{

    TArray<int32> ColorAttributeIndices;
    ColorAttributeIndices.SetNum(AxisThreeVertexColors.Num() * 2);

    // Append vertices to the dynamic mesh

    // Append color elements to the color overlay and store the returned indices
    for (int32 i = 0; i < AxisThreeVertexColors.Num(); ++i) {
        FColor Color = AxisThreeVertexColors[i];
        FVector4f ColorVector(Color.R / 255.0f, Color.G / 255.0f, Color.B / 255.0f, 1.0f);
        ColorAttributeIndices[i] = DynamicMeshAxisThree.Attributes()->PrimaryColors()->AppendElement(ColorVector);
    }

    // Get the color overlay
    UE::Geometry::FDynamicMeshColorOverlay* ColorOverlay = DynamicMeshAxisThree.Attributes()->PrimaryColors();

    // Iterate over the base mesh triangles and set the color attribute indices for each triangle
    ParallelFor(DynamicMeshAxisThree.TriangleCount(), [&](int32 TriangleIndex) {


        // Get the vertex indices of the current triangle
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisThree.GetTriangle(TriangleIndex);

        // Map the triangle vertex indices to the color attribute indices
        UE::Geometry::FIndex3i ColorAttributeTriangleIndices(
            ColorAttributeIndices[TriangleVertexIndices.A],
            ColorAttributeIndices[TriangleVertexIndices.B],
            ColorAttributeIndices[TriangleVertexIndices.C]
        );

        // Set the color attribute indices for the current triangle
        ColorOverlay->SetTriangle(TriangleIndex, ColorAttributeTriangleIndices);

        TriangleVertexIndices = DynamicMeshAxisThree.GetTriangle(TriangleIndex);
        AxisThreeNormalOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
        }, EParallelForFlags::None);


    DynamicMeshAxisThree.Attributes()->PrimaryColors()->Copy(*ColorOverlay);

    ParallelFor(AxisThreeVertexColors.Num(), [&](int32 i) {

        DynamicMeshAxisThree.SetVertexColor(i, FVector3f(AxisThreeVertexColors[i]));

        }, EParallelForFlags::None);




    // Somehow add color here?
    AxisThreeMesh->SetMaterial(0, BaseMaterial);
    AxisThreeMesh->GetDynamicMesh()->SetMesh(MoveTemp(DynamicMeshAxisThree));
    collisionActive = false;
}


void AChunk::ApplyCombinedAxis()
{

    TArray<int32> ColorAttributeIndices;
    ColorAttributeIndices.SetNum(VertexColors.Num() * 5);

    // Append vertices to the dynamic mesh

    // Append color elements to the color overlay and store the returned indices
    for (int32 i = 0; i < VertexColors.Num(); ++i) {
        FColor Color = VertexColors[i];
        FVector4f ColorVector(Color.R / 255.0f, Color.G / 255.0f, Color.B / 255.0f, 1.0f);
        ColorAttributeIndices[i] = DynamicMeshAxisCombined.Attributes()->PrimaryColors()->AppendElement(ColorVector);
    }

    // Get the color overlay
    UE::Geometry::FDynamicMeshColorOverlay* ColorOverlay = DynamicMeshAxisCombined.Attributes()->PrimaryColors();

    // Iterate over the base mesh triangles and set the color attribute indices for each triangle
    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisCombined.TriangleCount(); ++TriangleIndex) {
        // Get the vertex indices of the current triangle
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisCombined.GetTriangle(TriangleIndex);

        // Map the triangle vertex indices to the color attribute indices
        UE::Geometry::FIndex3i ColorAttributeTriangleIndices(
            ColorAttributeIndices[TriangleVertexIndices.A],
            ColorAttributeIndices[TriangleVertexIndices.B],
            ColorAttributeIndices[TriangleVertexIndices.C]
        );

        // Set the color attribute indices for the current triangle
        ColorOverlay->SetTriangle(TriangleIndex, ColorAttributeTriangleIndices);
    }

    // Copy the color overlay to the primary colors attribute
    DynamicMeshAxisCombined.Attributes()->PrimaryColors()->Copy(*ColorOverlay);

    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisCombined.TriangleCount(); ++TriangleIndex) {
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisCombined.GetTriangle(TriangleIndex);
        UVOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
    }


    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisCombined.TriangleCount(); ++TriangleIndex) {
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisCombined.GetTriangle(TriangleIndex);
        NormalOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
    }

    CombinedAxisMesh->SetMaterial(0, BaseMaterial);
    CombinedAxisMesh->SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode::NoTransform);
    CombinedAxisMesh->SetCollisionEnabled(ECollisionEnabled::ProbeOnly);
    CombinedAxisMesh->EnableComplexAsSimpleCollision();
    CombinedAxisMesh->GetDynamicMesh()->SetMesh(DynamicMeshAxisCombined);
    collisionActive = false;

}

void AChunk::ApplyMesh()
{
    isApplyingMeshReady = true;
}

FIntVector AChunk::WorldToLocal(FIntVector WorldLocation)
{
    // World coordinates
    float WorldX, WorldY, WorldZ;
    WorldX = WorldLocation.X;
    WorldY = WorldLocation.Y;
    WorldZ = WorldLocation.Z;

    // Chunk origin in world coordinates
    FVector Location = GetActorLocation(); // Assuming this is the bottom-left corner of the chunk

    // Calculate block coordinates within the chunk
    int BlockX = (WorldX - Location.X) / 100;
    int BlockY = (WorldY - Location.Y) / 100;
    int BlockZ = (WorldZ - Location.Z) / 100;

    return FIntVector(BlockX, BlockY, BlockZ);

}


void AChunk::ModifyVoxel(FVector WorldPosition, const EBlock Block)
{
    modifyingVoxel = true;
    FIntVector LocalPosition = WorldToLocal(WorldPosition);
    FIntVector VoxelPosition = ConvertLocalCoordsToVoxel(LocalPosition);
    ModifyVoxelData(VoxelPosition, Block);
    ClearMesh();
    GenerateMesh();

    // Divide the below thee axis applying into a seperate function 'ApplyMeshModifyVoxel?'
    ApplyAxisOne();
    ApplyAxisTwo();
    ApplyAxisThree();
    modifyingVoxel = false;
}
FIntVector AChunk::WorldToLocal(FVector WorldPosition)
{
    FVector LocalPosition = WorldPosition - GetActorLocation();
    return FIntVector(LocalPosition.X, LocalPosition.Y, LocalPosition.Z);
}
FIntVector AChunk::ConvertLocalCoordsToVoxel(FIntVector LocalCoords)
{
    int VoxelSize = 100; // Assuming each voxel is 100 Unreal units
    int VoxelIndexX = FMath::FloorToInt((float)LocalCoords.X / VoxelSize);
    int VoxelIndexY = FMath::FloorToInt((float)LocalCoords.Y / VoxelSize);
    int VoxelIndexZ = FMath::FloorToInt((float)LocalCoords.Z / VoxelSize);
    VoxelIndexX = FMath::Clamp(VoxelIndexX, 0, Size - 1);
    VoxelIndexY = FMath::Clamp(VoxelIndexY, 0, Size - 1);
    VoxelIndexZ = FMath::Clamp(VoxelIndexZ, 0, VerticalHeight - 1);
    return FIntVector(VoxelIndexX, VoxelIndexY, VoxelIndexZ);
}
// Called when the game starts or when spawned
void AChunk::BeginPlay()
{
    Super::BeginPlay();

    // Assuming you're interested in the pawn of player 0 (the first player)
    PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

    // Cast to your third-person character class if needed
    //AMyPawn* MyCharacter = Cast<AMyPawn>(PlayerPawn);
       // To use your custom game mode class, cast it from AGameModeBase to your game mode class

    AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);

    AVoxelGameModeBase* VoxelGameMode = Cast<AVoxelGameModeBase>(GameMode);

    if (VoxelGameMode)
    {
        AActor* treeSpawner = VoxelGameMode->GetTreeSpawner();
        treeHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(treeSpawner->GetComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass()));
        if (treeHISM)
        {
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("TREE HISM NOT FOUND"));
        }

        AActor* grassSpawner = VoxelGameMode->GetGrassSpawner();
        grassHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(grassSpawner->GetComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass()));
        if (grassHISM)
        {
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("GRASS HISM NOT FOUND"));
        }
        flowerSpawnerOneHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(VoxelGameMode->GetFlowerSpawnerOne());
        if (flowerSpawnerOneHISM)
        {
            //UE_LOG(LogTemp, Warning, TEXT("Flower hism has been found :)"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FLOWER HISM ONE NOT FOUND"));
        }

        flowerSpawnerTwoHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(VoxelGameMode->GetFlowerSpawnerTwo());
        if (flowerSpawnerTwoHISM)
        {
            //UE_LOG(LogTemp, Warning, TEXT("Flower hism has been found :)"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FLOWER HISM TWO NOT FOUND"));
        }

        flowerSpawnerThreeHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(VoxelGameMode->GetFlowerSpawnerThree());
        if (flowerSpawnerThreeHISM)
        {
            //UE_LOG(LogTemp, Warning, TEXT("Flower hism has been found :)"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FLOWER HISM THREE NOT FOUND"));
        }

        wheatHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(VoxelGameMode->GetWheatSpawner());
        if (wheatHISM)
        {
            //UE_LOG(LogTemp, Warning, TEXT("Wheat Spawner has been found in chunk"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("wheat spawner not found in chunk"));
        }
    }
}



void AChunk::Tick(float DeltaTime)
{
    globalTick++;
    if (globalTick % 20 == 0) {
        FVector playerLocation = PlayerPawn->GetActorLocation();
        FVector actorLocation = GetActorLocation();
        // Calculate the distance between this actor and the player
        float distanceToPlayer = FVector::Dist(playerLocation, actorLocation);
        ECompass directionOne;
        // ECompass directionTwo;

        if (PlayerPawn)
        {
            if (!allAxisGenerated) {
                // Vector from the actor to the player
                FVector Direction = playerLocation - actorLocation;
                Direction.Normalize();

                // Get the forward vector of the actor
                FVector Forward = GetActorForwardVector();

                // Calculate the angle between the actor's forward vector and the direction vector to the player
                float DotProduct = FVector::DotProduct(Forward, Direction);
                float AngleRadians = acosf(DotProduct);  // Get the angle in radians
                float AngleDegrees = FMath::RadiansToDegrees(AngleRadians);  // Convert radians to degrees

                // Determine the relative direction using the cross product to check if it is left or right
                FVector CrossProduct = FVector::CrossProduct(Forward, Direction);
                if (CrossProduct.Z < 0)
                {
                    AngleDegrees = 360.0f - AngleDegrees;
                }

                // Normalize the angle to a 0 - 360 rangegt
                AngleDegrees = FMath::Fmod(AngleDegrees + 360.0f, 360.0f);

                // Determine if the player is in the North, South, East, or West sector
             // Determine if the player is in the North, South, East, or West sector
          // Determine if the player is in the North, South, East, or West sector

                // 90 in first check affecs terrain
                // leave 270

                if ((AngleDegrees >= 270.0f && AngleDegrees <= 360.0f) || (AngleDegrees >= 0.0f && AngleDegrees < 25.0f))
                {
                    directionOne = ECompass::North;
                }
                if (AngleDegrees >= 25.0f && AngleDegrees < 170.0f)
                {
                    directionOne = ECompass::East;
                }
                if (AngleDegrees >= 170.0f && AngleDegrees < 225.0f)
                {
                    directionOne = ECompass::South;
                }
                if (AngleDegrees >= 225.0f && AngleDegrees < 360.0f)
                {
                    directionOne = ECompass::West;
                }
                if (AngleDegrees > 255 && AngleDegrees < 270) // Specific angle where both axis should be generated
                {
                    directionOne = ECompass::Other; // This case should not be hit now
                }
                if (AngleDegrees > 15 && AngleDegrees < 30) // Specific angle where both axis should be generated
                {
                    directionOne = ECompass::Other; // This case should not be hit now
                }
                if (AngleDegrees > 155 && AngleDegrees < 165) // Specific angle where both axis should be generated
                {
                    directionOne = ECompass::Other; // This case should not be hit now
                }
            }
            directionOne = ECompass::Other;
        }


        frameCounter++;
        if (frameCounter < 500 && !modifyingVoxel) {
            // Perform a portion of your logic here
            if (frameCounter == 2) {
                float TimeToDisplay1 = 5.0f; // Display the message for 5 seconds.
                FColor DisplayColor1 = FColor::Red; // Display the message in red.
                float WorldTime = GetWorld()->GetTimeSeconds();
                FString DebugMessage = FString::Printf(TEXT("blocks"));

                GenerateBlocks();
            }
            else if (frameCounter == 3) {

                GenerateMesh();
            }
            else if (frameCounter == 4) {
                ApplyMesh();

            }
            else {
                // PrimaryActorTick.bCanEverTick = false;
            }
        }

        // All rules on which biomes have which axis generated are located inside Enums.h

        if (isApplyingMeshReady)
        {
            meshCounter++;
            // Initial terrain generation
            if (!modifyingVoxel) {
                // Important thing here is that it does not generate the axis intiially unless player is facing that direction

                if (distanceToPlayer < 80000.0f) {// Initial 'close' chunk generation

                    // north south measurement needs to be increased
                    if ((meshCounter > 2 && meshCounter < 10) && (directionOne == ECompass::North || directionOne == ECompass::South || directionOne == ECompass::Other)) {
                        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Axis One"));
                        if (meshCounter == 3 && !axisOneGenerated) {
                            GenerateAxisOneMesh(false);
                            axisOneGenerated = true;
                        }
                        if (meshCounter == 6 && !axisOneApplied) {
                            ApplyAxisOne();
                            axisOneApplied = true;

                        }
                    }
                    if ((meshCounter > 12 && meshCounter < 18) && (directionOne == ECompass::East || directionOne == ECompass::West || directionOne == ECompass::Other)) {
                        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Axis Two"));
                        if (meshCounter == 13 && !axisTwoGenerated) {
                            GenerateAxisTwoMesh(false);
                            axisTwoGenerated = true;
                        }
                        if (meshCounter == 16 && !axisTwoApplied) {
                            ApplyAxisTwo();
                            axisTwoApplied = true;
                        }

                    }
                    else if (meshCounter == 30 && !mountainBiome && !axisThreeGenerated) {
                        // GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Axis Three initial generation"));
                        // Axis three reoresents the ground tiles and thus when generating a mountain biome do NOT need
                        // to be included from far away as its not ground tiles are not noticeable
                        GenerateAxisThreeMesh();
                        ApplyAxisThree();
                        axisThreeGenerated = true;
                        axisThreeApplied = true;
                    }
                }
                else { // Initial far away generation
                    if ((meshCounter > 2 && meshCounter < 10) && (directionOne == ECompass::North || directionOne == ECompass::South || directionOne == ECompass::Other)) {
                        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Axis One"));
                        if (meshCounter == 3 && !axisOneGenerated) {
                            GenerateAxisOneMesh(false);
                            axisOneGenerated = true;
                        }
                        if (meshCounter == 9 && !axisOneApplied) {
                            ApplyAxisOne();
                            axisOneApplied = true;

                        }
                    }
                    if ((meshCounter > 12 && meshCounter < 18) && (directionOne == ECompass::East || directionOne == ECompass::West || directionOne == ECompass::Other)) {
                        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Axis Two"));
                        if (meshCounter == 13 && !axisTwoGenerated) {
                            GenerateAxisTwoMesh(false);
                            axisTwoGenerated = true;
                        }
                        if (meshCounter == 17 && !axisTwoApplied) {
                            ApplyAxisTwo();
                            axisTwoApplied = true;
                        }

                    }
                    else if (meshCounter == 22 && !mountainBiome && !axisThreeGenerated) {
                        // GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Axis Three initial generation"));
                        // Axis three reoresents the ground tiles and thus when generating a mountain biome do NOT need
                        // to be included from far away as its not ground tiles are not noticeable
                        GenerateAxisThreeMesh();
                        ApplyAxisThree();
                        axisThreeGenerated = true;
                        axisThreeApplied = true;
                    }
                }

                // Below we basically want to keep track of whether all of a chunks's initial axis generated
                // i.e. if a biome starts with axis 1 and 2 , 1 and 2 must be complete BEFORE we apply LOD generated to 3

                // Below section after meshCounter check should be considered the LOD section for anything that needs to be done placed on
                // player proximity AFTER all intial axis have generated
                // Greater than meshCounter here is simply "are all chunks which should be initially generated done?"
                if (meshCounter > 22) {
                    if (distanceToPlayer <= 30000.0f)
                    {
                        if (!axisOneGenerated)
                        {
                            GenerateAxisOneMesh(false);
                            axisOneGeneratedCounter = meshCounter;
                            axisOneGenerated = true;
                        }
                        else if (!axisOneApplied && meshCounter - axisOneGeneratedCounter >= 15)
                        {
                            ApplyAxisOne();
                            axisOneApplied = true;
                        }

                        if (!axisTwoGenerated)
                        {
                            GenerateAxisTwoMesh(false);
                            axisTwoGeneratedCounter = meshCounter;
                            axisTwoGenerated = true;
                        }
                        else if (!axisTwoApplied && meshCounter - axisTwoGeneratedCounter >= 15)
                        {
                            ApplyAxisTwo();
                            axisTwoApplied = true;
                        }

                        if (!axisThreeGenerated)
                        {
                            // GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Axis Three LOD generation"));
                             // Do work to generate data for axis three
                            GenerateAxisThreeMesh();
                            axisThreeGeneratedCounter = meshCounter;
                            axisThreeGenerated = true;
                        }
                        else if (!axisThreeApplied && meshCounter - axisThreeGeneratedCounter >= 15)
                        {
                            ApplyAxisThree();
                            axisThreeApplied = true;
                        }

                        if (axisOneApplied && axisTwoApplied && axisThreeApplied)
                        {
                            allAxisGenerated = true;
                        }
                    }
                    else {// Far away chunks whose faces need to be updated based on how far away the player is
                        if (!axisOneGenerated && (directionOne == ECompass::North || directionOne == ECompass::South || directionOne == ECompass::Other))
                        {
                            GenerateAxisOneMesh(false);
                            ApplyAxisOne();
                            axisOneGenerated = true;
                            axisOneApplied = true;
                        }
                        if (!axisTwoGenerated && (directionOne == ECompass::East || directionOne == ECompass::West || directionOne == ECompass::Other))
                        {
                            GenerateAxisTwoMesh(false);
                            ApplyAxisTwo();
                            axisTwoGenerated = true;
                            axisTwoApplied = true;
                        }
                        if (!axisThreeGenerated && (directionOne == ECompass::North || directionOne == ECompass::South || directionOne == ECompass::Other))
                        {
                            // Do work to generate data for axis three
                            //GenerateAxisThreeMesh();DONT UNCOMMENT
                            //ApplyAxisThree();
                            //axisThreeGenerated = true;
                        }
                        allAxisGenerated = true;
                    }
                    if (distanceToPlayer <= 70000.0f && !shadowsActive)
                    {
                        AxisOneMesh->SetCastShadow(true);
                        AxisTwoMesh->SetCastShadow(true);
                        shadowsActive = true;
                    }
                    if (distanceToPlayer <= 150000.0f && !objectsSpawned)
                    {
                        SpawnTreesAndFoliage();
                        objectsSpawned = true;
                    }
                    if (distanceToPlayer <= 6000.0f && !niagaraSpawned)
                    {
                        // SpawnNiagara();
                        // niagaraSpawned = true;
                    }
                    if (distanceToPlayer <= 16000.0f && !collisionActive)// This is where the error where players sometimes fall through the terrain happens, bwecause although they are on top of the chunk they are still too far to trigger collision
                    {

                        FString name = GetActorLabel();
                        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("blocks coords: %s"), *name));
                        AxisOneMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
                        AxisOneMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
                        AxisOneMesh->EnableComplexAsSimpleCollision();
                        // AxisOneMesh->bEnableComplexCollision = true;
                        // AxisOneMesh->bDeferCollisionUpdates = true;
                        // AxisOneMesh->SetGenerateOverlapEvents(true);

                        AxisTwoMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
                        AxisTwoMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
                        AxisTwoMesh->EnableComplexAsSimpleCollision();
                        /* AxisTwoMesh->bEnableComplexCollision = true;
                           AxisTwoMesh->bDeferCollisionUpdates = true;
                           AxisTwoMesh->SetGenerateOverlapEvents(true);*/

                        AxisThreeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
                        AxisThreeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
                        AxisThreeMesh->EnableComplexAsSimpleCollision();
                        //  AxisThreeMesh->bEnableComplexCollision = true;
                        //  AxisThreeMesh->bDeferCollisionUpdates = true;
                        //  AxisThreeMesh->SetGenerateOverlapEvents(true);
                        collisionActive = true;

                    }
                }
                else if (meshCounter == 31) {
                    //StaticMeshConversion();
                }
            }// For modifying voxels
        }
    }
}


void AChunk::PerformBusyWait(int32 NumberOfIterations)
{
    for (int32 i = 0; i < NumberOfIterations; ++i)
    {
        // Perform a simple operation to avoid compiler optimization out the loop
        int g = 0;
        g++;
    }
}

void AChunk::ModifyVoxelData(FIntVector Position, const EBlock Block)
{
    const int Index = GetBlockIndex(Position.X, Position.Y, Position.Z);

    if (Index > Blocks.Num() - 1) {

        return;
    }
    //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("LOOKING FOR BLOCK FAILED %d"), Index));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("blocks coords: %d %d %d"), Position.X, Position.Y, Position.Z));

    std::string check = ToStringEnum(Blocks[Index]);
    // Convert std::string to FString
    FString CheckFString = FString(check.c_str());
    // Use * operator to convert FString to TCHAR*
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Block returned was %s"), *CheckFString));

    Blocks[Index] = EBlock::Air;

    std::string check2 = ToStringEnum(Blocks[Index]);
    // Convert std::string to FString
    FString CheckFString2 = FString(check.c_str());
    // Use * operator to convert FString to TCHAR*
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Block returned after change was %s"), *CheckFString2));

}

void AChunk::ClearMesh()
{
    isApplyingMeshReady = false;
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Clearing mesh!"));
    QuadDataQueueOne.Empty();
    QuadDataQueueTwo.Empty();
    QuadDataQueueThree.Empty();

    meshCounter = 0;
    quadOneSize = 0;
    quadTwoSize = 0;
    quadThreeSize = 0;

    AxisOneVertexCount = 0;
    AxisTwoVertexCount = 0;
    AxisThreeVertexCount = 0;

    AxisOneNormalOverlay->ClearElements();
    AxisTwoNormalOverlay->ClearElements();
    AxisThreeNormalOverlay->ClearElements();

    DynamicMeshAxisOne.DiscardTriangleGroups();
    DynamicMeshAxisTwo.DiscardTriangleGroups();
    DynamicMeshAxisThree.DiscardTriangleGroups();

    DynamicMeshAxisOne.DiscardAttributes();
    DynamicMeshAxisTwo.DiscardAttributes();
    DynamicMeshAxisThree.DiscardAttributes();


    AxisOneVertexColors.Empty();
    AxisTwoVertexColors.Empty();
    AxisThreeVertexColors.Empty();

    DynamicMeshAxisOne.Clear();
    DynamicMeshAxisTwo.Clear();
    DynamicMeshAxisThree.Clear();

    DynamicMeshAxisCombined.Clear();




    UE_LOG(LogTemp, Display, TEXT("CLEARING MESH"));
}

void AChunk::SetupBiomeNoise()
{

    //std::vector<float> noiseOutput(Size * Size * VerticalHeight);
    //auto fnSimplex = FastNoise::New<FastNoise::Simplex>();
    //auto fnFractal = FastNoise::New<FastNoise::FractalFBm>();

    //fnFractal->SetSource(fnSimplex);
    //fnFractal->SetOctaveCount(5);
    //fnFractal->SetGain(0.5f);
    ////Size Size VerticalHeight?? Instead of 0,0,0
    //fnFractal->GenUniformGrid3D(noiseOutput.data(), 0, 0, 0, Size, Size, VerticalHeight, 0.1f, 1337);


    //float* noiseArray = noiseOutput.data();

    //float randomPointTen = QueryNoiseValue(noiseOutput, 10, 10, 10, Size, VerticalHeight);
    //float randomPointNine = QueryNoiseValue(noiseOutput, 9, 9, 9, Size, VerticalHeight);
    //float randomPointEight = QueryNoiseValue(noiseOutput, 8, 8, 8, Size, VerticalHeight);
    //UE_LOG(LogTemp, Warning, TEXT("3dNoiseSize:%d   Eight:%f   Nine:%f  Ten:%f"), noiseOutput.size(), randomPointEight, randomPointNine, randomPointTen);
    ////   for (int x = 0; x < Size; x++) {
    ////       for (int y = 0; y < Size; y++) {
    ////           for (int z = 0; z < VerticalHeight; z++) {
    //   //			int index = GetBlockIndex(x, y, z);
    //   //			Blocks[index] = EBlock::Air;
    ////               if (noiseArray[index] > 0.5f) {
    //   //				Blocks[index] = EBlock::Stone;
    //   //			}
    //   //		}
    //   //	}
    //   //}
}

float AChunk::QueryNoiseValue(const std::vector<float>& noiseOutput, int x, int y, int z, int Width, int Depth) {


    int index = z * (Width * Width) + y * Width + x;
    if (index > noiseOutput.size() - 1) {
        return 0;
    }
    return noiseOutput[index];
}

int AChunk::GenerateRandomNumber(int min, int max) {
    static std::mt19937 rng(12345);  // Static ensures the rng is only initialized once with a fixed seed
    std::uniform_int_distribution<int> uni(min, max);
    return uni(rng);
}

float AChunk::GenerateRandomDeterministicFloat(int uniqueId) {
    // Use the unique ID as the seed for the random number generator
    std::mt19937 rng(uniqueId);
    std::uniform_real_distribution<float> dist(0.0f, 1.0f);  // Range between 0 and 1

    // Generate a random float
    return dist(rng);
}
void AChunk::GenerateBlocks()
{
    biomeName = "No Biome";
    auto biomeNoiseMap = new FastNoiseLite();
    biomeNoiseMap->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    biomeNoiseMap->SetFrequency(1.1f);


    TransitionPlainsNoise = new FastNoiseLite();
    TransitionPlainsNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    TransitionPlainsNoise->SetFrequency(0.002f);  // Lower frequency for larger, smoother patches
    TransitionPlainsNoise->SetFractalOctaves(3);  // Increase octaves for more detail in the density
    TransitionPlainsNoise->SetFractalLacunarity(1.75f);  // Adjust lacunarity for better spatial frequency distribution
    TransitionPlainsNoise->SetFractalGain(0.5f);  // Lowe

    // Medium nice hills
    //HillyPlains = new FastNoiseLite();
    //HillyPlains->SetNoiseType(FastNoiseLite::NoiseType_Cellular);
    //HillyPlains->SetCellularDistanceFunction(FastNoiseLite::CellularDistanceFunction_Euclidean);
    //HillyPlains->SetCellularReturnType(FastNoiseLite::CellularReturnType_Distance2Add);
    //HillyPlains->SetFractalOctaves(5);
    //HillyPlains->SetFrequency(0.008f);
    //HillyPlains->SetFractalLacunarity(1.0f);
    //HillyPlains->SetFractalGain(0.4f);
    //HillyPlains->SetFractalType(FastNoiseLite::FractalType_Ridged);


    // Original hilly noise
    //HillyPlains = new FastNoiseLite();
    //HillyPlains->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    //HillyPlains->SetFractalOctaves(2.5f);
    //HillyPlains->SetFrequency(0.0045f);// Higher values seems to make mountains more jagged and extremely laggy
    //HillyPlains->SetFractalLacunarity(2.0f);
    //HillyPlains->SetFractalGain(1);
    //HillyPlains->SetFractalType(FastNoiseLite::FractalType_FBm);

    // Extreme large hills
    HillyPlains = new FastNoiseLite();
    HillyPlains->SetNoiseType(FastNoiseLite::NoiseType_Cellular);
    HillyPlains->SetCellularDistanceFunction(FastNoiseLite::CellularDistanceFunction_Euclidean);
    HillyPlains->SetCellularReturnType(FastNoiseLite::CellularReturnType_Distance2Div);
    HillyPlains->SetFractalOctaves(3);
    HillyPlains->SetFrequency(0.0018f);
    HillyPlains->SetFractalLacunarity(1.0f);
    HillyPlains->SetFractalGain(0.5f);
    HillyPlains->SetFractalType(FastNoiseLite::FractalType_Ridged);

    PlainsNoise = new FastNoiseLite();
    PlainsNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    PlainsNoise->SetFractalOctaves(3);// Seems to have no effect with a
    PlainsNoise->SetFrequency(0.002f);// Higher values seems to make mountains more jagged and extremely laggy
    PlainsNoise->SetFractalLacunarity(1.75f);
    PlainsNoise->SetFractalGain(0.5);

    float baseMultiplier = VerticalHeight * 4;

    int amplitude = 4; // The highest point in the wave
    //int period = 2 * amplitude; // The number of points in one complete wave
    //int iterations = 20; // The number of points to generate

    const auto Location = GetActorLocation();
    const float baseHeight = VerticalHeight / 4.0f;

    //create normal c++ array

    TArray<float> NoiseMap;
    TArray<EBiome> biomeNumbers;
    int TotalElements = Size * Size * VerticalHeight;
    NoiseMap.SetNum(TotalElements);
    biomeNumbers.SetNum(TotalElements);

    // 0 equals hilly
    //1 equals river
    int biomeNumber = 0;



    // Ensure NoiseMap has been initialized to the right dimensions before this
  // Assuming biomeNoiseMap is correctly initialized and configured
    TArray<TFunction<void()>> NoiseMapOperations;
    // Biome transition parameters
    float biomeTransitionFrequency = 0.003f; // adjust for larger or smaller biomes
    float biomeTransitionScale = Size * 0.5f; // Scale of the biome transition in world units
    FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
        {


            ParallelFor(Size / 2, [&](int32 x)
                {

                    for (int y = 0; y < Size; y++)
                    {
                        float worldXpos = (x * 100 + Location.X) / 100;
                        float worldYpos = (y * 100 + Location.Y) / 100;

                        // Calculate biome transition factor using sine wave
                        float biomeFactor = sin(worldXpos * biomeTransitionFrequency) * sin(worldYpos * biomeTransitionFrequency);

                        // Use a sine wave function to determine biome based on world position, creating smooth transitions
                        //float biomeTransition = sin(worldXpos * biomeTransitionScale) + sin(worldYpos * biomeTransitionScale);

                        for (int z = 0; z < VerticalHeight; z++)
                        {
                            float worldZpos = (z * 100 + Location.Z) / 100;
                            float combinedNoise;
                            float biomeNumber;
                            float actualHeight;

                            // Determine biome based on biomeFactor
                            if (biomeFactor > 0.2f)
                            {
                                if (!mountainBiome) {
                                    mountainBiome = true;
                                }

                                combinedNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                                biomeNumber = 0;
                                actualHeight = VerticalHeight;

                                float normalizedNoise = (combinedNoise + 1) / 2.0f;
                                float curvedNoise = FMath::Pow(normalizedNoise, 2);
                                int index = x + y * Size + z * Size * Size;
                                biomeNumbers[index] = EBiome::Mountain;
                                NoiseMap[index] = curvedNoise * actualHeight;
                            }
                            else if (biomeFactor >= -0.2f && biomeFactor <= 0.2f)
                            {
                                if (!lowMountainPlainsTransition) {
                                    if (!mountainPlainsTransition) {
                                        mountainPlainsTransition = true;
                                    }

                                    // Transition biome
                                    // Interpolate between hilly and plains based on biomeFactor
                                    float transitionFactor = (biomeFactor + 0.2f) / 0.4f; // Normalize to 0-1 range

                                    float hillyNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                                    float plainsNoise = PlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                                    combinedNoise = FMath::Lerp(plainsNoise, hillyNoise, transitionFactor);
                                    biomeNumber = 1.5; // Transition biome number

                                    // Interpolate actualHeight for a smooth transition
                                    float hillyHeight = VerticalHeight;
                                    float plainsHeight = VerticalHeight / 4;
                                    float smoothTransitionFactor = FMath::SmoothStep(0.0f, 1.0f, transitionFactor);
                                    actualHeight = FMath::Lerp(plainsHeight, hillyHeight, smoothTransitionFactor);

                                    float normalizedNoise = (combinedNoise + 1) / 2.0f;
                                    float curvedNoise = FMath::Pow(normalizedNoise, 2);
                                    int index = x + y * Size + z * Size * Size;
                                    biomeNumbers[index] = EBiome::Mountain_Plains;
                                    NoiseMap[index] = (curvedNoise * actualHeight);
                                }
                                else {
                                    //low mountain plains transition i.e. transition from plains to low raised mountains
                                    float transitionFactor = (biomeFactor + 0.3f) / 0.1f; // Normalize to 0-1 range

                                    //float lowMountainNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                                    float plainsNoise = TransitionPlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                                    combinedNoise = 0.1f;
                                    biomeNumber = 1.75; // Low mountain plains transition biome number

                                    // Interpolate actualHeight for a smooth transition
                                    float lowMountainHeight = VerticalHeight + 220; // Adjust this value to control the height of the low mountain transition biome
                                    float plainsHeight = (VerticalHeight) / 4;
                                    float smoothTransitionFactor = FMath::SmoothStep(0.0f, 1.0f, transitionFactor);
                                    actualHeight = FMath::Lerp(plainsHeight, lowMountainHeight, smoothTransitionFactor);

                                    float normalizedNoise = (combinedNoise + 1) / 2.0f;
                                    float curvedNoise = FMath::Pow(normalizedNoise, 2);
                                    int index = x + y * Size + z * Size * Size;
                                    biomeNumbers[index] = EBiome::lowMountain_Plains;
                                    NoiseMap[index] = (curvedNoise * actualHeight);
                                }
                            }
                            else if (biomeFactor < -0.2f && biomeFactor >= -0.37f && !mountainPlainsTransition)
                            {
                                if (!lowMountainPlainsTransition) {
                                    lowMountainPlainsTransition = true;
                                }

                                // Normalize the transition factor to a 0-1 range correctly
                                float transitionFactor = (biomeFactor + 0.37f) / 0.17f; // Adjusted range from -0.37 to -0.2

                                // Fetch noise for the biome transition
                               // float lowMountainNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                                float plainsNoise = TransitionPlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                                // float weightedNoise = lowMountainNoise * 0.7f;
                                combinedNoise = FMath::Lerp(plainsNoise, 0.058f, transitionFactor);
                                biomeNumber = 1.75; // Low mountain plains transition biome number

                                // Define heights for transition
                                float lowMountainHeight = VerticalHeight + 250; // Peak height
                                float plainsHeight = VerticalHeight / 4; // Base height

                                // Implement a piecewise function for smooth ascent and gentle descent
                                float ascendSteepness = -15.0f;  // Steepness for the ascent part of the curve
                                float descendSteepness = -15.5f;  // Reduced steepness for the descent part of the curve
                                float midpointShift = 0.40f;  // Adjusting the midpoint to control the transition point

                                float sigmoid;
                                if (transitionFactor < midpointShift) {
                                    // Ascent part of the curve
                                    float ascendControl = ascendSteepness * (transitionFactor - midpointShift);
                                    sigmoid = 1 / (1 + exp(ascendControl));
                                }
                                else {
                                    // Descent part of the curve
                                    float descendControl = descendSteepness * (transitionFactor - midpointShift);
                                    sigmoid = 1 / (1 + exp(descendControl));
                                }

                                // Calculate actual height using the piecewise function for gradual transition
                                actualHeight = FMath::Lerp(plainsHeight, lowMountainHeight, sigmoid);

                                // Normalize and apply noise
                                float normalizedNoise = (combinedNoise + 1) / 2.0f;
                                float curvedNoise = FMath::Pow(normalizedNoise, 2);

                                // Apply biome information to grid
                                int index = x + y * Size + z * Size * Size;
                                biomeNumbers[index] = EBiome::lowMountain_Plains;
                                NoiseMap[index] = (curvedNoise * actualHeight);
                            }
                            else
                            {
                                if (!plainsBiome) {
                                    plainsBiome = true;

                                }
                                // Plains biome
                                combinedNoise = PlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                                biomeNumber = 1;
                                actualHeight = VerticalHeight / 4;

                                float normalizedNoise = (combinedNoise + 1) / 2.0f;
                                float curvedNoise = FMath::Pow(normalizedNoise, 2);
                                int index = x + y * Size + z * Size * Size;
                                biomeNumbers[index] = EBiome::Plains;
                                NoiseMap[index] = (curvedNoise * actualHeight);
                            }

                        }
                    }
                }, EParallelForFlags::Unbalanced);
        }, TStatId(), nullptr, ENamedThreads::AnyNormalThreadNormalTask);
    int startSecondHalf = Size / 2;
    int endSecondHalf = Size - startSecondHalf;  // This ensures that we cover all indices

    ParallelFor(endSecondHalf, [&](int32 x)
        {
            x += startSecondHalf; // Adjust x to start from Size/2 to Size
            for (int y = 0; y < Size; y++)
            {
                float worldXpos = (x * 100 + Location.X) / 100;
                float worldYpos = (y * 100 + Location.Y) / 100;

                // Calculate biome transition factor using sine wave
                float biomeFactor = sin(worldXpos * biomeTransitionFrequency) * sin(worldYpos * biomeTransitionFrequency);

                // Use a sine wave function to determine biome based on world position, creating smooth transitions
                //float biomeTransition = sin(worldXpos * biomeTransitionScale) + sin(worldYpos * biomeTransitionScale);
                for (int z = 0; z < VerticalHeight; z++)
                {
                    float worldZpos = (z * 100 + Location.Z) / 100;
                    float combinedNoise;
                    float biomeNumber;
                    float actualHeight;



                    // Determine biome based on biomeFactor
                    if (biomeFactor > 0.2f)
                    {
                        if (!mountainBiome) {
                            mountainBiome = true;
                        }

                        combinedNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                        biomeNumber = 0;
                        actualHeight = VerticalHeight;

                        float normalizedNoise = (combinedNoise + 1) / 2.0f;
                        float curvedNoise = FMath::Pow(normalizedNoise, 2);
                        int index = x + y * Size + z * Size * Size;
                        biomeNumbers[index] = EBiome::Mountain;
                        NoiseMap[index] = curvedNoise * actualHeight;
                    }
                    else if (biomeFactor >= -0.2f && biomeFactor <= 0.2f)
                    {
                        if (!lowMountainPlainsTransition) {
                            if (!mountainPlainsTransition) {
                                mountainPlainsTransition = true;
                            }

                            // Transition biome
                            // Interpolate between hilly and plains based on biomeFactor
                            float transitionFactor = (biomeFactor + 0.2f) / 0.4f; // Normalize to 0-1 range

                            float hillyNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                            float plainsNoise = PlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                            combinedNoise = FMath::Lerp(plainsNoise, hillyNoise, transitionFactor);
                            biomeNumber = 1.5; // Transition biome number

                            // Interpolate actualHeight for a smooth transition
                            float hillyHeight = VerticalHeight;
                            float plainsHeight = VerticalHeight / 4;
                            float smoothTransitionFactor = FMath::SmoothStep(0.0f, 1.0f, transitionFactor);
                            actualHeight = FMath::Lerp(plainsHeight, hillyHeight, smoothTransitionFactor);

                            float normalizedNoise = (combinedNoise + 1) / 2.0f;
                            float curvedNoise = FMath::Pow(normalizedNoise, 2);
                            int index = x + y * Size + z * Size * Size;
                            biomeNumbers[index] = EBiome::Mountain_Plains;
                            NoiseMap[index] = (curvedNoise * actualHeight);
                        }
                        else {
                            // low mountain plains transition i.e. transition from plains to low raised mountains
                            float transitionFactor = (biomeFactor + 0.3f) / 0.1f; // Normalize to 0-1 range

                            //float lowMountainNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                            float plainsNoise = TransitionPlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                            combinedNoise = 0.1f;
                            biomeNumber = 1.75; // Low mountain plains transition biome number

                            // Interpolate actualHeight for a smooth transition
                            float lowMountainHeight = VerticalHeight + 220; // Adjust this value to control the height of the low mountain transition biome
                            float plainsHeight = (VerticalHeight) / 4;
                            float smoothTransitionFactor = FMath::SmoothStep(0.0f, 1.0f, transitionFactor);
                            actualHeight = FMath::Lerp(plainsHeight, lowMountainHeight, smoothTransitionFactor);

                            float normalizedNoise = (combinedNoise + 1) / 2.0f;
                            float curvedNoise = FMath::Pow(normalizedNoise, 2);
                            int index = x + y * Size + z * Size * Size;
                            biomeNumbers[index] = EBiome::lowMountain_Plains;
                            NoiseMap[index] = (curvedNoise * actualHeight);
                        }
                    }
                    else if (biomeFactor < -0.2f && biomeFactor >= -0.37f && !mountainPlainsTransition)
                    {
                        if (!lowMountainPlainsTransition) {
                            lowMountainPlainsTransition = true;
                        }

                        // Normalize the transition factor to a 0-1 range correctly
                        float transitionFactor = (biomeFactor + 0.37f) / 0.17f; // Adjusted range from -0.37 to -0.2

                        // Fetch noise for the biome transition
                       // float lowMountainNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                        float plainsNoise = TransitionPlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                        // float weightedNoise = lowMountainNoise * 0.7f;
                        combinedNoise = FMath::Lerp(plainsNoise, 0.058f, transitionFactor);
                        biomeNumber = 1.75; // Low mountain plains transition biome number

                        // Define heights for transition
                        float lowMountainHeight = VerticalHeight + 250; // Peak height
                        float plainsHeight = VerticalHeight / 4; // Base height

                        // Implement a piecewise function for smooth ascent and gentle descent
                        float ascendSteepness = -15.0f;  // Steepness for the ascent part of the curve
                        float descendSteepness = -15.5f;  // Reduced steepness for the descent part of the curve
                        float midpointShift = 0.40f;  // Adjusting the midpoint to control the transition point

                        float sigmoid;
                        if (transitionFactor < midpointShift) {
                            // Ascent part of the curve
                            float ascendControl = ascendSteepness * (transitionFactor - midpointShift);
                            sigmoid = 1 / (1 + exp(ascendControl));
                        }
                        else {
                            // Descent part of the curve
                            float descendControl = descendSteepness * (transitionFactor - midpointShift);
                            sigmoid = 1 / (1 + exp(descendControl));
                        }

                        // Calculate actual height using the piecewise function for gradual transition
                        actualHeight = FMath::Lerp(plainsHeight, lowMountainHeight, sigmoid);

                        // Normalize and apply noise
                        float normalizedNoise = (combinedNoise + 1) / 2.0f;
                        float curvedNoise = FMath::Pow(normalizedNoise, 2);

                        // Apply biome information to grid
                        int index = x + y * Size + z * Size * Size;
                        biomeNumbers[index] = EBiome::lowMountain_Plains;
                        NoiseMap[index] = (curvedNoise * actualHeight);
                    }
                    else
                    {
                        if (!plainsBiome) {
                            plainsBiome = true;
                        }

                        // Plains biome
                        combinedNoise = PlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                        biomeNumber = 1;
                        actualHeight = VerticalHeight / 4;


                        float normalizedNoise = (combinedNoise + 1) / 2.0f;
                        float curvedNoise = FMath::Pow(normalizedNoise, 2);
                        int index = x + y * Size + z * Size * Size;
                        biomeNumbers[index] = EBiome::Plains;
                        NoiseMap[index] = (curvedNoise * actualHeight);

                    }

                }
            }
        }, EParallelForFlags::Unbalanced);




    Taskx->Wait();

    if (mountainBiome || mountainPlainsTransition) {
        biomeName = "Mountain";


        FVector currentLocation = GetActorLocation();
        FVector newLocation = FVector(currentLocation.X, currentLocation.Y, currentLocation.Z + 150 * 100);
        SetActorLocation(newLocation);

    }
    if (plainsBiome) {
        biomeName = "Plains";
    }

    PlainsTreeNoise = new FastNoiseLite();
    PlainsTreeNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    PlainsTreeNoise->SetFrequency(0.1f);  // Lower frequency for larger, smoother patches
    PlainsTreeNoise->SetFractalOctaves(3);  // Increase octaves for more detail in the density
    PlainsTreeNoise->SetFractalLacunarity(1.75f);  // Adjust lacunarity for better spatial frequency distribution
    PlainsTreeNoise->SetFractalGain(0.5f);  // Lower gain for smoother transitions between high and low areas


    MountainTreeNoise = new FastNoiseLite();
    MountainTreeNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    MountainTreeNoise->SetFrequency(0.07f);  // Lower frequency for larger, smoother patches
    MountainTreeNoise->SetFractalOctaves(3);  // Increase octaves for more detail in the density
    MountainTreeNoise->SetFractalLacunarity(1.75f);  // Adjust lacunarity for better spatial frequency distribution
    MountainTreeNoise->SetFractalGain(0.5f);  // Lower gain for smoother transitions between high and low areas



    PlainsWheatNoise = new FastNoiseLite();
    PlainsWheatNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    PlainsWheatNoise->SetFractalOctaves(1.2f);// Seems to have no effect with a 
    PlainsWheatNoise->SetFrequency(0.3f);// Higher values seems to make mountains more jagged and extremely laggy
    PlainsWheatNoise->SetFractalLacunarity(0.10f);
    PlainsWheatNoise->SetFractalGain(1);

    // Ensures that there is suitable gap between the trees
    int previousTreeIteration = 0;

    //float combinedNoise;
    ParallelFor(Size, [&](int32 x) {
        for (int y = 0; y < Size; ++y)
        {
            for (int z = 0; z < VerticalHeight; z++)
            {
                float worldXpos = (x * 100 + Location.X) / 100;
                float worldYpos = (y * 100 + Location.Y) / 100;
                int Index = x + y * Size + z * Size * Size;
                int height = static_cast<int>(NoiseMap[Index]);
                EBiome biomeType = biomeNumbers[Index];


                EBlock BlockType = EBlock::Air;

                // Make mountains be made of stone
                if (z == height - 1) {
                    if (biomeType == EBiome::Mountain) {
                        BlockType = EBlock::DarkGrass;
                    }
                    if (biomeType == EBiome::Plains) {
                        BlockType = EBlock::Grass;
                    }

                    // Increasing the value that verticalheight is divided by will lower the beginning point of the transition

                    // Block logic for top/'left' section of transition biome
                    // Only transition biomes should be inside the following if statment
                    if (z >= (VerticalHeight / 4) && z <= height) {

                        // Make top of mountains inside transition biome be snow
                        if (biomeType == EBiome::Mountain_Plains || biomeType == EBiome::lowMountain_Plains) {

                            // Consider adding extra check here, lagre area of transition biome is just stone
                            // and has no need for any of the transiiont logic?

                            // Calculate the height difference between the current block and the transition point
                            float heightDifference = static_cast<float>(z - (VerticalHeight / 4));

                            // Use a simple linear interpolation to determine the block type
                            float transitionFactor = heightDifference / (height - (VerticalHeight / 4));

                            // Adjust the transition factor using a sine wave for a more natural look
                            // Inrease 3.0 to to increase the number of stone blocks that appear in the snow area
                            transitionFactor = std::sin(transitionFactor * PI / 2.15f);

                            // Randomly choose between snow and grass based on the transition factor
                            if (GenerateRandomDeterministicFloat(Index) < transitionFactor) {
                                // Secondary block i.e. secondary block
                                if (biomeType == EBiome::Mountain_Plains) {
                                    BlockType = EBlock::Stone;
                                }
                                else {
                                    BlockType = EBlock::DarkGrass;
                                }

                            }
                            else {
                                // Primary block of this section
                                BlockType = EBlock::Stone;
                            }
                        }
                    }
                    // Block logic for middle section of transition biome
                    else if (z < (VerticalHeight / 4) && z >= (VerticalHeight / 5)) {
                        // Make top of mountain be snow

                        // Make top of mountains inside transition biome be snow
                        if (biomeType == EBiome::Mountain_Plains || biomeType == EBiome::lowMountain_Plains) {

                            float heightDifference = static_cast<float>(z - (VerticalHeight / 5));
                            if (heightDifference == 0) {
                                heightDifference = 1;
                            }

                            float transitionFactor = heightDifference / (height - (VerticalHeight / 5));
                            transitionFactor = std::sin(transitionFactor * PI / 2.5f);

                            // Randomly choose between snow and grass based on the transition factor
                            if (GenerateRandomDeterministicFloat(Index) < transitionFactor) {
                                BlockType = EBlock::Stone;
                            }
                            else {
                                if (biomeType == EBiome::Mountain_Plains) {
                                    BlockType = EBlock::Stone;
                                }
                                else {
                                    BlockType = EBlock::DarkGrass;
                                }
                            }
                        }
                    }
                    // Block logic for bottom /'right' section of transition biome
                    else if (z < (VerticalHeight / 5) && z > 20) {
                        if (biomeType == EBiome::Mountain_Plains || biomeType == EBiome::lowMountain_Plains) {

                            float heightDifference = static_cast<float>(z - (VerticalHeight / 5));

                            float transitionFactor = heightDifference / (height - (VerticalHeight / 5));

                            transitionFactor = std::sin(transitionFactor * PI / 3.0f);

                            if (GenerateRandomDeterministicFloat(Index) < transitionFactor) {
                                // primary
                                BlockType = EBlock::Grass;
                            }
                            else {
                                // secondary
                                if (biomeType == EBiome::Mountain_Plains) {
                                    BlockType = EBlock::Stone;
                                }
                                else {
                                    BlockType = EBlock::DarkGrass;
                                }
                            }
                        }
                    }
                    else if (z <= 20) {
                        if (biomeNumber == 1.5f) {
                            //BlockType = EBlock::Grass;
                        }
                    }
                }// end of if z == height - 1
                if (z == height) {


                    if (biomeType == EBiome::Mountain) {
                        BlockType = EBlock::Air;
                        if (mountainTreeCount < 3 && x > 8) {
                            float treeNoise = MountainTreeNoise->GetNoise(worldXpos, worldYpos);

                            if (treeNoise > 0.2f) {
                                bool isValidTreeLocation = true;

                                // Proposed new tree location
                                FVector newTreeLocation = GetActorLocation() + FVector(x * 100, y * 100, z * 100);

                                // Check if the new tree location is too close to existing trees
                                for (int i = 0; i < mountainTreeCount; ++i) {
                                    FVector existingTreeLocation = mountainTreeLocations[i];
                                    float distance = FVector::Dist(newTreeLocation, existingTreeLocation);
                                    if (distance < 1500.0f) {
                                        isValidTreeLocation = false;
                                        break;
                                    }
                                }

                                // Add the new tree location only if it's valid (not too close to others)
                                if (isValidTreeLocation) {
                                    mountainTreeLocations[mountainTreeCount] = newTreeLocation;
                                    mountainTreeCount++;
                                }
                            }
                        }
                    }
                    if (biomeType == EBiome::Plains) {
                        BlockType = EBlock::Air;
                        // X > so trees dont spawn right at very beginning corner to reduce overlap
                        if (treeCount < 3 && x > 8) {

                            float treeNoise = PlainsTreeNoise->GetNoise(worldXpos, worldYpos);
                           // FString actorName = GetActorLabel();
                            // Format the string with the actor name and noise value
                            //FString Message = FString::Printf(TEXT("TreeNoise is for chunk %s: %f"), *actorName, treeNoise);

                           
                            if (treeNoise > 0.2f) {
                                bool isValidTreeLocation = true;

                                // Proposed new tree location
                                FVector newTreeLocation = Location + FVector(x * 100, y * 100, z * 100);

                                // Check if the new tree location is too close to existing trees
                                for (int i = 0; i < treeCount; ++i) {
                                    FVector existingTreeLocation = treeLocations[i];
                                    float distance = FVector::Dist(newTreeLocation, existingTreeLocation);
                                    if (distance < 1500.0f) {
                                        isValidTreeLocation = false;
                                        break;
                                    }
                                }

                                // Add the new tree location only if it's valid (not too close to others)
                                if (isValidTreeLocation) {
                                    treeLocations[treeCount] = newTreeLocation;
                                    treeCount++;
                                }
                            }
                        }
                        //if (flowerThreePatchCount < 100) {
                        //    float flowerProbability = 0.145f; // Adjust this value to control the density of flowers

                        //    if (GenerateRandomDeterministicFloat(Index) < flowerProbability) {
                        //       // FVector newFlowerLocation = Location + FVector(x * 100, y * 100, z * 100);
                        //      //  flowerLocations[flowerThreePatchCount] = newFlowerLocation;
                        //        flowerThreePatchCount++;
                        //    }
                        //}

                    }
                    if (biomeType == EBiome::Mountain_Plains) {
                        BlockType = EBlock::Air;
                        if (mountainTreeCount < 3 && x > 8) {
                            float treeNoise = MountainTreeNoise->GetNoise(worldXpos, worldYpos);

                            if (treeNoise > 0.2f) {
                                bool isValidTreeLocation = true;

                                // Proposed new tree location
                                FVector newTreeLocation = GetActorLocation() + FVector(x * 100, y * 100, z * 100);

                                // Check if the new tree location is too close to existing trees
                                for (int i = 0; i < mountainTreeCount; ++i) {
                                    FVector existingTreeLocation = mountainTreeLocations[i];
                                    float distance = FVector::Dist(newTreeLocation, existingTreeLocation);
                                    if (distance < 1500.0f) {
                                        isValidTreeLocation = false;
                                        break;
                                    }
                                }

                                // Add the new tree location only if it's valid (not too close to others)
                                if (isValidTreeLocation) {
                                    mountainTreeLocations[mountainTreeCount] = newTreeLocation;
                                    mountainTreeCount++;
                                }
                            }
                        }
                    }
                    if (biomeType == EBiome::lowMountain_Plains) {
                        BlockType = EBlock::Air;
                    }
                }

                if (z <= height - 2) {
                    BlockType = EBlock::Stone;
                }

                // This is an override which is not strictly needed, should ensure that if there are errors in block assignment
                // that no massive crazy block structures generate in the sky which are not intended.
                if (z >= height) {
                    BlockType = EBlock::Air;
                }

                Blocks[GetBlockIndex(x, y, z)] = BlockType;
            }

        }
        // });
        }, EParallelForFlags::Unbalanced);

    delete PlainsNoise;
    delete PlainsTreeNoise;
    delete HillyPlains;
    delete biomeNoiseMap;
}


void AChunk::SpawnTreesAndFoliage()
{
    int spawnedTrees = 0;

    for (const FVector& treeLocation : treeLocations)
    {
        if (treeLocation.X != 0 && treeLocation.Y != 0 && treeLocation.Z != 0 && treeLocation.Z > 800 && (treeLocation.Z < 6200 || (treeLocation.Z > 6800 && treeLocation.Z < 11000))) {
            spawnedTrees++;
            // Generate a random yaw rotation
            float RandomYaw = GenerateRandomDeterministicFloat(treeLocation.X + treeLocation.Y + treeLocation.Z) * 360.0f;

            FRotator RandomRotation(0.0f, RandomYaw, 0.0f);  // Only rotate around the Z-axis (yaw)
            if (IsValidVector(treeLocation)) {

                FTransform treeTransform = FTransform(RandomRotation, treeLocation, treeScale);
                treeHISM->AddInstance(treeTransform, true);
            }
            FVector grassLocation = FVector(treeLocation.X + 800, treeLocation.Y - 900, treeLocation.Z);
            FVector flowerLocation = FVector(treeLocation.X + 500, treeLocation.Y - 500, treeLocation.Z);

            FTransform grassTransform = FTransform(RandomRotation, grassLocation, grassScale);
            FTransform flowerTransform = FTransform(RandomRotation, flowerLocation, flowerScale);


            if (IsValidVector(grassLocation)) {
                grassTransform = FTransform(RandomRotation, grassLocation, grassScale);
                grassHISM->AddInstance(grassTransform, true);
            }

            if (IsValidVector(flowerLocation)) {
                flowerTransform = FTransform(RandomRotation, flowerLocation, flowerScale);
                flowerSpawnerTwoHISM->AddInstance(flowerTransform, true);
            }

            grassLocation = FVector(treeLocation.X - 100, treeLocation.Y - 100, treeLocation.Z);
            flowerLocation = FVector(treeLocation.X + 200, treeLocation.Y + 200, treeLocation.Z);

            if (IsValidVector(grassLocation)) {
                grassTransform = FTransform(RandomRotation, grassLocation, grassScale);
                grassHISM->AddInstance(grassTransform, true);
            }

            if (IsValidVector(flowerLocation)) {
                flowerTransform = FTransform(RandomRotation, flowerLocation, flowerScale);
                flowerSpawnerThreeHISM->AddInstance(flowerTransform, true);
            }

            grassLocation = FVector(treeLocation.X, treeLocation.Y - 500, treeLocation.Z);
            flowerLocation = FVector(treeLocation.X - 200, treeLocation.Y - 200, treeLocation.Z);

            if (IsValidVector(grassLocation)) {
                grassTransform = FTransform(RandomRotation, grassLocation, grassScale);
                grassHISM->AddInstance(grassTransform, true);
            }

            if (IsValidVector(flowerLocation)) {
                flowerTransform = FTransform(RandomRotation, flowerLocation, flowerScale);
                flowerSpawnerThreeHISM->AddInstance(flowerTransform, true);
            }

            // Extra flowers with validity checks
            flowerLocation = FVector(treeLocation.X - 320, treeLocation.Y + 420, treeLocation.Z);
            if (IsValidVector(flowerLocation)) {
                flowerTransform = FTransform(RandomRotation, flowerLocation, flowerScale);
                flowerSpawnerOneHISM->AddInstance(flowerTransform, true);
            }

            flowerLocation = FVector(treeLocation.X + 320, treeLocation.Y - 420, treeLocation.Z);
            if (IsValidVector(flowerLocation)) {
                flowerTransform = FTransform(RandomRotation, flowerLocation, flowerScale);
                flowerSpawnerTwoHISM->AddInstance(flowerTransform, true);
            }

            flowerLocation = FVector(treeLocation.X - 100, treeLocation.Y - 100, treeLocation.Z);
            if (IsValidVector(flowerLocation)) {
                flowerTransform = FTransform(RandomRotation, flowerLocation, flowerScale);
                flowerSpawnerThreeHISM->AddInstance(flowerTransform, true);
            }
        }
    }

    int spawnedMountainTrees = 0;
    for (const FVector& treeLocation : mountainTreeLocations)
    {
        FVector ActorLocation = this->GetActorLocation();  // Replace 'this' with the appropriate actor reference if needed

        if (treeLocation.X != 0 && treeLocation.Y != 0 && treeLocation.Z != 0 &&
            ((treeLocation.Z > 14500 && treeLocation.Z < 23500) || (treeLocation.Z < 40000 && treeLocation.Z > 33000)) &&
            FMath::Abs(treeLocation.X - ActorLocation.X) <= 5000 && FMath::Abs(treeLocation.Z - ActorLocation.Z) <= 45000) {  // Check if tree is within 5000 units on the X-axis and 15000 on Z-axis

            spawnedMountainTrees++;
            // Generate a random yaw rotation
            float RandomYaw = GenerateRandomDeterministicFloat(treeLocation.X + treeLocation.Y + treeLocation.Z) * 360.0f;

            FRotator RandomRotation(0.0f, RandomYaw, 0.0f);  // Only rotate around the Z-axis (yaw)

            if (IsValidVector(treeLocation)) {
                FTransform treeTransform = FTransform(RandomRotation, treeLocation, treeScale);
                treeHISM->AddInstance(treeTransform, true);
            }
        }
    }


    for (const FVector& flowerLocation : flowerLocations)
    {
        if (flowerLocation.X != 0 && flowerLocation.Y != 0 && flowerLocation.Z != 0 && flowerLocation.Z > 200 && flowerLocation.Z < 6500 && spawnedTrees < 2 && (flowerLocation.X > 5000 || flowerLocation.X < -5000)) {

            float RandomYaw = GenerateRandomDeterministicFloat(flowerLocation.X + flowerLocation.Y + flowerLocation.Z) * 360.0f;
            FRotator RandomRotation(0.0f, RandomYaw, 0.0f);  // Only rotate around the Z-axis (yaw)

            FVector wheatScale(0.2f, 0.2f, 0.2f);
            if (IsValidVector(flowerLocation)) {
                FTransform flowerTransform = FTransform(RandomRotation, flowerLocation, wheatScale);
                flowerSpawnerTwoHISM->AddInstance(flowerTransform, true);
            }
        }
        else if (flowerLocation.X != 0 && flowerLocation.Y != 0 && flowerLocation.Z != 0 && flowerLocation.Z > 200 && flowerLocation.Z < 9000 && spawnedTrees < 2 && (flowerLocation.X > 10000 || flowerLocation.X < -10000)) {

            float RandomYaw = GenerateRandomDeterministicFloat(flowerLocation.X + flowerLocation.Y + flowerLocation.Z) * 360.0f;
            FRotator RandomRotation(0.0f, RandomYaw, 0.0f);  // Only rotate around the Z-axis (yaw)

            FVector wheatScale(0.2f, 0.2f, 0.2f);
            if (IsValidVector(flowerLocation)) {
                FTransform flowerTransform = FTransform(RandomRotation, flowerLocation, wheatScale);
                flowerSpawnerTwoHISM->AddInstance(flowerTransform, true);
            }
        }

    }
}

bool AChunk::IsValidVector(const FVector& Vec) const
{
    float MaxAllowedValue = 1.e8f;
    return !Vec.ContainsNaN() &&
        std::isfinite(Vec.X) && std::isfinite(Vec.Y) && std::isfinite(Vec.Z) &&
        std::abs(Vec.X) < MaxAllowedValue &&
        std::abs(Vec.Y) < MaxAllowedValue &&
        std::abs(Vec.Z) < MaxAllowedValue;
}



void AChunk::SpawnActorAtLocation(float X, float Y, float Z, UClass* ActorToSpawn, FRotator Rotation)
{
    FVector TreeSpawnLocation(X, Y, Z);
    FRotator TreeSpawnRotation = FRotator::ZeroRotator; // No rotation
    FActorSpawnParameters TreeSpawnParams;
    TreeSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::DontSpawnIfColliding;


    AActor* NewTreeActor = GetWorld()->SpawnActor<AActor>(ActorToSpawn, TreeSpawnLocation, Rotation, TreeSpawnParams);

    // Ensure the actor was created.
    if (!NewTreeActor)
    {
        // UE_LOG(LogTemp, Error, TEXT("Failed to spawn tree actor at location: (%f, %f, %f)"), X, Y, Z);
        return;
    }
}




int AChunk::GetBlockIndex(int x, int y, int z) const
{
    return z * Size * Size + y * Size + x;
}

EBlock AChunk::GetBlock(FIntVector Index)
{
    if (Index.X >= Size || Index.Y >= Size || Index.Z >= VerticalHeight || Index.X < 0 || Index.Y < 0 || Index.Z < 0)
    {
        //if out of bounds just set to same block as the last block??
        outOfBounds = true;
        return EBlock::Air;
    }

    return Blocks[GetBlockIndex(Index.X, Index.Y, Index.Z)];
}

bool AChunk::CompareMask(FMask M1, FMask M2) const
{
    return M1.Block == M2.Block && M1.Normal == M2.Normal;
}




FColor AChunk::GetColorFromBlock(EBlock Block, FIntVector Location, int iteration)
{
    // Convert FIntVector to FVector for noise calculation
    //FVector ConvertedLocation = FVector(Location.X, Location.Y, Location.Z) * 0.1f; // Scale to adjust frequency
   /// float NoiseValue = FMath::PerlinNoise3D(ConvertedLocation);
    float NoiseValue = 0.22f;
    //NoiseValue = (NoiseValue + 1.0f) * 0.5f; // Normalize to 0-1

    switch (Block)
    {
    case EBlock::Null:
        return FColor();
        break;
    case EBlock::Air:
        return FColor();
        break;
    case EBlock::Stone:
    {
        // Map the normalized noise value to different shades of grey
        FVector ConvertedLocation = FVector(Location.X, Location.Y, Location.Z) * 0.1f; // Scale to adjust frequency
        NoiseValue = GenerateRandomDeterministicFloat(Location.X + Location.Y + Location.Z);
        if (NoiseValue < 0.33f)
        {
            FColor DarkerGrey = FColor::FromHex("#4B4B4B");
            return DarkerGrey; // Slightly Darker Grey
        }
        else if (NoiseValue < 0.66f)
        {
            FColor BaseGrey = FColor::FromHex("#505050");
            return BaseGrey; // Base Grey
        }
        else
        {
            FColor LighterGrey = FColor::FromHex("#555555");
            return LighterGrey; // Slightly Lighter Grey
        }



    }
    //        return FColor::FromHex("#505050");
    break;
    case EBlock::Dirt:
        return FColor::FromHex("#31A0C3");//blue temporarily to test river
        break;
    case EBlock::Sand:
        return FColor::FromHex("#DFFF00");//blue temporarily to test river
        break;
    case EBlock::Grass:
    {
        // Convert FIntVector to FVector for noise calculation
        // Only use X and Y components for 2D noise
        FVector ConvertedLocation = FVector(Location.X, Location.Y, Location.Z) * 1; // Scale to adjust frequency
        // NoiseValue = FMath::PerlinNoise3D(ConvertedLocation);
        NoiseValue = GenerateRandomDeterministicFloat(iteration);
        FLinearColor BaseGreen = FLinearColor::FromSRGBColor(FColor::FromHex("#0b4100")); // A nice grass green
        FLinearColor LighterGreen = FLinearColor::FromSRGBColor(FColor::FromHex("#04290e")); // A slightly lighter lime green
        // Smoothly transition between the two shades based on noise value
        // Normalize NoiseValue to be between 0 and 1 if not already (Perlin noise typically returns values in a range around [0, 1])
        //float NormalizedNoiseValue = (NoiseValue + 1.0f) / 2.0f;  // Adjust this line if the noise range is different
        FLinearColor ResultingColor = FMath::Lerp(BaseGreen, LighterGreen, NoiseValue / 3.2);

        // Convert back to FColor if necessary
        return ResultingColor.ToFColor(true);
    }
    case EBlock::SnowGrass:
        return FColor::FromHex("#F3F6FB");
        break;
    case EBlock::DarkGrass:
    {
        // Convert FIntVector to FVector for noise calculation
        // Only use X and Y components for 2D noise
        FVector ConvertedLocation = FVector(Location.X, Location.Y, Location.Z) * 1; // Scale to adjust frequency
        // NoiseValue = FMath::PerlinNoise3D(ConvertedLocation);
        NoiseValue = GenerateRandomDeterministicFloat(iteration);
        FLinearColor BaseGreen = FLinearColor::FromSRGBColor(FColor::FromHex("#0b4100")); // A nice grass green
        FLinearColor LighterGreen = FLinearColor::FromSRGBColor(FColor::FromHex("#00641b")); // A slightly lighter lime green
        // Smoothly transition between the two shades based on noise value
        // Normalize NoiseValue to be between 0 and 1 if not already (Perlin noise typically returns values in a range around [0, 1])
        //float NormalizedNoiseValue = (NoiseValue + 1.0f) / 2.0f;  // Adjust this line if the noise range is different
        FLinearColor ResultingColor = FMath::Lerp(BaseGreen, LighterGreen, NoiseValue / 3.2);

        // Convert back to FColor if necessary
        return ResultingColor.ToFColor(true);
    }
    default:
        return FColor::FromHex("#00FF00");
        break;
    }
}



void AChunk::GenerateMesh()
{
    DynamicMeshAxisCombined.EnableAttributes();
    DynamicMeshAxisCombined.EnableVertexUVs(FVector2f::Zero());
    DynamicMeshAxisCombined.Attributes()->EnablePrimaryColors();
    DynamicMeshAxisCombined.EnableVertexNormals(FVector3f::Zero());
    UVOverlay = DynamicMeshAxisCombined.Attributes()->PrimaryUV();
    NormalOverlay = DynamicMeshAxisCombined.Attributes()->PrimaryNormals();

    DynamicMeshAxisOne.EnableAttributes();
    DynamicMeshAxisOne.EnableVertexUVs(FVector2f::Zero());
    DynamicMeshAxisOne.Attributes()->EnablePrimaryColors();
    DynamicMeshAxisOne.EnableVertexNormals(FVector3f::Zero());
    AxisOneUVOverlay = DynamicMeshAxisOne.Attributes()->PrimaryUV();
    AxisOneNormalOverlay = DynamicMeshAxisOne.Attributes()->PrimaryNormals();

    DynamicMeshAxisTwo.EnableAttributes();
    DynamicMeshAxisTwo.EnableVertexUVs(FVector2f::Zero());
    DynamicMeshAxisTwo.Attributes()->EnablePrimaryColors();
    DynamicMeshAxisTwo.EnableVertexNormals(FVector3f::Zero());
    AxisTwoUVOverlay = DynamicMeshAxisTwo.Attributes()->PrimaryUV();
    AxisTwoNormalOverlay = DynamicMeshAxisTwo.Attributes()->PrimaryNormals();

    DynamicMeshAxisThree.EnableAttributes();
    DynamicMeshAxisThree.EnableVertexUVs(FVector2f::Zero());
    DynamicMeshAxisThree.Attributes()->EnablePrimaryColors();
    DynamicMeshAxisThree.EnableVertexNormals(FVector3f::Zero());
    AxisThreeUVOverlay = DynamicMeshAxisThree.Attributes()->PrimaryUV();
    AxisThreeNormalOverlay = DynamicMeshAxisThree.Attributes()->PrimaryNormals();




    int iterationCount = 0;
    iterationCount++;
    ParallelFor(3, [&](int32 Axis)
        {
            if ((Axis == 2 || Axis == 0 || Axis == 1) && !modifyingVoxel)
                return;

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Generating Mesh"));

            bool doubleAir = false;

            const int Axis1 = (Axis + 1) % 3;
            const int Axis2 = (Axis + 2) % 3;

            int MainAxisLimit = (Axis == 2 ? VerticalHeight : Size);
            int Axis1Limit = (Axis1 == 2 ? VerticalHeight : Size);
            int Axis2Limit = (Axis2 == 2 ? VerticalHeight : Size);

            auto DeltaAxis1 = FIntVector::ZeroValue;
            auto DeltaAxis2 = FIntVector::ZeroValue;

            auto ChunkItr = FIntVector::ZeroValue;
            auto AxisMask = FIntVector::ZeroValue;
            auto XOneVector = FIntVector(1, 0, 0);
            auto YOneVector = FIntVector(0, 1, 0);
            auto ZOneVector = FIntVector(0, 0, 1);

            auto NegativeXOneVector = FIntVector(-1, 0, 0);
            auto NegativeYOneVector = FIntVector(0, -1, 0);
            auto NegativeZOneVector = FIntVector(0, 0, -1);
            TArray<FIntVector> checkVectors = { XOneVector, NegativeXOneVector, YOneVector, NegativeYOneVector, ZOneVector, NegativeZOneVector };
            AxisMask[Axis] = 1;

            TArray<FMask> Mask;
            Mask.SetNumUninitialized(Axis1Limit * Axis2Limit);

            // check each slice
            //convert the below loop into a parallel for loop


            for (ChunkItr[Axis] = -1; ChunkItr[Axis] < MainAxisLimit; )
            {

                bool skipBlock = true;
                for (const auto& checkVector : checkVectors)
                {
                    const auto& CurrentBlock = GetBlock(ChunkItr + checkVector);
                    const auto& CompareBlock = GetBlock(ChunkItr + checkVector + AxisMask);
                    if (outOfBounds) {
                        skipBlock = false;
                        outOfBounds = false;
                        break;
                    }
                    if (!(CurrentBlock == EBlock::Air && CompareBlock == EBlock::Air))
                    {

                        skipBlock = false;
                        break; // Exit early if any surrounding block is not air
                    }
                }
                if (skipBlock)
                {
                    //UE_LOG(LogTemp, Warning, TEXT("Skipping block"));
                    ChunkItr[Axis]++; // Increment here to ensure the loop progresses
                    continue; // Skip further processing for this iteration
                }

                int N = 0;


                ParallelFor(Axis2Limit, [&](int32 Axis2Index)
                    {
                        FMask Result;
                        TArray<FMask> LocalMask;
                        LocalMask.SetNumUninitialized(Axis1Limit);

                        auto LocalChunkItr = ChunkItr;
                        LocalChunkItr[Axis2] = Axis2Index;

                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            LocalChunkItr[Axis1] = Axis1Index;
                            // Add something here which checks out of bounds, to prevent the 'ground faces' from generatnig, may improve perforamce?
                            auto CurrentBlock = GetBlock(LocalChunkItr);
                            auto CompareBlock = GetBlock(LocalChunkItr + AxisMask);

                            /*
                                       if (outOfBounds && CurrentBlock == EBlock::Stone)
                                       {
                                           CompareBlock = EBlock::Stone;

                                           outOfBounds = false;
                                       }*/

                            const bool CurrentBlockOpaque = CurrentBlock != EBlock::Air;
                            const bool CompareBlockOpaque = CompareBlock != EBlock::Air;


                            if (CurrentBlockOpaque == CompareBlockOpaque)
                            {
                                Result = FMask{ EBlock::Null, 0 };
                            }
                            else if (CurrentBlockOpaque)
                            {
                                Result = FMask{ CurrentBlock, 1 };
                            }
                            else
                            {
                                Result = FMask{ CompareBlock, -1 };
                            }

                            // Assuming Mask is not accessed concurrently or using thread-safe mechanism
                            LocalMask[Axis1Index] = Result;
                        }
                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            // Calculate the global index for Mask array
                            int globalIndex = Axis2Index * Axis1Limit + Axis1Index;
                            Mask[globalIndex] = LocalMask[Axis1Index];
                        }
                        // Merge local results into global Mask here
                        // Ensure this is done in a thread-safe manner
                    }, EParallelForFlags::None); // Adjust flags as needed


                ++ChunkItr[Axis];
                // FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&,Axis1Limit,Axis2Limit]()
         //  {// try changing below N to localN?
                 // Generate mesh from mask
                // ParallelFor(Axis2Limit, [&](int32 j)
                   //  {
                 //add a thread here and divide loop into two seperate loops for 2 threads?


               //  ParallelFor(Axis2Limit, [&](int32 j)
                 //    {
                for (int j = 0; j < Axis2Limit; j++)
                {

                    for (int i = 0; i < Axis1Limit; )
                    {


                        //need to test localN with a normal loop to see if calculation is correct but multiyhreading is causing issues
                        int localN = j * Axis1Limit + i;
                        if (Mask[localN].Normal != 0)
                        {
                            const auto CurrentMask = Mask[localN];
                            ChunkItr[Axis1] = i;
                            ChunkItr[Axis2] = j;

                            int width = 1;
                            int height;
                            bool done = false;
                            for (height = 1; j + height < Axis2Limit; ++height)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + height) * Axis1Limit + (i + k);
                                    if (CompareMask(Mask[index], CurrentMask)) continue;
                                    done = true;
                                    break;
                                }
                                if (done) break;
                            }

                            DeltaAxis1[Axis1] = width;
                            DeltaAxis2[Axis2] = height;
                            FQuadData QuadData;
                            QuadData.CurrentMask = CurrentMask;
                            QuadData.AxisMask = AxisMask;
                            QuadData.ChunkItr = ChunkItr;
                            QuadData.DeltaAxis1 = DeltaAxis1;
                            QuadData.DeltaAxis2 = DeltaAxis2;
                            QuadData.Block = CurrentMask.Block;
                            if (Axis == 0)
                            {
                                QuadDataQueueOne.Enqueue(QuadData);
                                quadOneSize++;
                            }
                            else if (Axis == 1)
                            {
                                QuadDataQueueTwo.Enqueue(QuadData);
                                quadTwoSize++;
                            }
                            else if (Axis == 2)
                            {
                                QuadDataQueueThree.Enqueue(QuadData);
                                quadThreeSize++;
                            }

                            DeltaAxis1 = FIntVector::ZeroValue;
                            DeltaAxis2 = FIntVector::ZeroValue;
                            for (int l = 0; l < height; ++l)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + l) * Axis1Limit + (i + k);
                                    Mask[index] = FMask{ EBlock::Null, 0 };
                                }
                            }

                            i += width;
                        }
                        else
                        {
                            i++;
                        }
                    }
                }//, EParallelForFlags::None);
              // }, TStatId(), nullptr, ENamedThreads::AnyThread);
            }

        }, EParallelForFlags::Unbalanced);
    //Now process the chunk queues in parallel


    //now non parallel for loop to process the queues
    TArray<FQuadData> QuadDataList;
    TArray<FGraphEventRef> Tasks;


    // Multithreaded for intial generation and NOT multithreaded for modifying voxel as that causes errors for some reason
    if (!modifyingVoxel) {
        FGraphEventRef TaskOne = FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
            {
                /* int iteration = 0;

                 FQuadData QuadData;
                 while (QuadDataQueueOne.Dequeue(QuadData))
                 {
                     iteration++;
                     CreateQuadOne(QuadData.CurrentMask, QuadData.AxisMask,
                         QuadData.ChunkItr,
                         QuadData.ChunkItr + QuadData.DeltaAxis1,
                         QuadData.ChunkItr + QuadData.DeltaAxis2,
                         QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                         QuadData.Block,iteration);
                 }*/
            }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);
    }
    else {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Doing section one of tasks"));
        int iterationQuadOne = 0;
        FQuadData QuadData;
        while (QuadDataQueueOne.Dequeue(QuadData))
        {
            iterationQuadOne++;
            CreateQuadOne(QuadData.CurrentMask, QuadData.AxisMask,
                QuadData.ChunkItr,
                QuadData.ChunkItr + QuadData.DeltaAxis1,
                QuadData.ChunkItr + QuadData.DeltaAxis2,
                QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                QuadData.Block, iterationQuadOne);
        }
    }






    FGraphEventRef TaskTwo = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
        {
            int iterationQuadTwo = 0;
            FQuadData QuadData;
            while (QuadDataQueueTwo.Dequeue(QuadData))
            {
                iterationQuadTwo++;
                CreateQuadTwo(QuadData.CurrentMask, QuadData.AxisMask,
                    QuadData.ChunkItr,
                    QuadData.ChunkItr + QuadData.DeltaAxis1,
                    QuadData.ChunkItr + QuadData.DeltaAxis2,
                    QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                    QuadData.Block, iterationQuadTwo);
            }
        }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);


    int iterationQuadThree = 0;
    FQuadData QuadData;

    while (QuadDataQueueThree.Dequeue(QuadData))
    {
        iterationQuadThree++;
        CreateQuadThree(QuadData.CurrentMask, QuadData.AxisMask,
            QuadData.ChunkItr,
            QuadData.ChunkItr + QuadData.DeltaAxis1,
            QuadData.ChunkItr + QuadData.DeltaAxis2,
            QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
            QuadData.Block, iterationQuadThree);
    }


    finishedCreateQuad = true;

}

void AChunk::CreateQuadOne(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block, int iteration)
{

    FScopeLock Lock(&CreateQuadLockOne);
    const auto Normal = FVector(AxisMask * Mask.Normal);



    EBlock BlockMaterial = Mask.Block;
    FColor BlockColor = GetColorFromBlock(BlockMaterial, V1, iteration);
    //DynamicMeshOne.AppendVertex(FVector3d(AxisOneVertexData[i]));


    DynamicMeshAxisOne.AppendVertex(FVector3d(FVector(V1) * 100));
    DynamicMeshAxisOne.AppendVertex(FVector3d(FVector(V2) * 100));
    DynamicMeshAxisOne.AppendVertex(FVector3d(FVector(V3) * 100));
    DynamicMeshAxisOne.AppendVertex(FVector3d(FVector(V4) * 100));

    AxisOneVertexColors.Add(BlockColor);
    AxisOneVertexColors.Add(BlockColor);
    AxisOneVertexColors.Add(BlockColor);
    AxisOneVertexColors.Add(BlockColor);

    DynamicMeshAxisOne.AppendTriangle(UE::Geometry::FIndex3i(AxisOneVertexCount, AxisOneVertexCount + 2 + Mask.Normal, AxisOneVertexCount + 2 - Mask.Normal));
    DynamicMeshAxisOne.AppendTriangle(UE::Geometry::FIndex3i(AxisOneVertexCount + 3, AxisOneVertexCount + 1 - Mask.Normal, AxisOneVertexCount + 1 + Mask.Normal));


    /* AxisOneUVOverlay->AppendElement(FVector2f(FVector2D(V1.X / Size, V1.Y / Size)));
     AxisOneUVOverlay->AppendElement(FVector2f(FVector2D(V2.X / Size, V2.Y / Size)));
     AxisOneUVOverlay->AppendElement(FVector2f(FVector2D(V3.X / Size, V3.Y / Size)));
     AxisOneUVOverlay->AppendElement(FVector2f(FVector2D(V4.X / Size, V4.Y / Size)));*/


    AxisOneNormalOverlay->AppendElement(FVector3f(Normal));
    AxisOneNormalOverlay->AppendElement(FVector3f(Normal));
    AxisOneNormalOverlay->AppendElement(FVector3f(Normal));
    AxisOneNormalOverlay->AppendElement(FVector3f(Normal));

    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V1) * 100));
    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V2) * 100));
    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V3) * 100));
    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V4) * 100));




    //VertexColors.Add(BlockColor);
    //VertexColors.Add(BlockColor);
    //VertexColors.Add(BlockColor);
    //VertexColors.Add(BlockColor);


    //DynamicMeshAxisCombined.AppendTriangle(UE::Geometry::FIndex3i(VertexCount, VertexCount + 2 + Mask.Normal, VertexCount + 2 - Mask.Normal));
    //DynamicMeshAxisCombined.AppendTriangle(UE::Geometry::FIndex3i(VertexCount + 3, VertexCount + 1 - Mask.Normal, VertexCount + 1 + Mask.Normal));



    //UVOverlay->AppendElement(FVector2f(FVector2D(V1.X / Size, V1.Y / Size)));
    //UVOverlay->AppendElement(FVector2f(FVector2D(V2.X / Size, V2.Y / Size)));
    //UVOverlay->AppendElement(FVector2f(FVector2D(V3.X / Size, V3.Y / Size)));
    //UVOverlay->AppendElement(FVector2f(FVector2D(V4.X / Size, V4.Y / Size)));


    //NormalOverlay->AppendElement(FVector3f(Normal));
    //NormalOverlay->AppendElement(FVector3f(Normal));
    //NormalOverlay->AppendElement(FVector3f(Normal));
    //NormalOverlay->AppendElement(FVector3f(Normal));

    VertexCount += 4;
    AxisOneVertexCount += 4;
    Lock.Unlock();

}
void AChunk::CreateQuadTwo(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block, int iteration)
{

    FScopeLock Lock(&CreateQuadLockTwo);
    const auto Normal = FVector(AxisMask * Mask.Normal);


    EBlock BlockMaterial = Mask.Block;
    FColor BlockColor = GetColorFromBlock(BlockMaterial, V1, iteration);


    DynamicMeshAxisTwo.AppendVertex(FVector3d(FVector(V1) * 100));
    DynamicMeshAxisTwo.AppendVertex(FVector3d(FVector(V2) * 100));
    DynamicMeshAxisTwo.AppendVertex(FVector3d(FVector(V3) * 100));
    DynamicMeshAxisTwo.AppendVertex(FVector3d(FVector(V4) * 100));


    AxisTwoVertexColors.Add(BlockColor);
    AxisTwoVertexColors.Add(BlockColor);
    AxisTwoVertexColors.Add(BlockColor);
    AxisTwoVertexColors.Add(BlockColor);


    DynamicMeshAxisTwo.AppendTriangle(UE::Geometry::FIndex3i(AxisTwoVertexCount, AxisTwoVertexCount + 2 + Mask.Normal, AxisTwoVertexCount + 2 - Mask.Normal));
    DynamicMeshAxisTwo.AppendTriangle(UE::Geometry::FIndex3i(AxisTwoVertexCount + 3, AxisTwoVertexCount + 1 - Mask.Normal, AxisTwoVertexCount + 1 + Mask.Normal));


    //AxisTwoUVOverlay->AppendElement(FVector2f(FVector2D(V1.X / Size, V1.Y / Size)));
    //AxisTwoUVOverlay->AppendElement(FVector2f(FVector2D(V2.X / Size, V2.Y / Size)));
    //AxisTwoUVOverlay->AppendElement(FVector2f(FVector2D(V3.X / Size, V3.Y / Size)));
    //AxisTwoUVOverlay->AppendElement(FVector2f(FVector2D(V4.X / Size, V4.Y / Size)));


    AxisTwoNormalOverlay->AppendElement(FVector3f(Normal));
    AxisTwoNormalOverlay->AppendElement(FVector3f(Normal));
    AxisTwoNormalOverlay->AppendElement(FVector3f(Normal));
    AxisTwoNormalOverlay->AppendElement(FVector3f(Normal));


    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V1) * 100));
    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V2) * 100));
    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V3) * 100));
    //DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V4) * 100));




    //VertexColors.Add(BlockColor);
    //VertexColors.Add(BlockColor);
    //VertexColors.Add(BlockColor);
    //VertexColors.Add(BlockColor);


    //DynamicMeshAxisCombined.AppendTriangle(UE::Geometry::FIndex3i(VertexCount, VertexCount + 2 + Mask.Normal, VertexCount + 2 - Mask.Normal));
    //DynamicMeshAxisCombined.AppendTriangle(UE::Geometry::FIndex3i(VertexCount + 3, VertexCount + 1 - Mask.Normal, VertexCount + 1 + Mask.Normal));



    //UVOverlay->AppendElement(FVector2f(FVector2D(V1.X / Size, V1.Y / Size)));
    //UVOverlay->AppendElement(FVector2f(FVector2D(V2.X / Size, V2.Y / Size)));
    //UVOverlay->AppendElement(FVector2f(FVector2D(V3.X / Size, V3.Y / Size)));
    //UVOverlay->AppendElement(FVector2f(FVector2D(V4.X / Size, V4.Y / Size)));


    //NormalOverlay->AppendElement(FVector3f(Normal));
    //NormalOverlay->AppendElement(FVector3f(Normal));
    //NormalOverlay->AppendElement(FVector3f(Normal));
    //NormalOverlay->AppendElement(FVector3f(Normal));

    AxisTwoVertexCount += 4;
    VertexCount += 4;
    Lock.Unlock();

}
void AChunk::CreateQuadThree(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block, int iteration)
{

    FScopeLock Lock(&CreateQuadLockThree);
    const auto Normal = FVector(AxisMask * Mask.Normal);

    EBlock BlockMaterial = Mask.Block;
    FColor BlockColor = GetColorFromBlock(BlockMaterial, V1, iteration);



    DynamicMeshAxisThree.AppendVertex(FVector3d(FVector(V1) * 100));
    DynamicMeshAxisThree.AppendVertex(FVector3d(FVector(V2) * 100));
    DynamicMeshAxisThree.AppendVertex(FVector3d(FVector(V3) * 100));
    DynamicMeshAxisThree.AppendVertex(FVector3d(FVector(V4) * 100));

    AxisThreeVertexColors.Add(BlockColor);
    AxisThreeVertexColors.Add(BlockColor);
    AxisThreeVertexColors.Add(BlockColor);
    AxisThreeVertexColors.Add(BlockColor);


    DynamicMeshAxisThree.AppendTriangle(UE::Geometry::FIndex3i(AxisThreeVertexCount, AxisThreeVertexCount + 2 + Mask.Normal, AxisThreeVertexCount + 2 - Mask.Normal));
    DynamicMeshAxisThree.AppendTriangle(UE::Geometry::FIndex3i(AxisThreeVertexCount + 3, AxisThreeVertexCount + 1 - Mask.Normal, AxisThreeVertexCount + 1 + Mask.Normal));

    //AxisThreeUVOverlay->AppendElement(FVector2f(FVector2D(V1.X / Size, V1.Y / Size)));
    //AxisThreeUVOverlay->AppendElement(FVector2f(FVector2D(V2.X / Size, V2.Y / Size)));
    //AxisThreeUVOverlay->AppendElement(FVector2f(FVector2D(V3.X / Size, V3.Y / Size)));
    //AxisThreeUVOverlay->AppendElement(FVector2f(FVector2D(V4.X / Size, V4.Y / Size)));


    AxisThreeNormalOverlay->AppendElement(FVector3f(Normal));
    AxisThreeNormalOverlay->AppendElement(FVector3f(Normal));
    AxisThreeNormalOverlay->AppendElement(FVector3f(Normal));
    AxisThreeNormalOverlay->AppendElement(FVector3f(Normal));


    /*  DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V1) * 100));
      DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V2) * 100));
      DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V3) * 100));
      DynamicMeshAxisCombined.AppendVertex(FVector3d(FVector(V4) * 100));




      VertexColors.Add(BlockColor);
      VertexColors.Add(BlockColor);
      VertexColors.Add(BlockColor);
      VertexColors.Add(BlockColor);


      DynamicMeshAxisCombined.AppendTriangle(UE::Geometry::FIndex3i(VertexCount, VertexCount + 2 + Mask.Normal, VertexCount + 2 - Mask.Normal));
      DynamicMeshAxisCombined.AppendTriangle(UE::Geometry::FIndex3i(VertexCount + 3, VertexCount + 1 - Mask.Normal, VertexCount + 1 + Mask.Normal));


      UVOverlay->AppendElement(FVector2f(FVector2D(V1.X / Size, V1.Y / Size)));
      UVOverlay->AppendElement(FVector2f(FVector2D(V2.X / Size, V2.Y / Size)));
      UVOverlay->AppendElement(FVector2f(FVector2D(V3.X / Size, V3.Y / Size)));
      UVOverlay->AppendElement(FVector2f(FVector2D(V4.X / Size, V4.Y / Size)));


      NormalOverlay->AppendElement(FVector3f(Normal));
      NormalOverlay->AppendElement(FVector3f(Normal));
      NormalOverlay->AppendElement(FVector3f(Normal));
      NormalOverlay->AppendElement(FVector3f(Normal));*/

    VertexCount += 4;
    AxisThreeVertexCount += 4;
    Lock.Unlock();

}




void AChunk::GenerateAxisOneMesh(bool levelZeroLOD)
{


    if (levelZeroLOD)
        halfGenerated = true;

    DynamicMeshAxisOne.EnableAttributes();
    DynamicMeshAxisOne.EnableVertexUVs(FVector2f::Zero());
    DynamicMeshAxisOne.Attributes()->EnablePrimaryColors();
    DynamicMeshAxisOne.EnableVertexNormals(FVector3f::Zero());
    AxisOneUVOverlay = DynamicMeshAxisOne.Attributes()->PrimaryUV();
    AxisOneNormalOverlay = DynamicMeshAxisOne.Attributes()->PrimaryNormals();

    FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
        {




            // Set to zero so its axis one
            int Axis = 0;
            bool doubleAir = false;

            const int Axis1 = (Axis + 1) % 3;
            const int Axis2 = (Axis + 2) % 3;

            int MainAxisLimit = (Axis == 2 ? VerticalHeight : Size);
            int Axis1Limit = (Axis1 == 2 ? VerticalHeight : Size);
            int Axis2Limit = (Axis2 == 2 ? VerticalHeight : Size);

            auto DeltaAxis1 = FIntVector::ZeroValue;
            auto DeltaAxis2 = FIntVector::ZeroValue;

            auto ChunkItr = FIntVector::ZeroValue;
            auto AxisMask = FIntVector::ZeroValue;
            auto XOneVector = FIntVector(1, 0, 0);
            auto YOneVector = FIntVector(0, 1, 0);
            auto ZOneVector = FIntVector(0, 0, 1);

            auto NegativeXOneVector = FIntVector(-1, 0, 0);
            auto NegativeYOneVector = FIntVector(0, -1, 0);
            auto NegativeZOneVector = FIntVector(0, 0, -1);
            TArray<FIntVector> checkVectors = { XOneVector, NegativeXOneVector, YOneVector, NegativeYOneVector, ZOneVector, NegativeZOneVector };
            AxisMask[Axis] = 1;

            TArray<FMask> Mask;
            Mask.SetNumUninitialized(Axis1Limit * Axis2Limit);

            // check each slice
            //convert the below loop into a parallel for loop


            for (ChunkItr[Axis] = -1; ChunkItr[Axis] < MainAxisLimit; )
            {

                bool skipBlock = true;
                for (const auto& checkVector : checkVectors)
                {
                    const auto& CurrentBlock = GetBlock(ChunkItr + checkVector);
                    const auto& CompareBlock = GetBlock(ChunkItr + checkVector + AxisMask);
                    if (outOfBounds) {
                        skipBlock = false;
                        outOfBounds = false;
                        break;
                    }
                    if (!(CurrentBlock == EBlock::Air && CompareBlock == EBlock::Air))
                    {

                        skipBlock = false;
                        break; // Exit early if any surrounding block is not air
                    }
                }
                if (skipBlock)
                {
                    //UE_LOG(LogTemp, Warning, TEXT("Skipping block"));
                    ChunkItr[Axis]++; // Increment here to ensure the loop progresses
                    continue; // Skip further processing for this iteration
                }

                int N = 0;


                ParallelFor(Axis2Limit, [&](int32 Axis2Index)
                    {
                        FMask Result;
                        TArray<FMask> LocalMask;
                        LocalMask.SetNumUninitialized(Axis1Limit);

                        auto LocalChunkItr = ChunkItr;
                        LocalChunkItr[Axis2] = Axis2Index;

                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            LocalChunkItr[Axis1] = Axis1Index;
                            // Add something here which checks out of bounds, to prevent the 'ground faces' from generatnig, may improve perforamce?
                            auto CurrentBlock = GetBlock(LocalChunkItr);
                            auto CompareBlock = GetBlock(LocalChunkItr + AxisMask);

                            /*
                                       if (outOfBounds && CurrentBlock == EBlock::Stone)
                                       {
                                           CompareBlock = EBlock::Stone;

                                           outOfBounds = false;
                                       }*/

                            const bool CurrentBlockOpaque = CurrentBlock != EBlock::Air;
                            const bool CompareBlockOpaque = CompareBlock != EBlock::Air;


                            if (CurrentBlockOpaque == CompareBlockOpaque)
                            {
                                Result = FMask{ EBlock::Null, 0 };
                            }
                            else if (CurrentBlockOpaque)
                            {
                                Result = FMask{ CurrentBlock, 1 };
                            }
                            else
                            {
                                Result = FMask{ CompareBlock, -1 };
                            }

                            // Assuming Mask is not accessed concurrently or using thread-safe mechanism
                            LocalMask[Axis1Index] = Result;
                        }
                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            // Calculate the global index for Mask array
                            int globalIndex = Axis2Index * Axis1Limit + Axis1Index;
                            Mask[globalIndex] = LocalMask[Axis1Index];
                        }
                        // Merge local results into global Mask here
                        // Ensure this is done in a thread-safe manner
                    }, EParallelForFlags::None); // Adjust flags as needed


                ++ChunkItr[Axis];

                for (int j = 0; j < Axis2Limit; j++)
                {

                    for (int i = 0; i < Axis1Limit; )
                    {


                        //need to test localN with a normal loop to see if calculation is correct but multiyhreading is causing issues
                        int localN = j * Axis1Limit + i;
                        if (Mask[localN].Normal != 0)
                        {
                            const auto CurrentMask = Mask[localN];
                            ChunkItr[Axis1] = i;
                            ChunkItr[Axis2] = j;

                            int width = 1;
                            int height;
                            bool done = false;
                            for (height = 1; j + height < Axis2Limit; ++height)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + height) * Axis1Limit + (i + k);
                                    if (CompareMask(Mask[index], CurrentMask)) continue;
                                    done = true;
                                    break;
                                }
                                if (done) break;
                            }

                            DeltaAxis1[Axis1] = width;
                            DeltaAxis2[Axis2] = height;
                            FQuadData QuadData;
                            QuadData.CurrentMask = CurrentMask;
                            QuadData.AxisMask = AxisMask;
                            QuadData.ChunkItr = ChunkItr;
                            QuadData.DeltaAxis1 = DeltaAxis1;
                            QuadData.DeltaAxis2 = DeltaAxis2;
                            QuadData.Block = CurrentMask.Block;
                            if (Axis == 0)
                            {
                                QuadDataQueueOne.Enqueue(QuadData);
                                quadOneSize++;
                            }
                            else if (Axis == 1)
                            {
                                QuadDataQueueTwo.Enqueue(QuadData);
                                quadTwoSize++;
                            }
                            else if (Axis == 2)
                            {
                                QuadDataQueueThree.Enqueue(QuadData);
                                quadThreeSize++;
                            }

                            DeltaAxis1 = FIntVector::ZeroValue;
                            DeltaAxis2 = FIntVector::ZeroValue;
                            for (int l = 0; l < height; ++l)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + l) * Axis1Limit + (i + k);
                                    Mask[index] = FMask{ EBlock::Null, 0 };
                                }
                            }

                            i += width;
                        }
                        else
                        {
                            if (!levelZeroLOD) {
                                i++;
                            }
                            else if (levelZeroLOD) {
                                i++;
                                i++;
                            }
                        }
                    }
                }
            }

            int iteration = 0;

            FQuadData QuadData;
            while (QuadDataQueueOne.Dequeue(QuadData))
            {
                iteration++;
                CreateQuadOne(QuadData.CurrentMask, QuadData.AxisMask,
                    QuadData.ChunkItr,
                    QuadData.ChunkItr + QuadData.DeltaAxis1,
                    QuadData.ChunkItr + QuadData.DeltaAxis2,
                    QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                    QuadData.Block, iteration);
            }
        }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);


    Taskx->Wait();


}
void AChunk::GenerateAxisTwoMesh(bool levelZeroLOD)
{
    if (levelZeroLOD)
        halfGenerated = true;

    DynamicMeshAxisTwo.EnableAttributes();
    DynamicMeshAxisTwo.EnableVertexUVs(FVector2f::Zero());
    DynamicMeshAxisTwo.Attributes()->EnablePrimaryColors();
    DynamicMeshAxisTwo.EnableVertexNormals(FVector3f::Zero());
    AxisTwoUVOverlay = DynamicMeshAxisTwo.Attributes()->PrimaryUV();
    AxisTwoNormalOverlay = DynamicMeshAxisTwo.Attributes()->PrimaryNormals();

    //  ParallelFor(1, [&](int32 Axis)
    //      {
    FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
        {

            // Set to zero so its axis one
            int Axis = 1;
            bool doubleAir = false;

            const int Axis1 = (Axis + 1) % 3;
            const int Axis2 = (Axis + 2) % 3;

            int MainAxisLimit = (Axis == 2 ? VerticalHeight : Size);
            int Axis1Limit = (Axis1 == 2 ? VerticalHeight : Size);
            int Axis2Limit = (Axis2 == 2 ? VerticalHeight : Size);

            auto DeltaAxis1 = FIntVector::ZeroValue;
            auto DeltaAxis2 = FIntVector::ZeroValue;

            auto ChunkItr = FIntVector::ZeroValue;
            auto AxisMask = FIntVector::ZeroValue;
            auto XOneVector = FIntVector(1, 0, 0);
            auto YOneVector = FIntVector(0, 1, 0);
            auto ZOneVector = FIntVector(0, 0, 1);

            auto NegativeXOneVector = FIntVector(-1, 0, 0);
            auto NegativeYOneVector = FIntVector(0, -1, 0);
            auto NegativeZOneVector = FIntVector(0, 0, -1);
            TArray<FIntVector> checkVectors = { XOneVector, NegativeXOneVector, YOneVector, NegativeYOneVector, ZOneVector, NegativeZOneVector };
            AxisMask[Axis] = 1;

            TArray<FMask> Mask;
            Mask.SetNumUninitialized(Axis1Limit * Axis2Limit);

            // check each slice
            //convert the below loop into a parallel for loop


            for (ChunkItr[Axis] = -1; ChunkItr[Axis] < MainAxisLimit; )
            {

                bool skipBlock = true;
                for (const auto& checkVector : checkVectors)
                {
                    const auto& CurrentBlock = GetBlock(ChunkItr + checkVector);
                    const auto& CompareBlock = GetBlock(ChunkItr + checkVector + AxisMask);
                    if (outOfBounds) {
                        skipBlock = false;
                        outOfBounds = false;
                        break;
                    }
                    if (!(CurrentBlock == EBlock::Air && CompareBlock == EBlock::Air))
                    {

                        skipBlock = false;
                        break; // Exit early if any surrounding block is not air
                    }
                }
                if (skipBlock)
                {
                    //UE_LOG(LogTemp, Warning, TEXT("Skipping block"));
                    ChunkItr[Axis]++; // Increment here to ensure the loop progresses
                    continue; // Skip further processing for this iteration
                }

                int N = 0;


                ParallelFor(Axis2Limit, [&](int32 Axis2Index)
                    {
                        FMask Result;
                        TArray<FMask> LocalMask;
                        LocalMask.SetNumUninitialized(Axis1Limit);

                        auto LocalChunkItr = ChunkItr;
                        LocalChunkItr[Axis2] = Axis2Index;

                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            LocalChunkItr[Axis1] = Axis1Index;
                            // Add something here which checks out of bounds, to prevent the 'ground faces' from generatnig, may improve perforamce?
                            auto CurrentBlock = GetBlock(LocalChunkItr);
                            auto CompareBlock = GetBlock(LocalChunkItr + AxisMask);

                            /*
                                       if (outOfBounds && CurrentBlock == EBlock::Stone)
                                       {
                                           CompareBlock = EBlock::Stone;

                                           outOfBounds = false;
                                       }*/

                            const bool CurrentBlockOpaque = CurrentBlock != EBlock::Air;
                            const bool CompareBlockOpaque = CompareBlock != EBlock::Air;


                            if (CurrentBlockOpaque == CompareBlockOpaque)
                            {
                                Result = FMask{ EBlock::Null, 0 };
                            }
                            else if (CurrentBlockOpaque)
                            {
                                Result = FMask{ CurrentBlock, 1 };
                            }
                            else
                            {
                                Result = FMask{ CompareBlock, -1 };
                            }

                            // Assuming Mask is not accessed concurrently or using thread-safe mechanism
                            LocalMask[Axis1Index] = Result;
                        }
                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            // Calculate the global index for Mask array
                            int globalIndex = Axis2Index * Axis1Limit + Axis1Index;
                            Mask[globalIndex] = LocalMask[Axis1Index];
                        }
                        // Merge local results into global Mask here
                        // Ensure this is done in a thread-safe manner
                    }, EParallelForFlags::None); // Adjust flags as needed


                ++ChunkItr[Axis];
                // FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&,Axis1Limit,Axis2Limit]()
         //  {// try changing below N to localN?
                 // Generate mesh from mask
                // ParallelFor(Axis2Limit, [&](int32 j)
                   //  {
                 //add a thread here and divide loop into two seperate loops for 2 threads?


               //  ParallelFor(Axis2Limit, [&](int32 j)
                 //    {
                for (int j = 0; j < Axis2Limit; j++)
                {

                    for (int i = 0; i < Axis1Limit;)
                    {
                        /*      if (blocksGeneratedIndexes.Contains(i))
                              {
                                      continue;
                              }*/


                        int localN = j * Axis1Limit + i;
                        if (Mask[localN].Normal != 0)
                        {
                            const auto CurrentMask = Mask[localN];
                            ChunkItr[Axis1] = i;
                            ChunkItr[Axis2] = j;

                            int width = 1;
                            int height;
                            bool done = false;
                            for (height = 1; j + height < Axis2Limit; ++height)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + height) * Axis1Limit + (i + k);
                                    if (CompareMask(Mask[index], CurrentMask)) continue;
                                    done = true;
                                    break;
                                }
                                if (done) break;
                            }

                            DeltaAxis1[Axis1] = width;
                            DeltaAxis2[Axis2] = height;
                            FQuadData QuadData;
                            QuadData.CurrentMask = CurrentMask;
                            QuadData.AxisMask = AxisMask;
                            QuadData.ChunkItr = ChunkItr;
                            QuadData.DeltaAxis1 = DeltaAxis1;
                            QuadData.DeltaAxis2 = DeltaAxis2;
                            QuadData.Block = CurrentMask.Block;
                            if (Axis == 0)
                            {
                                QuadDataQueueOne.Enqueue(QuadData);
                                quadOneSize++;
                            }
                            else if (Axis == 1)
                            {
                                QuadDataQueueTwo.Enqueue(QuadData);
                                quadTwoSize++;
                            }
                            else if (Axis == 2)
                            {
                                QuadDataQueueThree.Enqueue(QuadData);
                                quadThreeSize++;
                            }

                            DeltaAxis1 = FIntVector::ZeroValue;
                            DeltaAxis2 = FIntVector::ZeroValue;
                            for (int l = 0; l < height; ++l)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + l) * Axis1Limit + (i + k);
                                    Mask[index] = FMask{ EBlock::Null, 0 };
                                }
                            }

                            i += width;
                        }
                        else
                        {
                            if (!levelZeroLOD) {
                                i++;
                            }
                            else if (levelZeroLOD) {

                                i++;
                                i++;
                                blocksGeneratedIndexes.Add(i);
                            }

                        }
                    }
                }
            }
            //     }, EParallelForFlags::Unbalanced);

            int iterationQuadTwo = 0;
            FQuadData QuadData;
            while (QuadDataQueueTwo.Dequeue(QuadData))
            {
                iterationQuadTwo++;
                CreateQuadTwo(QuadData.CurrentMask, QuadData.AxisMask,
                    QuadData.ChunkItr,
                    QuadData.ChunkItr + QuadData.DeltaAxis1,
                    QuadData.ChunkItr + QuadData.DeltaAxis2,
                    QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                    QuadData.Block, iterationQuadTwo);
            }
        }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);


    Taskx->Wait();
}
void AChunk::GenerateAxisThreeMesh()
{
    DynamicMeshAxisThree.EnableAttributes();
    DynamicMeshAxisThree.EnableVertexUVs(FVector2f::Zero());
    DynamicMeshAxisThree.Attributes()->EnablePrimaryColors();
    DynamicMeshAxisThree.EnableVertexNormals(FVector3f::Zero());
    AxisThreeUVOverlay = DynamicMeshAxisThree.Attributes()->PrimaryUV();
    AxisThreeNormalOverlay = DynamicMeshAxisThree.Attributes()->PrimaryNormals();
    FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
        {




            //ParallelFor(1, [&](int32 Axis)
            //    {

            int Axis = 2;
            bool doubleAir = false;

            const int Axis1 = (Axis + 1) % 3;
            const int Axis2 = (Axis + 2) % 3;

            int MainAxisLimit = (Axis == 2 ? VerticalHeight : Size);
            int Axis1Limit = (Axis1 == 2 ? VerticalHeight : Size);
            int Axis2Limit = (Axis2 == 2 ? VerticalHeight : Size);

            auto DeltaAxis1 = FIntVector::ZeroValue;
            auto DeltaAxis2 = FIntVector::ZeroValue;

            auto ChunkItr = FIntVector::ZeroValue;
            auto AxisMask = FIntVector::ZeroValue;
            auto XOneVector = FIntVector(1, 0, 0);
            auto YOneVector = FIntVector(0, 1, 0);
            auto ZOneVector = FIntVector(0, 0, 1);

            auto NegativeXOneVector = FIntVector(-1, 0, 0);
            auto NegativeYOneVector = FIntVector(0, -1, 0);
            auto NegativeZOneVector = FIntVector(0, 0, -1);
            TArray<FIntVector> checkVectors = { XOneVector, NegativeXOneVector, YOneVector, NegativeYOneVector, ZOneVector, NegativeZOneVector };
            AxisMask[Axis] = 1;

            TArray<FMask> Mask;
            Mask.SetNumUninitialized(Axis1Limit * Axis2Limit);

            // check each slice
            //convert the below loop into a parallel for loop


            for (ChunkItr[Axis] = -1; ChunkItr[Axis] < MainAxisLimit; )
            {

                bool skipBlock = true;
                for (const auto& checkVector : checkVectors)
                {
                    const auto& CurrentBlock = GetBlock(ChunkItr + checkVector);
                    const auto& CompareBlock = GetBlock(ChunkItr + checkVector + AxisMask);
                    if (outOfBounds) {
                        skipBlock = false;
                        outOfBounds = false;
                        break;
                    }
                    if (!(CurrentBlock == EBlock::Air && CompareBlock == EBlock::Air))
                    {

                        skipBlock = false;
                        break; // Exit early if any surrounding block is not air
                    }
                }
                if (skipBlock)
                {
                    //UE_LOG(LogTemp, Warning, TEXT("Skipping block"));
                    ChunkItr[Axis]++; // Increment here to ensure the loop progresses
                    continue; // Skip further processing for this iteration
                }

                int N = 0;


                ParallelFor(Axis2Limit, [&](int32 Axis2Index)
                    {
                        FMask Result;
                        TArray<FMask> LocalMask;
                        LocalMask.SetNumUninitialized(Axis1Limit);

                        auto LocalChunkItr = ChunkItr;
                        LocalChunkItr[Axis2] = Axis2Index;

                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            LocalChunkItr[Axis1] = Axis1Index;
                            // Add something here which checks out of bounds, to prevent the 'ground faces' from generatnig, may improve perforamce?
                            auto CurrentBlock = GetBlock(LocalChunkItr);
                            auto CompareBlock = GetBlock(LocalChunkItr + AxisMask);

                            /*
                                       if (outOfBounds && CurrentBlock == EBlock::Stone)
                                       {
                                           CompareBlock = EBlock::Stone;

                                           outOfBounds = false;
                                       }*/

                            const bool CurrentBlockOpaque = CurrentBlock != EBlock::Air;
                            const bool CompareBlockOpaque = CompareBlock != EBlock::Air;


                            if (CurrentBlockOpaque == CompareBlockOpaque)
                            {
                                Result = FMask{ EBlock::Null, 0 };
                            }
                            else if (CurrentBlockOpaque)
                            {
                                Result = FMask{ CurrentBlock, 1 };
                            }
                            else
                            {
                                Result = FMask{ CompareBlock, -1 };
                            }

                            // Assuming Mask is not accessed concurrently or using thread-safe mechanism
                            LocalMask[Axis1Index] = Result;
                        }
                        for (int Axis1Index = 0; Axis1Index < Axis1Limit; ++Axis1Index)
                        {
                            // Calculate the global index for Mask array
                            int globalIndex = Axis2Index * Axis1Limit + Axis1Index;
                            Mask[globalIndex] = LocalMask[Axis1Index];
                        }
                        // Merge local results into global Mask here
                        // Ensure this is done in a thread-safe manner
                    }, EParallelForFlags::None); // Adjust flags as needed


                ++ChunkItr[Axis];
                // FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&,Axis1Limit,Axis2Limit]()
         //  {// try changing below N to localN?
                 // Generate mesh from mask
                // ParallelFor(Axis2Limit, [&](int32 j)
                   //  {
                 //add a thread here and divide loop into two seperate loops for 2 threads?


               //  ParallelFor(Axis2Limit, [&](int32 j)
                 //    {
                for (int j = 0; j < Axis2Limit; j++)
                {

                    for (int i = 0; i < Axis1Limit; )
                    {


                        //need to test localN with a normal loop to see if calculation is correct but multiyhreading is causing issues
                        int localN = j * Axis1Limit + i;
                        if (Mask[localN].Normal != 0)
                        {
                            const auto CurrentMask = Mask[localN];
                            ChunkItr[Axis1] = i;
                            ChunkItr[Axis2] = j;

                            int width = 1;
                            int height;
                            bool done = false;
                            for (height = 1; j + height < Axis2Limit; ++height)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + height) * Axis1Limit + (i + k);
                                    if (CompareMask(Mask[index], CurrentMask)) continue;
                                    done = true;
                                    break;
                                }
                                if (done) break;
                            }

                            DeltaAxis1[Axis1] = width;
                            DeltaAxis2[Axis2] = height;
                            FQuadData QuadData;
                            QuadData.CurrentMask = CurrentMask;
                            QuadData.AxisMask = AxisMask;
                            QuadData.ChunkItr = ChunkItr;
                            QuadData.DeltaAxis1 = DeltaAxis1;
                            QuadData.DeltaAxis2 = DeltaAxis2;
                            QuadData.Block = CurrentMask.Block;
                            if (Axis == 0)
                            {
                                QuadDataQueueOne.Enqueue(QuadData);
                                quadOneSize++;
                            }
                            else if (Axis == 1)
                            {
                                QuadDataQueueTwo.Enqueue(QuadData);
                                quadTwoSize++;
                            }
                            else if (Axis == 2)
                            {
                                QuadDataQueueThree.Enqueue(QuadData);
                                quadThreeSize++;
                            }

                            DeltaAxis1 = FIntVector::ZeroValue;
                            DeltaAxis2 = FIntVector::ZeroValue;
                            for (int l = 0; l < height; ++l)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    int index = (j + l) * Axis1Limit + (i + k);
                                    Mask[index] = FMask{ EBlock::Null, 0 };
                                }
                            }

                            i += width;

                        }
                        else
                        {
                            i++;
                        }

                    }
                }
            }
            //    }, EParallelForFlags::Unbalanced);

            int iterationQuadThree = 0;
            FQuadData QuadData;
            while (QuadDataQueueThree.Dequeue(QuadData))
            {
                iterationQuadThree++;
                CreateQuadThree(QuadData.CurrentMask, QuadData.AxisMask,
                    QuadData.ChunkItr,
                    QuadData.ChunkItr + QuadData.DeltaAxis1,
                    QuadData.ChunkItr + QuadData.DeltaAxis2,
                    QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                    QuadData.Block, iterationQuadThree);
            }
        }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);

    Taskx->Wait();
}




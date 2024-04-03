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
#include <FastNoise/FastNoise.h>
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
#include "MyPawn.h"


//#include "Octree/CubeRange.h"
FTimerHandle MyTimerHandle;
// Sets default values




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
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create a default scene component as the root
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));


    CombinedAxisMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshOne");
    AxisOneMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshTwo");
    AxisTwoMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshThree");
    AxisThreeMesh = CreateDefaultSubobject<UDynamicMeshComponent>("MeshFour");

    // Attach the mesh components to the root component
    CombinedAxisMesh->SetupAttachment(RootComponent);
    AxisOneMesh->SetupAttachment(RootComponent);
    AxisTwoMesh->SetupAttachment(RootComponent);
    AxisThreeMesh ->SetupAttachment(RootComponent);

    // Initialize Blocks
    Blocks.SetNum(Size * Size * VerticalHeight);

    // Mesh Settings
    //CombinedAxisMesh->SetCastShadow(false);
    //AxisOneMesh->SetCastShadow(false);
    //AxisTwoMesh->SetCastShadow(false);
    AxisThreeMesh->SetCastShadow(false);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("Material'/Game/Cubedeps/Basecube.Basecube'"));
    if (Material.Succeeded())
    {
        BaseMaterial = Material.Object;
    }


   
}

void AChunk::ApplyAxisOne() 
{
    

    TArray<int32> ColorAttributeIndices;
    ColorAttributeIndices.SetNum(AxisOneVertexColors.Num());

    // Append vertices to the dynamic mesh

    // Append color elements to the color overlay and store the returned indices
    for (int32 i = 0; i < AxisOneVertexColors.Num(); ++i) {
        FColor Color = AxisOneVertexColors[i];
        FVector4f ColorVector(Color.R / 255.0f, Color.G / 255.0f, Color.B / 255.0f, 1.0f);
        ColorAttributeIndices[i] = DynamicMeshAxisOne.Attributes()->PrimaryColors()->AppendElement(ColorVector);
    }

    // Get the color overlay
    UE::Geometry::FDynamicMeshColorOverlay* ColorOverlay = DynamicMeshAxisOne.Attributes()->PrimaryColors();

    // Iterate over the base mesh triangles and set the color attribute indices for each triangle
    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisOne.TriangleCount(); ++TriangleIndex) {
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
    }

    // Copy the color overlay to the primary colors attribute
    DynamicMeshAxisOne.Attributes()->PrimaryColors()->Copy(*ColorOverlay);
      

   

            for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisOne.TriangleCount(); ++TriangleIndex) {
                UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisOne.GetTriangle(TriangleIndex);
                AxisOneNormalOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
            }
            for (int32 i = 0; i < AxisOneVertexColors.Num(); ++i) {
                DynamicMeshAxisOne.SetVertexColor(i, FVector3f(AxisOneVertexColors[i]));
            }
           // Dont know what the 'CopyVertex' functions do but they seem work
     
            // Somehow add color here?
            AxisOneMesh->GetDynamicMesh()->SetMesh(MoveTemp(DynamicMeshAxisOne));
            AxisOneMesh->bEnableAutoLODGeneration = true;
            AxisOneMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            AxisOneMesh->EnableComplexAsSimpleCollision();
            AxisOneMesh->SetMaterial(0, BaseMaterial);
            collisionActive = false;
}

void AChunk::ApplyAxisTwo()
{

    TArray<int32> ColorAttributeIndices;
    ColorAttributeIndices.SetNum(AxisTwoVertexColors.Num());

    // Append vertices to the dynamic mesh

    // Append color elements to the color overlay and store the returned indices
    for (int32 i = 0; i < AxisTwoVertexColors.Num(); ++i) {
        FColor Color = AxisTwoVertexColors[i];
        FVector4f ColorVector(Color.R / 255.0f, Color.G / 255.0f, Color.B / 255.0f, 1.0f);
        ColorAttributeIndices[i] = DynamicMeshAxisTwo.Attributes()->PrimaryColors()->AppendElement(ColorVector);
    }

    // Get the color overlay
    UE::Geometry::FDynamicMeshColorOverlay* ColorOverlay = DynamicMeshAxisTwo.Attributes()->PrimaryColors();

    // Iterate over the base mesh triangles and set the color attribute indices for each triangle
    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisTwo.TriangleCount(); ++TriangleIndex) {
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
    }

    // Copy the color overlay to the primary colors attribute
    DynamicMeshAxisTwo.Attributes()->PrimaryColors()->Copy(*ColorOverlay);





    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisTwo.TriangleCount(); ++TriangleIndex) {
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisTwo.GetTriangle(TriangleIndex);
        AxisTwoNormalOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
    }
    for (int32 i = 0; i < AxisTwoVertexColors.Num(); ++i) {
        DynamicMeshAxisTwo.SetVertexColor(i, FVector3f(AxisTwoVertexColors[i]));
    }
    // Dont know what the 'CopyVertex' functions do but they seem work
 
    // Somehow add color here?
    AxisTwoMesh->GetDynamicMesh()->SetMesh(MoveTemp(DynamicMeshAxisTwo));
    AxisTwoMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    AxisTwoMesh->EnableComplexAsSimpleCollision();
    AxisTwoMesh->SetMaterial(0, BaseMaterial);
    collisionActive = false;

}
void AChunk::ApplyAxisThree()
{

	TArray<int32> ColorAttributeIndices;
	ColorAttributeIndices.SetNum(AxisThreeVertexColors.Num());

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
    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisThree.TriangleCount(); ++TriangleIndex) {
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
	}

	// Copy the color overlay to the primary colors attribute
	DynamicMeshAxisThree.Attributes()->PrimaryColors()->Copy(*ColorOverlay);

 


    for (int32 TriangleIndex = 0; TriangleIndex < DynamicMeshAxisThree.TriangleCount(); ++TriangleIndex) {
        UE::Geometry::FIndex3i TriangleVertexIndices = DynamicMeshAxisThree.GetTriangle(TriangleIndex);
        AxisThreeNormalOverlay->SetTriangle(TriangleIndex, TriangleVertexIndices);
    }
    for (int32 i = 0; i < AxisThreeVertexColors.Num(); ++i) {
        DynamicMeshAxisThree.SetVertexColor(i, FVector3f(AxisThreeVertexColors[i]));
    }
    // Dont know what the 'CopyVertex' functions do but they seem work

    // Somehow add color here?
    AxisThreeMesh->SetMaterial(0, BaseMaterial);
    AxisThreeMesh->GetDynamicMesh()->SetMesh(MoveTemp(DynamicMeshAxisThree));
    AxisThreeMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    AxisThreeMesh->EnableComplexAsSimpleCollision();
    collisionActive = false;
}


void AChunk::ApplyCombinedAxis()
{

    TArray<int32> ColorAttributeIndices;
    ColorAttributeIndices.SetNum(VertexColors.Num());

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
  //  //ApplyCombinedAxis();
  //  int meshApplicationDelay = 0;
  //  while (!finishedApplyingMesh) {
  //      meshApplicationDelay++;
  //      if (meshApplicationDelay == 1) {
  //          UE_LOG(LogTemp, Display, TEXT("applying mesh one %d"),meshApplicationDelay);
  //          ApplyAxisOne();
		//}
  //      else if (meshApplicationDelay == 5000) {
  //          UE_LOG(LogTemp, Display, TEXT("applying mesh two %d"),meshApplicationDelay);
		//	ApplyAxisTwo();
		//}
  //      else if (meshApplicationDelay == 10000) {
  //          UE_LOG(LogTemp, Display, TEXT("applying mesh three %d"),meshApplicationDelay);
		//	ApplyAxisThree();
		//}
  //      else if(meshApplicationDelay > 10000) {
		//	finishedApplyingMesh = true;
  //      }
  //  }  
}

void AChunk::ModifyVoxel(const FIntVector Position, const EBlock Block)
{
    if (Position.X >= Size || Position.Y >= Size || Position.Z >= VerticalHeight || Position.X < 0 || Position.Y < 0 || Position.Z < 0) return;

    ModifyVoxelData(Position, Block);

    ClearMesh();

    GenerateMesh();

    ApplyMesh();

    // Removes the entire blocks array from memory
    // // 10.3 gigs memeory used when NOT destroying this array
    //Blocks.Empty(0);
    NoiseNumbers.Empty(0);
    QuadDataQueueOne.Empty();

    QuadDataQueueTwo.Empty();
    QuadDataQueueThree.Empty();
    TaskDependencies.Empty(0);
 /*   VertexColors.Empty();
    VertexData.Empty();
    TriangleData.Empty();
    NormalData.Empty();
    UVData.Empty();*/


    /*
    Hacky way to clear the memory of the arrays if concerns about not deallocating correctly
    TArray<FVector>().Swap(VertexData);
TArray<FVector>().Swap(NormalData);
TArray<int>().Swap(TriangleData);
TArray<FVector2D>().Swap(UVData);

    */

}

// Called when the game starts or when spawned
void AChunk::BeginPlay()
{
    Super::BeginPlay();

    // Assuming you're interested in the pawn of player 0 (the first player)
     PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

    // Cast to your third-person character class if needed
    //AMyPawn* MyCharacter = Cast<AMyPawn>(PlayerPawn);

}



void AChunk::Tick(float DeltaTime)
{
    // Calculate the distance between this actor and the player
    float DistanceToPlayer = FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
    // Increment your frame counter
    frameCounter++;
    if (frameCounter < 500) {
        // Perform a portion of your logic here
        if (frameCounter == 2) {
            float TimeToDisplay1 = 5.0f; // Display the message for 5 seconds.
            FColor DisplayColor1 = FColor::Red; // Display the message in red.
            float WorldTime = GetWorld()->GetTimeSeconds();
            FString DebugMessage = FString::Printf(TEXT("blocks"));
            GenerateBlocks();
        }
        else if (frameCounter == 50) {
          
            GenerateMesh();
        }
        else if (frameCounter == 100) {
            ApplyMesh();
        }
        else {
			// PrimaryActorTick.bCanEverTick = false;
		}   
    }
    if (isApplyingMeshReady) 
    {
        meshCounter++;
		  // Perform a portion of your logic here
        if (meshCounter == 2) {
            ApplyAxisOne();
        }
        if (meshCounter == 80) {
            ApplyAxisTwo();
            optionalMeshApplies = true;
        }
        else if (meshCounter == 170) {
            ApplyAxisThree();
           
        }
        else {
           // PrimaryActorTick.bCanEverTick = false;
        }
	}


    if (PlayerPawn)
    {
      

        // Check if the player is within 5,000 units
        if (DistanceToPlayer <= 20000.0f && !collisionActive)
        {
            // The player is within 20,000 units, perform your action here
            // For example, print a message to the screen
            //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Player is within 10000 units!"));
            AxisOneMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
            AxisOneMesh->EnableComplexAsSimpleCollision();

            AxisTwoMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
            AxisTwoMesh->EnableComplexAsSimpleCollision();

            AxisThreeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
            AxisThreeMesh->EnableComplexAsSimpleCollision();
            collisionActive = true;
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

void AChunk::ModifyVoxelData(const FIntVector Position, const EBlock Block)
{
    const int Index = GetBlockIndex(Position.X, Position.Y, Position.Z);

    Blocks[Index] = Block;
}

void AChunk::ClearMesh()
{

    //VertexCount = 0;

    //VertexData.Empty();
    //TriangleData.Empty();
    //NormalData.Empty();
    //UVData.Empty();
    //VertexColors.Empty();

    UE_LOG(LogTemp, Display, TEXT("CLEARING MESH"));
}

void AChunk::SetupBiomeNoise()
{

    std::vector<float> noiseOutput(Size * Size * VerticalHeight);
    auto fnSimplex = FastNoise::New<FastNoise::Simplex>();
    auto fnFractal = FastNoise::New<FastNoise::FractalFBm>();

    fnFractal->SetSource(fnSimplex);
    fnFractal->SetOctaveCount(5);
    fnFractal->SetGain(0.5f);
    //Size Size VerticalHeight?? Instead of 0,0,0
    fnFractal->GenUniformGrid3D(noiseOutput.data(), 0, 0, 0, Size, Size, VerticalHeight, 0.1f, 1337);


    float* noiseArray = noiseOutput.data();

    float randomPointTen = QueryNoiseValue(noiseOutput, 10, 10, 10, Size, VerticalHeight);
    float randomPointNine = QueryNoiseValue(noiseOutput, 9, 9, 9, Size, VerticalHeight);
    float randomPointEight = QueryNoiseValue(noiseOutput, 8, 8, 8, Size, VerticalHeight);
    UE_LOG(LogTemp, Warning, TEXT("3dNoiseSize:%d   Eight:%f   Nine:%f  Ten:%f"), noiseOutput.size(), randomPointEight, randomPointNine, randomPointTen);
    //   for (int x = 0; x < Size; x++) {
    //       for (int y = 0; y < Size; y++) {
    //           for (int z = 0; z < VerticalHeight; z++) {
       //			int index = GetBlockIndex(x, y, z);
       //			Blocks[index] = EBlock::Air;
    //               if (noiseArray[index] > 0.5f) {
       //				Blocks[index] = EBlock::Stone;
       //			}
       //		}
       //	}
       //}
}
float AChunk::QueryNoiseValue(const std::vector<float>& noiseOutput, int x, int y, int z, int Width, int Depth) {


    int index = z * (Width * Width) + y * Width + x;
    if (index > noiseOutput.size() - 1) {
        return 0;
    }
    return noiseOutput[index];
}


void AChunk::GenerateBlocks()
{

    auto biomeNoiseMap = new FastNoiseLite();
    biomeNoiseMap->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    biomeNoiseMap->SetFrequency(1.1f);


    HillyPlains = new FastNoiseLite();
    HillyPlains->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    HillyPlains->SetFractalOctaves(1.2f);// Seems to have no effect with a 
    HillyPlains->SetFrequency(0.006f);// Higher values seems to make mountains more jagged and extremely laggy
    HillyPlains->SetFractalLacunarity(0.10f);
    HillyPlains->SetFractalGain(1);
    HillyPlains->SetFractalType(FastNoiseLite::FractalType_FBm);

    PlainsNoise = new FastNoiseLite();
    PlainsNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    PlainsNoise->SetFractalOctaves(1);// Seems to have no effect with a
    PlainsNoise->SetFrequency(0.002f);// Higher values seems to make mountains more jagged and extremely laggy
    PlainsNoise->SetFractalLacunarity(0.5f);
    PlainsNoise->SetFractalGain(1);
    PlainsNoise->SetFractalType(FastNoiseLite::FractalType_FBm);

    float baseMultiplier = VerticalHeight * 4;

    int amplitude = 4; // The highest point in the wave
    //int period = 2 * amplitude; // The number of points in one complete wave
    //int iterations = 20; // The number of points to generate

    const auto Location = GetActorLocation();
    const float baseHeight = VerticalHeight / 4.0f;
    TArray<float> NoiseMap;
    int TotalElements = Size * Size * VerticalHeight;
    NoiseMap.SetNum(TotalElements);

    // 0 equals hilly
    //1 equals river
    int biomeNumber = 0;

    /*  float biomeNoise;
      float combinedNoise;
      float normalizedNoise;
      float curvedNoise;
      int index;*/
      // Ensure NoiseMap has been initialized to the right dimensions before this
    // Assuming biomeNoiseMap is correctly initialized and configured
    TArray<TFunction<void()>> NoiseMapOperations;
    // Biome transition parameters
    float biomeTransitionFrequency = 0.003f; // adjust for larger or smaller biomes
    float biomeTransitionScale = Size * 0.5f; // Scale of the biome transition in world units

    for (int x = 0; x < Size; x++)
    {
        NoiseMapOperations.Add([=, &NoiseMap]()
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
                        int biomeNumber;
                        float actualHeight;

                        // Determine biome based on biomeFactor
                        if (biomeFactor > 0.2f)
                        {
                            // Hilly biome
                            combinedNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                            biomeNumber = 0;
                            actualHeight = VerticalHeight;


                            float normalizedNoise = (combinedNoise + 1) / 2.0f;
                            float curvedNoise = FMath::Pow(normalizedNoise, 2);
                            int index = x + y * Size + z * Size * Size;
                            NoiseMap[index] = curvedNoise * actualHeight;
                        }
                        else if (biomeFactor >= -0.2f && biomeFactor <= 0.2f)
                        {
                            // Transition biome
                            // Interpolate between hilly and plains based on biomeFactor
                            float transitionFactor = (biomeFactor + 0.2f) / 0.4f; // Normalize to 0-1 range
                            float hillyNoise = HillyPlains->GetNoise(worldXpos, worldYpos, worldZpos);
                            float plainsNoise = PlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                            combinedNoise = FMath::Lerp(plainsNoise, hillyNoise, transitionFactor);
                            biomeNumber = 2; // Transition biome number

                            // Interpolate actualHeight for a smooth transition
                            float hillyHeight = VerticalHeight;
                            float plainsHeight = VerticalHeight / 4;
                            float smoothTransitionFactor = FMath::SmoothStep(0.0f, 1.0f, transitionFactor);
                            actualHeight = FMath::Lerp(plainsHeight, hillyHeight, smoothTransitionFactor);


                            float normalizedNoise = (combinedNoise + 1) / 2.0f;
                            float curvedNoise = FMath::Pow(normalizedNoise, 2);
                            int index = x + y * Size + z * Size * Size;
                            NoiseMap[index] = curvedNoise * actualHeight;
                        }
                        else
                        {
                            // Plains biome
                            combinedNoise = PlainsNoise->GetNoise(worldXpos, worldYpos, worldZpos);
                            biomeNumber = 1;
                            actualHeight = VerticalHeight / 4;


                            float normalizedNoise = (combinedNoise + 1) / 2.0f;
                            float curvedNoise = FMath::Pow(normalizedNoise, 2);
                            int index = x + y * Size + z * Size * Size;
                            NoiseMap[index] = curvedNoise * actualHeight;
                        }

                    }
                }
            });
    }
    ParallelFor(NoiseMapOperations.Num(), [&](int32 Index)
        {
            NoiseMapOperations[Index]();
        }, EParallelForFlags::None);


    //float combinedNoise;
    TArray<TFunction<void()>> BlockOperations;
    //ParallelFor(Size, [&](int32 x) {
          for (int x = 0; x < Size; x++){
              BlockOperations.Add([=, &NoiseMap]()
                  {
        for (int y = 0; y < Size; ++y) {

         
            for (int z = 0; z < VerticalHeight; z++) {
                int Index = x + y * Size + z * Size * Size;
                int Height = static_cast<int>(NoiseMap[Index]);
        
                EBlock BlockType = EBlock::Air;

                if (z < Height - 1) {
                    BlockType = biomeNumber == 0 ? EBlock::Stone : EBlock::Dirt;
                }
                else if (z == Height || z == Height - 1) {

                    if (biomeNumber == 0) {
						BlockType = EBlock::Grass;
					}
                    else if (biomeNumber == 1) {
						BlockType = EBlock::SnowGrass;
					}
                    else if (biomeNumber == 2) {//transition
						BlockType = EBlock::Sand;
					}

                }

                Blocks[GetBlockIndex(x, y, z)] = BlockType;
            }
           
        }
        });
        }//, EParallelForFlags::BackgroundPriority);
    // RespawnTrees();

         ParallelFor(NoiseMapOperations.Num(), [&](int32 Index)
             {
                BlockOperations[Index]();
             }, EParallelForFlags::BackgroundPriority);
    delete HillyPlains;
    delete biomeNoiseMap;
}

void AChunk::RespawnTrees() {
    FRotator TreeSpawnRotation = FRotator::ZeroRotator;
    FActorSpawnParameters TreeSpawnParams;
    TreeSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::DontSpawnIfColliding;
    for (int i = 0; i < Trees.Num(); i++) {
        //UE_LOG(LogTemp, Warning, TEXT("Respawning trees"));
        actorData myActorData = Trees[i];

        AActor* NewTreeActor = GetWorld()->SpawnActor<AActor>(MyTreeBPClass, myActorData.Location, myActorData.Rotation, TreeSpawnParams);
    }
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




FColor AChunk::GetColorFromBlock(EBlock Block, FIntVector Location)
{
    // Convert FIntVector to FVector for noise calculation
    FVector ConvertedLocation = FVector(Location.X, Location.Y, Location.Z) * 0.1f; // Scale to adjust frequency
    float NoiseValue = FMath::PerlinNoise3D(ConvertedLocation);
    NoiseValue = (NoiseValue + 1.0f) * 0.5f; // Normalize to 0-1
    switch (Block)
    {
    case EBlock::Null:
        return FColor();
        break;
    case EBlock::Air:
        return FColor();
        break;
    case EBlock::Stone:
        return FColor::FromHex("#505050");
        break;
    case EBlock::Dirt:
        return FColor::FromHex("#31A0C3");//blue temporarily to test river
        break;
    case EBlock::Grass:

        // Map the normalized noise value to different shades of green
        if (NoiseValue < 0.33f)
        {
            return FColor::FromHex("#4CBB17"); // Slightly Lighter Green than the base
        }
        else if (NoiseValue < 0.66f)
        {
            return FColor::FromHex("#228B22"); // Intermediate Green, closer to the base
        }
        else
        {
            return FColor::FromHex("#DFFF00"); // Darkest Green as the base
        }
        break;
    case EBlock::SnowGrass:
        return FColor::FromHex("#F3F6FB");
        break;
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

                  
                             if (outOfBounds && CurrentBlock == EBlock::Stone)
                             {
                                 CompareBlock = EBlock::Stone;
                          
                                 outOfBounds = false;
                             }

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
                        for(int j =0; j< Axis2Limit; j++)
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


    // 2 threads per aixs? one thread does one half of arrays one thread does the other half, so one thread for axis one would ot trianbles and color
    // and other thread could do normal uv something like that? would have to  makre sure everythgin was applied in correct order

    FGraphEventRef TaskOne = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
       {
            FQuadData QuadData;
            while (QuadDataQueueOne.Dequeue(QuadData))
            {
                CreateQuadOne(QuadData.CurrentMask, QuadData.AxisMask,
                    QuadData.ChunkItr,
                    QuadData.ChunkItr + QuadData.DeltaAxis1,
                    QuadData.ChunkItr + QuadData.DeltaAxis2,
                    QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                    QuadData.Block);
            }



       }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);
   

 /*   ParallelFor(QuadDataArrayOne.Num(), [&](int32 Index)
        {
			CreateQuadOne(QuadDataArrayOne[Index].CurrentMask, QuadDataArrayOne[Index].AxisMask,
            				QuadDataArrayOne[Index].ChunkItr,
                            QuadDataArrayOne[Index].ChunkItr + QuadDataArrayOne[Index].DeltaAxis1,
                            QuadDataArrayOne[Index].ChunkItr + QuadDataArrayOne[Index].DeltaAxis2,
                            QuadDataArrayOne[Index].ChunkItr + QuadDataArrayOne[Index].DeltaAxis1 + QuadDataArrayOne[Index].DeltaAxis2,
                            QuadDataArrayOne[Index].Block);
		}, EParallelForFlags::BackgroundPriority);*/


            
           
    FGraphEventRef TaskTwo = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
        {
             FQuadData QuadData;
            while (QuadDataQueueTwo.Dequeue(QuadData))
            {
               
                CreateQuadTwo(QuadData.CurrentMask, QuadData.AxisMask,
                    QuadData.ChunkItr,
                    QuadData.ChunkItr + QuadData.DeltaAxis1,
                    QuadData.ChunkItr + QuadData.DeltaAxis2,
                    QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                    QuadData.Block);
            }
       }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);
   


 
            FQuadData QuadData;

            while (QuadDataQueueThree.Dequeue(QuadData))
            {
               
                CreateQuadThree(QuadData.CurrentMask, QuadData.AxisMask,
                    QuadData.ChunkItr,
                    QuadData.ChunkItr + QuadData.DeltaAxis1,
                    QuadData.ChunkItr + QuadData.DeltaAxis2,
                    QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                    QuadData.Block);
            }



    finishedCreateQuad = true;

}

void AChunk::CreateQuadOne(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block)
{

    FScopeLock Lock(&CreateQuadLockOne);
    const auto Normal = FVector(AxisMask * Mask.Normal);



    EBlock BlockMaterial = Mask.Block;
    FColor BlockColor = GetColorFromBlock(BlockMaterial, V1);
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
void AChunk::CreateQuadTwo(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block)
{

    FScopeLock Lock(&CreateQuadLockTwo);
    const auto Normal = FVector(AxisMask * Mask.Normal);


    EBlock BlockMaterial = Mask.Block;
    FColor BlockColor = GetColorFromBlock(BlockMaterial, V1);

  
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
void AChunk::CreateQuadThree(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block)
{

    FScopeLock Lock(&CreateQuadLockThree);
    const auto Normal = FVector(AxisMask * Mask.Normal);

    EBlock BlockMaterial = Mask.Block;
    FColor BlockColor = GetColorFromBlock(BlockMaterial, V1);


 
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




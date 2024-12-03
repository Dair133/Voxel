// // Fill out your copyright notice in the Description page of Project Settings.
   //FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
          //   {
          //        Code to be executed in the worker thread

          //        ...

          //        Code executed in the worker thread is complete
          //   }, TStatId(), nullptr, ENamedThreads::GameThread);
#include "Chunk.h"
#include <system_error>
#include <FastNoise/FastNoise.h>
#include <VoxelProject/FastNoiseLite.h>
//#include "Octree/FastNoiseLite.h"
//#include "Octree/Octree.h"
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

    Mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");

    //Initialize Blocks
    Blocks.SetNum(Size * Size * VerticalHeight);
    //Blocks.Init(EBlock::Air, Size * Size * VerticalHeight);

    // Mesh Settings
    Mesh->SetCastShadow(false);

    // Set Mesh as Root
    SetRootComponent(Mesh);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("Material'/Game/CUBEGENERATIONMAP/BASECUBE.BASECUBE'"));
    if (Material.Succeeded())
    {
        // UE_LOG(LogTemp, Warning, TEXT("Suceeded in finding obj"));
        BaseMaterial = Material.Object;
    }


    //static ConstructorHelpers::FObjectFinder<UStaticMesh> MyTreeFinder(TEXT("StaticMesh'/Game/CUBEGENERATIONMAP/TreeTest.TreeTest'"));
   // if (MyTreeFinder.Succeeded())
   // {
   //     MyTreeMesh = MyTreeFinder.Object;
   // }
  //  else {
  //          UE_LOG(LogTemp, Warning, TEXT("Failed to find TreeTest"));
  //  }

    //static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/TreeTest.TreeTest'"));
    //// static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/Objects/Trees/Tree01.Tree01'"));
    //if (MyTreeBlueprintFinder.Succeeded())
    //{
    //    MyTreeBPClass = (UClass*)MyTreeBlueprintFinder.Object->GeneratedClass;
    //    //  UE_LOG(LogTemp, Warning, TEXT("Blueprint loaded successfully."));
    //}
    //else
    //{
    //    UE_LOG(LogTemp, Error, TEXT("Failed to load blueprint."));
    //}
    //static ConstructorHelpers::FObjectFinder<UBlueprint> MyGrassBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/Objects/Misc/Grass.Grass'"));
    ////MyGrassBPClass = (UClass*)MyGrassBlueprintFinder.Object->GeneratedClass;


}

void AChunk::ModifyVoxel(const FIntVector Position, const EBlock Block)
{
    if (Position.X >= Size || Position.Y >= Size || Position.Z >= VerticalHeight || Position.X < 0 || Position.Y < 0 || Position.Z < 0) return;

    ModifyVoxelData(Position, Block);

    ClearMesh();

    GenerateMesh();

    ApplyMesh();

}

// Called when the game starts or when spawned
void AChunk::BeginPlay()
{
    Mesh->SetMaterial(0, BaseMaterial);


    Super::BeginPlay();

}



void AChunk::Tick(float DeltaTime)
{

    // Increment your frame counter
    FrameCounter++;
 
    if(FrameCounter < 500){
    // Perform a portion of your logic here
    if (FrameCounter == 2) {
        GenerateBlocks();
    }
    else if (FrameCounter == 80) {
        GenerateMesh();
    }
    else if (FrameCounter == 160) {
        ApplyMesh();
    }
    else {
        PrimaryActorTick.bCanEverTick = false;
    }
    }
}


void AChunk::ModifyVoxelData(const FIntVector Position, const EBlock Block)
{
    const int Index = GetBlockIndex(Position.X, Position.Y, Position.Z);

    Blocks[Index] = Block;
}

void AChunk::ClearMesh()
{

    VertexCount = 0;

    VertexData.Empty();
    TriangleData.Empty();
    NormalData.Empty();
    UVData.Empty();
    VertexColors.Empty();

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
    fnFractal->GenUniformGrid3D(noiseOutput.data(), 0, 0, 0, Size,Size,VerticalHeight, 0.1f, 1337);
 
  
    float* noiseArray = noiseOutput.data();

    float randomPointTen = QueryNoiseValue(noiseOutput, 10, 10, 10, Size, VerticalHeight);
    float randomPointNine = QueryNoiseValue(noiseOutput, 9, 9, 9, Size, VerticalHeight);
    float randomPointEight = QueryNoiseValue(noiseOutput, 8, 8, 8, Size, VerticalHeight);
    UE_LOG(LogTemp, Warning, TEXT("3dNoiseSize:%d   Eight:%f   Nine:%f  Ten:%f"),noiseOutput.size(), randomPointEight,randomPointNine,randomPointTen);
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
      std::vector<float> noiseOutput(Size * Size * VerticalHeight);
      //log size of noiseOutput
      
    auto fnSimplex = FastNoise::New<FastNoise::Simplex>();
    auto fnFractal = FastNoise::New<FastNoise::FractalFBm>();

    fnFractal->SetSource(fnSimplex);
    fnFractal->SetOctaveCount(1);
    fnFractal->SetGain(0.1f);
    //Size Size VerticalHeight?? Instead of 0,0,0
    fnFractal->GenUniformGrid3D(noiseOutput.data(), 0, 0, 0, Size,Size,VerticalHeight, 0.1f, 1337);
 
  
  
    float* noiseArray = noiseOutput.data();

    int numTrees = 0;

    MainNoise = new FastNoiseLite();
    MainNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    //Fractal type ridged makes terrain more like swiss cheezer and very cavey, could be cool canyon if done right?


    //MainNoise->SetFractalType(FastNoiseLite::FractalType_FBm);// Changing types seems to have significant effect on terrain
    MainNoise->SetFractalOctaves(0.01);// Seems to have no effect
    MainNoise->SetFrequency(0.015);// Higher values seems to make mountains more jagged and extremely laggy
    MainNoise->SetFractalLacunarity(0.01f);
    MainNoise->SetFractalGain(0.01);
    //MainNoise->SetFractalType(FastNoiseLite::FractalType_FBm);

    FastNoiseLite* ElevationNoise = new FastNoiseLite();
    FastNoiseLite* FeatureNoise = new FastNoiseLite();
    FastNoiseLite* BiomeNoise = new FastNoiseLite();

    ElevationNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    ElevationNoise->SetFractalType(FastNoiseLite::FractalType_FBm);

    FeatureNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    FeatureNoise->SetFractalType(FastNoiseLite::FractalType_FBm);

    BiomeNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    BiomeNoise->SetFrequency(0.001f);

    FastNoiseLite* FlatTerrainNoise = new FastNoiseLite();

    FlatTerrainNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    FlatTerrainNoise->SetFrequency(2.0f); // Frequency is set to 0, effectively disabling variation
    FlatTerrainNoise->SetFractalType(FastNoiseLite::FractalType_None);

    FastNoiseLite* RandomNoise = new FastNoiseLite();
    RandomNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    RandomNoise->SetFrequency(0.0039f);  // The lower frequency will create larger, more gradual changes
    RandomNoise->SetFractalOctaves(1); // Only one octave for simplicity
    RandomNoise->SetFractalLacunarity(2.0f);
    RandomNoise->SetFractalGain(0.9f);


    float baseMultiplier = VerticalHeight * 4;

    int amplitude = 4; // The highest point in the wave
    //int period = 2 * amplitude; // The number of points in one complete wave
    //int iterations = 20; // The number of points to generate


    const auto Location = GetActorLocation();
    const float baseHeight = VerticalHeight / 4.0f;  //

    std::random_device rd;
    std::mt19937 gen(rd());

    // Uniform distribution between 1 and 100
    std::uniform_int_distribution<> distrib(1, 200);

    std::random_device rd2;
    std::mt19937 gen2(rd2());

    // Uniform distribution between 1 and 100
    std::uniform_int_distribution<> distrib2(1, 130);

    ParallelFor(Size, [&](int32 x)
        {
   // for (float x = 0; x < Size; ++x) {
        for (int y = 0; y < Size; ++y)
        {
            // Noise values produced are usually very small, so we multiply them by a large number to make them more visible, if very small decimal then
            // terrain will be totally flat despite alid noise being generated


     

            float BiomeValue;
      


          


            float CombinedNoise;
            BiomeValue = -0.3;
            if (BiomeValue < -0.2f) // Mountain biome
            {
                
              
            }
            else if (BiomeValue > 0.2f) // Flat plains biome with small bumps
            {

            }
            else // Transition biome
            {

            }
            //int value = std::round(std::abs(std::sin(i * (2.0 * M_PI / period))) * amplitude) + 1;
            float BaseHeight = 2.0f;
          
           /* if (CombinedNoise < BaseHeight)
            {
				CombinedNoise = BaseHeight;
			}*/
       

            // This line right here prevents an array out of bounds error, needs to be investigated
            //CombinedNoise = BaseHeight;
            //CombinedNoise += 2;
          
            //int Height = FMath::Clamp(CombinedNoise, 0, VerticalHeight);
          
          // Blocks[GetBlockIndex(x, y, Height - 1)] = EBlock::Grass;


           
            for (int z = 0; z < VerticalHeight; z++)
            {
                float Xpos = (float)x;
                float Ypos = (float)y;
                float Zpos = (float)z;

                // Following coordinate manipulations is what allows the 
                Xpos = (x * 100 + Location.X) / 100;
                Ypos = (y * 100 + Location.Y) / 100;
                Zpos = (z * 100 + Location.Z) / 100;
                //UE_LOG(LogTemp, Warning, TEXT("X:%d     Y:%d     Z:%d"), x,y,z);
                CombinedNoise = MainNoise->GetNoise(Xpos, Ypos, Zpos);
                CombinedNoise = CombinedNoise * 70;
                //UE_LOG(LogTemp, Warning, TEXT("Combine nouse IS:%f"), CombinedNoise);
                if (CombinedNoise > VerticalHeight) 
                {
                   CombinedNoise = VerticalHeight;
                }



                if (CombinedNoise < 0)
                {
					CombinedNoise = CombinedNoise * -1;
				}
                //UE_LOG(LogTemp, Warning, TEXT("Combine nouse IS:%f"), CombinedNoise);
                     int Height = (int)CombinedNoise;
                //UE_LOG(LogTemp, Warning, TEXT("HEIGHT IS:%d"), Height);
                if (z < Height) {
                  Blocks[GetBlockIndex(x, y, z)] = EBlock::Stone;
                }

                if (z > Height) {
                   Blocks[GetBlockIndex(x, y, z)] = EBlock::Air;
                }
            }
     
            //for (int z = Height; z < VerticalHeight; z++)
            //{

            //    Blocks[GetBlockIndex(x, y, z)] = EBlock::Air;

            //    //if(z % 25 == 0)
            //   // GetWorld()->GetTimerManager().SetTimer(MyTimerHandle, this, &AChunk::GenerateBlocks, 0.15f, false);
            //}
        }

    }, EParallelForFlags::PumpRenderingThread);
   // RespawnTrees();



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

void AChunk::ApplyMesh()
{


    FScopeLock Lock(&CriticalSection);
    Mesh->CreateMeshSection(0, VertexData, TriangleData, NormalData, UVData, VertexColors, TArray<FProcMeshTangent>(), true);
    Lock.Unlock();
}



int AChunk::GetBlockIndex(int x, int y, int z) const
{
    return z * Size * Size + y * Size + x;
}

EBlock AChunk::GetBlock(FIntVector Index) const
{
    if (Index.X >= Size || Index.Y >= Size || Index.Z >= VerticalHeight || Index.X < 0 || Index.Y < 0 || Index.Z < 0)
    {
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
    MainNoise->SetFrequency(0.008f);
    MainNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    MainNoise->SetFractalOctaves(6);
    MainNoise->SetFractalLacunarity(2.0f);
    MainNoise->SetFractalGain(0.2f);
    FVector ActorLocation = GetActorLocation();
    const float Xpos = Location.X + ActorLocation.X / 3200;
    const float Ypos = Location.Y + ActorLocation.Y / 3200;

    float Alpha = (MainNoise->GetNoise(Xpos * 1, Ypos * 1) + 1) * 0.5f;

    float r, g, b;

    switch (Block)
    {
    case EBlock::Null:
        return FColor();
        break;
    case EBlock::Air:
        return FColor();
        break;
    case EBlock::Stone:
        // for grey stone, we want equal amount of red, green and blue
        r = g = b = Alpha * 255;
        return FColor(r, g, b, 255.f);
        break;
    case EBlock::Dirt:
        return FColor::FromHex("#9B7653");
        break;
    case EBlock::Grass:
    {
        // Define the base green color (a vibrant middle green)
        FLinearColor BaseGreen = FColor::FromHex("#00FF00");

        // Define how much the color should vary from the base color (lighter and darker variations)
        FLinearColor DarkerVariation = FColor::FromHex("#007000");
        FLinearColor LighterVariation = FColor::FromHex("#7FFF00");

        // Calculate a sine-based oscillation factor, ranging from -1 to 1
        float Oscillation = FMath::Sin(Alpha * 2.0f * PI + FMath::FRandRange(0.0f, PI));

        // Depending on the Oscillation value, choose a range for interpolation
        FLinearColor LowerBound;
        FLinearColor UpperBound;

        if (Oscillation < 0)
        {
            // If Oscillation is negative, we are in the 'darker' half of the cycle
            LowerBound = DarkerVariation;
            UpperBound = BaseGreen;
        }
        else
        {
            // If Oscillation is positive, we are in the 'lighter' half of the cycle
            LowerBound = BaseGreen;
            UpperBound = LighterVariation;
        }

        // Adjust Oscillation to a 0 to 1 range for interpolation
        Oscillation = Oscillation * 0.5f + 0.5f;

        // Interpolate between the chosen color bounds based on the adjusted oscillation
        FLinearColor InterpolatedColor = FMath::Lerp(LowerBound, UpperBound, Oscillation);

        return InterpolatedColor.ToFColor(true);
    }
    break;
    break;
    case EBlock::SnowGrass:
        return FColor::FromHex("#F3F6FB");
        break;
    default:
        return FColor();
        break;
    }
}

void AChunk::GenerateMesh()
{


    int iterationCount = 0;
    iterationCount++;
    ParallelFor(3, [&](int32 Axis)
        {

            const int Axis1 = (Axis + 1) % 3;
            const int Axis2 = (Axis + 2) % 3;

            int MainAxisLimit = (Axis == 2 ? VerticalHeight : Size);
            int Axis1Limit = (Axis1 == 2 ? VerticalHeight : Size);
            int Axis2Limit = (Axis2 == 2 ? VerticalHeight : Size);

            auto DeltaAxis1 = FIntVector::ZeroValue;
            auto DeltaAxis2 = FIntVector::ZeroValue;

            auto ChunkItr = FIntVector::ZeroValue;
            auto AxisMask = FIntVector::ZeroValue;

            AxisMask[Axis] = 1;

            TArray<FMask> Mask;
            Mask.SetNumUninitialized(Axis1Limit * Axis2Limit);
        
            // check each slice
            //convert the below loop into a parallel for loop


            for (ChunkItr[Axis] = -1; ChunkItr[Axis] < MainAxisLimit; )
            {

                int N = 0;

                for (ChunkItr[Axis2] = 0; ChunkItr[Axis2] < Axis2Limit; ++ChunkItr[Axis2])
                {
                    for (ChunkItr[Axis1] = 0; ChunkItr[Axis1] < Axis1Limit; ++ChunkItr[Axis1])
                    {


                        const auto& CurrentBlock = GetBlock(ChunkItr);
                        const auto& CompareBlock = GetBlock(ChunkItr + AxisMask);

                        const bool CurrentBlockOpaque = CurrentBlock != EBlock::Air;
                        const bool CompareBlockOpaque = CompareBlock != EBlock::Air;

                        if (CurrentBlockOpaque == CompareBlockOpaque)
                        {
                            Mask[N++] = FMask{ EBlock::Null, 0 };
                        }
                        else if (CurrentBlockOpaque)
                        {
                            Mask[N++] = FMask{ CurrentBlock, 1 };
                        }
                        else
                        {
                            Mask[N++] = FMask{ CompareBlock, -1 };
                        }

                    }
                }

                ++ChunkItr[Axis];
                N = 0;

                // Generate mesh from mask
                for (int j = 0; j < Axis2Limit; ++j)
                {
                    for (int i = 0; i < Axis1Limit; )
                    {
                        if (Mask[N].Normal != 0)
                        {
                            const auto CurrentMask = Mask[N];
                            ChunkItr[Axis1] = i;
                            ChunkItr[Axis2] = j;

                            int width = 1;

                            //   for (width = 1; i + width < Axis1Limit && CompareMask(Mask[N + width], CurrentMask); ++width)
                            //   {
                            //
                            //   }

                            int height;
                            bool done = false;



                            for (height = 1; j + height < Axis2Limit; ++height)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    if (CompareMask(Mask[N + k + height * Axis1Limit], CurrentMask)) continue;

                                    done = true;
                                    break;
                                }

                                if (done) break;
                            }
                            //  FScopeLock Lock(&CriticalSection);
                            DeltaAxis1[Axis1] = width;
                            DeltaAxis2[Axis2] = height;

                            FQuadData QuadData;
                            QuadData.CurrentMask = CurrentMask;
                            QuadData.AxisMask = AxisMask;
                            QuadData.ChunkItr = ChunkItr;
                            QuadData.DeltaAxis1 = DeltaAxis1;
                            QuadData.DeltaAxis2 = DeltaAxis2;
                            QuadData.Block = CurrentMask.Block;
                            if (Axis == 0) {
                              QuadDataQueueOne.Enqueue(QuadData);
                              quadOneSize++;
							}
                            else if (Axis == 1) {
								QuadDataQueueTwo.Enqueue(QuadData);
                                quadTwoSize++;
							}
                            else if (Axis == 2) {
								QuadDataQueueThree.Enqueue(QuadData);
                                quadThreeSize++;
                            }

                         


                          
                            //AnyThreadNormalTask works
                            DeltaAxis1 = FIntVector::ZeroValue;
                            DeltaAxis2 = FIntVector::ZeroValue;
                    


                            for (int l = 0; l < height; ++l)
                            {
                                for (int k = 0; k < width; ++k)
                                {
                                    Mask[N + k + l * Axis1Limit] = FMask{ EBlock::Null, 0 };
                                }
                            }

                            //Lock2.Unlock();
                            i += width;
                            N += width;

                        }
                        else {
                            i++;
                            N++;
                        }
                    }
                }
            }
           
        }, EParallelForFlags::PumpRenderingThread);
      //Now process the chunk queues in parallel


      //now non parallel for loop to process the queues

      ParallelFor(3, [&](int32 Axis) {
		  FQuadData QuadData;
          if (Axis == 0) {
              while (QuadDataQueueOne.Dequeue(QuadData))
              {
				  CreateQuad(QuadData.CurrentMask, QuadData.AxisMask,
                      					  QuadData.ChunkItr,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis1,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis2,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                      					  QuadData.Block);
			  }
		  }
          else if (Axis == 1) {
              while (QuadDataQueueTwo.Dequeue(QuadData))
              {
				  CreateQuad(QuadData.CurrentMask, QuadData.AxisMask,
                      					  QuadData.ChunkItr,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis1,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis2,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                      					  QuadData.Block);
			  }
		  }
          else if (Axis == 2) {
              while (QuadDataQueueThree.Dequeue(QuadData))
              {
				  CreateQuad(QuadData.CurrentMask, QuadData.AxisMask,
                      					  QuadData.ChunkItr,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis1,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis2,
                      					  QuadData.ChunkItr + QuadData.DeltaAxis1 + QuadData.DeltaAxis2,
                      					  QuadData.Block);
			  }
		  }
	  }, EParallelForFlags::BackgroundPriority);

}

void AChunk::CreateQuad(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block)
{

    FScopeLock Lock(&CriticalSection);
    const auto Normal = FVector(AxisMask * Mask.Normal);

    VertexData.Add(FVector(V1) * 100);
    VertexData.Add(FVector(V2) * 100);
    VertexData.Add(FVector(V3) * 100);
    VertexData.Add(FVector(V4) * 100);


    EBlock BlockMaterial = Mask.Block;
    FColor BlockColor = GetColorFromBlock(BlockMaterial, V1);

    VertexColors.Add(BlockColor);
    VertexColors.Add(BlockColor);
    VertexColors.Add(BlockColor);
    VertexColors.Add(BlockColor);

    TriangleData.Add(VertexCount);
    TriangleData.Add(VertexCount + 2 + Mask.Normal);
    TriangleData.Add(VertexCount + 2 - Mask.Normal);
    TriangleData.Add(VertexCount + 3);
    TriangleData.Add(VertexCount + 1 - Mask.Normal);
    TriangleData.Add(VertexCount + 1 + Mask.Normal);

    UVData.Add(FVector2D(V1.X / Size, V1.Y / Size));
    UVData.Add(FVector2D(V2.X / Size, V2.Y / Size));
    UVData.Add(FVector2D(V3.X / Size, V3.Y / Size));
    UVData.Add(FVector2D(V4.X / Size, V4.Y / Size));

    NormalData.Add(Normal);
    NormalData.Add(Normal);
    NormalData.Add(Normal);
    NormalData.Add(Normal);

    VertexCount += 4;
    Lock.Unlock();

}

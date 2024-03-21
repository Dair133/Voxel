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

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("Material'/Game/Cubedeps/Basecube.Basecube'"));
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



    // In order to test RAM usage I should add a funciton which destroys the chunks once they are all generated to see if memeory usage goes down properly?

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
    Mesh->SetMaterial(0, BaseMaterial);


    Super::BeginPlay();

}



void AChunk::Tick(float DeltaTime)
{

    // Increment your frame counter
    FrameCounter++;



    if (FrameCounter < 500) {
        // Perform a portion of your logic here
        if (FrameCounter == 2) {

            GenerateBlocks();

        }
        else if (FrameCounter == 50) {
            GenerateMesh();

        }
        else if (FrameCounter == 100) {
            ApplyMesh();
        }
        else if (FrameCounter == 499) {
            PrimaryActorTick.bCanEverTick = false;

            // UE_LOG(LogTemp, Warning, TEXT("Freeing all data"));
             //TEST TO MAKE SURE THIS CODE RUNS
            NoiseNumbers.Empty(0);
            QuadDataQueueOne.Empty();


            QuadDataQueueTwo.Empty();
            QuadDataQueueThree.Empty();
            TaskDependencies.Empty(0);
            VertexColors.Empty();
            VertexData.Empty();
            TriangleData.Empty();
            NormalData.Empty();
            UVData.Empty();

        }
    }
}
void PerformBusyWait(int32 NumberOfIterations)
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
    std::vector<float> noiseOutput(Size * Size * VerticalHeight);
    auto fnSimplex = FastNoise::New<FastNoise::Simplex>();
    auto fnFractal = FastNoise::New<FastNoise::FractalFBm>();
    fnFractal->SetSource(fnSimplex);
    fnFractal->SetOctaveCount(4);
    fnFractal->SetGain(1.1f);
    fnFractal->SetLacunarity(1.1f);
    fnFractal->SetWeightedStrength(1.1f);
    auto fnDomainscale = FastNoise::New<FastNoise::DomainScale>();
    fnDomainscale->SetScale(0.1f);
    fnDomainscale->SetSource(fnFractal);
    auto fnDomainWarpGradient = FastNoise::New<FastNoise::DomainWarpGradient>();
    fnDomainWarpGradient->SetWarpAmplitude(0.2f);
    fnDomainWarpGradient->SetWarpFrequency(0.1f);
    fnDomainWarpGradient->SetSource(fnDomainscale);
    auto fnDomainWarpFractalProgessive = FastNoise::New<FastNoise::DomainWarpFractalProgressive>();
    fnDomainWarpFractalProgessive->SetGain(0.7f);
    fnDomainWarpFractalProgessive->SetWeightedStrength(0.5f);
    fnDomainWarpFractalProgessive->SetLacunarity(0.5f);
    fnDomainWarpFractalProgessive->SetOctaveCount(2);
    fnDomainWarpFractalProgessive->SetSource(fnDomainWarpGradient);

    const auto Location = GetActorLocation();

    // Calculate the chunk's position in the world
    int chunkX = Location.X / (Size * 100);
    int chunkY = Location.Y / (Size * 100);
    int chunkZ = Location.Z / (VerticalHeight * 100);


    // Generate the noise map for the chunk
   // Create two separate noise output vectors for each thread
  // Generate the noise map for the chunk
// Create four separate noise output vectors for each thread
    std::vector<float> noiseOutputThread1(Size * Size * VerticalHeight / 4);
    std::vector<float> noiseOutputThread2(Size * Size * VerticalHeight / 4);
    std::vector<float> noiseOutputThread3(Size * Size * VerticalHeight / 4);
    std::vector<float> noiseOutputThread4(Size * Size * VerticalHeight / 4);

    auto NoiseTask1 = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()

        {

            fnDomainWarpFractalProgessive->GenUniformGrid3D(noiseOutputThread1.data(), chunkX * Size, chunkY * Size, chunkZ * VerticalHeight, Size / 2, Size / 2, VerticalHeight / 2, 0.05f, 1337);

        }, TStatId(), nullptr, ENamedThreads::AnyBackgroundHiPriTask);

    auto NoiseTask2 = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()

        {

            fnDomainWarpFractalProgessive->GenUniformGrid3D(noiseOutputThread2.data(), chunkX * Size + Size / 2, chunkY * Size, chunkZ * VerticalHeight, Size / 2, Size / 2, VerticalHeight / 2, 0.05f, 1337);

        }, TStatId(), nullptr, ENamedThreads::AnyThread);

    auto NoiseTask3 = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()

        {

            fnDomainWarpFractalProgessive->GenUniformGrid3D(noiseOutputThread3.data(), chunkX * Size, chunkY * Size + Size / 2, chunkZ * VerticalHeight, Size / 2, Size / 2, VerticalHeight / 2, 0.05f, 1337);

        }, TStatId(), nullptr, ENamedThreads::AnyThread);

    auto NoiseTask4 = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()

        {

            fnDomainWarpFractalProgessive->GenUniformGrid3D(noiseOutputThread4.data(), chunkX * Size + Size / 2, chunkY * Size + Size / 2, chunkZ * VerticalHeight, Size / 2, Size / 2, VerticalHeight / 2, 0.05f, 1337);

        }, TStatId(), nullptr, ENamedThreads::AnyThread);

    // Wait for all noise generation tasks to complete

    FTaskGraphInterface::Get().WaitUntilTasksComplete({ NoiseTask1, NoiseTask2, NoiseTask3, NoiseTask4 }, ENamedThreads::GameThread);

    // Combine the noise output from all threads into a single vector

    noiseOutput.resize(Size * Size * VerticalHeight);

    for (int z = 0; z < VerticalHeight / 2; ++z)

    {

        for (int y = 0; y < Size / 2; ++y)

        {

            for (int x = 0; x < Size / 2; ++x)

            {

                int index = x + y * Size / 2 + z * Size * Size / 4;

                noiseOutput[x + y * Size + z * Size * Size] = noiseOutputThread1[index];

                noiseOutput[x + Size / 2 + y * Size + z * Size * Size] = noiseOutputThread2[index];

                noiseOutput[x + (y + Size / 2) * Size + z * Size * Size] = noiseOutputThread3[index];

                noiseOutput[x + Size / 2 + (y + Size / 2) * Size + z * Size * Size] = noiseOutputThread4[index];

            }

        }

    }

    float* noiseArray = noiseOutput.data();
    float randomPointTen = QueryNoiseValue(noiseOutput, 10, 10, 10, Size, VerticalHeight);

    // UE_LOG(LogTemp, Warning, TEXT("3dNoiseSize:%d   Eight:%f   Nine:%f  Ten:%f"), noiseOutput.size(), randomPointEight, randomPointNine, randomPointTen);
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

    auto River = new FastNoiseLite();
    River->SetNoiseType(FastNoiseLite::NoiseType_Perlin); // Perlin noise for smooth gradients
    River->SetFrequency(0.006f); // Lower frequency for smoother, broader features
    River->SetFractalOctaves(1.2f); // Use more octaves for smoother transitions
    River->SetFractalLacunarity(0.10f); // Higher lacunarity for more variation between octaves
    River->SetFractalGain(1); // Lower gain to reduce the amplitude of higher octaves
    River->SetFractalType(FastNoiseLite::FractalType_FBm); // FBm for natural-looking features

    float baseMultiplier = VerticalHeight * 4;

    int amplitude = 4; // The highest point in the wave
    //int period = 2 * amplitude; // The number of points in one complete wave
    //int iterations = 20; // The number of points to generate

    const float baseHeight = VerticalHeight / 4.0f;
    TArray<float> NoiseMap;
    int TotalElements = Size * Size * VerticalHeight;
    NoiseMap.SetNum(TotalElements);

    // 0 equals hilly
    //1 equals river
   // int biomeNumber = 0;

  /*  float biomeNoise;
    float combinedNoise;
    float normalizedNoise;
    float curvedNoise;
    int index;*/
    // Ensure NoiseMap has been initialized to the right dimensions before this
  // Assuming biomeNoiseMap is correctly initialized and configured
    TArray<TFunction<void()>> NoiseMapOperations;


    //float combinedNoise;
    TArray<TFunction<void()>> BlockOperations;
    // ParallelFor(Size, [&](int32 x) {
    for (int x = 0; x < Size; x++) {

        for (int y = 0; y < Size; ++y) {

            BlockOperations.Add([=, &noiseArray]()
                {
                    for (int z = 0; z < VerticalHeight; z++) {
                        int Index = x + y * Size + z * Size * Size;
                        float preHeight = noiseArray[x + y * Size + z * Size * Size];
                        preHeight = preHeight * 1000;
                        int Height = static_cast<int>(preHeight);
                        EBlock BlockType = EBlock::Air;

                        if (z == 0) {
                            BlockType = EBlock::Stone;
                        }

                        if (z < Height - 1) {
                            BlockType = EBlock::Stone;
                        }
                        else if (z == Height || z == Height - 1) {
                            BlockType = EBlock::Grass;
                        }

                        Blocks[GetBlockIndex(x, y, z)] = BlockType;
                    }
                });
        }
    }//, EParallelForFlags::BackgroundPriority);
// RespawnTrees();

    ParallelFor(BlockOperations.Num(), [&](int32 Index)
        {
            BlockOperations[Index]();
        }, EParallelForFlags::BackgroundPriority);
    delete HillyPlains;
    delete River;
    delete biomeNoiseMap;
}

void AChunk::RespawnTrees() {
    FRotator TreeSpawnRotation = FRotator::ZeroRotator;
    FActorSpawnParameters TreeSpawnParams;
    TreeSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::DontSpawnIfColliding;
    for (int i = 0; i < Trees.Num(); i++) {
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

                        const bool CurrentBlockOpaque = CurrentBlock != EBlock::Air && CurrentBlock != EBlock::Null;
                        const bool CompareBlockOpaque = CompareBlock != EBlock::Air && CompareBlock != EBlock::Null;

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


                            /* if (i % 10 == 0) {
                                 PerformBusyWait(20);
                             }*/


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

        }, EParallelForFlags::BackgroundPriority);
    //Now process the chunk queues in parallel


    //now non parallel for loop to process the queues
    TArray<FQuadData> QuadDataList;
    TArray<FGraphEventRef> Tasks;


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

    TaskOne->Wait();
    FGraphEventRef TaskThree = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
        {
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

        }, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);


}





void AChunk::CreateQuadOne(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block)
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
void AChunk::CreateQuadTwo(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block)
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
void AChunk::CreateQuadThree(FMask Mask, FIntVector AxisMask, FIntVector V1, FIntVector V2, FIntVector V3, FIntVector V4, EBlock Block)
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
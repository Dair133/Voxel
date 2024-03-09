// // Fill out your copyright notice in the Description page of Project Settings.


#include "Chunk.h"

#include <system_error>
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
    /*
     *Below arguments to octree object are important
     *we STARt at 0,0,0 and the 30 indicates how far we go
     *so  chunkRange(0,0,0,30) means from (0,0,0) to (30,30,30)
     *if we doe (30,30,30,30) its WRONG because that means from (30,30,30) to (60,60,60)
     */

     //representing from 0,0,0 to 64,64,64
    // const CubeRange* ChunkRange = new CubeRange(0,0,0,32,32,32);
     //Octree *newOctree =  new Octree(*ChunkRange);
     //newOctree->AssignBlock(8,0,8,EBlock::Dirt);

     //newOctree->BulkAssignment(0,0,0,16,1,16,EBlock::Sand);//sets all x,z values to zero for y of zero, WE DO NOT INPUT

     //EBlock returnedBlock = newOctree->GetBlock(4,0,4);

     //std::string blockName = ToStringEnum(returnedBlock);

     //for loop which goes through every x and z 






     //now log returned name



     // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

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

    static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/TreeTest.TreeTest'"));
    // static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/Objects/Trees/Tree01.Tree01'"));
    if (MyTreeBlueprintFinder.Succeeded())
    {
        MyTreeBPClass = (UClass*)MyTreeBlueprintFinder.Object->GeneratedClass;
        //  UE_LOG(LogTemp, Warning, TEXT("Blueprint loaded successfully."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load blueprint."));
    }
    static ConstructorHelpers::FObjectFinder<UBlueprint> MyGrassBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/Objects/Misc/Grass.Grass'"));
    //MyGrassBPClass = (UClass*)MyGrassBlueprintFinder.Object->GeneratedClass;


    // for (int x = 0; x < 16; x++)
    // {
    //     for (int z = 0; z < 16; z++)
    //     {
    //        
    //         
    //         EBlock returnedBlock = newOctree->GetBlock(x,0,z);
    //
    //         std::string blockName = ToStringEnum(returnedBlock);
    //         
    //         UE_LOG(LogTemp, Warning, TEXT("Returned block name is %s"), *FString(blockName.c_str()));
    //     }
    // }
}

void AChunk::ModifyVoxel(const FIntVector Position, const EBlock Block)
{
    if (Position.X >= Size || Position.Y >= Size || Position.Z >= VerticalHeight || Position.X < 0 || Position.Y < 0 || Position.Z < 0) return;

    ModifyVoxelData(Position, Block);

    ClearMesh();

    GenerateMesh();

    ApplyMesh();
    /*  for (FGraphEventRef& Task : TaskList)
      {
          FTaskGraphInterface::Get().WaitUntilTaskCompletes(Task);
      }*/
}

// Called when the game starts or when spawned
void AChunk::BeginPlay()
{
    //FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
          //   {
          //        Code to be executed in the worker thread

          //        ...

          //        Code executed in the worker thread is complete
          //   }, TStatId(), nullptr, ENamedThreads::GameThread);

// int32 Key1 = -1;
//  float TimeToDisplay1 = 10.0f; // Display the message for 5 seconds.
//  FColor DisplayColor1 = FColor::Red; // Display the message in red.
//  float WorldTime = GetWorld()->GetTimeSeconds();
//   FString DebugMessage = FString::Printf(TEXT("World Time: %f"), WorldTime);
 //  GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);




    Mesh->SetMaterial(0, BaseMaterial);


    Super::BeginPlay();

    GenerateBlocks();


    GenerateMesh();


    ApplyMesh();

    RespawnTrees();




}
void AChunk::DelayedBeginPlay()
{
    // Increment your frame counter
    FrameCounter++;

    // Perform a portion of your logic here
    if (FrameCounter <= 83) {
        // Execute 1/33rd of your GenerateBlocks logic
        int32 Key = -1;
        float TimeToDisplay = 10.0f; // Display the message for 5 seconds.
        FColor DisplayColor = FColor::Red; // Display the message in red.
        FString DebugMessage1 = TEXT("GENERATE BLOCKS");
        GenerateBlocks();
    }
    else if ((FrameCounter > 83) && (FrameCounter < 200)) {
        // Execute 1/33rd of your GenerateMesh logic
        int32 Key = -1;
        float TimeToDisplay = 10.0f; // Display the message for 5 seconds.
        FColor DisplayColor = FColor::Red; // Display the message in red.
        FString DebugMessage1 = TEXT("generate mesh");
        GenerateMesh();
    }
    else if (FrameCounter > 200) {
        // Execute 1/34th of your ApplyMesh logic
        int32 Key = -1;
        float TimeToDisplay = 10.0f; // Display the message for 5 seconds.
        FColor DisplayColor = FColor::Red; // Display the message in red.
        FString DebugMessage1 = TEXT("apply mesh");
        ApplyMesh();
    }
    //check return 
    //make sure tthis funcion is even being entered
    //reduce frames from 2000 to probably around max 700 or 800
    if (FrameCounter < 210) {
        FString DebugMessage1 = TEXT("Finished");
        // Schedule another call if we're not done yet
        GetWorld()->GetTimerManager().SetTimerForNextTick([this]() { this->DelayedBeginPlay(); });
    }
    else {
        // We're done
        FrameCounter = 0;
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



void AChunk::GenerateBlocks()
{


    int numTrees = 0;

    MainNoise = new FastNoiseLite();
    MainNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    MainNoise->SetFractalType(FastNoiseLite::FractalType_FBm);

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

    // // Create noise for platforms
    // FastNoiseLite* PlatformNoise = new FastNoiseLite();
    // PlatformNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
    // PlatformNoise->SetFrequency(0.0674f);  // The higher frequency will create smaller features that we can interpret as platforms
    // PlatformNoise->SetFractalOctaves(2);
    // PlatformNoise->SetFractalLacunarity(2.0f);
    // PlatformNoise->SetFractalGain(0.2f);

    // Create noise for peak variations this does actually acter the terrain above a certain height and should be useful in the future
 /*   FastNoiseLite* PeakNoise = new FastNoiseLite();
    PeakNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    PeakNoise->SetFrequency(0.05f);
    PeakNoise->SetFractalOctaves(2);
    PeakNoise->SetFractalLacunarity(2.0f);
    PeakNoise->SetFractalGain(0.3f);*/

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

    //ParallelFor(Size, [&](int32 x)
    //    {
    for (float x = 0; x < Size; ++x) {
        for (float y = 0; y < Size; ++y)
        {
            /*   FGraphEventRef Taskz = FFunctionGraphTask::CreateAndDispatchWhenReady([this, x, y, BiomeNoise]()
                   {

                   }, TStatId(), nullptr, ENamedThreads::AnyBackgroundThreadNormalTask);*/

                   /*
                   To increase the amount of mountains in the biome, we can increase the frequency of the noise but this removes the nice ingrooves and roughness of the mountains
                   therefore consider experimenting with increased platform frequency along with increased MainNoise frequency

                   Second see if I can make the platforms more flat and see if i can get it to create platforms which I can actually stand on while climbing.
                   */
            float Xpos;
            float Ypos;

            float BiomeValue;
            float EdgeModifier;
            float BiomeDistance;


            Xpos = (x * 100 + Location.X) / 100;
            Ypos = (y * 100 + Location.Y) / 100;





            float CombinedNoise;
            BiomeValue = -0.3;
            if (BiomeValue < -0.2f) // Mountain biome
            {


                float PlatformAmplitude = 1.0f;

                BiomeDistance = FMath::Abs(BiomeValue + 0.2f);
                EdgeModifier = FMath::Pow(FMath::Clamp(BiomeDistance / 0.2f, 0.0f, 1.0f), 0.5f);
                MainNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
                MainNoise->SetFrequency(0.0016f);
                MainNoise->SetFractalOctaves(6);
                MainNoise->SetFractalLacunarity(2.0f);
                MainNoise->SetFractalGain(0.2f);



                // Amplify the noise to create larger mountains
                float Amplitude = VerticalHeight * 4;

                // Modify the EdgeModifier to create less aggressive transitions between biomes



                // Combine the different noise types to create the final terrain
                CombinedNoise = MainNoise->GetNoise(Xpos, Ypos) * Amplitude * EdgeModifier;
                //CombinedNoise += PlatformNoise->GetNoise(Xpos, Ypos) * VerticalHeight / 5 * EdgeModifier*PlatformAmplitude;  // Adding the platform noise
                CombinedNoise += RandomNoise->GetNoise(Xpos, Ypos) * VerticalHeight / 5 * EdgeModifier;  // Adding the platform noise



                //UE_LOG(LogTemp, Warning, TEXT("Newchunk is  is null!"));
                if (BiomeDistance < 0.20f) { // This checks if we're within 10% of the edge was originally 0.05f
                    float DecreaseFactor = FMath::Clamp(BiomeDistance / 0.18f, 0.0f, 1.0f);//was originally 0.1f
                    CombinedNoise *= DecreaseFactor;
                }
                if (CombinedNoise > Size - 30)  // Only add the peak noise if we're above a certain height
                {
                    //CombinedNoise += PeakNoise->GetNoise(Xpos, Ypos) * Size / 8;
                }
                if (CombinedNoise > 40 && CombinedNoise < 50)
                {
                    // CombinedNoise = 45; // Mid-point of the platform
                }


            }
            else if (BiomeValue > 0.2f) // Flat plains biome with small bumps
            {
                MainNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
                MainNoise->SetFrequency(0.02f);
                MainNoise->SetFractalOctaves(4);
                MainNoise->SetFractalLacunarity(2.0f);
                MainNoise->SetFractalGain(0.3f);


                CombinedNoise = MainNoise->GetNoise(Xpos, Ypos) * Size / 10;

            }
            else // Transition biome
            {
                // Set up main noise for transition
                MainNoise->SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);
                MainNoise->SetFractalOctaves(5);
                MainNoise->SetFractalLacunarity(2.0f);
                MainNoise->SetFractalGain(0.4f);
                MainNoise->SetFrequency(0.01f);

                // Create combined noise

                CombinedNoise = MainNoise->GetNoise(Xpos, Ypos) * Size / 10;


            }


            const int NumberOfSteps = 10;
            const float StepSize = PI / NumberOfSteps;
            // Hill configuration
            const int MaxHillHeight = 5;  // The maximum height of the hills
            const int FlatPeriod = 10;    // The number of flat steps between hills

            // State variables
            float CurrentHillHeight = 0;   // The current height of the hill
            int HillDirection = 1;       // The current direction of the hill (1 for up, -1 for down)
            int FlatCounter = FlatPeriod; // Counter for the number of flat steps

            double angle = 1.0;
            double increment = PI / NumberOfSteps; // replace NumberOfSteps with the number of steps for one full cycle

            //for (int i = 0; i < NumberOfSteps; i++)
            //{
            //    if (FlatCounter > 0) {
            //        // We're in a flat period, so don't change the height
            //        FlatCounter--;
            //    }
            //    else {
            //        // We're on a hill, so change the height
            //        CurrentHillHeight += HillDirection;
            //        if (CurrentHillHeight == MaxHillHeight || CurrentHillHeight == 0) {
            //            // We've reached the top or bottom of the hill, so start a new flat period
            //            FlatCounter = FlatPeriod;
            //            // Reverse direction for the next hill
            //            HillDirection *= -1;
            //        }
            //    }
            //    // ... Use BaseHeight in your terrain generation ...
            //}
           // int myInt = rand() % 5;
           // float myFloat = static_cast<float>(myInt);

            //int value = std::round(std::abs(std::sin(i * (2.0 * M_PI / period))) * amplitude) + 1;
            float BaseHeight = 2.0f;
            BaseHeight += CurrentHillHeight;
            if (CombinedNoise < BaseHeight) {
                ////  double min = 1;
                //  double max = 3;

                  /*
                  Commendted out code does add a random value maybe work off that?
                  Also ask copilot
                  currently no random value is added*/
                  //  double random_number = min + static_cast<double>(rand()) / RAND_MAX * (max - min);
                   // UE_LOG(LogTemp, Warning, TEXT("Entering confition random num is %f"),random_number);
                double waveValue = 5.0 * sin(angle); // calculate value based on sine wave

                BaseHeight += waveValue;
                // CombinedNoise = BaseHeight;

                angle += increment;
                // BaseHeight += random_number;
                CombinedNoise = BaseHeight;
            }
            // UE_LOG(LogTemp, Error, TEXT("baseHeight = %f  CurrentHillheight = "),BaseHeight,CurrentHillHeight);
             //CombinedNoise += 100;
            int Height = FMath::Clamp(CombinedNoise, 0, VerticalHeight);
            // Use the calculated height when setting the block at this position
            //Blocks[GetBlockIndex(x, y, Height)] = EBlock::Grass;



            Blocks[GetBlockIndex(x, y, Height - 1)] = EBlock::Grass;


            // const int Height = CombinedNoise;

                   //FGraphEventRef Taskx = FFunctionGraphTask::CreateAndDispatchWhenReady([&]()
                   //   {

                   //   }, TStatId(), nullptr, ENamedThreads::GameThread);


              //Height += 100;

            for (int z = 0; z < Height; z++)
            {

                if (z == Height - 1) {
                    if (BiomeValue < -0.2) {
                        Blocks[GetBlockIndex(x, y, z)] = EBlock::Grass;
                    }
                    else if (BiomeValue > 0.2f) {
                        Blocks[GetBlockIndex(x, y, z)] = EBlock::SnowGrass;
                    }
                    else if (!(BiomeValue < -0.2 && BiomeValue > 0.2f)) {
                        //srand(unsigned int(time(NULL) + rand()));
                      //  int random = rand() + rand() * rand();
                        int random = 3;
                        if (random % 2 == 0) {
                            Blocks[GetBlockIndex(x, y, z)] = EBlock::Grass;
                        }
                        else {
                            Blocks[GetBlockIndex(x, y, z)] = EBlock::SnowGrass;
                        }
                    }
                }
                else {
                    Blocks[GetBlockIndex(x, y, z)] = EBlock::Stone;
                }


                //std::random_device rd;

                //// Initialize a Mersenne Twister pseudo-random generator of 32-bit numbers with a state size of 19937 bits.
                //std::mt19937 gen(rd());

                //// Uniform distribution between 1 and 100
                //std::uniform_int_distribution<> distrib(1, 26250);

                //// Generate random number
                //int randNum = distrib(gen);

                //UE_LOG(LogTemp, Warning, TEXT("Random NUm: %d"), randNum);

                //if (randNum == 1)
                //{
                // 
                //    // 3% chance of this block being true
                //    // Spawn a tree

                //}





            }
            //if (Height > 6) {

            //
            //        for (int z = 0; z < VerticalHeight - 1; z++)
            //    {
            //            if(z < Height){
            //                Blocks[GetBlockIndex(x, y, z)] = EBlock::Stone;
            //            }
            //     

            //            else{
            //                //Blocks[GetBlockIndex(x, y, z)] = EBlock::Air;
            //            }
            //      
            //    }
            //}
            for (int z = Height; z < VerticalHeight; z++)
            {

                Blocks[GetBlockIndex(x, y, z)] = EBlock::Air;

                //if(z % 25 == 0)
               // GetWorld()->GetTimerManager().SetTimer(MyTimerHandle, this, &AChunk::GenerateBlocks, 0.15f, false);
            }


            //             // Generate random number
            //             int randNum = distrib(gen);
            //             int randNum2 = distrib2(gen2);
            //             //UE_LOG(LogTemp, Warning, TEXT("Random NUm: %d"), randNum);
            //             // Create a random device
            //             if (numTrees ==0 && randNum % 5 ==0) {
            //                 numTrees++;
            //                 FVector Loc = GetActorLocation();
            //               //  FGraphEventRef Task = FFunctionGraphTask::CreateAndDispatchWhenReady([&]() {
            //                     actorData myActorData;
            //                     actorData myActorData2;
            //                     // Offset by actor location if your chunk isn't at world origin
            //                     FScopeLock Lock(&CriticalSection);
            //                     if (Height != 0) {
            //                         
            //                     if (Height == 6) {
            //                       //  float offsetX = FMath::RandRange(-1250, 2500);
            //                       //  float offsetY = FMath::RandRange(-2300, 2500);
            //
            //                        // FVector SpawnLocation = FVector((x + offsetX) * randNum2, (y + offsetY) * randNum2, Height);
            //                         FVector SpawnLocation = FVector(x, y, Height);
            //                         
            //                         SpawnLocation += GetActorLocation();
            //                         SpawnLocation.Z *= 100;
            //                         SpawnLocation.X += randNum*80;
            //                         SpawnLocation.Y += randNum2*80;
            //                         //UE_LOG(LogTemp, Warning, TEXT("Random NUm: %d  2:%d"), randNum);
            //                         myActorData.Location = SpawnLocation;
            //                         myActorData.Rotation = FRotator(0, (randNum + 35) % 360,0);
            //                         Trees.Add(myActorData);
            //                         numTrees++;
            //
            //                         FVector SpawnLocation2 = FVector(x*randNum, y*randNum, Height);
            //                         SpawnLocation2 += GetActorLocation();
            //                         SpawnLocation2.Z *= 100;
            //                         SpawnLocation2.X += randNum *120;
            //                         SpawnLocation2.Y += randNum2*120;
            //                         myActorData2.Location = SpawnLocation2;
            //                         myActorData2.Rotation = FRotator(0, (randNum2 + 30) % 360,0);
            //                         Trees.Add(myActorData2);
            //                         numTrees++;
            //                         //TreeLocations.Add(SpawnLocation);
            //                         //SpawnActorAtLocation(SpawnLocation.X, SpawnLocation.Y, SpawnLocation.Z,MyTreeBPClass, myActorData.Rotation);
            //                         //SpawnActorAtLocation(SpawnLocation.X+2000, SpawnLocation.Y+3500, SpawnLocation.Z, MyTreeBPClass, myActorData.Rotation);
            //                         //SpawnActorAtLocation(SpawnLocation.X - 4500, SpawnLocation.Y -2000, SpawnLocation.Z, MyTreeBPClass, myActorData.Rotation);
            //                  
            //                        /* SpawnActorAtLocation(SpawnLocation.X+500, SpawnLocation.Y-500, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X + 400, SpawnLocation.Y - 400, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X + 350, SpawnLocation.Y - 350, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X + 250, SpawnLocation.Y - 250, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //
            //                         SpawnActorAtLocation(SpawnLocation.X - 500, SpawnLocation.Y + 500, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 400, SpawnLocation.Y + 470, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 350, SpawnLocation.Y + 420, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 250, SpawnLocation.Y + 250, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //
            //                         SpawnActorAtLocation(SpawnLocation.X - 1700, SpawnLocation.Y + 1300, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 1400, SpawnLocation.Y + 1700, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 1850, SpawnLocation.Y + 1350, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 1250, SpawnLocation.Y + 1250, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //
            //
            //                         SpawnActorAtLocation(SpawnLocation.X - 3200, SpawnLocation.Y + 3200, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 3700, SpawnLocation.Y + 3800, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 3150, SpawnLocation.Y + 3750, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);
            //                         SpawnActorAtLocation(SpawnLocation.X - 3950, SpawnLocation.Y + 2950, SpawnLocation.Z, MyGrassBPClass, myActorData.Rotation);*/
            //
            //                     }
            //                     else if(Height == 160) {
            //                         FVector SpawnLocation = FVector(x, y , Height);
            //                        
            //                         SpawnLocation += GetActorLocation();
            //                         SpawnLocation.Z *= 100;
            //                         SpawnLocation.Z = FMath::Clamp(SpawnLocation.Z, 0, 16000);
            //                         myActorData.Location = SpawnLocation;
            //                         Trees.Add(myActorData);
            //                  //     SpawnActorAtLocation(SpawnLocation.X, SpawnLocation.Y, SpawnLocation.Z,MyTreeBPClass, myActorData.Rotation);
            //                     }
            //                     else {
            //                         FVector SpawnLocation = FVector(x , y , Height);
            //                        
            //                         SpawnLocation += GetActorLocation();
            //                         TreeLocations.Add(SpawnLocation);
            //                  //       SpawnActorAtLocation(SpawnLocation.X, SpawnLocation.Y, SpawnLocation.Z,MyTreeBPClass, myActorData.Rotation);
            //                     }
            //
            //
            //                                      //SpawnTreeAtLocation(SpawnLocation.X, SpawnLocation.Y, SpawnLocation.Z);
            //                                      numTrees++;
            //                                      Lock.Unlock();
            //                     }
            //                   //  }, TStatId(), nullptr, ENamedThreads::GameThread);
            //                 numTrees++;
            //             }






        }

    }//, EParallelForFlags::PumpRenderingThread);
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

void AChunk::Tick(float DeltaTime)
{
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
            Mask.SetNum(Axis1Limit * Axis2Limit);

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
                            // Lock.Unlock();
                           //  FGraphEventRef Task = FFunctionGraphTask::CreateAndDispatchWhenReady([CurrentMask,AxisMask,this,ChunkItr,DeltaAxis1,DeltaAxis2]() {

                                //consider creating struct and putting this values into array and then use multithreade loop to create quads
                            CreateQuad(CurrentMask, AxisMask,
                                ChunkItr,
                                ChunkItr + DeltaAxis1,
                                ChunkItr + DeltaAxis2,
                                ChunkItr + DeltaAxis1 + DeltaAxis2,
                                CurrentMask.Block
                            );

                            //   }, TStatId(), nullptr, ENamedThreads::ActualRenderingThread );
                           //TaskList.Add(Task);
                           /// Task->Wait();
                            //AnyThreadNormalTask works
                            DeltaAxis1 = FIntVector::ZeroValue;
                            DeltaAxis2 = FIntVector::ZeroValue;
                            //FScopeLock Lock2(&CriticalSection);


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
}
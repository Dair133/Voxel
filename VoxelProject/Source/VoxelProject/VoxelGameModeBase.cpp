// Copyright Epic Games, Inc. All Rights Reserved.

#include <VoxelProject/VoxelGameModeBase.h>
#include <VoxelProject/Chunk.h>
#include <VoxelProject/Enums.h>
#include <VoxelProject/BoxTwo.h>
#include <VoxelProject/MyPawn.h>
#include "GameFramework/PlayerState.h"
#include <VoxelProject/Vector2.h>
#include <VoxelProject/FastNoiseLite.h>
#include "Chunk.h"
#include <Kismet/GameplayStatics.h>
#include <chrono>
#include <thread>
#include <GameFramework/CharacterMovementComponent.h>
#include <EditorCategoryUtils.h>
//#include "Octree/Octree.h"
//#include "Octree/Enums.h"

std::string AVoxelGameModeBase::ToStringEnumFunc(EBlock blockType) {
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
void AVoxelGameModeBase::OnCheckUpdateChunks()
{
    UpdateVisibleChunksAroundPlayers();
}

void AVoxelGameModeBase::BeginPlay()
{


    //200 height was the multiple 12.5
    ChunkSizeInMeters = ChunkSize * BlockSize * 4;
    maxViewDst = maxViewDst * ChunkSizeInMeters;
    chunksVisibleInViewDst = maxViewDst / ChunkSizeInMeters;

    if (this->HasAuthority())
    {
        GetWorld()->GetTimerManager().SetTimer(chunkUpdateTimerHandle, this, &AVoxelGameModeBase::OnCheckUpdateChunks, chunkUpdateTickSpeed, true);
    }

    //UpdateVisibleChunksAroundPlayers();




    Super::BeginPlay();
}

void AVoxelGameModeBase::PostLogin(APlayerController* NewPlayer)
{


    playersArray.Add(NewPlayer);
    lastPlayerPostitions.Add(NewPlayer, FVector2D(0.f, 0.f));
    // UE_LOG(LogTemp, Warning, TEXT("PostLogin called"));

     // Correct the possession of the pawn by setting the Controller of the pawn as the player who just joined.
    UE_LOG(LogTemp, Warning, TEXT("Inside post loginc"));
    if (!NewPlayer->GetPawn())
    {
        FVector spawnLocation = FVector(-2200.0f, 250.f, 2000.f);
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = NewPlayer;
        SpawnParams.bNoFail = true;

        APawn* playerPawn = GetWorld()->SpawnActor<APawn>(MyBlueprintCharacterClass, spawnLocation, FRotator::ZeroRotator, SpawnParams);




        // APawn* playerPawn = GetWorld()->SpawnActor<AMyPawn>(AMyPawn::StaticClass(), spawnLocation, FRotator::ZeroRotator, SpawnParams);
        if (HasAuthority()) {
            UE_LOG(LogTemp, Warning, TEXT("Has Authority"));
        }

        if (playerPawn == nullptr)
        {
            UE_LOG(LogTemp, Warning, TEXT("Not spawned correctly"));
            return;
        }
        if (playerPawn)
        {
            NewPlayer->SetPawn(playerPawn);
            NewPlayer->Possess(playerPawn);
            NewPlayer->SetViewTargetWithBlend(playerPawn);
            UE_LOG(LogTemp, Warning, TEXT("Correct pos login called"));
        }
    }


    Super::PostLogin(NewPlayer);
}

void AVoxelGameModeBase::Logout(AController* Exiting)
{
    APlayerController* player_controller = Cast<APlayerController>(Exiting);
    lastPlayerPostitions.Remove(player_controller);
    playersArray.Remove(player_controller);
    Super::Logout(Exiting);
}
void AVoxelGameModeBase::HideOutOfRangeChunks()
{
    // Get player position
    // Replace with your actual logic to get the player's position
    APlayerController* current_pc = playersArray[0];
    APawn* playerPawn = current_pc->GetPawn();
    FVector playerPosition = playerPawn->GetTransform().GetLocation();

    // Iterate through all chunks
    for (auto& element : terrainChunkMap) {
        AActor* chunk = element.Value;

        // Calculate distance from chunk to player
        FVector chunkPos = chunk->GetActorLocation();
        float distance = FVector::Dist2D(chunkPos, playerPosition);

        // If chunk is out of view distance and currently visible, hide it
        if (distance >= maxViewDst && !chunk->IsHidden()) {
            chunk->SetActorHiddenInGame(true);
        }
    }
}
void AVoxelGameModeBase::UpdateVisibleChunks(FVector2D viewerPosition)
{


    FBox2D viewBox(
        FVector2D(viewerPosition.X - chunksVisibleInViewDst * ChunkSizeInMeters, viewerPosition.Y - chunksVisibleInViewDst * ChunkSizeInMeters),
        FVector2D(viewerPosition.X + chunksVisibleInViewDst * ChunkSizeInMeters, viewerPosition.Y + chunksVisibleInViewDst * ChunkSizeInMeters)
    );;
    // Update Visible Chunks and Create New
    int currentChunkCoordX = FMath::FloorToInt(viewerPosition.X / ChunkSizeInMeters);
    int currentChunkCoordY = FMath::FloorToInt(viewerPosition.Y / ChunkSizeInMeters);

    for (int yOffset = -chunksVisibleInViewDst; yOffset <= chunksVisibleInViewDst; yOffset++) {
        for (int xOffset = -chunksVisibleInViewDst; xOffset <= chunksVisibleInViewDst; xOffset++) {
            FVector2D viewedChunkCoord = FVector2D(currentChunkCoordX + xOffset, currentChunkCoordY + yOffset);

            //.GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("%f,%f"), viewedChunkCoord.X, viewedChunkCoord.Y));

            if (terrainChunkMap.Contains(viewedChunkCoord)) {
                int size = terrainChunkMap.Num();
                // UE_LOG(LogTemp, Warning, TEXT("map being updated %d"),size);
                AActor* currentChunk = terrainChunkMap[viewedChunkCoord];
                UpdateChunk(currentChunk);
                terrainChunkMap.Add(viewedChunkCoord, currentChunk);
            }
            else if (!terrainChunkMap.Contains(viewedChunkCoord)) {
                // Spawn Chunk
                FVector position;
                position.X = round(viewedChunkCoord.X * ChunkSizeInMeters);
                position.Y = round(viewedChunkCoord.Y * ChunkSizeInMeters);
                position.Z = 0.f;
                if (terrainChunkMap2.Contains(position)) {
                    //UE_LOG(LogTemp, Warning, TEXT("Chunk coords already contianed"));

                }
                else {
                    terrainChunkMap2.Add(position);
                    ChunkQueue.Enqueue(position);
                }
                //terrainChunkMap.Add(viewedChunkCoord);


               // AActor* newChunk = spawnChunk(position);
               // //add delay
               //// std::this_thread::sleep_for(std::chrono::seconds(3));
               // //if (GetWorld()->GetTimeSeconds() > 2) {

               //  //   std::this_thread::sleep_for(std::chrono::seconds(2));

               //// }
               // if (newChunk == nullptr)
               // {
               //     UE_LOG(LogTemp, Warning, TEXT("Newchunk is  is null!"));
               //     return;
               // }
               // newChunk->SetActorHiddenInGame(true);
               // terrainChunkMap.Add(viewedChunkCoord, newChunk);
               // UpdateChunk(newChunk);




            }
        }
    }

    ProcessChunkQueue();
    //if (!ChunkQueue.IsEmpty()) {
    //    FVector nextChunkPosition;
    //    ChunkQueue.Dequeue(nextChunkPosition);
    //    AActor* newChunk = spawnChunk(nextChunkPosition);

    //    if (newChunk == nullptr)
    //    {
    //        UE_LOG(LogTemp, Warning, TEXT("Newchunk is null!"));
    //        return;
    //    }

    //    newChunk->SetActorHiddenInGame(true);
    //    FVector2D viewedChunkCoord = FVector2D(nextChunkPosition.X / ChunkSizeInMeters, nextChunkPosition.Y / ChunkSizeInMeters);
    //    terrainChunkMap.Add(viewedChunkCoord, newChunk);
    //    UpdateChunk(newChunk);
    //    if (ChunkQueue.IsEmpty()) {
    //      //  GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AVoxelGameGameModeBase::UpdateVisibleChunks, 1.0f, false);
    //    }
    //}
    //else {
    //    return;
    //}
}
void AVoxelGameModeBase::ProcessChunkQueue()
{
    //UE_LOG(LogTemp, Warning, TEXT("Processing chunk queue"));
    //UE_LOG(LogTemp, Warning, TEXT("Pcrocess entered"));
    if (ChunkQueue.IsEmpty())
    {
        //  OnCheckUpdateChunks();
        //  UE_LOG(LogTemp, Warning, TEXT("Chunkqueue is emprt!"));
        return; // Queue is empty, we're done here.
    }

    FVector nextChunkPosition;
    ChunkQueue.Dequeue(nextChunkPosition); // Get the next chunk from the queue.


    AActor* newChunk = spawnChunk(nextChunkPosition); // Spawn chunk

    if (newChunk == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Newchunk is null!"));
        return;
    }

    //newChunk->SetActorHiddenInGame(true);
    FVector2D viewedChunkCoord = FVector2D(nextChunkPosition.X / ChunkSizeInMeters, nextChunkPosition.Y / ChunkSizeInMeters);
    terrainChunkMap.Add(viewedChunkCoord, newChunk); // Add to map
    UpdateChunk(newChunk); // Update Chunk

    // Set a timer to call this function again after 1.0 second, if there are more chunks in the queue.
    if (!ChunkQueue.IsEmpty())
    {//130
        if (GetWorld()->GetTimeSeconds() > 20)
        {
            float TimeToDisplay1 = 10.0f; // Display the message for 5 seconds.
            FColor DisplayColor1 = FColor::Red; // Display the message in red.
            float WorldTime = GetWorld()->GetTimeSeconds();
            FString DebugMessage = FString::Printf(TEXT("World Time SECTION TWO: %f"), WorldTime);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);
            GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AVoxelGameModeBase::ProcessChunkQueue, 0.42f, false);
            //0.55 is a good value
        }
        else {
            int32 Key1 = -1;
            float TimeToDisplay1 = 10.0f; // Display the message for 5 seconds.
            FColor DisplayColor1 = FColor::Red; // Display the message in red.
            float WorldTime = GetWorld()->GetTimeSeconds();
            FString DebugMessage = FString::Printf(TEXT("World Time: %f"), WorldTime);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);
            GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AVoxelGameModeBase::ProcessChunkQueue, 0.05f, false);
        }
        //7 chunk render distance at 0.000 takes 55 secs roughly
    }
}

void AVoxelGameModeBase::UpdateVisibleChunksAroundPlayers()
{

    TArray<AActor*> updatedVisibleTerrainChunks;
    //GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Orange, FString::Printf(TEXT("%f"), visibleTerrainChunks.Num()));

    //ParallelFor(visibleTerrainChunks.Num(), [&](int32 index) {
    //    AActor* currentChunk = visibleTerrainChunks[index];
    //    if (UpdateChunk(currentChunk)) {
    //        // Ensure thread-safety when accessing shared resource
    //        FScopeLock Lock(&CriticalSection);
    //        updatedVisibleTerrainChunks.Add(currentChunk);
    //        Lock.Unlock();

    //    }
    //    });
    // 
    //FScopeLock Lock(&CriticalSection);
    for (AActor* currentChunk : visibleTerrainChunks) {
        UpdateChunk(currentChunk);
    }
    visibleTerrainChunks = updatedVisibleTerrainChunks;

    for (int i = 0; i < playersArray.Num(); i++)
    {
        APlayerController* current_pc = playersArray[i];
        // UE_LOG(LogTemp, Warning, TEXT(" at index %d"), i);
        if (current_pc == nullptr) {
            UE_LOG(LogTemp, Warning, TEXT("Player controller at index %d is null"), i);
            return;
        }

        // UE_LOG(LogTemp, Warning, TEXT("at index %d"), i);

        if (current_pc->GetPawn() != nullptr) {

            APawn* playerPawn = current_pc->GetPawn();
            FVector PawnPosition = playerPawn->GetTransform().GetLocation();
            FVector2D viewerPosition = FVector2D(PawnPosition.X, PawnPosition.Y);

            //UE_LOG(LogTemp, Warning, TEXT("Function being entered early"));

            UpdateVisibleChunks(viewerPosition);

            //  GenerateTreeMap(PawnPosition);
            //  SpawnTrees(PawnPosition);
        }

        //if player contorller is valid but does not have a pawn
        if (current_pc && current_pc->IsValidLowLevel())
        {
            // UE_LOG(LogTemp, Warning, TEXT("VALID PLAYER CONTROLLER"));

            if (current_pc->GetPawn() == nullptr) {
                UE_LOG(LogTemp, Warning, TEXT("PLayer controller is valid but has no pawn"));
                FVector spawnLocation = FVector(-2100.0f, 250.f, 730.f);
                FActorSpawnParameters SpawnParams;
                // APawn* playerPawn = GetWorld()->SpawnActor<APawn>(MyBlueprintCharacterClass, spawnLocation, FRotator::ZeroRotator, SpawnParams);
                APawn* playerPawn = GetWorld()->SpawnActor<AMyPawn>(AMyPawn::StaticClass(), spawnLocation, FRotator::ZeroRotator, SpawnParams);
                if (playerPawn == nullptr) {
                    UE_LOG(LogTemp, Error, TEXT("Player pawn could not be spawned."));
                    return;
                }


                FVector PawnPosition = playerPawn->GetTransform().GetLocation();
                FVector2D viewerPosition = FVector2D(PawnPosition.X, PawnPosition.Y);

                if (playerPawn->GetController() == nullptr)
                {
                    UE_LOG(LogTemp, Warning, TEXT("Player pawn has no controller"));
                }
                //current_pc->Possess(playerPawn);
                //current_pc->SetPawn(playerPawn);

                UpdateVisibleChunks(viewerPosition);
            }
            else {
                APawn* playerPawn = current_pc->GetPawn();
                FVector PawnPosition = playerPawn->GetTransform().GetLocation();
                FVector2D viewerPosition = FVector2D(PawnPosition.X, PawnPosition.Y);
                UpdateVisibleChunks(viewerPosition);

            }

        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid player controller."));
        }



        // SpawnParams.Owner = current_pc;

         /*
         // Spawn pawn code
APlayerController* playerController = GetWorld()->GetFirstPlayerController();
playerController->SetViewTargetWithBlend(newPawn, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);
Second line is interesting way to get player controller may work as an alternative


            */

    }
    TreeMap.Empty();
}


float AVoxelGameModeBase::GetClosestPlayersDistance(FVector Goal)
{
    float closest = -1;
    for (auto pcs : playersArray)
    {
        if (pcs == nullptr) {
            UE_LOG(LogTemp, Warning, TEXT("player_loc is null!"));
            return -1;
        }
        if (pcs->GetPawn() == nullptr) {
            UE_LOG(LogTemp, Warning, TEXT("player_loc is null!"));
            return -1;
        }
        FVector player_loc = pcs->GetPawn()->GetTransform().GetLocation();
        player_loc.Z = 0;
        float dist = FVector::Dist(player_loc, Goal);
        if (dist < closest || closest == -1)
        {
            closest = dist;
        }
    }

    return closest;
}

AActor* AVoxelGameModeBase::spawnChunk(FVector Loc)
{

    FActorSpawnParameters SpawnParams;
    if (ChunkToSpawn == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("ChunkToSpawn is null!"));
        return nullptr;
    }
    AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ChunkToSpawn, Loc, FRotator(0.f, 0.f, 0.f), SpawnParams);

    return SpawnedActorRef;
}

bool AVoxelGameModeBase::UpdateChunk(AActor* chunk)
{
    FVector currentChunkPos = chunk->GetTransform().GetLocation();

    float closest_distance = GetClosestPlayersDistance(FVector(currentChunkPos.X, currentChunkPos.Y, 0.f));

    bool isHidden = chunk->IsHidden();

    if (closest_distance < maxViewDst && isHidden) {
        // Chunk is in the view distance and is currently hidden, unhide it and respawn trees
        chunk->SetActorHiddenInGame(false);
        AChunk* myChunk = Cast<AChunk>(chunk);
        if (myChunk != nullptr) {
            myChunk->RespawnTrees();
        }
        return true;  // Chunk visibility changed to visible
    }
    else if (closest_distance >= maxViewDst && !isHidden) {
        // Chunk is out of view distance and is currently visible, hide it
        chunk->SetActorHiddenInGame(true); //commenting out this line causes ALL chunks to appear, but obviously removing this line means they will never be hidden again
        return true;  // Chunk visibility changed to hidden
    }

    return false;  // Chunk visibility did not change
}
AVoxelGameModeBase::AVoxelGameModeBase()

{
    // ChunkPool(GetWorld(), AChunk::StaticClass(), );  // Initialize the ChunkPool here
    static ConstructorHelpers::FObjectFinder<UClass> BP_CharacterClass(TEXT("Class'/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C'"));
    if (BP_CharacterClass.Object != NULL) {
        UE_LOG(LogTemp, Warning, TEXT("BP_CharacterClass is not null"));
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("BP_CharacterClass is null"));
        return;
    }

    MyBlueprintCharacterClass = BP_CharacterClass.Object;

    ChunkToSpawn = AChunk::StaticClass();
    DefaultPawnClass = MyBlueprintCharacterClass;
    PlayerControllerClass = APlayerController::StaticClass();

    static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/TreeTest.TreeTest'"));
    if (MyTreeBlueprintFinder.Succeeded())
    {
        MyTreeBPClass = (UClass*)MyTreeBlueprintFinder.Object->GeneratedClass;
        //  UE_LOG(LogTemp, Warning, TEXT("Blueprint loaded successfully."));
    }


}
void AVoxelGameModeBase::GenerateTreeMap(const FVector& PlayerPosition)
{
    int maxTrees = 0;

    // Create a noise generator for tree placement
    FastNoiseLite* TreeNoise = new FastNoiseLite();
    TreeNoise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    TreeNoise->SetFrequency(0.01f); // Adjust the frequency to control the spacing between trees
    TreeNoise->SetFractalOctaves(1); // Only one octave for simplicity

    const auto Location = PlayerPosition;

    for (float x = 0; x < 200; ++x)
    {
        for (float y = 0; y < 200; ++y)
        {
            const float Xpos = (x * 100 + Location.X) / 100;
            const float Ypos = (y * 100 + Location.Y) / 100;

            float TreeValue = TreeNoise->GetNoise(Xpos, Ypos);
            // UE_LOG(LogTemp, Warning, TEXT("TREE not being added %d"),TreeNoise->GetNoise(Xpos,Ypos));
             // Adjust the threshold value to control tree density
            if (TreeValue > 0.6f && FMath::FRand() < 0.4f && maxTrees < 40) // Only place a tree if the value exceeds the threshold and a random chance occurs
            {
                const FVector2D TreePosition(x, y);
                const FVector TreeWorldPosition = FVector(TreePosition.X, TreePosition.Y, 0.f) * 500; // Convert the 2D position to a 3D world space location with increased scale

                // Check if the tree position is within the rendering distance from the player
                //below is the line blocking the trees from spawning
                UE_LOG(LogTemp, Warning, TEXT("TREE Calculation:%d"), (TreeWorldPosition - PlayerPosition).Size());
                if ((TreeWorldPosition - PlayerPosition).Size() <= 3 * 500)
                {

                    TreeMap.Add(TreePosition);
                    maxTrees++;
                }
            }
        }
    }
}

void AVoxelGameModeBase::SpawnTrees(const FVector& PlayerPosition)
{
    for (const FVector2D& TreePosition : TreeMap)
    {
        const FVector TreeWorldPosition = FVector(TreePosition.X, TreePosition.Y, 0.f) * 500; // Convert the 2D position to a 3D world space location with increased scale

        // Check if the tree position is within the rendering distance from the player
        if ((TreeWorldPosition - PlayerPosition).Size() <= 3)
        {
            FVector SpawnLocation = TreeWorldPosition;
            FRotator SpawnRotation = FRotator::ZeroRotator;
            FActorSpawnParameters SpawnParams;
            AActor* NewTreeActor = GetWorld()->SpawnActor<AActor>(MyTreeBPClass, SpawnLocation, SpawnRotation, SpawnParams);

            // Ensure the actor was created.
            if (NewTreeActor)
            {
                // Optionally, you can customize properties or attach components to the spawned tree actor.
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to spawn tree actor."));
            }
        }
    }
}
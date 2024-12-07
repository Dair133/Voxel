// Copyright Epic Games, Inc. All Rights Reserved.

#include <VoxelProject/VoxelGameModeBase.h>
#include "Engine/Engine.h"
#include <EngineUtils.h>
//#include <FastNoise/FastNoise.h>
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
#include "GameFramework/HUD.h"
#include <NiagaraComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <EditorCategoryUtils.h>
#include <random>
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

    // Create function for assigning found objects, so it takes in object found, obj to assign does null check? so it doesnt have to be repeated
    // if I have a lot of objects down the road?
  
   // / Script / Engine.Blueprint'/Game/ThirdPerson/CustomBp/MyHud.MyHud'
   
// Assume this is inside the AGMyGameMode class constructor
        // Set default HUD class
        static ConstructorHelpers::FClassFinder<AHUD> HUDClassHolder(TEXT("'/Game/ThirdPerson/CustomBp/MyHud.MyHud'"));
        if (HUDClassHolder.Succeeded())
        {
            UE_LOG(LogTemp, Warning, TEXT("HUD class found!"));
            MyHUDClass = HUDClassHolder.Class;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("HUD class not found!"));
            MyHUDClass = nullptr; // Ensure a safe default is set
        }



    static ConstructorHelpers::FObjectFinder<UBlueprint> MyTreeBlueprintFinder(TEXT("Blueprint'/Game/CUBEGENERATIONMAP/TreeTest.TreeTest'"));
    if (MyTreeBlueprintFinder.Succeeded())
    {
        MyTreeBPClass = (UClass*)MyTreeBlueprintFinder.Object->GeneratedClass;
        //  UE_LOG(LogTemp, Warning, TEXT("Blueprint loaded successfully."));
    }


}

void AVoxelGameModeBase::OnCheckUpdateChunks()
{
     float WorldTime1 = GetWorld()->GetTimeSeconds();
    FString DebugMessage1 = FString::Printf(TEXT("Time is %f"), WorldTime1);
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage1);
    UpdateVisibleChunksAroundPlayers();


    if (GetWorld()->GetTimeSeconds() > 80 && !addChunkTimerStarted)
    {
        GetWorld()->GetTimerManager().ClearTimer(chunkUpdateTimerHandle);
        int32 Key1 = -1;
        float TimeToDisplay1 = 5.0f; // Display the message for 5 seconds.
        FColor DisplayColor1 = FColor::Red; // Display the message in red.
        float WorldTime = GetWorld()->GetTimeSeconds();
        FString DebugMessage = FString::Printf(TEXT("World Time Section 2(Standard): %f"), WorldTime);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);
        GetWorld()->GetTimerManager().SetTimer(chunkUpdateTimerHandle, this, &AVoxelGameModeBase::OnCheckUpdateChunks, 2.0f, true);
        addChunkTimerStarted = true;
    }
    else if (!addChunkTimerStarted) {
        int32 Key1 = -1;
        float TimeToDisplay1 = 5.0f; // Display the message for 5 seconds.
        FColor DisplayColor1 = FColor::Red; // Display the message in red.
        float WorldTime = GetWorld()->GetTimeSeconds();
        //FString DebugMessage = FString::Printf(TEXT("World Time Section 1(Loading): %f"), WorldTime);
       // GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);
    }

  
}

void AVoxelGameModeBase::InitialiseActorReferences() {
    AActor* TreeSpawnerReference = FindActorByName(GetWorld(), TEXT("TreeSpawner"));
    if (TreeSpawnerReference)
    {
        UE_LOG(LogTemp, Warning, TEXT("TreeSpawner actor found sucessfully"));
        treeSpawner = TreeSpawnerReference;
    }
    else
    {
        // TreeSpawner was not found
        UE_LOG(LogTemp, Warning, TEXT("TreeSpawner actor not found."));
    }

    AActor* GrassSpawnerReference = FindActorByName(GetWorld(), TEXT("GrassSpawner"));
    if (GrassSpawnerReference)
    {
    UE_LOG(LogTemp, Warning, TEXT("GrassSpawner actor found sucessfully"));
    grassSpawner = GrassSpawnerReference;
	}
    else
    {
    // GrassSpawner was not found
    UE_LOG(LogTemp, Warning, TEXT("GrassSpawner actor not found."));
	}

    AActor* FlowerSpawnerOneReference = FindActorByName(GetWorld(), TEXT("FlowerSpawnerOne"));
    if (FlowerSpawnerOneReference)
    {
        UE_LOG(LogTemp, Warning, TEXT("FlowerSpawnerOne found sucessfully"));
       
        flowerSpawnerOne = FlowerSpawnerOneReference;
        flowerSpawnerOneHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(flowerSpawnerOne->GetComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass()));
    }
    else
    {
        // GrassSpawner was not found
        UE_LOG(LogTemp, Warning, TEXT("FlowerSpawnerOne actor not found."));
    }

    AActor* FlowerSpawnerTwoReference = FindActorByName(GetWorld(), TEXT("FlowerSpawnerTwo"));
    if (FlowerSpawnerTwoReference)
    {
        UE_LOG(LogTemp, Warning, TEXT("FlowerSpawnerTwo found sucessfully"));
        flowerSpawnerTwo = FlowerSpawnerTwoReference;
        flowerSpawnerTwoHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(flowerSpawnerTwo->GetComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass()));
        
    }
    else
    {
        // GrassSpawner was not found
        UE_LOG(LogTemp, Warning, TEXT("FlowerSpawnerTwo actor not found."));
    }

    AActor* FlowerSpawnerThreeReference = FindActorByName(GetWorld(), TEXT("FlowerSpawnerThree"));
    if (FlowerSpawnerThreeReference)
    {
        UE_LOG(LogTemp, Warning, TEXT("FlowerSpawnerThree found sucessfully"));
        flowerSpawnerThree = FlowerSpawnerThreeReference;
        flowerSpawnerThreeHISM = Cast<UHierarchicalInstancedStaticMeshComponent>(flowerSpawnerThree->GetComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass()));
    }
    else
    {
        // GrassSpawner was not found
        UE_LOG(LogTemp, Warning, TEXT("FlowerSpawnerThree actor not found."));
    }

    AActor* wheatSpawnerReference = FindActorByName(GetWorld(), TEXT("WheatSpawner"));
    if (wheatSpawnerReference)
    {
        UE_LOG(LogTemp, Warning, TEXT("Wheat Spawner found in gamemode"));
        wheatSpawner = Cast<UHierarchicalInstancedStaticMeshComponent>(wheatSpawnerReference->GetComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass()));
    }
    else
    {
        // GrassSpawner was not found
        UE_LOG(LogTemp, Warning, TEXT("Wheat Spawner not found in gamemode."));
    }
}


void AVoxelGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    //200 height was the multiple 12.5
    ChunkSizeInMeters = ChunkSize * BlockSize;
    maxViewDst = maxViewDst * ChunkSizeInMeters;
    chunksVisibleInViewDst = maxViewDst / ChunkSizeInMeters;

    if (this->HasAuthority())
    {
        // below sets up infinite recursion basically
        int32 Key1 = -1;
        float TimeToDisplay1 = 5.0f; // Display the message for 5 seconds.
        FColor DisplayColor1 = FColor::Red; // Display the message in red.
        float WorldTime = GetWorld()->GetTimeSeconds();
        FString DebugMessage = FString::Printf(TEXT("Setting up 0.01 timer: %f"), WorldTime);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);
        GetWorld()->GetTimerManager().SetTimer(chunkUpdateTimerHandle, this, &AVoxelGameModeBase::OnCheckUpdateChunks, 2.0f, true);
    }

    //UpdateVisibleChunksAroundPlayers();

    InitialiseActorReferences();

  


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
        FVector spawnLocation = FVector(-2200.0f, 250.f, 15000.f);
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
            NewPlayer->ClientSetHUD(HUDClass);
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

    //UE_LOG(LogTemp, Warning, TEXT("Testing process chunk queue %d"), test);
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
            }
        }
    }
   
    // Insread of doing this here we start a timer which simply checks the queueu x times per second and spawns a chunk if something in queue
    if (GetWorld()->GetTimeSeconds() > 80 && !slowCreateChunkTimerStarted)
    {
        UE_LOG(LogTemp, Warning, TEXT("Starting slow timer"));
        GetWorld()->GetTimerManager().ClearTimer(createChunkTimerHandle);
        GetWorld()->GetTimerManager().SetTimer(createChunkTimerHandle, this, &AVoxelGameModeBase::ProcessChunkQueue, 0.4f, true);
        slowCreateChunkTimerStarted = true;
    }
    else if(!fastCreateChunkTimerStarted) {
        UE_LOG(LogTemp, Warning, TEXT("Starting fast timer"));
        GetWorld()->GetTimerManager().SetTimer(createChunkTimerHandle, this, &AVoxelGameModeBase::ProcessChunkQueue, 0.018f, true);
        fastCreateChunkTimerStarted = true;
    }

}
void AVoxelGameModeBase::ProcessChunkQueue()
{

    // UE_LOG(LogTemp, Warning, TEXT("Processing chunk queue"));
    // UE_LOG(LogTemp, Warning, TEXT("Processing chunk queue"));
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
        if (GetWorld()->GetTimeSeconds() > 12)
        {

            if (!GetWorld()->GetTimerManager().IsTimerActive(SpawnTimerHandle))
            {
                //std::random_device rd;
                //std::mt19937 gen(rd());
                //std::uniform_real_distribution<> distrib(0.0, 0.003); // Range from 0.0 to 1.0

                //double randomFloat = distrib(gen); // Generates a random double between 0.0 and 1.0



                //GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AVoxelGameModeBase::OnCheckUpdateChunks, 0.32f+(randomFloat), false);
            }
            //0.55 is a good value
            //0.42 is a good value(main value used for testing over previous days)
        }
        else {
            //int32 Key1 = -1;
            //float TimeToDisplay1 = 5.0f; // Display the message for 5 seconds.
            //FColor DisplayColor1 = FColor::Red; // Display the message in red.
            //float WorldTime = GetWorld()->GetTimeSeconds();
            //FString DebugMessage = FString::Printf(TEXT("World Time: %f"), WorldTime);
            //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);
           //GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AVoxelGameModeBase::OnCheckUpdateChunks, 0.001f, false);
        }
    }
}

void AVoxelGameModeBase::UpdateVisibleChunksAroundPlayers()
{

    TArray<AActor*> updatedVisibleTerrainChunks;

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
           // UE_LOG(LogTemp, Warning, TEXT("Updating visible chunks once"));
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

                //UE_LOG(LogTemp, Warning, TEXT("Updating visible chunks twice"));
                UpdateVisibleChunks(viewerPosition);
            }
            else if (!current_pc) {
                UE_LOG(LogTemp, Warning, TEXT("Likely Error,else if entered inside UpdateVisibleChunksAroundPlayer"));
                APawn* playerPawn = current_pc->GetPawn();
                FVector PawnPosition = playerPawn->GetTransform().GetLocation();
                FVector2D viewerPosition = FVector2D(PawnPosition.X, PawnPosition.Y);
                UE_LOG(LogTemp, Warning, TEXT("Updating visible chunks three"));
                UpdateVisibleChunks(viewerPosition);

            }

        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid player controller."));
        }
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
    chunksCounter++;
    //UE_LOG(LogTemp, Warning, TEXT("Inside spawn chun %d"), chunksCounter);
    FActorSpawnParameters SpawnParams;
    if (ChunkToSpawn == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("ChunkToSpawn is null!"));
        return nullptr;
    }
    AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ChunkToSpawn, Loc, FRotator(0.f, 0.f, 0.f), SpawnParams);
    AChunk* myChunk = Cast<AChunk>(SpawnedActorRef);
    AxisOneQueue.Enqueue(myChunk);
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
//            myChunk->RespawnTrees();
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


AActor* AVoxelGameModeBase::GetTreeSpawner() {
    return treeSpawner;
}
AActor* AVoxelGameModeBase::GetGrassSpawner() {
    return grassSpawner;
}
UHierarchicalInstancedStaticMeshComponent* AVoxelGameModeBase::GetFlowerSpawnerOne() {
	return flowerSpawnerOneHISM;
}
UHierarchicalInstancedStaticMeshComponent* AVoxelGameModeBase::GetFlowerSpawnerTwo() {
	return flowerSpawnerTwoHISM;
}
UHierarchicalInstancedStaticMeshComponent* AVoxelGameModeBase::GetFlowerSpawnerThree() {
	return flowerSpawnerThreeHISM;
}
UHierarchicalInstancedStaticMeshComponent* AVoxelGameModeBase::GetWheatSpawner() {
    return wheatSpawner;
}



AActor* AVoxelGameModeBase::FindActorByName(UWorld* World, const FString& ActorName)
{
    if (!World) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid world context provided to FindActorByName"));
        return nullptr;
    }

    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* Actor = *It;
        UE_LOG(LogTemp, Warning, TEXT("Searching for actor %s"), *Actor->GetActorLabel());
        if (Actor && Actor->GetActorLabel() == ActorName)
        {
       
            return Actor;
        }
    }
    return nullptr;
}



#pragma once
#include "CoreMinimal.h"
#include <VoxelProject/BoxTwo.h>
#include <VoxelProject/Vector2.h>
#include <VoxelProject/Enums.h>
#include "GameFramework/PlayerState.h"
//#include "Blueprint/AIBlueprintHelperLibrary.h"
#include <Kismet/GameplayStatics.h>
#include "HAL/PlatformProcess.h"
#include "GameFramework/GameModeBase.h"
#include "VoxelGameModeBase.generated.h"




/**
 *
 */
UCLASS()
class  AVoxelGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

    // UProperties
    UPROPERTY(EditDefaultsOnly, Category = "Performance")
    float maxViewDst = 10;

    UPROPERTY(EditDefaultsOnly, Category = "Performance")
    int ChunkSize = 16;

    UPROPERTY(EditDefaultsOnly, Category = "Performance")
    int BlockSize = 100;

    UPROPERTY(EditDefaultsOnly, Category = "Performance")
    float chunkUpdateTickSpeed = 0.8f;

    UPROPERTY(EditAnywhere, Category = "Spawning")
    TSubclassOf<AActor> ChunkToSpawn;

    UPROPERTY()
    UStaticMesh* MyTreeMesh;

    UClass* MyTreeBPClass;

    void GenerateTreeMap(const FVector& PlayerPosition);
    void SpawnTrees(const FVector& PlayerPosition);
    std::string ToStringEnumFunc(EBlock blockType);
    TArray<FVector2D> TreeMap;
    TQueue<FVector> ChunkQueue;
    //void AVoxelGameGameModeBase::SpawnNextChunk();
    void ProcessChunkQueue();
    FTimerHandle SpawnTimerHandle;
    bool loaded;
    void HideOutOfRangeChunks();


    // Chunk Updating
    FTimerHandle chunkUpdateTimerHandle;

    UFUNCTION()
    void OnCheckUpdateChunks();


    UClass* MyBlueprintCharacterClass;

    int numTimers;
    void UpdateVisibleChunks(FVector2D viewerPosition);
    void UpdateVisibleChunksAroundPlayers();
    int InitialChunkPoolSize = 100;
    float GetClosestPlayersDistance(FVector Goal);

    float ChunkSizeInMeters = 32.0;
    int chunksVisibleInViewDst;



    bool UpdateChunk(AActor* chunk);

    AVoxelGameModeBase();

    AActor* spawnChunk(FVector Loc);

    TMap<FVector2D, AActor*> terrainChunkMap;
    TMap<FVector, AActor*> terrainChunkMap2;
    TArray<AActor*> visibleTerrainChunks;
   

    //pooling stuff
    //TUniquePtr<ChunkPool> ChunkPoolPtr;
    int InitialPoolSize = 30;
    FCriticalSection CriticalSection;
    FCriticalSection VertexCountCriticalSection;
public:



protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay();

    TArray<APlayerController*> playersArray;
    TMap<APlayerController*, FVector2D> lastPlayerPostitions;


public:
    // Handle Players Leaving and Joining
    virtual void PostLogin(APlayerController* NewPlayer);
    virtual void Logout(AController* Exiting);




};

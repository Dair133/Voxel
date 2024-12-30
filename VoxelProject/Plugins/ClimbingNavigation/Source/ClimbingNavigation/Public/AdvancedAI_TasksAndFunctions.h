

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NavQuery_HidingLocSearchParams.h"
#include "NavQuery_FullNavPathFinding.h"
#include "NavigationPath.h"
#include "ClimbingNavigationBPLibrary.h"
#include "ClimbNavigationStorageActor.h"
#include "HidingLocSearch_EnemyProperties.h"
#include "AdvancedAI_TasksAndFunctions.generated.h"



UCLASS( ClassGroup=(AI), meta=(BlueprintSpawnableComponent) )
class CLIMBINGNAVIGATION_API UAdvancedAI_TasksAndFunctions : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAdvancedAI_TasksAndFunctions();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	ACharacter* RefChar = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Default Sight Params"))
	float DefaultSightHalfAngle = 35.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Default Sight Params"))
	float DefaultSightRadius = 1800.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Default Sight Params"))
	float DefaultSightHeight = 140.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Debuging"))
	bool bDrawDebugTraces = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Debuging"))
	bool bDrawDebugPointInfo = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Debuging"))
	bool bDrawDebugPathInfo = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Debuging"))
	bool bDrawDebugSightRange = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Debuging"))
	float DebugDuration = 0.5;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	// Total Finding Hiding Position Query Structure --------------------------------------------------------------------------------------------------------------------------------------

	/*A complex function designed to determine the best position the AI ​​should reach for in order to stay out of sight of nearby enemies.*/
	UFUNCTION(BlueprintCallable, Category = "Navigation", meta = (DisplayName = "Try Find Hinding Position Sync", Keywords = "Navigation,Hiding", AdvancedDisplay = "CustomOverrideData"))
	virtual void TryFindHindingPositionSync(bool& Succesful, FTransform& ChoosedTransform, float& PathLenght, FVector TracingOrigin, UNavQuery_HidingLocSearchParams* QueryParamsData, TSubclassOf<UHidingLocSearch_EnemyProperties> CustomOverrideData);

	UFUNCTION(BlueprintPure, Category = "Navigation", meta = (DisplayName = "Detected By Fake Sight Perception", Keywords = "Navigation,Hiding", AdvancedDisplay = "CustomOverrideData"))
	bool DetectedByFakeSightPerception(FVector TracingOrigin, UNavQuery_HidingLocSearchParams* QueryParamsData, TSubclassOf<UHidingLocSearch_EnemyProperties> CustomOverrideData);

	bool CheckPointIsNotInVisibilityRange(TArray<ACharacter*> EnemysArray, FVector PointLocation, FRotator PointRotation, float MinValidDistance, float TraceRadius, UHidingLocSearch_EnemyProperties* CustomOverrideData, bool bDrawDebug);

	float DistanceToNearsetEnemy(TArray<ACharacter*> EnemysArray, FVector TargetLocation);

	float CalculateAngleWeight(FVector& TotalDistances, TArray<ACharacter*> EnemysArray, FRotator PointRotation, FVector DistanceMapTarget, bool bUseAbs);

	bool SubdividePath(TArray<FVector>& NewPoints, TArray<FVector> InPoints, int ConstSubdivider, bool UseDynamic, float SubSegmentLength);

	float MakePointVisiblityWeight(TArray<ACharacter*> EnemysArray, FVector PointLocation, FRotator PointRotation, float MinValidDistance, float TraceRadius, bool bNormalize, UHidingLocSearch_EnemyProperties* CustomOverrideData, bool bDrawDebug);

	bool GetControllerSightProperties(FVector& SightOrigin, FRotator& SightRotation, float& HalfAngle, float& Radius, float& Height, ACharacter* InCharacter, UHidingLocSearch_EnemyProperties* CustomOverrideData, int IterIndex);

	UNavigationPath* TryFindPathToLocationSync(FVector PathStart, FVector PathEnd);
	// END -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


	// System przeznaczony do przeanalizowania kompletnej sciezki (w tym nawigacja wspinania) od ActorStart do ActorEnd

	/*Function that allows to determine the path to reach the object (ActorToReach) including data related to NavClimbing. For correct operation, data is required 
	informing whether the characters are in climbing mode. These parameters are specified manually. The function is certainly not able to predict all possible cases. 
	The maximum number of navigation objects analyzed AClimbNavigationStorageActor can be two.*/
	UFUNCTION(BlueprintCallable, Category = "Navigation", meta = (DisplayName = "Try Find Path To Actor Including Nav Climb", Keywords = "Navigation,Climbing,Path,Finding"))
	void TryFindPathToActorIncludingNavClimb(bool& Succesful, FClimbNav_FullPathData& QueryResult, AActor* StartActor, AActor* ActorToReach, AClimbNavigationStorageActor* CurrentClimbNav, bool bStartActorIsClimb, bool bEndActorIsClimb, UNavQuery_FullNavPathFinding* QueryParams);

	bool ProjectToNavigationWhenActorClimb(FVector& ProjectedPoint, FTransform CheckingStart, FVector BoxExtend, int MaxIterPerSide, bool bNegateUpAxis, float ForwardOffset, bool bDrawDebugShapes, float DisplayDuration);

	bool TryBuildFullPathIncludeNavClimb(FClimbNav_FullPathData& FunctionResult, FVector CPPS, FVector CPPP, AActor* StartActor, AActor* ActorToReach, AClimbNavigationStorageActor* CurrentClimbNav, AClimbNavigationStorageActor* NextClimbNav, UNavQuery_FullNavPathFinding* QueryParams);

	bool TryBuildOnlyClimbPath(FClimbNav_FullPathData& FunctionResult, AActor* StartActor, AActor* ActorToReach, AClimbNavigationStorageActor* CurrentClimbNav, AClimbNavigationStorageActor* NextClimbNav, UNavQuery_FullNavPathFinding* QueryParams);

	UFUNCTION(BlueprintCallable, Category = "Navigation", meta = (DisplayName = "Draw Result From Total Nav Path", Keywords = "Navigation,Climbing,Path,Finding"))
	void DrawResultFromTotalNavPath(FClimbNav_FullPathData QueryResult, float DebugTime);
	// END -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

private:

	void DrawDebugPointInfo(FVector Location, float Weight);
	void DrawDebugPath(TArray<FVector> PathPoints, float Weight);

	float MakeDistributionWeight(FWeightFunction InWeightStruct);

};

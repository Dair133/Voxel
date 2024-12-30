

#pragma once

#include "CoreMinimal.h"
#include "ALS_StructuresAndEnumsCpp.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/Interface.h"
#include "AGLS_AI_CharacterInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAGLS_AI_CharacterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HELPFULFUNCTIONS_API IAGLS_AI_CharacterInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Get", meta = (AdvancedDisplay = 2))
	void BPI_AI_Get_CurrentStates(
		TEnumAsByte<EMovementMode>& PawnMovementMode,
		CALS_MovementState& MovementState,
		CALS_MovementState& PrevMovementState,
		CALS_MovementAction& MovementAction,
		CALS_RotationMode& RotationMode,
		CALS_Gait& ActualGait,
		CALS_Stance& ActualStance,
		CALS_OverlayState& OverlayState,
		CALS_GroundedMoveMode& GroundedMoveMode
		);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Get", meta = (AdvancedDisplay = 2))
	void BPI_AI_Get_EssentialValues(
		FVector& Velocity,
		FVector& Acceleration,
		FVector& MovementInput,
		bool& IsMoving,
		bool& HasMovementInput,
		float& Speed,
		FRotator& AimingRotation,
		float& AimYawRate
	);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Get")
	void BPI_AI_Get_CurrentActivatedTask(UObject* Task);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Get")
	void BPI_AI_Get_RotationLocked(bool& RotationIsLocked);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_MovementState(CALS_MovementState NewState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_MovementAction(CALS_MovementAction NewAction);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_RotationMode(CALS_RotationMode NewMode);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_Gait(CALS_Gait NewGait);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_DesiredGait(CALS_Gait NewDesiredGait);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_OverlayState(CALS_OverlayState NewState, bool Forced);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_GrounedMoveMode(CALS_GroundedMoveMode NewMode);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_MovementSettingsByName(FName KeyName);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_StruckCharacter(ACharacter* From, ACharacter* To, float Damage);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_CrouchOrUncrouch(CALS_Stance Stance);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_LockRotationUpdate(bool LockUpdate);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Set")
	void BPI_AI_Set_EnableRagdoll(bool Enable);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Get")
	void BPI_AI_Get_LOD_State(AGLS_LOD_State& CurrentState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Get", meta = (AdvancedDisplay = 1))
	void BPI_AI_Get_LocomotionModeIndex(int& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BPI AI Character|Get")
	void BPI_AI_GetPathFollowActor(AActor*& PathActor) const;

};

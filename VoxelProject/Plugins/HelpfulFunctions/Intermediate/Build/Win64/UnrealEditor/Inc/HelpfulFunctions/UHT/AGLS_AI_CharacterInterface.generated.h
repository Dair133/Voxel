// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_AI_CharacterInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UObject;
enum class AGLS_LOD_State : uint8;
enum class CALS_Gait : uint8;
enum class CALS_GroundedMoveMode : uint8;
enum class CALS_MovementAction : uint8;
enum class CALS_MovementState : uint8;
enum class CALS_OverlayState : uint8;
enum class CALS_RotationMode : uint8;
enum class CALS_Stance : uint8;
#ifdef HELPFULFUNCTIONS_AGLS_AI_CharacterInterface_generated_h
#error "AGLS_AI_CharacterInterface.generated.h already included, missing '#pragma once' in AGLS_AI_CharacterInterface.h"
#endif
#define HELPFULFUNCTIONS_AGLS_AI_CharacterInterface_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPI_AI_GetPathFollowActor_Implementation(AActor*& PathActor) const {}; \
	virtual void BPI_AI_Get_LocomotionModeIndex_Implementation(int32& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName) {}; \
	virtual void BPI_AI_Get_LOD_State_Implementation(AGLS_LOD_State& CurrentState) {}; \
	virtual void BPI_AI_Set_EnableRagdoll_Implementation(bool Enable) {}; \
	virtual void BPI_AI_Set_LockRotationUpdate_Implementation(bool LockUpdate) {}; \
	virtual void BPI_AI_CrouchOrUncrouch_Implementation(CALS_Stance Stance) {}; \
	virtual void BPI_AI_Set_StruckCharacter_Implementation(ACharacter* From, ACharacter* To, float Damage) {}; \
	virtual void BPI_AI_Set_MovementSettingsByName_Implementation(FName KeyName) {}; \
	virtual void BPI_AI_Set_GrounedMoveMode_Implementation(CALS_GroundedMoveMode NewMode) {}; \
	virtual void BPI_AI_Set_OverlayState_Implementation(CALS_OverlayState NewState, bool Forced) {}; \
	virtual void BPI_AI_Set_DesiredGait_Implementation(CALS_Gait NewDesiredGait) {}; \
	virtual void BPI_AI_Set_Gait_Implementation(CALS_Gait NewGait) {}; \
	virtual void BPI_AI_Set_RotationMode_Implementation(CALS_RotationMode NewMode) {}; \
	virtual void BPI_AI_Set_MovementAction_Implementation(CALS_MovementAction NewAction) {}; \
	virtual void BPI_AI_Set_MovementState_Implementation(CALS_MovementState NewState) {}; \
	virtual void BPI_AI_Get_RotationLocked_Implementation(bool& RotationIsLocked) {}; \
	virtual void BPI_AI_Get_CurrentActivatedTask_Implementation(UObject* Task) {}; \
	virtual void BPI_AI_Get_EssentialValues_Implementation(FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, FRotator& AimingRotation, float& AimYawRate) {}; \
	virtual void BPI_AI_Get_CurrentStates_Implementation(TEnumAsByte<EMovementMode>& PawnMovementMode, CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance, CALS_OverlayState& OverlayState, CALS_GroundedMoveMode& GroundedMoveMode) {}; \
	DECLARE_FUNCTION(execBPI_AI_GetPathFollowActor); \
	DECLARE_FUNCTION(execBPI_AI_Get_LocomotionModeIndex); \
	DECLARE_FUNCTION(execBPI_AI_Get_LOD_State); \
	DECLARE_FUNCTION(execBPI_AI_Set_EnableRagdoll); \
	DECLARE_FUNCTION(execBPI_AI_Set_LockRotationUpdate); \
	DECLARE_FUNCTION(execBPI_AI_CrouchOrUncrouch); \
	DECLARE_FUNCTION(execBPI_AI_Set_StruckCharacter); \
	DECLARE_FUNCTION(execBPI_AI_Set_MovementSettingsByName); \
	DECLARE_FUNCTION(execBPI_AI_Set_GrounedMoveMode); \
	DECLARE_FUNCTION(execBPI_AI_Set_OverlayState); \
	DECLARE_FUNCTION(execBPI_AI_Set_DesiredGait); \
	DECLARE_FUNCTION(execBPI_AI_Set_Gait); \
	DECLARE_FUNCTION(execBPI_AI_Set_RotationMode); \
	DECLARE_FUNCTION(execBPI_AI_Set_MovementAction); \
	DECLARE_FUNCTION(execBPI_AI_Set_MovementState); \
	DECLARE_FUNCTION(execBPI_AI_Get_RotationLocked); \
	DECLARE_FUNCTION(execBPI_AI_Get_CurrentActivatedTask); \
	DECLARE_FUNCTION(execBPI_AI_Get_EssentialValues); \
	DECLARE_FUNCTION(execBPI_AI_Get_CurrentStates);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_CALLBACK_WRAPPERS
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UAGLS_AI_CharacterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAGLS_AI_CharacterInterface(UAGLS_AI_CharacterInterface&&); \
	UAGLS_AI_CharacterInterface(const UAGLS_AI_CharacterInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UAGLS_AI_CharacterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_AI_CharacterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGLS_AI_CharacterInterface) \
	HELPFULFUNCTIONS_API virtual ~UAGLS_AI_CharacterInterface();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAGLS_AI_CharacterInterface(); \
	friend struct Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics; \
public: \
	DECLARE_CLASS(UAGLS_AI_CharacterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), HELPFULFUNCTIONS_API) \
	DECLARE_SERIALIZER(UAGLS_AI_CharacterInterface)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAGLS_AI_CharacterInterface() {} \
public: \
	typedef UAGLS_AI_CharacterInterface UClassType; \
	typedef IAGLS_AI_CharacterInterface ThisClass; \
	static void Execute_BPI_AI_CrouchOrUncrouch(UObject* O, CALS_Stance Stance); \
	static void Execute_BPI_AI_Get_CurrentActivatedTask(UObject* O, UObject* Task); \
	static void Execute_BPI_AI_Get_CurrentStates(UObject* O, TEnumAsByte<EMovementMode>& PawnMovementMode, CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance, CALS_OverlayState& OverlayState, CALS_GroundedMoveMode& GroundedMoveMode); \
	static void Execute_BPI_AI_Get_EssentialValues(UObject* O, FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, FRotator& AimingRotation, float& AimYawRate); \
	static void Execute_BPI_AI_Get_LocomotionModeIndex(UObject* O, int32& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName); \
	static void Execute_BPI_AI_Get_LOD_State(UObject* O, AGLS_LOD_State& CurrentState); \
	static void Execute_BPI_AI_Get_RotationLocked(UObject* O, bool& RotationIsLocked); \
	static void Execute_BPI_AI_GetPathFollowActor(const UObject* O, AActor*& PathActor); \
	static void Execute_BPI_AI_Set_DesiredGait(UObject* O, CALS_Gait NewDesiredGait); \
	static void Execute_BPI_AI_Set_EnableRagdoll(UObject* O, bool Enable); \
	static void Execute_BPI_AI_Set_Gait(UObject* O, CALS_Gait NewGait); \
	static void Execute_BPI_AI_Set_GrounedMoveMode(UObject* O, CALS_GroundedMoveMode NewMode); \
	static void Execute_BPI_AI_Set_LockRotationUpdate(UObject* O, bool LockUpdate); \
	static void Execute_BPI_AI_Set_MovementAction(UObject* O, CALS_MovementAction NewAction); \
	static void Execute_BPI_AI_Set_MovementSettingsByName(UObject* O, FName KeyName); \
	static void Execute_BPI_AI_Set_MovementState(UObject* O, CALS_MovementState NewState); \
	static void Execute_BPI_AI_Set_OverlayState(UObject* O, CALS_OverlayState NewState, bool Forced); \
	static void Execute_BPI_AI_Set_RotationMode(UObject* O, CALS_RotationMode NewMode); \
	static void Execute_BPI_AI_Set_StruckCharacter(UObject* O, ACharacter* From, ACharacter* To, float Damage); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_12_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_CALLBACK_WRAPPERS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UAGLS_AI_CharacterInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

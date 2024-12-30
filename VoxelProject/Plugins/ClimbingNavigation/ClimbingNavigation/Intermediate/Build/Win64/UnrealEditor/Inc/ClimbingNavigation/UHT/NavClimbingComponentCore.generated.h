// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavClimbingComponentCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AClimbNavigationStorageActor;
class UAnimMontage;
class UPrimitiveComponent;
struct FClimbNav_SingleClimbPoint;
#ifdef CLIMBINGNAVIGATION_NavClimbingComponentCore_generated_h
#error "NavClimbingComponentCore.generated.h already included, missing '#pragma once' in NavClimbingComponentCore.h"
#endif
#define CLIMBINGNAVIGATION_NavClimbingComponentCore_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNormalizedMainTimer); \
	DECLARE_FUNCTION(execUpdateWhenReleaseLedge); \
	DECLARE_FUNCTION(execDropFromLedgeHold); \
	DECLARE_FUNCTION(execStartReleaseLedgeClimb); \
	DECLARE_FUNCTION(execCheckCanReleaseClimb); \
	DECLARE_FUNCTION(execTryPauseMovement); \
	DECLARE_FUNCTION(execMoveToTargetOnClimbNavigation); \
	DECLARE_FUNCTION(execReleaseLedgeFinished); \
	DECLARE_FUNCTION(execUpdatePrepareToClimbLedge); \
	DECLARE_FUNCTION(execGetStartingClimbMontage); \
	DECLARE_FUNCTION(execJumpToLedgeClimb); \
	DECLARE_FUNCTION(execGetPlayerIsClimbing); \
	DECLARE_FUNCTION(execPerformFollowing); \
	DECLARE_FUNCTION(execPrepareAnimInstParams); \
	DECLARE_FUNCTION(execUpdateAnimValuesWhenClimb); \
	DECLARE_FUNCTION(execSetTargetActionState); \
	DECLARE_FUNCTION(execChooseInterpolationMethod); \
	DECLARE_FUNCTION(execUpdateMovementOnPath); \
	DECLARE_FUNCTION(execSwitchToNextPathPoint); \
	DECLARE_FUNCTION(execTryPerformMovingOnClimbPath); \
	DECLARE_FUNCTION(execInitializeComponent); \
	DECLARE_FUNCTION(execSetTransformWhen); \
	DECLARE_FUNCTION(execGetPathPointsStruct); \
	DECLARE_FUNCTION(execTimerFinishedTollerance); \
	DECLARE_FUNCTION(execScaleForwardCapOffset);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavClimbingComponentCore(); \
	friend struct Z_Construct_UClass_UNavClimbingComponentCore_Statics; \
public: \
	DECLARE_CLASS(UNavClimbingComponentCore, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(UNavClimbingComponentCore)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavClimbingComponentCore(UNavClimbingComponentCore&&); \
	UNavClimbingComponentCore(const UNavClimbingComponentCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavClimbingComponentCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavClimbingComponentCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavClimbingComponentCore) \
	NO_API virtual ~UNavClimbingComponentCore();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_29_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class UNavClimbingComponentCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

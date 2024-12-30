// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmoothPathFollowingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIMBINGNAVIGATION_SmoothPathFollowingComponent_generated_h
#error "SmoothPathFollowingComponent.generated.h already included, missing '#pragma once' in SmoothPathFollowingComponent.h"
#endif
#define CLIMBINGNAVIGATION_SmoothPathFollowingComponent_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableRoundingPath); \
	DECLARE_FUNCTION(execCalculateTangentCircle); \
	DECLARE_FUNCTION(execResumePausedMove); \
	DECLARE_FUNCTION(execPauseCurrentMove);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmoothPathFollowingComponent(); \
	friend struct Z_Construct_UClass_USmoothPathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(USmoothPathFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(USmoothPathFollowingComponent)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmoothPathFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USmoothPathFollowingComponent(USmoothPathFollowingComponent&&); \
	USmoothPathFollowingComponent(const USmoothPathFollowingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmoothPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmoothPathFollowingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmoothPathFollowingComponent) \
	NO_API virtual ~USmoothPathFollowingComponent();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_12_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class USmoothPathFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

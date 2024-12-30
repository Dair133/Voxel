// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClimbNavigationStorageActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClimbNav_SingleClimbPoint;
#ifdef CLIMBINGNAVIGATION_ClimbNavigationStorageActor_generated_h
#error "ClimbNavigationStorageActor.generated.h already included, missing '#pragma once' in ClimbNavigationStorageActor.h"
#endif
#define CLIMBINGNAVIGATION_ClimbNavigationStorageActor_generated_h

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastBuildedPath); \
	DECLARE_FUNCTION(execFindNearestNavLedge); \
	DECLARE_FUNCTION(execFindPathBetweenClimbPoints);


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClimbNavigationStorageActor(); \
	friend struct Z_Construct_UClass_AClimbNavigationStorageActor_Statics; \
public: \
	DECLARE_CLASS(AClimbNavigationStorageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(AClimbNavigationStorageActor)


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AClimbNavigationStorageActor(AClimbNavigationStorageActor&&); \
	AClimbNavigationStorageActor(const AClimbNavigationStorageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClimbNavigationStorageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClimbNavigationStorageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClimbNavigationStorageActor) \
	NO_API virtual ~AClimbNavigationStorageActor();


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_10_PROLOG
#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class AClimbNavigationStorageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

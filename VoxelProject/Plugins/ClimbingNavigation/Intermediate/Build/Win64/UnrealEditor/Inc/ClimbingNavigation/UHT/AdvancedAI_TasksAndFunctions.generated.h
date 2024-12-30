// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdvancedAI_TasksAndFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AClimbNavigationStorageActor;
class UHidingLocSearch_EnemyProperties;
class UNavQuery_FullNavPathFinding;
class UNavQuery_HidingLocSearchParams;
struct FClimbNav_FullPathData;
#ifdef CLIMBINGNAVIGATION_AdvancedAI_TasksAndFunctions_generated_h
#error "AdvancedAI_TasksAndFunctions.generated.h already included, missing '#pragma once' in AdvancedAI_TasksAndFunctions.h"
#endif
#define CLIMBINGNAVIGATION_AdvancedAI_TasksAndFunctions_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawResultFromTotalNavPath); \
	DECLARE_FUNCTION(execTryFindPathToActorIncludingNavClimb); \
	DECLARE_FUNCTION(execDetectedByFakeSightPerception); \
	DECLARE_FUNCTION(execTryFindHindingPositionSync);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedAI_TasksAndFunctions(); \
	friend struct Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics; \
public: \
	DECLARE_CLASS(UAdvancedAI_TasksAndFunctions, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedAI_TasksAndFunctions)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAdvancedAI_TasksAndFunctions(UAdvancedAI_TasksAndFunctions&&); \
	UAdvancedAI_TasksAndFunctions(const UAdvancedAI_TasksAndFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedAI_TasksAndFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedAI_TasksAndFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedAI_TasksAndFunctions) \
	NO_API virtual ~UAdvancedAI_TasksAndFunctions();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_17_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class UAdvancedAI_TasksAndFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

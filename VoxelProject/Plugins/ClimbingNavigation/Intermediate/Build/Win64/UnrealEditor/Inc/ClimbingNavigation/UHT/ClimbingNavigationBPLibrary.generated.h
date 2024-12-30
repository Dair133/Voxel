// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClimbingNavigationBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AClimbNavigationStorageActor;
class UObject;
struct FClimbNav_SingleClimbPoint;
struct FLinearColor;
struct FNavEdgeParams;
#ifdef CLIMBINGNAVIGATION_ClimbingNavigationBPLibrary_generated_h
#error "ClimbingNavigationBPLibrary.generated.h already included, missing '#pragma once' in ClimbingNavigationBPLibrary.h"
#endif
#define CLIMBINGNAVIGATION_ClimbingNavigationBPLibrary_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<struct FClimbNav_OtherPointParams>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<struct FClimbNav_SingleClimbPoint>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<struct FClimbNav_InitialLedgeParams>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<struct FClimbNav_SplineLedgeParams>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavEdgeParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<struct FNavEdgeParams>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<struct FClimbNav_FullPathData>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_193_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindExternalEdgesInBox); \
	DECLARE_FUNCTION(execFindClosestNavMeshEdge); \
	DECLARE_FUNCTION(execFindClosestEdgeOnNavMesh); \
	DECLARE_FUNCTION(execIsPointOnSegment); \
	DECLARE_FUNCTION(execDrawDebugArc); \
	DECLARE_FUNCTION(execDrawDebugPartCylinder); \
	DECLARE_FUNCTION(execIsPointInsideCylinderSegment); \
	DECLARE_FUNCTION(execTryFindPathForClimbNav);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUClimbingNavigationBPLibrary(); \
	friend struct Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UClimbingNavigationBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(UClimbingNavigationBPLibrary)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClimbingNavigationBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClimbingNavigationBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimbingNavigationBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimbingNavigationBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClimbingNavigationBPLibrary(UClimbingNavigationBPLibrary&&); \
	UClimbingNavigationBPLibrary(const UClimbingNavigationBPLibrary&); \
public: \
	NO_API virtual ~UClimbingNavigationBPLibrary();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_190_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_193_RPC_WRAPPERS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_193_INCLASS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class UClimbingNavigationBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h


#define FOREACH_ENUM_ECLIMBMOVEMENTDIRECTION(op) \
	op(EClimbMovementDirection::Up) \
	op(EClimbMovementDirection::Right) \
	op(EClimbMovementDirection::Left) \
	op(EClimbMovementDirection::Down) 

enum class EClimbMovementDirection : uint8;
template<> struct TIsUEnumClass<EClimbMovementDirection> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EClimbMovementDirection>();

#define FOREACH_ENUM_ENAVCLIMBACTIONSTATE(op) \
	op(ENavClimbActionState::None) \
	op(ENavClimbActionState::WalkCycle) \
	op(ENavClimbActionState::ShortJump) \
	op(ENavClimbActionState::LongJump) \
	op(ENavClimbActionState::StartClimb) \
	op(ENavClimbActionState::JumpBack) 

enum class ENavClimbActionState : uint8;
template<> struct TIsUEnumClass<ENavClimbActionState> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<ENavClimbActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

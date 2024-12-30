// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_GameplayAbilitySet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWALS_ABILITYSYSTEM_IWALS_GameplayAbilitySet_generated_h
#error "IWALS_GameplayAbilitySet.generated.h already included, missing '#pragma once' in IWALS_GameplayAbilitySet.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_GameplayAbilitySet_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityBindIWALS_Statics; \
	IWALS_ABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGameplayAbilityBindIWALS>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUIWALS_GameplayAbilitySet(); \
	friend struct Z_Construct_UClass_UIWALS_GameplayAbilitySet_Statics; \
public: \
	DECLARE_CLASS(UIWALS_GameplayAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UIWALS_GameplayAbilitySet)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIWALS_GameplayAbilitySet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWALS_GameplayAbilitySet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIWALS_GameplayAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_GameplayAbilitySet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIWALS_GameplayAbilitySet(UIWALS_GameplayAbilitySet&&); \
	UIWALS_GameplayAbilitySet(const UIWALS_GameplayAbilitySet&); \
public: \
	NO_API virtual ~UIWALS_GameplayAbilitySet();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_56_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_INCLASS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UIWALS_GameplayAbilitySet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h


#define FOREACH_ENUM_EIWALS_ABILITYINPUTBINDS(op) \
	op(EIWALS_AbilityInputBinds::None0) \
	op(EIWALS_AbilityInputBinds::JumpAction) \
	op(EIWALS_AbilityInputBinds::StanceAction) \
	op(EIWALS_AbilityInputBinds::SprintAction) \
	op(EIWALS_AbilityInputBinds::WalkAction) \
	op(EIWALS_AbilityInputBinds::AimAction) \
	op(EIWALS_AbilityInputBinds::Interaction) \
	op(EIWALS_AbilityInputBinds::Shot) \
	op(EIWALS_AbilityInputBinds::Reload) \
	op(EIWALS_AbilityInputBinds::AimActionType_2) 

namespace EIWALS_AbilityInputBinds { enum Type : int; }
template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<EIWALS_AbilityInputBinds::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

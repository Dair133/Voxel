// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_DelayWithTick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_DelayWithTick;
class UGameplayAbility;
#ifdef IWALS_ABILITYSYSTEM_AbilityTask_DelayWithTick_generated_h
#error "AbilityTask_DelayWithTick.generated.h already included, missing '#pragma once' in AbilityTask_DelayWithTick.h"
#endif
#define IWALS_ABILITYSYSTEM_AbilityTask_DelayWithTick_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_11_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnTick_DelegateWrapper(const FMulticastScriptDelegate& OnTick, float Time, float NormalizedTime);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_12_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnTickFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTickFinished, float Time, float NormalizedTime);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDelayTaskWithTick);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_DelayWithTick(); \
	friend struct Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_DelayWithTick, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_DelayWithTick)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_DelayWithTick(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_DelayWithTick(UAbilityTask_DelayWithTick&&); \
	UAbilityTask_DelayWithTick(const UAbilityTask_DelayWithTick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_DelayWithTick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_DelayWithTick); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_DelayWithTick) \
	NO_API virtual ~UAbilityTask_DelayWithTick();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_15_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UAbilityTask_DelayWithTick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

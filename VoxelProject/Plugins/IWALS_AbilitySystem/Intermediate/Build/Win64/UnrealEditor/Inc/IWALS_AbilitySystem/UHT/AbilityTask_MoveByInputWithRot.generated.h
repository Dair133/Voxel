// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_MoveByInputWithRot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_MoveByInputWithRot;
class UGameplayAbility;
#ifdef IWALS_ABILITYSYSTEM_AbilityTask_MoveByInputWithRot_generated_h
#error "AbilityTask_MoveByInputWithRot.generated.h already included, missing '#pragma once' in AbilityTask_MoveByInputWithRot.h"
#endif
#define IWALS_ABILITYSYSTEM_AbilityTask_MoveByInputWithRot_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_12_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnDurningMove2_DelegateWrapper(const FMulticastScriptDelegate& OnDurningMove2, float Time);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_13_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnTargetLocationReached2_DelegateWrapper(const FMulticastScriptDelegate& OnTargetLocationReached2, float Time);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_14_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnFailed2_DelegateWrapper(const FMulticastScriptDelegate& OnFailed2, float Time);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovePawnByInputWithRotation);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_MoveByInputWithRot(); \
	friend struct Z_Construct_UClass_UAbilityTask_MoveByInputWithRot_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_MoveByInputWithRot, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_MoveByInputWithRot)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_MoveByInputWithRot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_MoveByInputWithRot(UAbilityTask_MoveByInputWithRot&&); \
	UAbilityTask_MoveByInputWithRot(const UAbilityTask_MoveByInputWithRot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_MoveByInputWithRot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MoveByInputWithRot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MoveByInputWithRot) \
	NO_API virtual ~UAbilityTask_MoveByInputWithRot();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_17_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UAbilityTask_MoveByInputWithRot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputWithRot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

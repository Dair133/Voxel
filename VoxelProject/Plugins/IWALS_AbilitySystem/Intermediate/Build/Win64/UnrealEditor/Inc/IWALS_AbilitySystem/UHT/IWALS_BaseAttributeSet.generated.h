// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_BaseAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef IWALS_ABILITYSYSTEM_IWALS_BaseAttributeSet_generated_h
#error "IWALS_BaseAttributeSet.generated.h already included, missing '#pragma once' in IWALS_BaseAttributeSet.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_BaseAttributeSet_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Experience); \
	DECLARE_FUNCTION(execOnRep_AttackMultiply); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIWALS_BaseAttributeSet(); \
	friend struct Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UIWALS_BaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UIWALS_BaseAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Armor, \
		AttackMultiply, \
		Experience, \
		NETFIELD_REP_END=Experience	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UIWALS_BaseAttributeSet) \
public:


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIWALS_BaseAttributeSet(UIWALS_BaseAttributeSet&&); \
	UIWALS_BaseAttributeSet(const UIWALS_BaseAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIWALS_BaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_BaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIWALS_BaseAttributeSet) \
	NO_API virtual ~UIWALS_BaseAttributeSet();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_18_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UIWALS_BaseAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

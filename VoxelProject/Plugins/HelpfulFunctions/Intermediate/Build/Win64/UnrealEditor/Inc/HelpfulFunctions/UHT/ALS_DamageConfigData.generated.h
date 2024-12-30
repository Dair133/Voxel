// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_DamageConfigData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBoneAndWeight;
struct FRuntimeFloatCurve;
#ifdef HELPFULFUNCTIONS_ALS_DamageConfigData_generated_h
#error "ALS_DamageConfigData.generated.h already included, missing '#pragma once' in ALS_DamageConfigData.h"
#endif
#define HELPFULFUNCTIONS_ALS_DamageConfigData_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneAndWeight_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FBoneAndWeight>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWeightPerBoneC); \
	DECLARE_FUNCTION(execGetScalingCurveValueC);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALS_DamageConfigData(); \
	friend struct Z_Construct_UClass_UALS_DamageConfigData_Statics; \
public: \
	DECLARE_CLASS(UALS_DamageConfigData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UALS_DamageConfigData)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UALS_DamageConfigData(UALS_DamageConfigData&&); \
	UALS_DamageConfigData(const UALS_DamageConfigData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALS_DamageConfigData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALS_DamageConfigData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UALS_DamageConfigData)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_38_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UALS_DamageConfigData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h


#define FOREACH_ENUM_ECALS_WEAPONTYPE(op) \
	op(ECALS_WeaponType::None) \
	op(ECALS_WeaponType::Rifle) \
	op(ECALS_WeaponType::Pistol) \
	op(ECALS_WeaponType::Bow) \
	op(ECALS_WeaponType::Knife) 

enum class ECALS_WeaponType : uint8;
template<> struct TIsUEnumClass<ECALS_WeaponType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<ECALS_WeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

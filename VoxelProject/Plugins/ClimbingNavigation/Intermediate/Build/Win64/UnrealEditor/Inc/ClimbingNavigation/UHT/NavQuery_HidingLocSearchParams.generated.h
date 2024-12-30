// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavQuery_HidingLocSearchParams.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIMBINGNAVIGATION_NavQuery_HidingLocSearchParams_generated_h
#error "NavQuery_HidingLocSearchParams.generated.h already included, missing '#pragma once' in NavQuery_HidingLocSearchParams.h"
#endif
#define CLIMBINGNAVIGATION_NavQuery_HidingLocSearchParams_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightFunction_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<struct FWeightFunction>();

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavQuery_HidingLocSearchParams(); \
	friend struct Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics; \
public: \
	DECLARE_CLASS(UNavQuery_HidingLocSearchParams, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(UNavQuery_HidingLocSearchParams)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavQuery_HidingLocSearchParams(UNavQuery_HidingLocSearchParams&&); \
	UNavQuery_HidingLocSearchParams(const UNavQuery_HidingLocSearchParams&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavQuery_HidingLocSearchParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavQuery_HidingLocSearchParams); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavQuery_HidingLocSearchParams) \
	NO_API virtual ~UNavQuery_HidingLocSearchParams();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_95_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_98_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class UNavQuery_HidingLocSearchParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h


#define FOREACH_ENUM_EDISTRIBUTIONFUNCTIONTYPE(op) \
	op(EDistributionFunctionType::Linear) \
	op(EDistributionFunctionType::Exp) \
	op(EDistributionFunctionType::Exp2) \
	op(EDistributionFunctionType::Power) \
	op(EDistributionFunctionType::Sin) \
	op(EDistributionFunctionType::Cos) \
	op(EDistributionFunctionType::Sinh) 

enum class EDistributionFunctionType : uint8;
template<> struct TIsUEnumClass<EDistributionFunctionType> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EDistributionFunctionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

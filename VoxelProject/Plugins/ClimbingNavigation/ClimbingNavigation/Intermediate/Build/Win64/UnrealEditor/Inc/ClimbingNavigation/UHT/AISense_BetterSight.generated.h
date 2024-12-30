// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AISense_BetterSight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIMBINGNAVIGATION_AISense_BetterSight_generated_h
#error "AISense_BetterSight.generated.h already included, missing '#pragma once' in AISense_BetterSight.h"
#endif
#define CLIMBINGNAVIGATION_AISense_BetterSight_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_BetterSight(); \
	friend struct Z_Construct_UClass_UAISense_BetterSight_Statics; \
public: \
	DECLARE_CLASS(UAISense_BetterSight, UAISense_Sight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(UAISense_BetterSight)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISense_BetterSight(UAISense_BetterSight&&); \
	UAISense_BetterSight(const UAISense_BetterSight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_BetterSight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_BetterSight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_BetterSight) \
	NO_API virtual ~UAISense_BetterSight();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_21_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class UAISense_BetterSight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h


#define FOREACH_ENUM_AISENSE_SIGHTTRACINGMODE(op) \
	op(AISense_SightTracingMode::OnlyPelvis) \
	op(AISense_SightTracingMode::PelvisAndHead) \
	op(AISense_SightTracingMode::PelvisHeadArms) \
	op(AISense_SightTracingMode::AllBodyParts) 

enum class AISense_SightTracingMode : uint8;
template<> struct TIsUEnumClass<AISense_SightTracingMode> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<AISense_SightTracingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

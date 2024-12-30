// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_HumanAI_ControllerCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
#ifdef HELPFULFUNCTIONS_ALS_HumanAI_ControllerCpp_generated_h
#error "ALS_HumanAI_ControllerCpp.generated.h already included, missing '#pragma once' in ALS_HumanAI_ControllerCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_HumanAI_ControllerCpp_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTheAverageValueOfSpottedEnemiesFast); \
	DECLARE_FUNCTION(execGetEnemyFromOtherAIs); \
	DECLARE_FUNCTION(execSetFocusActorTransformFast); \
	DECLARE_FUNCTION(execChooseEnemyActor); \
	DECLARE_FUNCTION(execFindOtherComrate); \
	DECLARE_FUNCTION(execUseTraceSightPercept); \
	DECLARE_FUNCTION(execCheckIsInFoliage); \
	DECLARE_FUNCTION(execGetBestEnemyFromSight); \
	DECLARE_FUNCTION(execSightPerceptionByTraceFast); \
	DECLARE_FUNCTION(execSightPerceptionByMeshFast); \
	DECLARE_FUNCTION(execInterfaceTest);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAALS_HumanAI_ControllerCpp(); \
	friend struct Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics; \
public: \
	DECLARE_CLASS(AALS_HumanAI_ControllerCpp, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AALS_HumanAI_ControllerCpp)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AALS_HumanAI_ControllerCpp(AALS_HumanAI_ControllerCpp&&); \
	AALS_HumanAI_ControllerCpp(const AALS_HumanAI_ControllerCpp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALS_HumanAI_ControllerCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALS_HumanAI_ControllerCpp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AALS_HumanAI_ControllerCpp) \
	NO_API virtual ~AALS_HumanAI_ControllerCpp();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_19_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AALS_HumanAI_ControllerCpp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

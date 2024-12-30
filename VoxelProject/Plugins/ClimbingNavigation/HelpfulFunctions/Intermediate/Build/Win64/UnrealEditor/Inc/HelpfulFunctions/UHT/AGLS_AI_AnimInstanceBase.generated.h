// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_AI_AnimInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FPoseSearchQueryTrajectory;
#ifdef HELPFULFUNCTIONS_AGLS_AI_AnimInstanceBase_generated_h
#error "AGLS_AI_AnimInstanceBase.generated.h already included, missing '#pragma once' in AGLS_AI_AnimInstanceBase.h"
#endif
#define HELPFULFUNCTIONS_AGLS_AI_AnimInstanceBase_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDesiredFacing); \
	DECLARE_FUNCTION(execEnableSterring); \
	DECLARE_FUNCTION(execUpdateMotionMatchingPostSelection); \
	DECLARE_FUNCTION(execGet_MMBlendTime); \
	DECLARE_FUNCTION(execGetOffsetRootTranslationHalfLife); \
	DECLARE_FUNCTION(execGetOffsetRootLocationMode); \
	DECLARE_FUNCTION(execGetOffsetRootRotationMode); \
	DECLARE_FUNCTION(execShouldTurnInPlace); \
	DECLARE_FUNCTION(execJustLanedNeutral); \
	DECLARE_FUNCTION(execJustLanedHeavy); \
	DECLARE_FUNCTION(execJustLanedLight); \
	DECLARE_FUNCTION(execShouldSpinTransition); \
	DECLARE_FUNCTION(execIsPivoting); \
	DECLARE_FUNCTION(execIsStopping); \
	DECLARE_FUNCTION(execIsStarting); \
	DECLARE_FUNCTION(execUpdateLayeringValues); \
	DECLARE_FUNCTION(execResetIK_Offsets); \
	DECLARE_FUNCTION(execSetPelvisIK_Offset); \
	DECLARE_FUNCTION(execSetFootOffsets); \
	DECLARE_FUNCTION(execUpdateFootsIK); \
	DECLARE_FUNCTION(execUpdateCoverValues); \
	DECLARE_FUNCTION(execUpdateRotationValues); \
	DECLARE_FUNCTION(execSetRootTransform); \
	DECLARE_FUNCTION(execUpdateEssentialValues); \
	DECLARE_FUNCTION(execMakeIsCollideValue); \
	DECLARE_FUNCTION(execGenerateTrajectory);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGLS_AI_AnimInstanceBase(); \
	friend struct Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UAGLS_AI_AnimInstanceBase, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UAGLS_AI_AnimInstanceBase)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGLS_AI_AnimInstanceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAGLS_AI_AnimInstanceBase(UAGLS_AI_AnimInstanceBase&&); \
	UAGLS_AI_AnimInstanceBase(const UAGLS_AI_AnimInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGLS_AI_AnimInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_AI_AnimInstanceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGLS_AI_AnimInstanceBase) \
	NO_API virtual ~UAGLS_AI_AnimInstanceBase();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_19_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UAGLS_AI_AnimInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

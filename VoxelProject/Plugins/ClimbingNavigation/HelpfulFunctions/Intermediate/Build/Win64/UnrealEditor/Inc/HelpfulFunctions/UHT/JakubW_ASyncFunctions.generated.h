// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubW_ASyncFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJakubW_ASyncFunctions;
class UObject;
#ifdef HELPFULFUNCTIONS_JakubW_ASyncFunctions_generated_h
#error "JakubW_ASyncFunctions.generated.h already included, missing '#pragma once' in JakubW_ASyncFunctions.h"
#endif
#define HELPFULFUNCTIONS_JakubW_ASyncFunctions_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_11_DELEGATE \
HELPFULFUNCTIONS_API void FDelayOneFrameOutputPin_DelegateWrapper(const FMulticastScriptDelegate& DelayOneFrameOutputPin, float InputFloatPlusOne, float InputFloatPlusTwo);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execExecuteAfterOneFrame); \
	DECLARE_FUNCTION(execWaitForOneFrame);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUJakubW_ASyncFunctions(); \
	friend struct Z_Construct_UClass_UJakubW_ASyncFunctions_Statics; \
public: \
	DECLARE_CLASS(UJakubW_ASyncFunctions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UJakubW_ASyncFunctions)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubW_ASyncFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubW_ASyncFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubW_ASyncFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubW_ASyncFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJakubW_ASyncFunctions(UJakubW_ASyncFunctions&&); \
	UJakubW_ASyncFunctions(const UJakubW_ASyncFunctions&); \
public: \
	NO_API virtual ~UJakubW_ASyncFunctions();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_13_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UJakubW_ASyncFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

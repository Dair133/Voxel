// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctionsPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
#ifdef HELPFULFUNCTIONS_AsyncFunctionsPlayer_generated_h
#error "AsyncFunctionsPlayer.generated.h already included, missing '#pragma once' in AsyncFunctionsPlayer.h"
#endif
#define HELPFULFUNCTIONS_AsyncFunctionsPlayer_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayDynamicMontageAsync); \
	DECLARE_FUNCTION(execMontagePlayAsync);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncFunctionsPlayer(); \
	friend struct Z_Construct_UClass_UAsyncFunctionsPlayer_Statics; \
public: \
	DECLARE_CLASS(UAsyncFunctionsPlayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UAsyncFunctionsPlayer)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncFunctionsPlayer(UAsyncFunctionsPlayer&&); \
	UAsyncFunctionsPlayer(const UAsyncFunctionsPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncFunctionsPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncFunctionsPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncFunctionsPlayer) \
	NO_API virtual ~UAsyncFunctionsPlayer();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_12_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UAsyncFunctionsPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

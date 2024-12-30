// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_BaseAI_CharacterCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CALS_Gait : uint8;
struct FCALSMovementSettings;
#ifdef HELPFULFUNCTIONS_ALS_BaseAI_CharacterCpp_generated_h
#error "ALS_BaseAI_CharacterCpp.generated.h already included, missing '#pragma once' in ALS_BaseAI_CharacterCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_BaseAI_CharacterCpp_generated_h

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALSMovementSettings_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCALSMovementSettings>();

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActualGaitFast); \
	DECLARE_FUNCTION(execGetAllowedGaitFast); \
	DECLARE_FUNCTION(execUpdateMovementSettings); \
	DECLARE_FUNCTION(execCalcCanSprint); \
	DECLARE_FUNCTION(execGetMappedSpeedFast); \
	DECLARE_FUNCTION(execCalcGroundedRotationRate); \
	DECLARE_FUNCTION(execCanUpdateRotation); \
	DECLARE_FUNCTION(execLimitRotationFast); \
	DECLARE_FUNCTION(execSmoothedCharRotation); \
	DECLARE_FUNCTION(execCalculateGroundedRotation); \
	DECLARE_FUNCTION(execCalculateAimingRotatation); \
	DECLARE_FUNCTION(execIsCharacter);


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAALS_BaseAI_CharacterCpp(); \
	friend struct Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics; \
public: \
	DECLARE_CLASS(AALS_BaseAI_CharacterCpp, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AALS_BaseAI_CharacterCpp) \
	virtual UObject* _getUObject() const override { return const_cast<AALS_BaseAI_CharacterCpp*>(this); }


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AALS_BaseAI_CharacterCpp(AALS_BaseAI_CharacterCpp&&); \
	AALS_BaseAI_CharacterCpp(const AALS_BaseAI_CharacterCpp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALS_BaseAI_CharacterCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALS_BaseAI_CharacterCpp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AALS_BaseAI_CharacterCpp) \
	NO_API virtual ~AALS_BaseAI_CharacterCpp();


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_36_PROLOG
#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AALS_BaseAI_CharacterCpp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

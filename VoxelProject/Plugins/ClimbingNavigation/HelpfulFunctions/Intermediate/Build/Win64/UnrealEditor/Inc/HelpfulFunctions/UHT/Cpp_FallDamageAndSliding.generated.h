// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_FallDamageAndSliding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UCharacterMovementComponent;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HELPFULFUNCTIONS_Cpp_FallDamageAndSliding_generated_h
#error "Cpp_FallDamageAndSliding.generated.h already included, missing '#pragma once' in Cpp_FallDamageAndSliding.h"
#endif
#define HELPFULFUNCTIONS_Cpp_FallDamageAndSliding_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharMovementValues_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCharMovementValues>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlidingConditionData_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FSlidingConditionData>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PrepareToSlidingC_Implementation(bool CanStart); \
	virtual bool SlidingConditionC_Implementation(); \
	DECLARE_FUNCTION(execPrepareToSlidingC); \
	DECLARE_FUNCTION(execSlidingConditionC); \
	DECLARE_FUNCTION(execCheckCanMantleOnEdge); \
	DECLARE_FUNCTION(execUpdateAngleCorrectDurningSliding); \
	DECLARE_FUNCTION(execUpdateCharWalkAngleDurningSliding); \
	DECLARE_FUNCTION(execUpdateCharFrictionDurningSliding); \
	DECLARE_FUNCTION(execCheckCanStartSlidingC); \
	DECLARE_FUNCTION(execSimpleTrajectoryC);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_FallDamageAndSliding(); \
	friend struct Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics; \
public: \
	DECLARE_CLASS(UCpp_FallDamageAndSliding, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UCpp_FallDamageAndSliding)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCpp_FallDamageAndSliding(UCpp_FallDamageAndSliding&&); \
	UCpp_FallDamageAndSliding(const UCpp_FallDamageAndSliding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_FallDamageAndSliding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_FallDamageAndSliding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_FallDamageAndSliding) \
	NO_API virtual ~UCpp_FallDamageAndSliding();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_41_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UCpp_FallDamageAndSliding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

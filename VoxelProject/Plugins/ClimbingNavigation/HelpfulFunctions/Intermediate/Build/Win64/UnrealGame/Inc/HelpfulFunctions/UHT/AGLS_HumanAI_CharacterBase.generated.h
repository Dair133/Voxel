// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_HumanAI_CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
enum class CALS_DeathType : uint8;
enum class CALS_Gait : uint8;
enum class CALS_MovementAction : uint8;
enum class CALS_MovementState : uint8;
enum class CALS_OverlayState : uint8;
enum class CALS_RotationMode : uint8;
enum class CALS_Stance : uint8;
struct FHitResult;
#ifdef HELPFULFUNCTIONS_AGLS_HumanAI_CharacterBase_generated_h
#error "AGLS_HumanAI_CharacterBase.generated.h already included, missing '#pragma once' in AGLS_HumanAI_CharacterBase.h"
#endif
#define HELPFULFUNCTIONS_AGLS_HumanAI_CharacterBase_generated_h

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGetUpAnimation); \
	DECLARE_FUNCTION(execShotScanTraceCheck); \
	DECLARE_FUNCTION(execShotFirstTraceCheck); \
	DECLARE_FUNCTION(execCheckCanShoot); \
	DECLARE_FUNCTION(execTrySimpleTraversalAction); \
	DECLARE_FUNCTION(execAttachAllPropsToDefault); \
	DECLARE_FUNCTION(execAttachPropTo); \
	DECLARE_FUNCTION(execMakeForPropsAttachValues); \
	DECLARE_FUNCTION(execApplyDamageValue); \
	DECLARE_FUNCTION(execDeathByFallDamage); \
	DECLARE_FUNCTION(execCheckFallDamage); \
	DECLARE_FUNCTION(execGetTargetSpeedWithStrafe); \
	DECLARE_FUNCTION(execUpdateGroundedMovementValues); \
	DECLARE_FUNCTION(execSetCurrentMovementParametersValues); \
	DECLARE_FUNCTION(execDropProps); \
	DECLARE_FUNCTION(execOnOverlayStateChanged); \
	DECLARE_FUNCTION(execOnGaitChanged); \
	DECLARE_FUNCTION(execOnRotationModeChanged); \
	DECLARE_FUNCTION(execOnStanceChanged); \
	DECLARE_FUNCTION(execOnMovementActionChanged); \
	DECLARE_FUNCTION(execOnMovementStateChanged); \
	DECLARE_FUNCTION(execOnCharacterMovementModeChanged); \
	DECLARE_FUNCTION(execGetControlForwardRightVector); \
	DECLARE_FUNCTION(execGetCapsuleLocationFromBase); \
	DECLARE_FUNCTION(execGetCalpsuleBaseLocation); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execSmoothedCapsuleRadiusUpdate); \
	DECLARE_FUNCTION(execRagdollUpdate); \
	DECLARE_FUNCTION(execChangeToPistolWhenNoAmmo); \
	DECLARE_FUNCTION(execCanUpdateOverlay); \
	DECLARE_FUNCTION(execRagdollEnd); \
	DECLARE_FUNCTION(execRagdollStart); \
	DECLARE_FUNCTION(execGetPistolAmmoData); \
	DECLARE_FUNCTION(execGetRifleAmmoData); \
	DECLARE_FUNCTION(execStartDyingSequence); \
	DECLARE_FUNCTION(execCheckHealthPerFrame); \
	DECLARE_FUNCTION(execFindCoverFast);


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGLS_HumanAI_CharacterBase(); \
	friend struct Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAGLS_HumanAI_CharacterBase, AALS_BaseAI_CharacterCpp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AAGLS_HumanAI_CharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAGLS_HumanAI_CharacterBase*>(this); }


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAGLS_HumanAI_CharacterBase(AAGLS_HumanAI_CharacterBase&&); \
	AAGLS_HumanAI_CharacterBase(const AAGLS_HumanAI_CharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGLS_HumanAI_CharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGLS_HumanAI_CharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAGLS_HumanAI_CharacterBase) \
	NO_API virtual ~AAGLS_HumanAI_CharacterBase();


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_17_PROLOG
#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AAGLS_HumanAI_CharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_StructuresAndEnumsCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELPFULFUNCTIONS_ALS_StructuresAndEnumsCpp_generated_h
#error "ALS_StructuresAndEnumsCpp.generated.h already included, missing '#pragma once' in ALS_StructuresAndEnumsCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_StructuresAndEnumsCpp_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCALS_ComponentAndTransform>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCMC_SingleClimbPointC>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCMC_LedgeC_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCMC_LedgeC>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FTraversalStateEvaluation>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FTraversalSingeAnimAsset>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCALSMovementSettingsStrafe>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCALS_PropsAttachValues>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_295_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FAGLS_FinishersDataForAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h


#define FOREACH_ENUM_AGLS_LOD_STATE(op) \
	op(AGLS_LOD_State::LOD0) \
	op(AGLS_LOD_State::LOD1) \
	op(AGLS_LOD_State::LOD2) \
	op(AGLS_LOD_State::LOD3) 

enum class AGLS_LOD_State : uint8;
template<> struct TIsUEnumClass<AGLS_LOD_State> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<AGLS_LOD_State>();

#define FOREACH_ENUM_CALS_GAIT(op) \
	op(CALS_Gait::Walking) \
	op(CALS_Gait::Running) \
	op(CALS_Gait::Sprinting) 

enum class CALS_Gait : uint8;
template<> struct TIsUEnumClass<CALS_Gait> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Gait>();

#define FOREACH_ENUM_CALS_MOVEMENTSTATE(op) \
	op(CALS_MovementState::None) \
	op(CALS_MovementState::Grounded) \
	op(CALS_MovementState::InAir) \
	op(CALS_MovementState::Mantling) \
	op(CALS_MovementState::Ragdoll) \
	op(CALS_MovementState::Crawl) \
	op(CALS_MovementState::Prone) 

enum class CALS_MovementState : uint8;
template<> struct TIsUEnumClass<CALS_MovementState> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementState>();

#define FOREACH_ENUM_CALS_OVERLAYSTATE(op) \
	op(CALS_OverlayState::Default) \
	op(CALS_OverlayState::Masculine) \
	op(CALS_OverlayState::Feminine) \
	op(CALS_OverlayState::Injured) \
	op(CALS_OverlayState::HandsTied) \
	op(CALS_OverlayState::Rifle) \
	op(CALS_OverlayState::Pistol1H) \
	op(CALS_OverlayState::Pistol2H) \
	op(CALS_OverlayState::Bow) \
	op(CALS_OverlayState::Torch) \
	op(CALS_OverlayState::Binoculars) \
	op(CALS_OverlayState::Box) \
	op(CALS_OverlayState::Barrel) \
	op(CALS_OverlayState::Rope) \
	op(CALS_OverlayState::Axe) \
	op(CALS_OverlayState::Knife) 

enum class CALS_OverlayState : uint8;
template<> struct TIsUEnumClass<CALS_OverlayState> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayState>();

#define FOREACH_ENUM_CALS_ROTATIONMODE(op) \
	op(CALS_RotationMode::VelocityDirection) \
	op(CALS_RotationMode::LookingDirection) \
	op(CALS_RotationMode::Aiming) 

enum class CALS_RotationMode : uint8;
template<> struct TIsUEnumClass<CALS_RotationMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_RotationMode>();

#define FOREACH_ENUM_CALS_GROUNDEDMOVEMODE(op) \
	op(CALS_GroundedMoveMode::Normal) \
	op(CALS_GroundedMoveMode::SlowWalk) \
	op(CALS_GroundedMoveMode::Injured) \
	op(CALS_GroundedMoveMode::Tired) \
	op(CALS_GroundedMoveMode::Stealth) 

enum class CALS_GroundedMoveMode : uint8;
template<> struct TIsUEnumClass<CALS_GroundedMoveMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_GroundedMoveMode>();

#define FOREACH_ENUM_CALS_STANCE(op) \
	op(CALS_Stance::Standing) \
	op(CALS_Stance::Crouching) 

enum class CALS_Stance : uint8;
template<> struct TIsUEnumClass<CALS_Stance> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Stance>();

#define FOREACH_ENUM_CALS_MOVEMENTACTION(op) \
	op(CALS_MovementAction::None) \
	op(CALS_MovementAction::LowMantle) \
	op(CALS_MovementAction::HighMantle) \
	op(CALS_MovementAction::Rolling) \
	op(CALS_MovementAction::GettingUp) 

enum class CALS_MovementAction : uint8;
template<> struct TIsUEnumClass<CALS_MovementAction> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementAction>();

#define FOREACH_ENUM_CALS_OVERLAYPOSESTYPE(op) \
	op(CALS_OverlayPosesType::Relaxed) \
	op(CALS_OverlayPosesType::Ready) \
	op(CALS_OverlayPosesType::Aiming) 

enum class CALS_OverlayPosesType : uint8;
template<> struct TIsUEnumClass<CALS_OverlayPosesType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayPosesType>();

#define FOREACH_ENUM_CMC_ACTIONTYPEC(op) \
	op(CMC_ActionTypeC::None) \
	op(CMC_ActionTypeC::ShortMove) \
	op(CMC_ActionTypeC::CornerOuter) \
	op(CMC_ActionTypeC::CornerInner) \
	op(CMC_ActionTypeC::Turn180) \
	op(CMC_ActionTypeC::JumpNextLedge) \
	op(CMC_ActionTypeC::JumpBackToNextLedge) \
	op(CMC_ActionTypeC::ForwardMove) \
	op(CMC_ActionTypeC::PullUpToNarrowFloor) \
	op(CMC_ActionTypeC::DropToNarrowFloor) \
	op(CMC_ActionTypeC::DropFromNarrowFloor) \
	op(CMC_ActionTypeC::JumpToBeamSwinging) \
	op(CMC_ActionTypeC::JumpForwardToBeam) \
	op(CMC_ActionTypeC::StartHoldingLedge) 

enum class CMC_ActionTypeC : uint8;
template<> struct TIsUEnumClass<CMC_ActionTypeC> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CMC_ActionTypeC>();

#define FOREACH_ENUM_CALS_DEATHTYPE(op) \
	op(CALS_DeathType::KilledByGun) \
	op(CALS_DeathType::FallFromHeight) \
	op(CALS_DeathType::HitByCar) \
	op(CALS_DeathType::Explosion) \
	op(CALS_DeathType::SilenthDeath) \
	op(CALS_DeathType::BiteByZombie) 

enum class CALS_DeathType : uint8;
template<> struct TIsUEnumClass<CALS_DeathType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_DeathType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAKUBANIMNODESTOOL_JWAN_ModifyLayeringLogic_generated_h
#error "JWAN_ModifyLayeringLogic.generated.h already included, missing '#pragma once' in JWAN_ModifyLayeringLogic.h"
#endif
#define JAKUBANIMNODESTOOL_JWAN_ModifyLayeringLogic_generated_h

#define FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeringCurvesData_Statics; \
	JAKUBANIMNODESTOOL_API static class UScriptStruct* StaticStruct();


template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<struct FLayeringCurvesData>();

#define FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<struct FAnimNode_ModifyLayering>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h


#define FOREACH_ENUM_EMODIFYLAYERINGAPPLYMODE(op) \
	op(EModifyLayeringApplyMode::Blend) \
	op(EModifyLayeringApplyMode::Add) \
	op(EModifyLayeringApplyMode::Scale) \
	op(EModifyLayeringApplyMode::RemapCurve) 

enum class EModifyLayeringApplyMode : uint8;
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<EModifyLayeringApplyMode>();

#define FOREACH_ENUM_ELAYERINGCURVESNAME(op) \
	op(ELayeringCurvesName::Layering_Legs) \
	op(ELayeringCurvesName::Layering_Pelvis) \
	op(ELayeringCurvesName::Layering_Spine) \
	op(ELayeringCurvesName::Layering_Spine_Add) \
	op(ELayeringCurvesName::Layering_Arm_L) \
	op(ELayeringCurvesName::Layering_Arm_L_Add) \
	op(ELayeringCurvesName::Layering_Arm_L_LS) \
	op(ELayeringCurvesName::Layering_Hand_L) \
	op(ELayeringCurvesName::Layering_Arm_R) \
	op(ELayeringCurvesName::Layering_Arm_R_Add) \
	op(ELayeringCurvesName::Layering_Arm_R_LS) \
	op(ELayeringCurvesName::Layering_Hand_R) \
	op(ELayeringCurvesName::Layering_Head) \
	op(ELayeringCurvesName::Layering_Head_Add) \
	op(ELayeringCurvesName::Enable_HandIK_L) \
	op(ELayeringCurvesName::Enable_HandIK_R) \
	op(ELayeringCurvesName::Enable_SpineRotation) 

enum class ELayeringCurvesName : uint8;
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<ELayeringCurvesName>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

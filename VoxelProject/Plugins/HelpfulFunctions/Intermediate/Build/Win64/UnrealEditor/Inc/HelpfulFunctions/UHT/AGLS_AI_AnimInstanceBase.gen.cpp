// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_AI_AnimInstanceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Public/PoseSearch/PoseSearchTrajectoryLibrary.h"
#include "Runtime/Public/PoseSearch/PoseSearchTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_AI_AnimInstanceBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_AnimInstanceBase();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC();
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory();
POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchTrajectoryData();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UAGLS_AI_AnimInstanceBase Function EnableSterring
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventEnableSterring_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function determines if root motion from the animations can be steered by checking if the character is moving or in the air. This prevents idle animations from getting steered, which could cause sliding.*/" },
#endif
		{ "DisplayName", "Enable Steering" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function determines if root motion from the animations can be steered by checking if the character is moving or in the air. This prevents idle animations from getting steered, which could cause sliding." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventEnableSterring_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventEnableSterring_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "EnableSterring", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::AGLS_AI_AnimInstanceBase_eventEnableSterring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::AGLS_AI_AnimInstanceBase_eventEnableSterring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execEnableSterring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnableSterring();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function EnableSterring

// Begin Class UAGLS_AI_AnimInstanceBase Function GenerateTrajectory
struct AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms
{
	int32 HistoryCount;
	float InPredictionInterval;
	int32 PreditionCount;
	FPoseSearchQueryTrajectory ReturnValue;
};
static const FName NAME_UAGLS_AI_AnimInstanceBase_GenerateTrajectory = FName(TEXT("GenerateTrajectory"));
FPoseSearchQueryTrajectory UAGLS_AI_AnimInstanceBase::GenerateTrajectory(int32 HistoryCount, float InPredictionInterval, int32 PreditionCount)
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_GenerateTrajectory);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms Parms;
		Parms.HistoryCount=HistoryCount;
		Parms.InPredictionInterval=InPredictionInterval;
		Parms.PreditionCount=PreditionCount;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GenerateTrajectory_Implementation(HistoryCount, InPredictionInterval, PreditionCount);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "HistoryCount,InPredictionInterval,PreditionCount" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Matching Core" },
		{ "CPP_Default_HistoryCount", "30" },
		{ "CPP_Default_InPredictionInterval", "0.100000" },
		{ "CPP_Default_PreditionCount", "15" },
		{ "DisplayName", "Generate Trajectory" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPredictionInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreditionCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_HistoryCount = { "HistoryCount", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms, HistoryCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_InPredictionInterval = { "InPredictionInterval", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms, InPredictionInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_PreditionCount = { "PreditionCount", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms, PreditionCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory, METADATA_PARAMS(0, nullptr) }; // 2372533658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_HistoryCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_InPredictionInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_PreditionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "GenerateTrajectory", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::PropPointers), sizeof(AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_AnimInstanceBase_eventGenerateTrajectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execGenerateTrajectory)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryCount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPredictionInterval);
	P_GET_PROPERTY(FIntProperty,Z_Param_PreditionCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPoseSearchQueryTrajectory*)Z_Param__Result=P_THIS->GenerateTrajectory_Implementation(Z_Param_HistoryCount,Z_Param_InPredictionInterval,Z_Param_PreditionCount);
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function GenerateTrajectory

// Begin Class UAGLS_AI_AnimInstanceBase Function Get_MMBlendTime
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventGet_MMBlendTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This function is used to change the blend time of the Motion Matching node, based on the current and previous states.\n\x09In the future, we plan to allow blend times to be more directly set from the chosen databases.*/" },
#endif
		{ "DisplayName", "Get MM Blend Time" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to change the blend time of the Motion Matching node, based on the current and previous states.\n      In the future, we plan to allow blend times to be more directly set from the chosen databases." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGet_MMBlendTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "Get_MMBlendTime", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::AGLS_AI_AnimInstanceBase_eventGet_MMBlendTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::AGLS_AI_AnimInstanceBase_eventGet_MMBlendTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execGet_MMBlendTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Get_MMBlendTime();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function Get_MMBlendTime

// Begin Class UAGLS_AI_AnimInstanceBase Function GetDesiredFacing
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventGetDesiredFacing_Parms
	{
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function gives the steering node a target rotation. This target is calculated using the future facing direction from the predicted trajectory. This allows the steering node to \n\x09rotate toward a future direction, rather than always steering toward the current actor rotation, which could cause it to lag too far behind.*/" },
#endif
		{ "DisplayName", "Get Desired Facing" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function gives the steering node a target rotation. This target is calculated using the future facing direction from the predicted trajectory. This allows the steering node to\n       rotate toward a future direction, rather than always steering toward the current actor rotation, which could cause it to lag too far behind." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGetDesiredFacing_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "GetDesiredFacing", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::AGLS_AI_AnimInstanceBase_eventGetDesiredFacing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::AGLS_AI_AnimInstanceBase_eventGetDesiredFacing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execGetDesiredFacing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetDesiredFacing();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function GetDesiredFacing

// Begin Class UAGLS_AI_AnimInstanceBase Function GetOffsetRootLocationMode
struct AGLS_AI_AnimInstanceBase_eventGetOffsetRootLocationMode_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_AI_AnimInstanceBase_eventGetOffsetRootLocationMode_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode = FName(TEXT("GetOffsetRootLocationMode"));
int32 UAGLS_AI_AnimInstanceBase::GetOffsetRootLocationMode()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_AI_AnimInstanceBase_eventGetOffsetRootLocationMode_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetOffsetRootLocationMode_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Root Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function is used to determine the Offset Root Translation mode. If we are currently playing a montage in the default slot, if we are in the air, or if we are on the ground but not moving, \n\x09we do not want to maintain any Translational offset.\n\x09The Release Enum essentially blends out any offset, after which it will be locked to the capsule location, just as it would be without a root offset node. \n\x09The Interpolate Enum means the root is allowed to deviate slightly from the capsule location based on root motion, but will always try to interpolate back toward center. \\\n\x09This is helpful when the animation data and capsule movement are not perfectly matched, such as during starts, pivots, and other complex movements.*/" },
#endif
		{ "DisplayName", "Get Offset Root Location Mode" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to determine the Offset Root Translation mode. If we are currently playing a montage in the default slot, if we are in the air, or if we are on the ground but not moving,\n       we do not want to maintain any Translational offset.\n       The Release Enum essentially blends out any offset, after which it will be locked to the capsule location, just as it would be without a root offset node.\n       The Interpolate Enum means the root is allowed to deviate slightly from the capsule location based on root motion, but will always try to interpolate back toward center. \\\n       This is helpful when the animation data and capsule movement are not perfectly matched, such as during starts, pivots, and other complex movements." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGetOffsetRootLocationMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "GetOffsetRootLocationMode", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::PropPointers), sizeof(AGLS_AI_AnimInstanceBase_eventGetOffsetRootLocationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_AnimInstanceBase_eventGetOffsetRootLocationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execGetOffsetRootLocationMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOffsetRootLocationMode_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function GetOffsetRootLocationMode

// Begin Class UAGLS_AI_AnimInstanceBase Function GetOffsetRootRotationMode
struct AGLS_AI_AnimInstanceBase_eventGetOffsetRootRotationMode_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_AI_AnimInstanceBase_eventGetOffsetRootRotationMode_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode = FName(TEXT("GetOffsetRootRotationMode"));
int32 UAGLS_AI_AnimInstanceBase::GetOffsetRootRotationMode()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_AI_AnimInstanceBase_eventGetOffsetRootRotationMode_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetOffsetRootRotationMode_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Root Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Root Bone Offset Configurations Functions -----------------------------------------------------------------------------------------------------------------------------------------\n//\n" },
#endif
		{ "DisplayName", "Get Offset Root Rotation Mode" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root Bone Offset Configurations Functions -----------------------------------------------------------------------------------------------------------------------------------------" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGetOffsetRootRotationMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "GetOffsetRootRotationMode", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::PropPointers), sizeof(AGLS_AI_AnimInstanceBase_eventGetOffsetRootRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_AnimInstanceBase_eventGetOffsetRootRotationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execGetOffsetRootRotationMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOffsetRootRotationMode_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function GetOffsetRootRotationMode

// Begin Class UAGLS_AI_AnimInstanceBase Function GetOffsetRootTranslationHalfLife
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventGetOffsetRootTranslationHalfLife_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Root Offset" },
		{ "DisplayName", "Get Offset Root Translation Half Life" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventGetOffsetRootTranslationHalfLife_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "GetOffsetRootTranslationHalfLife", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::AGLS_AI_AnimInstanceBase_eventGetOffsetRootTranslationHalfLife_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::AGLS_AI_AnimInstanceBase_eventGetOffsetRootTranslationHalfLife_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execGetOffsetRootTranslationHalfLife)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOffsetRootTranslationHalfLife();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function GetOffsetRootTranslationHalfLife

// Begin Class UAGLS_AI_AnimInstanceBase Function IsPivoting
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventIsPivoting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function is used to determine if the character is pivoting by checking if the character\xef\xbf\xbds future trajectory is moving in a much different direction than the character\xef\xbf\xbds current trajectory. \n\x09The Rotation Modes have a different threshold, since 45 degree pivots work nicely during strafing, but are not necessary during Orient to Movement.*/" },
#endif
		{ "DisplayName", "Is Pivoting" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to determine if the character is pivoting by checking if the character\xef\xbf\xbds future trajectory is moving in a much different direction than the character\xef\xbf\xbds current trajectory.\n       The Rotation Modes have a different threshold, since 45 degree pivots work nicely during strafing, but are not necessary during Orient to Movement." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventIsPivoting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventIsPivoting_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "IsPivoting", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::AGLS_AI_AnimInstanceBase_eventIsPivoting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::AGLS_AI_AnimInstanceBase_eventIsPivoting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execIsPivoting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPivoting();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function IsPivoting

// Begin Class UAGLS_AI_AnimInstanceBase Function IsStarting
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventIsStarting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function is used to determine if the character is starting to move by checking if the future velocity is greater than the current velocity. If the current Database asset is a pivot database, \n\x09this function will always return false. This prevents the Motion Matching system from interrupting a pivot, since the second half of a pivot is very similar to a start.*/" },
#endif
		{ "DisplayName", "Is Starting" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to determine if the character is starting to move by checking if the future velocity is greater than the current velocity. If the current Database asset is a pivot database,\n       this function will always return false. This prevents the Motion Matching system from interrupting a pivot, since the second half of a pivot is very similar to a start." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventIsStarting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventIsStarting_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "IsStarting", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::AGLS_AI_AnimInstanceBase_eventIsStarting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::AGLS_AI_AnimInstanceBase_eventIsStarting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execIsStarting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStarting();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function IsStarting

// Begin Class UAGLS_AI_AnimInstanceBase Function IsStopping
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventIsStopping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function is used to determine if the character is starting to move by checking if the future velocity is greater than the current velocity. If the current Database asset is a pivot database, \n\x09this function will always return false. This prevents the Motion Matching system from interrupting a pivot, since the second half of a pivot is very similar to a start.*/" },
#endif
		{ "DisplayName", "Is Stopping" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to determine if the character is starting to move by checking if the future velocity is greater than the current velocity. If the current Database asset is a pivot database,\n       this function will always return false. This prevents the Motion Matching system from interrupting a pivot, since the second half of a pivot is very similar to a start." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventIsStopping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventIsStopping_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "IsStopping", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::AGLS_AI_AnimInstanceBase_eventIsStopping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::AGLS_AI_AnimInstanceBase_eventIsStopping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execIsStopping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStopping();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function IsStopping

// Begin Class UAGLS_AI_AnimInstanceBase Function JustLanedHeavy
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventJustLanedHeavy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If the character has just landed and the land velocity was greater than the heavy land speed threshold, play heavy land animations.*/" },
#endif
		{ "DisplayName", "Just Laned Heavy" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the character has just landed and the land velocity was greater than the heavy land speed threshold, play heavy land animations." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventJustLanedHeavy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventJustLanedHeavy_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "JustLanedHeavy", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::AGLS_AI_AnimInstanceBase_eventJustLanedHeavy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::AGLS_AI_AnimInstanceBase_eventJustLanedHeavy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execJustLanedHeavy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->JustLanedHeavy();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function JustLanedHeavy

// Begin Class UAGLS_AI_AnimInstanceBase Function JustLanedLight
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventJustLanedLight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If the character has just landed and the land velocity was less than the heavy land speed threshold, play light land animations.*/" },
#endif
		{ "DisplayName", "Just Laned Light" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the character has just landed and the land velocity was less than the heavy land speed threshold, play light land animations." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventJustLanedLight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventJustLanedLight_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "JustLanedLight", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::AGLS_AI_AnimInstanceBase_eventJustLanedLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::AGLS_AI_AnimInstanceBase_eventJustLanedLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execJustLanedLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->JustLanedLight();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function JustLanedLight

// Begin Class UAGLS_AI_AnimInstanceBase Function JustLanedNeutral
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventJustLanedNeutral_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
		{ "DisplayName", "Just Laned Neutral" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventJustLanedNeutral_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventJustLanedNeutral_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "JustLanedNeutral", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::AGLS_AI_AnimInstanceBase_eventJustLanedNeutral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::AGLS_AI_AnimInstanceBase_eventJustLanedNeutral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execJustLanedNeutral)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->JustLanedNeutral();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function JustLanedNeutral

// Begin Class UAGLS_AI_AnimInstanceBase Function MakeIsCollideValue
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms
	{
		TArray<TEnumAsByte<EObjectTypeQuery> > TraceObjects;
		int32 DebugIndex;
		float DebugTime;
		bool IgnoreCharacters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DebugIndex,DebugTime,IgnoreCharacters" },
		{ "Category", "Motion Matching Core" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_DebugTime", "0.100000" },
		{ "CPP_Default_IgnoreCharacters", "false" },
		{ "DisplayName", "Make Is Collide Value" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
	static void NewProp_IgnoreCharacters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_TraceObjects_Inner = { "TraceObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_TraceObjects = { "TraceObjects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms, TraceObjects), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms, DebugTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_IgnoreCharacters_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms*)Obj)->IgnoreCharacters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_IgnoreCharacters = { "IgnoreCharacters", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_IgnoreCharacters_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_TraceObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_TraceObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_DebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::NewProp_IgnoreCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "MakeIsCollideValue", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::AGLS_AI_AnimInstanceBase_eventMakeIsCollideValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execMakeIsCollideValue)
{
	P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_TraceObjects);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugTime);
	P_GET_UBOOL(Z_Param_IgnoreCharacters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeIsCollideValue(Z_Param_TraceObjects,Z_Param_DebugIndex,Z_Param_DebugTime,Z_Param_IgnoreCharacters);
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function MakeIsCollideValue

// Begin Class UAGLS_AI_AnimInstanceBase Function ResetIK_Offsets
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventResetIK_Offsets_Parms
	{
		float InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foot IK Core" },
		{ "CPP_Default_InterpSpeed", "15.000000" },
		{ "DisplayName", "Reset IK Offsets" },
		{ "Keywords", "Foots IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventResetIK_Offsets_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "ResetIK_Offsets", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::AGLS_AI_AnimInstanceBase_eventResetIK_Offsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::AGLS_AI_AnimInstanceBase_eventResetIK_Offsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execResetIK_Offsets)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetIK_Offsets(Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function ResetIK_Offsets

// Begin Class UAGLS_AI_AnimInstanceBase Function SetFootOffsets
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms
	{
		FName Enable_FootIK_Curve;
		FName IKFootBone;
		FName RootBone;
		FVector CurrentLocationTarget;
		FVector CurrentLocationOffset;
		FRotator CurrentRotationOffset;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		float TraceAboveFoot;
		float TraceBelowFoot;
		float FootHeight;
		int32 TraceDebugIndex;
		float DebugTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foot IK Core" },
		{ "CPP_Default_DebugTime", "0.200000" },
		{ "CPP_Default_FootHeight", "13.500000" },
		{ "CPP_Default_TraceAboveFoot", "50.000000" },
		{ "CPP_Default_TraceBelowFoot", "45.000000" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "CPP_Default_TraceDebugIndex", "0" },
		{ "DisplayName", "Set Foot Offsets" },
		{ "Keywords", "Foots IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Enable_FootIK_Curve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IKFootBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLocationTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotationOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceAboveFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceBelowFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceDebugIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_Enable_FootIK_Curve = { "Enable_FootIK_Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, Enable_FootIK_Curve), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, IKFootBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, RootBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_CurrentLocationTarget = { "CurrentLocationTarget", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, CurrentLocationTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_CurrentLocationOffset = { "CurrentLocationOffset", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, CurrentLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_CurrentRotationOffset = { "CurrentRotationOffset", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, CurrentRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceAboveFoot = { "TraceAboveFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, TraceAboveFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceBelowFoot = { "TraceBelowFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, TraceBelowFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_FootHeight = { "FootHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, FootHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceDebugIndex = { "TraceDebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, TraceDebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms, DebugTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_Enable_FootIK_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_IKFootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_RootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_CurrentLocationTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_CurrentLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_CurrentRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceAboveFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceBelowFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_FootHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_TraceDebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_DebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "SetFootOffsets", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::AGLS_AI_AnimInstanceBase_eventSetFootOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execSetFootOffsets)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Enable_FootIK_Curve);
	P_GET_PROPERTY(FNameProperty,Z_Param_IKFootBone);
	P_GET_PROPERTY(FNameProperty,Z_Param_RootBone);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CurrentLocationTarget);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CurrentLocationOffset);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_CurrentRotationOffset);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceAboveFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceBelowFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FootHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_TraceDebugIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFootOffsets(Z_Param_Enable_FootIK_Curve,Z_Param_IKFootBone,Z_Param_RootBone,Z_Param_Out_CurrentLocationTarget,Z_Param_Out_CurrentLocationOffset,Z_Param_Out_CurrentRotationOffset,ECollisionChannel(Z_Param_TraceChannel),Z_Param_TraceAboveFoot,Z_Param_TraceBelowFoot,Z_Param_FootHeight,Z_Param_TraceDebugIndex,Z_Param_DebugTime);
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function SetFootOffsets

// Begin Class UAGLS_AI_AnimInstanceBase Function SetPelvisIK_Offset
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventSetPelvisIK_Offset_Parms
	{
		FVector FootOffset_L_Target;
		FVector FootOffset_R_Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foot IK Core" },
		{ "DisplayName", "Set Pelvis IK Offset" },
		{ "Keywords", "Foots IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::NewProp_FootOffset_L_Target = { "FootOffset_L_Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetPelvisIK_Offset_Parms, FootOffset_L_Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::NewProp_FootOffset_R_Target = { "FootOffset_R_Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventSetPelvisIK_Offset_Parms, FootOffset_R_Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::NewProp_FootOffset_L_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::NewProp_FootOffset_R_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "SetPelvisIK_Offset", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::AGLS_AI_AnimInstanceBase_eventSetPelvisIK_Offset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::AGLS_AI_AnimInstanceBase_eventSetPelvisIK_Offset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execSetPelvisIK_Offset)
{
	P_GET_STRUCT(FVector,Z_Param_FootOffset_L_Target);
	P_GET_STRUCT(FVector,Z_Param_FootOffset_R_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPelvisIK_Offset(Z_Param_FootOffset_L_Target,Z_Param_FootOffset_R_Target);
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function SetPelvisIK_Offset

// Begin Class UAGLS_AI_AnimInstanceBase Function SetRootTransform
static const FName NAME_UAGLS_AI_AnimInstanceBase_SetRootTransform = FName(TEXT("SetRootTransform"));
void UAGLS_AI_AnimInstanceBase::SetRootTransform()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_SetRootTransform);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		SetRootTransform_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetRootTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Matching Core" },
		{ "DisplayName", "Set Root Transform" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetRootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "SetRootTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetRootTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetRootTransform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetRootTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetRootTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execSetRootTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRootTransform_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function SetRootTransform

// Begin Class UAGLS_AI_AnimInstanceBase Function ShouldSpinTransition
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventShouldSpinTransition_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If the root bone rotation and character\xef\xbf\xbds capsule rotations are very different while moving, this function will allow a spin transition animation to play. Spin transitions are locomotion animations \n\x09that rotate the character while moving in a fixed world direction, and are useful when switching rotation modes. \n\x09""For example, if the character is running toward the camera using the Orient to Movement mode and then switching to strafe, this would require the character to spin 180 degrees very quickly. \n\x09""A spin transition animation would be an ideal transition for this gameplay scenario. Currently, we are using refacing starts in place of spin transitions, but plan to provide actual spin transition \n\x09""data in a future release.*/" },
#endif
		{ "DisplayName", "Should Spin Transition" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the root bone rotation and character\xef\xbf\xbds capsule rotations are very different while moving, this function will allow a spin transition animation to play. Spin transitions are locomotion animations\n       that rotate the character while moving in a fixed world direction, and are useful when switching rotation modes.\n       For example, if the character is running toward the camera using the Orient to Movement mode and then switching to strafe, this would require the character to spin 180 degrees very quickly.\n       A spin transition animation would be an ideal transition for this gameplay scenario. Currently, we are using refacing starts in place of spin transitions, but plan to provide actual spin transition\n       data in a future release." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventShouldSpinTransition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventShouldSpinTransition_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "ShouldSpinTransition", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::AGLS_AI_AnimInstanceBase_eventShouldSpinTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::AGLS_AI_AnimInstanceBase_eventShouldSpinTransition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execShouldSpinTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSpinTransition();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function ShouldSpinTransition

// Begin Class UAGLS_AI_AnimInstanceBase Function ShouldTurnInPlace
struct AGLS_AI_AnimInstanceBase_eventShouldTurnInPlace_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_AI_AnimInstanceBase_eventShouldTurnInPlace_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace = FName(TEXT("ShouldTurnInPlace"));
bool UAGLS_AI_AnimInstanceBase::ShouldTurnInPlace()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_AI_AnimInstanceBase_eventShouldTurnInPlace_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ShouldTurnInPlace_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Movement Analyze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function is used to determine if the character is turning in place by checking if the root bone rotation is different from the character\xef\xbf\xbds capsule rotation. For this project, \n\x09if the rotation is greater than 50 degrees and the character is currently aiming, the character should be turned in place. We also allow turn in places to play if the character has just stopped, \n\x09which gives us a \"Stick Flick\" behavior. Turn in place behavior during the aiming state is still WIP. \n\x09""Additional limits need to be applied to the steering or root offset node to prevent the character from lagging too far behind.*/" },
#endif
		{ "DisplayName", "Should Turn In Place" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to determine if the character is turning in place by checking if the root bone rotation is different from the character\xef\xbf\xbds capsule rotation. For this project,\n       if the rotation is greater than 50 degrees and the character is currently aiming, the character should be turned in place. We also allow turn in places to play if the character has just stopped,\n       which gives us a \"Stick Flick\" behavior. Turn in place behavior during the aiming state is still WIP.\n       Additional limits need to be applied to the steering or root offset node to prevent the character from lagging too far behind." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventShouldTurnInPlace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventShouldTurnInPlace_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "ShouldTurnInPlace", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::PropPointers), sizeof(AGLS_AI_AnimInstanceBase_eventShouldTurnInPlace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_AnimInstanceBase_eventShouldTurnInPlace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execShouldTurnInPlace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldTurnInPlace_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function ShouldTurnInPlace

// Begin Class UAGLS_AI_AnimInstanceBase Function UpdateCoverValues
static const FName NAME_UAGLS_AI_AnimInstanceBase_UpdateCoverValues = FName(TEXT("UpdateCoverValues"));
void UAGLS_AI_AnimInstanceBase::UpdateCoverValues()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_UpdateCoverValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateCoverValues_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateCoverValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Matching Core" },
		{ "DisplayName", "Update Cover Values" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateCoverValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "UpdateCoverValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateCoverValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateCoverValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateCoverValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateCoverValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execUpdateCoverValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCoverValues_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function UpdateCoverValues

// Begin Class UAGLS_AI_AnimInstanceBase Function UpdateEssentialValues
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateEssentialValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Matching Core" },
		{ "DisplayName", "Update Essential Values" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateEssentialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "UpdateEssentialValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateEssentialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateEssentialValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateEssentialValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateEssentialValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execUpdateEssentialValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateEssentialValues();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function UpdateEssentialValues

// Begin Class UAGLS_AI_AnimInstanceBase Function UpdateFootsIK
struct AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms
{
	TEnumAsByte<ECollisionChannel> TraceChannel;
	bool UseFootsLock;
	float TraceAboveFoot;
	float TraceBelowFoot;
	float FootHeight;
	int32 ActiveOnLOD;
	int32 TraceDebugIndex;
	float DebugTime;
};
static const FName NAME_UAGLS_AI_AnimInstanceBase_UpdateFootsIK = FName(TEXT("UpdateFootsIK"));
void UAGLS_AI_AnimInstanceBase::UpdateFootsIK(ECollisionChannel TraceChannel, bool UseFootsLock, float TraceAboveFoot, float TraceBelowFoot, float FootHeight, int32 ActiveOnLOD, int32 TraceDebugIndex, float DebugTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_UpdateFootsIK);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms Parms;
		Parms.TraceChannel=TraceChannel;
		Parms.UseFootsLock=UseFootsLock ? true : false;
		Parms.TraceAboveFoot=TraceAboveFoot;
		Parms.TraceBelowFoot=TraceBelowFoot;
		Parms.FootHeight=FootHeight;
		Parms.ActiveOnLOD=ActiveOnLOD;
		Parms.TraceDebugIndex=TraceDebugIndex;
		Parms.DebugTime=DebugTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateFootsIK_Implementation(TraceChannel, UseFootsLock, TraceAboveFoot, TraceBelowFoot, FootHeight, ActiveOnLOD, TraceDebugIndex, DebugTime);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceAboveFoot,TraceBelowFoot,FootHeight,ActiveOnLOD,TraceDebugIndex,DebugTime" },
		{ "Category", "Foot IK Core" },
		{ "CPP_Default_ActiveOnLOD", "1" },
		{ "CPP_Default_DebugTime", "0.200000" },
		{ "CPP_Default_FootHeight", "13.500000" },
		{ "CPP_Default_TraceAboveFoot", "50.000000" },
		{ "CPP_Default_TraceBelowFoot", "45.000000" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "CPP_Default_TraceDebugIndex", "0" },
		{ "CPP_Default_UseFootsLock", "false" },
		{ "DisplayName", "Update Foots IK" },
		{ "Keywords", "Foots IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_UseFootsLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFootsLock;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceAboveFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceBelowFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveOnLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceDebugIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_UseFootsLock_SetBit(void* Obj)
{
	((AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms*)Obj)->UseFootsLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_UseFootsLock = { "UseFootsLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms), &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_UseFootsLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceAboveFoot = { "TraceAboveFoot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms, TraceAboveFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceBelowFoot = { "TraceBelowFoot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms, TraceBelowFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_FootHeight = { "FootHeight", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms, FootHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_ActiveOnLOD = { "ActiveOnLOD", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms, ActiveOnLOD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceDebugIndex = { "TraceDebugIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms, TraceDebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms, DebugTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_UseFootsLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceAboveFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceBelowFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_FootHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_ActiveOnLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_TraceDebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::NewProp_DebugTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "UpdateFootsIK", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::PropPointers), sizeof(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_AnimInstanceBase_eventUpdateFootsIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execUpdateFootsIK)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_UseFootsLock);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceAboveFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceBelowFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FootHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActiveOnLOD);
	P_GET_PROPERTY(FIntProperty,Z_Param_TraceDebugIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFootsIK_Implementation(ECollisionChannel(Z_Param_TraceChannel),Z_Param_UseFootsLock,Z_Param_TraceAboveFoot,Z_Param_TraceBelowFoot,Z_Param_FootHeight,Z_Param_ActiveOnLOD,Z_Param_TraceDebugIndex,Z_Param_DebugTime);
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function UpdateFootsIK

// Begin Class UAGLS_AI_AnimInstanceBase Function UpdateLayeringValues
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateLayeringValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Matching Core" },
		{ "DisplayName", "Update Layering Values" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateLayeringValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "UpdateLayeringValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateLayeringValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateLayeringValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateLayeringValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateLayeringValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execUpdateLayeringValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLayeringValues();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function UpdateLayeringValues

// Begin Class UAGLS_AI_AnimInstanceBase Function UpdateMotionMatchingPostSelection
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics
{
	struct AGLS_AI_AnimInstanceBase_eventUpdateMotionMatchingPostSelection_Parms
	{
		FAnimUpdateContext Context;
		FAnimNodeReference Node;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "MM Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function is called after the Motion Matching node has selected an animation. In this case, we cache the database the selected animation is in, in order to grab the tags in the \n\x09""EventGraph (due to a thread safety issue).\n\x09In the future, we plan to use this function to control additional things such as blend time and blend profiles based on the selected animation.*/" },
#endif
		{ "DisplayName", "Update Motion Matching Post Selection" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is called after the Motion Matching node has selected an animation. In this case, we cache the database the selected animation is in, in order to grab the tags in the\n       EventGraph (due to a thread safety issue).\n       In the future, we plan to use this function to control additional things such as blend time and blend profiles based on the selected animation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateMotionMatchingPostSelection_Parms, Context), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(0, nullptr) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_AnimInstanceBase_eventUpdateMotionMatchingPostSelection_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 3482719010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "UpdateMotionMatchingPostSelection", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::AGLS_AI_AnimInstanceBase_eventUpdateMotionMatchingPostSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::AGLS_AI_AnimInstanceBase_eventUpdateMotionMatchingPostSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execUpdateMotionMatchingPostSelection)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_Context);
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMotionMatchingPostSelection(Z_Param_Out_Context,Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function UpdateMotionMatchingPostSelection

// Begin Class UAGLS_AI_AnimInstanceBase Function UpdateRotationValues
static const FName NAME_UAGLS_AI_AnimInstanceBase_UpdateRotationValues = FName(TEXT("UpdateRotationValues"));
void UAGLS_AI_AnimInstanceBase::UpdateRotationValues()
{
	UFunction* Func = FindFunctionChecked(NAME_UAGLS_AI_AnimInstanceBase_UpdateRotationValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateRotationValues_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateRotationValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Matching Core" },
		{ "DisplayName", "Update Rotation Values" },
		{ "Keywords", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateRotationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, nullptr, "UpdateRotationValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateRotationValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateRotationValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateRotationValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateRotationValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AI_AnimInstanceBase::execUpdateRotationValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateRotationValues_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AI_AnimInstanceBase Function UpdateRotationValues

// Begin Class UAGLS_AI_AnimInstanceBase
void UAGLS_AI_AnimInstanceBase::StaticRegisterNativesUAGLS_AI_AnimInstanceBase()
{
	UClass* Class = UAGLS_AI_AnimInstanceBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableSterring", &UAGLS_AI_AnimInstanceBase::execEnableSterring },
		{ "GenerateTrajectory", &UAGLS_AI_AnimInstanceBase::execGenerateTrajectory },
		{ "Get_MMBlendTime", &UAGLS_AI_AnimInstanceBase::execGet_MMBlendTime },
		{ "GetDesiredFacing", &UAGLS_AI_AnimInstanceBase::execGetDesiredFacing },
		{ "GetOffsetRootLocationMode", &UAGLS_AI_AnimInstanceBase::execGetOffsetRootLocationMode },
		{ "GetOffsetRootRotationMode", &UAGLS_AI_AnimInstanceBase::execGetOffsetRootRotationMode },
		{ "GetOffsetRootTranslationHalfLife", &UAGLS_AI_AnimInstanceBase::execGetOffsetRootTranslationHalfLife },
		{ "IsPivoting", &UAGLS_AI_AnimInstanceBase::execIsPivoting },
		{ "IsStarting", &UAGLS_AI_AnimInstanceBase::execIsStarting },
		{ "IsStopping", &UAGLS_AI_AnimInstanceBase::execIsStopping },
		{ "JustLanedHeavy", &UAGLS_AI_AnimInstanceBase::execJustLanedHeavy },
		{ "JustLanedLight", &UAGLS_AI_AnimInstanceBase::execJustLanedLight },
		{ "JustLanedNeutral", &UAGLS_AI_AnimInstanceBase::execJustLanedNeutral },
		{ "MakeIsCollideValue", &UAGLS_AI_AnimInstanceBase::execMakeIsCollideValue },
		{ "ResetIK_Offsets", &UAGLS_AI_AnimInstanceBase::execResetIK_Offsets },
		{ "SetFootOffsets", &UAGLS_AI_AnimInstanceBase::execSetFootOffsets },
		{ "SetPelvisIK_Offset", &UAGLS_AI_AnimInstanceBase::execSetPelvisIK_Offset },
		{ "SetRootTransform", &UAGLS_AI_AnimInstanceBase::execSetRootTransform },
		{ "ShouldSpinTransition", &UAGLS_AI_AnimInstanceBase::execShouldSpinTransition },
		{ "ShouldTurnInPlace", &UAGLS_AI_AnimInstanceBase::execShouldTurnInPlace },
		{ "UpdateCoverValues", &UAGLS_AI_AnimInstanceBase::execUpdateCoverValues },
		{ "UpdateEssentialValues", &UAGLS_AI_AnimInstanceBase::execUpdateEssentialValues },
		{ "UpdateFootsIK", &UAGLS_AI_AnimInstanceBase::execUpdateFootsIK },
		{ "UpdateLayeringValues", &UAGLS_AI_AnimInstanceBase::execUpdateLayeringValues },
		{ "UpdateMotionMatchingPostSelection", &UAGLS_AI_AnimInstanceBase::execUpdateMotionMatchingPostSelection },
		{ "UpdateRotationValues", &UAGLS_AI_AnimInstanceBase::execUpdateRotationValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_AI_AnimInstanceBase);
UClass* Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_NoRegister()
{
	return UAGLS_AI_AnimInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AGLS_AI_AnimInstanceBase.h" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRootBoneEnabledC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryConfigIdle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryConfigMoving_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyStateDuration_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPivotingDeltaTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSpinningDeltaTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootIK_L_CurveName_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config|IK Settings" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootIK_R_CurveName_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config|IK Settings" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootTraceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config|IK Settings" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dt_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilatationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// =============================================================================================================================   STATES VALUES AS INDEX\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=============================================================================================================================   STATES VALUES AS INDEX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevMovementStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaitC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StanceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementActionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundedMoveModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbingActionStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "States Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMoveC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------   ---> Essensial VALUES <---\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------------------------------------------------------------------------   ---> Essensial VALUES <---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpLootItemC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTurnInPlaceAimingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCoveringC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSideCoverC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverDirectionChangedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDeadC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FutureVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityLastFrameC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNonZeroVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevAimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactionStrenghtC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMovingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement Analize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------    ---> Movement Analize <---\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------------------------------------------------------------------------    ---> Movement Analize <---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevIsMovingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement Analize" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasMovementInputC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement Analize" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollidingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement Analize" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JustLandedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement Analize" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStairsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement Analize" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StanceTransitionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement Analize" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------    ---> M O T I O N   M A T C H I N G <---\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------------------------------------------------------------------------    ---> M O T I O N   M A T C H I N G <---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelectedDatabase_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousDesiredControllerYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterruptOnDatabaseC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTransformC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTransformC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTransformC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FutureMovementAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDatabaseTags_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevRootTransform_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------    --->  (A) (I) (M) (I) (N) (G)  <---\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------------------------------------------------------------------------    --->  (A) (I) (M) (I) (N) (G)  <---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimSweepTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputYawOffsetTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootYawChangeSpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Aiming Values" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlendC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------    --->  |L|A|Y|E|R|  |B|L|E|N|D|I|N|G|  <---\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------------------------------------------------------------------------    --->  |L|A|Y|E|R|  |B|L|E|N|D|I|N|G|  <---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseN_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseCLF_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_LS_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MS_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_LS_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MS_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hand_L_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hand_R_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMotionMaskC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDownAlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayOverrideStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayPosesType_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Layer Blending" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLockL_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------    --->  [F] [O] [O] [T] [S]   [I]. [K]. <---\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------------------------------------------------------------------------    --->  [F] [O] [O] [T] [S]   [I]. [K]. <---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLockR_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_LocC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_RotC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_LocC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_RotC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOffsetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOffsetAlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Foot IK" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_State_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Optimization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\ Optimization\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\ Optimization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_ToUp_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Public/AGLS_AI_AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_OffsetRootBoneEnabledC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OffsetRootBoneEnabledC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrajectoryConfigIdle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrajectoryConfigMoving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReadyStateDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IsPivotingDeltaTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IsSpinningDeltaTrigger;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootIK_L_CurveName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootIK_R_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootTraceRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilatationC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStateC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementStateC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GaitC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GaitC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayStateC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationModeC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationModeC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StanceC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StanceC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementActionC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementActionC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedMoveModeC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedMoveModeC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClimbingActionStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClimbingActionStateC;
	static void NewProp_ShouldMoveC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMoveC;
	static void NewProp_PickUpLootItemC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PickUpLootItemC;
	static void NewProp_IsTurnInPlaceAimingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTurnInPlaceAimingC;
	static void NewProp_IsCoveringC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCoveringC;
	static void NewProp_LeftSideCoverC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftSideCoverC;
	static void NewProp_CoverDirectionChangedC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CoverDirectionChangedC;
	static void NewProp_IsDeadC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDeadC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FutureVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityLastFrameC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastNonZeroVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevAimingRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationVelocityC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitReactionStrenghtC;
	static void NewProp_IsMovingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMovingC;
	static void NewProp_PrevIsMovingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrevIsMovingC;
	static void NewProp_HasMovementInputC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInputC;
	static void NewProp_CapsuleCollidingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CapsuleCollidingC;
	static void NewProp_JustLandedC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_JustLandedC;
	static void NewProp_OnStairsC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnStairsC;
	static void NewProp_StanceTransitionC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StanceTransitionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSelectedDatabase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousDesiredControllerYawC;
	static void NewProp_InterruptOnDatabaseC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InterruptOnDatabaseC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterTransformC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTransformC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionTransformC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FutureMovementAngleC;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentDatabaseTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentDatabaseTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevRootTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingAngleC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingAngleC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimSweepTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardYawTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RootYawChangeSpeedC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrideBlendC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseN;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseCLF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmL_LS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmL_MS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmR_LS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmR_MS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hand_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hand_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryMotionMaskC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BendDownAlphaC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverlayOverrideStateC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayPosesType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayPosesType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLockL_AlphaC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLockR_AlphaC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_LocC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_RotC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_LocC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_RotC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisOffsetC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisOffsetAlphaC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LOD_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LOD_State;
	static void NewProp_LOD_ToUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LOD_ToUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_EnableSterring, "EnableSterring" }, // 1186540967
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GenerateTrajectory, "GenerateTrajectory" }, // 961013087
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_Get_MMBlendTime, "Get_MMBlendTime" }, // 2084543607
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetDesiredFacing, "GetDesiredFacing" }, // 1333797804
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootLocationMode, "GetOffsetRootLocationMode" }, // 2286183036
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootRotationMode, "GetOffsetRootRotationMode" }, // 3372818190
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_GetOffsetRootTranslationHalfLife, "GetOffsetRootTranslationHalfLife" }, // 1825104067
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsPivoting, "IsPivoting" }, // 337140582
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStarting, "IsStarting" }, // 1182429912
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_IsStopping, "IsStopping" }, // 1537410777
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedHeavy, "JustLanedHeavy" }, // 129863899
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedLight, "JustLanedLight" }, // 4200498739
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_JustLanedNeutral, "JustLanedNeutral" }, // 2793017034
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_MakeIsCollideValue, "MakeIsCollideValue" }, // 1724845285
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ResetIK_Offsets, "ResetIK_Offsets" }, // 1761770175
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetFootOffsets, "SetFootOffsets" }, // 1878403609
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetPelvisIK_Offset, "SetPelvisIK_Offset" }, // 3166989117
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_SetRootTransform, "SetRootTransform" }, // 1013695190
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldSpinTransition, "ShouldSpinTransition" }, // 1707372494
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_ShouldTurnInPlace, "ShouldTurnInPlace" }, // 3572274686
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateCoverValues, "UpdateCoverValues" }, // 3924511868
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateEssentialValues, "UpdateEssentialValues" }, // 3296615910
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateFootsIK, "UpdateFootsIK" }, // 1587322501
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateLayeringValues, "UpdateLayeringValues" }, // 1111971091
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateMotionMatchingPostSelection, "UpdateMotionMatchingPostSelection" }, // 3628462909
		{ &Z_Construct_UFunction_UAGLS_AI_AnimInstanceBase_UpdateRotationValues, "UpdateRotationValues" }, // 3441429523
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_AI_AnimInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OffsetRootBoneEnabledC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->OffsetRootBoneEnabledC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OffsetRootBoneEnabledC = { "OffsetRootBoneEnabledC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OffsetRootBoneEnabledC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetRootBoneEnabledC_MetaData), NewProp_OffsetRootBoneEnabledC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_TrajectoryConfigIdle = { "TrajectoryConfigIdle", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, TrajectoryConfigIdle), Z_Construct_UScriptStruct_FPoseSearchTrajectoryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryConfigIdle_MetaData), NewProp_TrajectoryConfigIdle_MetaData) }; // 2574349377
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_TrajectoryConfigMoving = { "TrajectoryConfigMoving", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, TrajectoryConfigMoving), Z_Construct_UScriptStruct_FPoseSearchTrajectoryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryConfigMoving_MetaData), NewProp_TrajectoryConfigMoving_MetaData) }; // 2574349377
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ReadyStateDuration = { "ReadyStateDuration", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, ReadyStateDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyStateDuration_MetaData), NewProp_ReadyStateDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsPivotingDeltaTrigger = { "IsPivotingDeltaTrigger", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, IsPivotingDeltaTrigger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPivotingDeltaTrigger_MetaData), NewProp_IsPivotingDeltaTrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsSpinningDeltaTrigger = { "IsSpinningDeltaTrigger", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, IsSpinningDeltaTrigger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSpinningDeltaTrigger_MetaData), NewProp_IsSpinningDeltaTrigger_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootIK_L_CurveName = { "FootIK_L_CurveName", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootIK_L_CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootIK_L_CurveName_MetaData), NewProp_FootIK_L_CurveName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootIK_R_CurveName = { "FootIK_R_CurveName", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootIK_R_CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootIK_R_CurveName_MetaData), NewProp_FootIK_R_CurveName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootTraceRadius = { "FootTraceRadius", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootTraceRadius_MetaData), NewProp_FootTraceRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterC_MetaData), NewProp_CharacterC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, dt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dt_MetaData), NewProp_dt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_TimeDilatationC = { "TimeDilatationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, TimeDilatationC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDilatationC_MetaData), NewProp_TimeDilatationC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementStateC = { "MovementStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, MovementStateC), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStateC_MetaData), NewProp_MovementStateC_MetaData) }; // 3255268152
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevMovementStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevMovementStateC = { "PrevMovementStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, PrevMovementStateC), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevMovementStateC_MetaData), NewProp_PrevMovementStateC_MetaData) }; // 3255268152
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GaitC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GaitC = { "GaitC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, GaitC), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaitC_MetaData), NewProp_GaitC_MetaData) }; // 1732279459
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayStateC = { "OverlayStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, OverlayStateC), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayStateC_MetaData), NewProp_OverlayStateC_MetaData) }; // 3098219672
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RotationModeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RotationModeC = { "RotationModeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, RotationModeC), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationModeC_MetaData), NewProp_RotationModeC_MetaData) }; // 1340769226
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceC = { "StanceC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, StanceC), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StanceC_MetaData), NewProp_StanceC_MetaData) }; // 87690985
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementActionC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementActionC = { "MovementActionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, MovementActionC), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementActionC_MetaData), NewProp_MovementActionC_MetaData) }; // 3049088149
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GroundedMoveModeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GroundedMoveModeC = { "GroundedMoveModeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, GroundedMoveModeC), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundedMoveModeC_MetaData), NewProp_GroundedMoveModeC_MetaData) }; // 1562728553
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ClimbingActionStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ClimbingActionStateC = { "ClimbingActionStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, ClimbingActionStateC), Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbingActionStateC_MetaData), NewProp_ClimbingActionStateC_MetaData) }; // 3053408074
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ShouldMoveC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->ShouldMoveC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ShouldMoveC = { "ShouldMoveC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ShouldMoveC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldMoveC_MetaData), NewProp_ShouldMoveC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PickUpLootItemC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->PickUpLootItemC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PickUpLootItemC = { "PickUpLootItemC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PickUpLootItemC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpLootItemC_MetaData), NewProp_PickUpLootItemC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsTurnInPlaceAimingC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->IsTurnInPlaceAimingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsTurnInPlaceAimingC = { "IsTurnInPlaceAimingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsTurnInPlaceAimingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTurnInPlaceAimingC_MetaData), NewProp_IsTurnInPlaceAimingC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsCoveringC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->IsCoveringC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsCoveringC = { "IsCoveringC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsCoveringC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCoveringC_MetaData), NewProp_IsCoveringC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LeftSideCoverC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->LeftSideCoverC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LeftSideCoverC = { "LeftSideCoverC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LeftSideCoverC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSideCoverC_MetaData), NewProp_LeftSideCoverC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CoverDirectionChangedC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->CoverDirectionChangedC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CoverDirectionChangedC = { "CoverDirectionChangedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CoverDirectionChangedC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverDirectionChangedC_MetaData), NewProp_CoverDirectionChangedC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsDeadC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->IsDeadC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsDeadC = { "IsDeadC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsDeadC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDeadC_MetaData), NewProp_IsDeadC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, SpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedC_MetaData), NewProp_SpeedC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_VelocityC = { "VelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, VelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityC_MetaData), NewProp_VelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FutureVelocityC = { "FutureVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FutureVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FutureVelocityC_MetaData), NewProp_FutureVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_VelocityLastFrameC = { "VelocityLastFrameC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, VelocityLastFrameC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityLastFrameC_MetaData), NewProp_VelocityLastFrameC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LastNonZeroVelocityC = { "LastNonZeroVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, LastNonZeroVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNonZeroVelocityC_MetaData), NewProp_LastNonZeroVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AccelerationC = { "AccelerationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, AccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationC_MetaData), NewProp_AccelerationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LandVelocityC = { "LandVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, LandVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandVelocityC_MetaData), NewProp_LandVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimingRotationC = { "AimingRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, AimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingRotationC_MetaData), NewProp_AimingRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevAimingRotationC = { "PrevAimingRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, PrevAimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevAimingRotationC_MetaData), NewProp_PrevAimingRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RotationVelocityC = { "RotationVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, RotationVelocityC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationVelocityC_MetaData), NewProp_RotationVelocityC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_HitReactionStrenghtC = { "HitReactionStrenghtC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, HitReactionStrenghtC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactionStrenghtC_MetaData), NewProp_HitReactionStrenghtC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsMovingC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->IsMovingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsMovingC = { "IsMovingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsMovingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMovingC_MetaData), NewProp_IsMovingC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevIsMovingC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->PrevIsMovingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevIsMovingC = { "PrevIsMovingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevIsMovingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevIsMovingC_MetaData), NewProp_PrevIsMovingC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_HasMovementInputC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->HasMovementInputC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_HasMovementInputC = { "HasMovementInputC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_HasMovementInputC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasMovementInputC_MetaData), NewProp_HasMovementInputC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CapsuleCollidingC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->CapsuleCollidingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CapsuleCollidingC = { "CapsuleCollidingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CapsuleCollidingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleCollidingC_MetaData), NewProp_CapsuleCollidingC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_JustLandedC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->JustLandedC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_JustLandedC = { "JustLandedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_JustLandedC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JustLandedC_MetaData), NewProp_JustLandedC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OnStairsC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->OnStairsC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OnStairsC = { "OnStairsC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OnStairsC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStairsC_MetaData), NewProp_OnStairsC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceTransitionC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->StanceTransitionC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceTransitionC = { "StanceTransitionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceTransitionC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StanceTransitionC_MetaData), NewProp_StanceTransitionC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, Trajectory), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trajectory_MetaData), NewProp_Trajectory_MetaData) }; // 2372533658
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CurrentSelectedDatabase = { "CurrentSelectedDatabase", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, CurrentSelectedDatabase), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSelectedDatabase_MetaData), NewProp_CurrentSelectedDatabase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PreviousDesiredControllerYawC = { "PreviousDesiredControllerYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, PreviousDesiredControllerYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousDesiredControllerYawC_MetaData), NewProp_PreviousDesiredControllerYawC_MetaData) };
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InterruptOnDatabaseC_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->InterruptOnDatabaseC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InterruptOnDatabaseC = { "InterruptOnDatabaseC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InterruptOnDatabaseC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterruptOnDatabaseC_MetaData), NewProp_InterruptOnDatabaseC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CharacterTransformC = { "CharacterTransformC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, CharacterTransformC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTransformC_MetaData), NewProp_CharacterTransformC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RootTransformC = { "RootTransformC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, RootTransformC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTransformC_MetaData), NewProp_RootTransformC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InteractionTransformC = { "InteractionTransformC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, InteractionTransformC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTransformC_MetaData), NewProp_InteractionTransformC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FutureMovementAngleC = { "FutureMovementAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FutureMovementAngleC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FutureMovementAngleC_MetaData), NewProp_FutureMovementAngleC_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CurrentDatabaseTags_Inner = { "CurrentDatabaseTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CurrentDatabaseTags = { "CurrentDatabaseTags", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, CurrentDatabaseTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDatabaseTags_MetaData), NewProp_CurrentDatabaseTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevRootTransform = { "PrevRootTransform", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, PrevRootTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevRootTransform_MetaData), NewProp_PrevRootTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SpineRotationC = { "SpineRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, SpineRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpineRotationC_MetaData), NewProp_SpineRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SmoothedAimingRotationC = { "SmoothedAimingRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, SmoothedAimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedAimingRotationC_MetaData), NewProp_SmoothedAimingRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimingAngleC = { "AimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, AimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingAngleC_MetaData), NewProp_AimingAngleC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SmoothedAimingAngleC = { "SmoothedAimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, SmoothedAimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedAimingAngleC_MetaData), NewProp_SmoothedAimingAngleC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimSweepTimeC = { "AimSweepTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, AimSweepTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimSweepTimeC_MetaData), NewProp_AimSweepTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InputYawOffsetTimeC = { "InputYawOffsetTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, InputYawOffsetTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputYawOffsetTimeC_MetaData), NewProp_InputYawOffsetTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ForwardYawTimeC = { "ForwardYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, ForwardYawTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardYawTimeC_MetaData), NewProp_ForwardYawTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimYawRateC = { "AimYawRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, AimYawRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimYawRateC_MetaData), NewProp_AimYawRateC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RootYawChangeSpeedC = { "RootYawChangeSpeedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, RootYawChangeSpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootYawChangeSpeedC_MetaData), NewProp_RootYawChangeSpeedC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StrideBlendC = { "StrideBlendC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, StrideBlendC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrideBlendC_MetaData), NewProp_StrideBlendC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_BasePoseN = { "BasePoseN", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, BasePoseN), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseN_MetaData), NewProp_BasePoseN_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_BasePoseCLF = { "BasePoseCLF", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, BasePoseCLF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseCLF_MetaData), NewProp_BasePoseCLF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmL_LS = { "ArmL_LS", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, ArmL_LS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_LS_MetaData), NewProp_ArmL_LS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmL_MS = { "ArmL_MS", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, ArmL_MS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_MS_MetaData), NewProp_ArmL_MS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmR_LS = { "ArmR_LS", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, ArmR_LS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_LS_MetaData), NewProp_ArmR_LS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmR_MS = { "ArmR_MS", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, ArmR_MS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_MS_MetaData), NewProp_ArmR_MS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_Hand_L = { "Hand_L", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, Hand_L), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hand_L_MetaData), NewProp_Hand_L_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_Hand_R = { "Hand_R", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, Hand_R), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hand_R_MetaData), NewProp_Hand_R_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SecondaryMotionMaskC = { "SecondaryMotionMaskC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, SecondaryMotionMaskC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryMotionMaskC_MetaData), NewProp_SecondaryMotionMaskC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_BendDownAlphaC = { "BendDownAlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, BendDownAlphaC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDownAlphaC_MetaData), NewProp_BendDownAlphaC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayOverrideStateC = { "OverlayOverrideStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, OverlayOverrideStateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayOverrideStateC_MetaData), NewProp_OverlayOverrideStateC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayPosesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayPosesType = { "OverlayPosesType", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, OverlayPosesType), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayPosesType_MetaData), NewProp_OverlayPosesType_MetaData) }; // 1020122115
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootLockL_AlphaC = { "FootLockL_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootLockL_AlphaC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLockL_AlphaC_MetaData), NewProp_FootLockL_AlphaC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootLockR_AlphaC = { "FootLockR_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootLockR_AlphaC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLockR_AlphaC_MetaData), NewProp_FootLockR_AlphaC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_L_LocC = { "FootOffset_L_LocC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootOffset_L_LocC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_L_LocC_MetaData), NewProp_FootOffset_L_LocC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_L_RotC = { "FootOffset_L_RotC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootOffset_L_RotC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_L_RotC_MetaData), NewProp_FootOffset_L_RotC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_R_LocC = { "FootOffset_R_LocC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootOffset_R_LocC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_R_LocC_MetaData), NewProp_FootOffset_R_LocC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_R_RotC = { "FootOffset_R_RotC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, FootOffset_R_RotC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_R_RotC_MetaData), NewProp_FootOffset_R_RotC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PelvisOffsetC = { "PelvisOffsetC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, PelvisOffsetC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisOffsetC_MetaData), NewProp_PelvisOffsetC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PelvisOffsetAlphaC = { "PelvisOffsetAlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, PelvisOffsetAlphaC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisOffsetAlphaC_MetaData), NewProp_PelvisOffsetAlphaC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_State = { "LOD_State", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AI_AnimInstanceBase, LOD_State), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_State_MetaData), NewProp_LOD_State_MetaData) }; // 4107279616
void Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_ToUp_SetBit(void* Obj)
{
	((UAGLS_AI_AnimInstanceBase*)Obj)->LOD_ToUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_ToUp = { "LOD_ToUp", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AI_AnimInstanceBase), &Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_ToUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_ToUp_MetaData), NewProp_LOD_ToUp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OffsetRootBoneEnabledC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_TrajectoryConfigIdle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_TrajectoryConfigMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ReadyStateDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsPivotingDeltaTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsSpinningDeltaTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootIK_L_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootIK_R_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CharacterC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_dt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_TimeDilatationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevMovementStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevMovementStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GaitC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GaitC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RotationModeC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RotationModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementActionC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_MovementActionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GroundedMoveModeC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_GroundedMoveModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ClimbingActionStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ClimbingActionStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ShouldMoveC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PickUpLootItemC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsTurnInPlaceAimingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsCoveringC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LeftSideCoverC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CoverDirectionChangedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsDeadC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_VelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FutureVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_VelocityLastFrameC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LastNonZeroVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AccelerationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LandVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimingRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevAimingRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RotationVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_HitReactionStrenghtC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_IsMovingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevIsMovingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_HasMovementInputC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CapsuleCollidingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_JustLandedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OnStairsC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StanceTransitionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_Trajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CurrentSelectedDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PreviousDesiredControllerYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InterruptOnDatabaseC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CharacterTransformC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RootTransformC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InteractionTransformC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FutureMovementAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CurrentDatabaseTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_CurrentDatabaseTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PrevRootTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SpineRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SmoothedAimingRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimingAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SmoothedAimingAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimSweepTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_InputYawOffsetTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ForwardYawTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_AimYawRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_RootYawChangeSpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_StrideBlendC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_BasePoseN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_BasePoseCLF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmL_LS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmL_MS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmR_LS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_ArmR_MS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_Hand_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_Hand_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_SecondaryMotionMaskC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_BendDownAlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayOverrideStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayPosesType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_OverlayPosesType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootLockL_AlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootLockR_AlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_L_LocC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_L_RotC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_R_LocC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_FootOffset_R_RotC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PelvisOffsetC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_PelvisOffsetAlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::NewProp_LOD_ToUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::ClassParams = {
	&UAGLS_AI_AnimInstanceBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_AI_AnimInstanceBase()
{
	if (!Z_Registration_Info_UClass_UAGLS_AI_AnimInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_AI_AnimInstanceBase.OuterSingleton, Z_Construct_UClass_UAGLS_AI_AnimInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_AI_AnimInstanceBase.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAGLS_AI_AnimInstanceBase>()
{
	return UAGLS_AI_AnimInstanceBase::StaticClass();
}
UAGLS_AI_AnimInstanceBase::UAGLS_AI_AnimInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_AI_AnimInstanceBase);
UAGLS_AI_AnimInstanceBase::~UAGLS_AI_AnimInstanceBase() {}
// End Class UAGLS_AI_AnimInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_AI_AnimInstanceBase, UAGLS_AI_AnimInstanceBase::StaticClass, TEXT("UAGLS_AI_AnimInstanceBase"), &Z_Registration_Info_UClass_UAGLS_AI_AnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_AI_AnimInstanceBase), 2609560804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_2712277523(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_AnimInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

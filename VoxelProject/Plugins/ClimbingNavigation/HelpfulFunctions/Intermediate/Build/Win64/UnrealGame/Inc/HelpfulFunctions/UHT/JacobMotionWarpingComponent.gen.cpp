// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/JacobMotionWarpingComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJacobMotionWarpingComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJacobMotionWarpingComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJacobMotionWarpingComponent_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UJacobMotionWarpingComponent Function GetOriginPosition
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics
{
	struct JacobMotionWarpingComponent_eventGetOriginPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Get Origin Position" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetOriginPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "GetOriginPosition", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::JacobMotionWarpingComponent_eventGetOriginPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::JacobMotionWarpingComponent_eventGetOriginPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execGetOriginPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetOriginPosition();
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function GetOriginPosition

// Begin Class UJacobMotionWarpingComponent Function GetTargetAxis
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics
{
	struct JacobMotionWarpingComponent_eventGetTargetAxis_Parms
	{
		FVector Forward;
		FVector Right;
		FVector Up;
		float ScaleXY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_ScaleXY", "1.000000" },
		{ "DisplayName", "Get Target Axis" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleXY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_ScaleXY = { "ScaleXY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, ScaleXY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Forward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Up,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_ScaleXY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "GetTargetAxis", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::JacobMotionWarpingComponent_eventGetTargetAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::JacobMotionWarpingComponent_eventGetTargetAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execGetTargetAxis)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Forward);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Right);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleXY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTargetAxis(Z_Param_Out_Forward,Z_Param_Out_Right,Z_Param_Out_Up,Z_Param_ScaleXY);
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function GetTargetAxis

// Begin Class UJacobMotionWarpingComponent Function PredictedSingleMotionPosition
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics
{
	struct JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms
	{
		bool Valid;
		bool HaveRoom;
		FVector ReturnLocation;
		ACharacter* WarpTargetActor;
		FVector ConstantOffset;
		float NormalizedTime;
		UCurveVector* RootMotionChar;
		UCurveVector* RootMotionWarpRot;
		bool ExcludeWarpActorRoot;
		bool UseUpAxis;
		FRotator ApplyCustomRotator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Predicted Single Motion Position" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static void NewProp_HaveRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WarpTargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMotionChar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMotionWarpRot;
	static void NewProp_ExcludeWarpActorRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeWarpActorRoot;
	static void NewProp_UseUpAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUpAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyCustomRotator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->HaveRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom = { "HaveRoom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_WarpTargetActor = { "WarpTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, WarpTargetActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ConstantOffset = { "ConstantOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, ConstantOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, NormalizedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionChar = { "RootMotionChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, RootMotionChar), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionWarpRot = { "RootMotionWarpRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, RootMotionWarpRot), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->ExcludeWarpActorRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot = { "ExcludeWarpActorRoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->UseUpAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis = { "UseUpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ApplyCustomRotator = { "ApplyCustomRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, ApplyCustomRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ReturnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_WarpTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ConstantOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_NormalizedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionWarpRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ApplyCustomRotator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "PredictedSingleMotionPosition", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execPredictedSingleMotionPosition)
{
	P_GET_UBOOL_REF(Z_Param_Out_Valid);
	P_GET_UBOOL_REF(Z_Param_Out_HaveRoom);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
	P_GET_OBJECT(ACharacter,Z_Param_WarpTargetActor);
	P_GET_STRUCT(FVector,Z_Param_ConstantOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedTime);
	P_GET_OBJECT(UCurveVector,Z_Param_RootMotionChar);
	P_GET_OBJECT(UCurveVector,Z_Param_RootMotionWarpRot);
	P_GET_UBOOL(Z_Param_ExcludeWarpActorRoot);
	P_GET_UBOOL(Z_Param_UseUpAxis);
	P_GET_STRUCT(FRotator,Z_Param_ApplyCustomRotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PredictedSingleMotionPosition(Z_Param_Out_Valid,Z_Param_Out_HaveRoom,Z_Param_Out_ReturnLocation,Z_Param_WarpTargetActor,Z_Param_ConstantOffset,Z_Param_NormalizedTime,Z_Param_RootMotionChar,Z_Param_RootMotionWarpRot,Z_Param_ExcludeWarpActorRoot,Z_Param_UseUpAxis,Z_Param_ApplyCustomRotator);
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function PredictedSingleMotionPosition

// Begin Class UJacobMotionWarpingComponent Function PredictedSingleMotionPositionAuto
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics
{
	struct JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms
	{
		bool Valid;
		bool HaveRoom;
		FVector ReturnLocation;
		ACharacter* WarpTargetActor;
		UAnimSequence* AnimSeqAtt;
		UAnimSequence* AnimSeqVic;
		FVector WarpingOrigin;
		FVector ConstantOffset;
		float NormalizedTime;
		bool ExcludeWarpActorRoot;
		bool UseUpAxis;
		FRotator ApplyCustomRotator;
		bool InvertAxis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Predicted Single Motion Position Auto" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static void NewProp_HaveRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WarpTargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSeqAtt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSeqVic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpingOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
	static void NewProp_ExcludeWarpActorRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeWarpActorRoot;
	static void NewProp_UseUpAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUpAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyCustomRotator;
	static void NewProp_InvertAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->HaveRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom = { "HaveRoom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpTargetActor = { "WarpTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, WarpTargetActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqAtt = { "AnimSeqAtt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, AnimSeqAtt), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqVic = { "AnimSeqVic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, AnimSeqVic), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpingOrigin = { "WarpingOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, WarpingOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ConstantOffset = { "ConstantOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, ConstantOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, NormalizedTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->ExcludeWarpActorRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot = { "ExcludeWarpActorRoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->UseUpAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis = { "UseUpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ApplyCustomRotator = { "ApplyCustomRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, ApplyCustomRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->InvertAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis = { "InvertAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ReturnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpingOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ConstantOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_NormalizedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ApplyCustomRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "PredictedSingleMotionPositionAuto", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execPredictedSingleMotionPositionAuto)
{
	P_GET_UBOOL_REF(Z_Param_Out_Valid);
	P_GET_UBOOL_REF(Z_Param_Out_HaveRoom);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
	P_GET_OBJECT(ACharacter,Z_Param_WarpTargetActor);
	P_GET_OBJECT(UAnimSequence,Z_Param_AnimSeqAtt);
	P_GET_OBJECT(UAnimSequence,Z_Param_AnimSeqVic);
	P_GET_STRUCT(FVector,Z_Param_WarpingOrigin);
	P_GET_STRUCT(FVector,Z_Param_ConstantOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedTime);
	P_GET_UBOOL(Z_Param_ExcludeWarpActorRoot);
	P_GET_UBOOL(Z_Param_UseUpAxis);
	P_GET_STRUCT(FRotator,Z_Param_ApplyCustomRotator);
	P_GET_UBOOL(Z_Param_InvertAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PredictedSingleMotionPositionAuto(Z_Param_Out_Valid,Z_Param_Out_HaveRoom,Z_Param_Out_ReturnLocation,Z_Param_WarpTargetActor,Z_Param_AnimSeqAtt,Z_Param_AnimSeqVic,Z_Param_WarpingOrigin,Z_Param_ConstantOffset,Z_Param_NormalizedTime,Z_Param_ExcludeWarpActorRoot,Z_Param_UseUpAxis,Z_Param_ApplyCustomRotator,Z_Param_InvertAxis);
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function PredictedSingleMotionPositionAuto

// Begin Class UJacobMotionWarpingComponent Function ResetValues
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function Library - PUBLIC (CAN BE EXECUTED BY BLUEPRINT)\n//Reset MotionWarping Variables\n" },
#endif
		{ "DisplayName", "Reset Values" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function Library - PUBLIC (CAN BE EXECUTED BY BLUEPRINT)\nReset MotionWarping Variables" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "ResetValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execResetValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetValues();
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function ResetValues

// Begin Class UJacobMotionWarpingComponent Function SetMotionWarpingTarget
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics
{
	struct JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms
	{
		FName WarpTargetName;
		AActor* TargetActor;
		FVector ConstantOffset;
		FRotator ConstRotOffset;
		bool ExcludeRootMotion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PL: \n// Ustaw punkt relacji pomiedzy MotionWarping a TargetActor. Za ka\xef\xbf\xbd""dym razem kiedy b\xef\xbf\xbd""dzie u\xef\xbf\xbdywany MotionWarping, zostanie pobrana aktualna \n// pozycja TargetActor, aby skorygowa\xef\xbf\xbd ruch. Dodanie 'Const Offset' spowoduje przesuniecie pozycji Akora o ten wektor. Opcja 'Exclude \n// Root Motion' daje rezultat tylko wtedy gdy nasz Aktor odgrywa Animacj\xef\xbf\xbd z wyodr\xef\xbf\xbd""bnionym RootMotion, kt\xef\xbf\xbdry zosta\xef\xbf\xbd zapisany jako Anim Curve. \n// W\xef\xbf\xbd\xef\xbf\xbd""czenie tego spowoduj\xef\xbf\xbd usuni\xef\xbf\xbd""cie przesuniecia RootMotion z aktualniej pozycji Aktora.\n//\n// ENG:\n// Set a relationship point between MotionWarping and TargetActor. Each time MotionWarping is used, the current TargetActor position will \n// be retrieved to correct for motion. Adding 'Const Offset' will move the Actor's position by this vector. The 'Exclude Root Motion' option \n// only works when our Actor plays an Animation with the extracted RootMotion, which has been saved as Anim Curve. Enabling this will remove \n// the RootMotion shift from the current position of the Actor.\n" },
#endif
		{ "DisplayName", "Set Motion Warping Target" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PL:\nUstaw punkt relacji pomiedzy MotionWarping a TargetActor. Za ka\xef\xbf\xbd""dym razem kiedy b\xef\xbf\xbd""dzie u\xef\xbf\xbdywany MotionWarping, zostanie pobrana aktualna\npozycja TargetActor, aby skorygowa\xef\xbf\xbd ruch. Dodanie 'Const Offset' spowoduje przesuniecie pozycji Akora o ten wektor. Opcja 'Exclude\nRoot Motion' daje rezultat tylko wtedy gdy nasz Aktor odgrywa Animacj\xef\xbf\xbd z wyodr\xef\xbf\xbd""bnionym RootMotion, kt\xef\xbf\xbdry zosta\xef\xbf\xbd zapisany jako Anim Curve.\nW\xef\xbf\xbd\xef\xbf\xbd""czenie tego spowoduj\xef\xbf\xbd usuni\xef\xbf\xbd""cie przesuniecia RootMotion z aktualniej pozycji Aktora.\n\nENG:\nSet a relationship point between MotionWarping and TargetActor. Each time MotionWarping is used, the current TargetActor position will\nbe retrieved to correct for motion. Adding 'Const Offset' will move the Actor's position by this vector. The 'Exclude Root Motion' option\nonly works when our Actor plays an Animation with the extracted RootMotion, which has been saved as Anim Curve. Enabling this will remove\nthe RootMotion shift from the current position of the Actor." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstRotOffset;
	static void NewProp_ExcludeRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeRootMotion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstantOffset = { "ConstantOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, ConstantOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstRotOffset = { "ConstRotOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, ConstRotOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms*)Obj)->ExcludeRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion = { "ExcludeRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstantOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstRotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "SetMotionWarpingTarget", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execSetMotionWarpingTarget)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FVector,Z_Param_ConstantOffset);
	P_GET_STRUCT(FRotator,Z_Param_ConstRotOffset);
	P_GET_UBOOL(Z_Param_ExcludeRootMotion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMotionWarpingTarget(Z_Param_WarpTargetName,Z_Param_TargetActor,Z_Param_ConstantOffset,Z_Param_ConstRotOffset,Z_Param_ExcludeRootMotion);
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function SetMotionWarpingTarget

// Begin Class UJacobMotionWarpingComponent Function StopUpdatingWarpPoint
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics
{
	struct JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms
	{
		bool StopUpdating;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_StopUpdating", "true" },
		{ "DisplayName", "Stop Updating Warp Point" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_StopUpdating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopUpdating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms*)Obj)->StopUpdating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating = { "StopUpdating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "StopUpdatingWarpPoint", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execStopUpdatingWarpPoint)
{
	P_GET_UBOOL(Z_Param_StopUpdating);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopUpdatingWarpPoint(Z_Param_StopUpdating);
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function StopUpdatingWarpPoint

// Begin Class UJacobMotionWarpingComponent Function TimelineBlendIn
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics
{
	struct JacobMotionWarpingComponent_eventTimelineBlendIn_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Duration", "0.200000" },
		{ "DisplayName", "Timeline Blend In" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventTimelineBlendIn_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "TimelineBlendIn", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::JacobMotionWarpingComponent_eventTimelineBlendIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::JacobMotionWarpingComponent_eventTimelineBlendIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execTimelineBlendIn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineBlendIn(Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function TimelineBlendIn

// Begin Class UJacobMotionWarpingComponent Function WarpingUpdate
struct Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics
{
	struct JacobMotionWarpingComponent_eventWarpingUpdate_Parms
	{
		FName X;
		FName Y;
		FName Z;
		FName R;
		bool UseUpAxis;
		bool WithSweep;
		bool WarpRotation;
		float StrengthAlpha;
		FName ConstAlphaCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main Function - Executed By AnimNotify PerFrame\n" },
#endif
		{ "CPP_Default_ConstAlphaCurve", "ss" },
		{ "CPP_Default_R", "Root" },
		{ "CPP_Default_StrengthAlpha", "1.000000" },
		{ "CPP_Default_UseUpAxis", "false" },
		{ "CPP_Default_WarpRotation", "true" },
		{ "CPP_Default_WithSweep", "true" },
		{ "CPP_Default_X", "Root" },
		{ "CPP_Default_Y", "Root" },
		{ "CPP_Default_Z", "Root" },
		{ "DisplayName", "Warping Update" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Function - Executed By AnimNotify PerFrame" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_X;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Y;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Z;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R;
	static void NewProp_UseUpAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUpAxis;
	static void NewProp_WithSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WithSweep;
	static void NewProp_WarpRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WarpRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrengthAlpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConstAlphaCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, R), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventWarpingUpdate_Parms*)Obj)->UseUpAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis = { "UseUpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventWarpingUpdate_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventWarpingUpdate_Parms*)Obj)->WithSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep = { "WithSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventWarpingUpdate_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation_SetBit(void* Obj)
{
	((JacobMotionWarpingComponent_eventWarpingUpdate_Parms*)Obj)->WarpRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation = { "WarpRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventWarpingUpdate_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_StrengthAlpha = { "StrengthAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, StrengthAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_ConstAlphaCurve = { "ConstAlphaCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, ConstAlphaCurve), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_StrengthAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_ConstAlphaCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "WarpingUpdate", nullptr, nullptr, Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::JacobMotionWarpingComponent_eventWarpingUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::JacobMotionWarpingComponent_eventWarpingUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJacobMotionWarpingComponent::execWarpingUpdate)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_X);
	P_GET_PROPERTY(FNameProperty,Z_Param_Y);
	P_GET_PROPERTY(FNameProperty,Z_Param_Z);
	P_GET_PROPERTY(FNameProperty,Z_Param_R);
	P_GET_UBOOL(Z_Param_UseUpAxis);
	P_GET_UBOOL(Z_Param_WithSweep);
	P_GET_UBOOL(Z_Param_WarpRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StrengthAlpha);
	P_GET_PROPERTY(FNameProperty,Z_Param_ConstAlphaCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WarpingUpdate(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_R,Z_Param_UseUpAxis,Z_Param_WithSweep,Z_Param_WarpRotation,Z_Param_StrengthAlpha,Z_Param_ConstAlphaCurve);
	P_NATIVE_END;
}
// End Class UJacobMotionWarpingComponent Function WarpingUpdate

// Begin Class UJacobMotionWarpingComponent
void UJacobMotionWarpingComponent::StaticRegisterNativesUJacobMotionWarpingComponent()
{
	UClass* Class = UJacobMotionWarpingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOriginPosition", &UJacobMotionWarpingComponent::execGetOriginPosition },
		{ "GetTargetAxis", &UJacobMotionWarpingComponent::execGetTargetAxis },
		{ "PredictedSingleMotionPosition", &UJacobMotionWarpingComponent::execPredictedSingleMotionPosition },
		{ "PredictedSingleMotionPositionAuto", &UJacobMotionWarpingComponent::execPredictedSingleMotionPositionAuto },
		{ "ResetValues", &UJacobMotionWarpingComponent::execResetValues },
		{ "SetMotionWarpingTarget", &UJacobMotionWarpingComponent::execSetMotionWarpingTarget },
		{ "StopUpdatingWarpPoint", &UJacobMotionWarpingComponent::execStopUpdatingWarpPoint },
		{ "TimelineBlendIn", &UJacobMotionWarpingComponent::execTimelineBlendIn },
		{ "WarpingUpdate", &UJacobMotionWarpingComponent::execWarpingUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJacobMotionWarpingComponent);
UClass* Z_Construct_UClass_UJacobMotionWarpingComponent_NoRegister()
{
	return UJacobMotionWarpingComponent::StaticClass();
}
struct Z_Construct_UClass_UJacobMotionWarpingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JacobMotionWarpingComponent.h" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create Base Variables\n//References (Public)\n" },
#endif
		{ "DisplayName", "Character" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create Base Variables\nReferences (Public)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpingTarget_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "WarpingTarget" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DevMode_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Config Variables (Public)\n" },
#endif
		{ "DisplayName", "DevMode" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config Variables (Public)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockWarpingActor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "LockWapringActor" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeRootMotionV_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "ExcludeRootMotion" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaOffset_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "DeltaOffset" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorLocation_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "TargetActorLocation" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingDuration_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables (Not Visible Via Blueprint)\n" },
#endif
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables (Not Visible Via Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaByTimeline_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstOffset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//VECTOR\n" },
#endif
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VECTOR" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedRootValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//VECTOR\n" },
#endif
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VECTOR" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedWarpActorRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvesName_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorLocationLS_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WarpingTarget;
	static void NewProp_DevMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DevMode;
	static void NewProp_LockWarpingActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockWarpingActor;
	static void NewProp_ExcludeRootMotionV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeRootMotionV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendingDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaByTimeline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedRootValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedWarpActorRot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurvesName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvesName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorLocationLS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition, "GetOriginPosition" }, // 992137530
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis, "GetTargetAxis" }, // 669080197
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition, "PredictedSingleMotionPosition" }, // 744835050
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto, "PredictedSingleMotionPositionAuto" }, // 1030223632
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues, "ResetValues" }, // 2296146367
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget, "SetMotionWarpingTarget" }, // 2492834158
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint, "StopUpdatingWarpPoint" }, // 4249430268
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn, "TimelineBlendIn" }, // 2170441964
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate, "WarpingUpdate" }, // 2588146566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJacobMotionWarpingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterC_MetaData), NewProp_CharacterC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpingTarget = { "WarpingTarget", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, WarpingTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpingTarget_MetaData), NewProp_WarpingTarget_MetaData) };
void Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode_SetBit(void* Obj)
{
	((UJacobMotionWarpingComponent*)Obj)->DevMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode = { "DevMode", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJacobMotionWarpingComponent), &Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DevMode_MetaData), NewProp_DevMode_MetaData) };
void Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor_SetBit(void* Obj)
{
	((UJacobMotionWarpingComponent*)Obj)->LockWarpingActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor = { "LockWarpingActor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJacobMotionWarpingComponent), &Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockWarpingActor_MetaData), NewProp_LockWarpingActor_MetaData) };
void Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV_SetBit(void* Obj)
{
	((UJacobMotionWarpingComponent*)Obj)->ExcludeRootMotionV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV = { "ExcludeRootMotionV", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJacobMotionWarpingComponent), &Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeRootMotionV_MetaData), NewProp_ExcludeRootMotionV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DeltaOffset = { "DeltaOffset", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, DeltaOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaOffset_MetaData), NewProp_DeltaOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocation = { "TargetActorLocation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, TargetActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorLocation_MetaData), NewProp_TargetActorLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_BlendingDuration = { "BlendingDuration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, BlendingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingDuration_MetaData), NewProp_BlendingDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_AlphaByTimeline = { "AlphaByTimeline", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, AlphaByTimeline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaByTimeline_MetaData), NewProp_AlphaByTimeline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ConstOffset = { "ConstOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, ConstOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstOffset_MetaData), NewProp_ConstOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludedRootValue = { "ExcludedRootValue", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, ExcludedRootValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedRootValue_MetaData), NewProp_ExcludedRootValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_SavedWarpActorRot = { "SavedWarpActorRot", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, SavedWarpActorRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedWarpActorRot_MetaData), NewProp_SavedWarpActorRot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName_Inner = { "CurvesName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName = { "CurvesName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, CurvesName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvesName_MetaData), NewProp_CurvesName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys_Inner = { "WarpKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys = { "WarpKeys", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, WarpKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpKeys_MetaData), NewProp_WarpKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocationLS = { "TargetActorLocationLS", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, TargetActorLocationLS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorLocationLS_MetaData), NewProp_TargetActorLocationLS_MetaData) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_FloorComponent = { "FloorComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJacobMotionWarpingComponent, FloorComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorComponent_MetaData), NewProp_FloorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CharacterC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpingTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DeltaOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_BlendingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_AlphaByTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ConstOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludedRootValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_SavedWarpActorRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocationLS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_FloorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::ClassParams = {
	&UJacobMotionWarpingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJacobMotionWarpingComponent()
{
	if (!Z_Registration_Info_UClass_UJacobMotionWarpingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJacobMotionWarpingComponent.OuterSingleton, Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJacobMotionWarpingComponent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UJacobMotionWarpingComponent>()
{
	return UJacobMotionWarpingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJacobMotionWarpingComponent);
UJacobMotionWarpingComponent::~UJacobMotionWarpingComponent() {}
// End Class UJacobMotionWarpingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJacobMotionWarpingComponent, UJacobMotionWarpingComponent::StaticClass, TEXT("UJacobMotionWarpingComponent"), &Z_Registration_Info_UClass_UJacobMotionWarpingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJacobMotionWarpingComponent), 637817715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_27407784(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/AdvancedAI_TasksAndFunctions.h"
#include "ClimbingNavigation/Public/ClimbingNavigationBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedAI_TasksAndFunctions() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAdvancedAI_TasksAndFunctions();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UHidingLocSearch_EnemyProperties_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_FullNavPathFinding_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_FullPathData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UAdvancedAI_TasksAndFunctions Function DetectedByFakeSightPerception
struct Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics
{
	struct AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms
	{
		FVector TracingOrigin;
		UNavQuery_HidingLocSearchParams* QueryParamsData;
		TSubclassOf<UHidingLocSearch_EnemyProperties> CustomOverrideData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CustomOverrideData" },
		{ "Category", "Navigation" },
		{ "DisplayName", "Detected By Fake Sight Perception" },
		{ "Keywords", "Navigation,Hiding" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TracingOrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryParamsData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomOverrideData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_TracingOrigin = { "TracingOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms, TracingOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_QueryParamsData = { "QueryParamsData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms, QueryParamsData), Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_CustomOverrideData = { "CustomOverrideData", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms, CustomOverrideData), Z_Construct_UClass_UClass, Z_Construct_UClass_UHidingLocSearch_EnemyProperties_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms), &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_TracingOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_QueryParamsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_CustomOverrideData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedAI_TasksAndFunctions, nullptr, "DetectedByFakeSightPerception", nullptr, nullptr, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::AdvancedAI_TasksAndFunctions_eventDetectedByFakeSightPerception_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedAI_TasksAndFunctions::execDetectedByFakeSightPerception)
{
	P_GET_STRUCT(FVector,Z_Param_TracingOrigin);
	P_GET_OBJECT(UNavQuery_HidingLocSearchParams,Z_Param_QueryParamsData);
	P_GET_OBJECT(UClass,Z_Param_CustomOverrideData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DetectedByFakeSightPerception(Z_Param_TracingOrigin,Z_Param_QueryParamsData,Z_Param_CustomOverrideData);
	P_NATIVE_END;
}
// End Class UAdvancedAI_TasksAndFunctions Function DetectedByFakeSightPerception

// Begin Class UAdvancedAI_TasksAndFunctions Function DrawResultFromTotalNavPath
struct Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics
{
	struct AdvancedAI_TasksAndFunctions_eventDrawResultFromTotalNavPath_Parms
	{
		FClimbNav_FullPathData QueryResult;
		float DebugTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "DisplayName", "Draw Result From Total Nav Path" },
		{ "Keywords", "Navigation,Climbing,Path,Finding" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::NewProp_QueryResult = { "QueryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventDrawResultFromTotalNavPath_Parms, QueryResult), Z_Construct_UScriptStruct_FClimbNav_FullPathData, METADATA_PARAMS(0, nullptr) }; // 2644152116
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventDrawResultFromTotalNavPath_Parms, DebugTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::NewProp_QueryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::NewProp_DebugTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedAI_TasksAndFunctions, nullptr, "DrawResultFromTotalNavPath", nullptr, nullptr, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::AdvancedAI_TasksAndFunctions_eventDrawResultFromTotalNavPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::AdvancedAI_TasksAndFunctions_eventDrawResultFromTotalNavPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedAI_TasksAndFunctions::execDrawResultFromTotalNavPath)
{
	P_GET_STRUCT(FClimbNav_FullPathData,Z_Param_QueryResult);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawResultFromTotalNavPath(Z_Param_QueryResult,Z_Param_DebugTime);
	P_NATIVE_END;
}
// End Class UAdvancedAI_TasksAndFunctions Function DrawResultFromTotalNavPath

// Begin Class UAdvancedAI_TasksAndFunctions Function TryFindHindingPositionSync
struct Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics
{
	struct AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms
	{
		bool Succesful;
		FTransform ChoosedTransform;
		float PathLenght;
		FVector TracingOrigin;
		UNavQuery_HidingLocSearchParams* QueryParamsData;
		TSubclassOf<UHidingLocSearch_EnemyProperties> CustomOverrideData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CustomOverrideData" },
		{ "Category", "Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*A complex function designed to determine the best position the AI \xe2\x80\x8b\xe2\x80\x8bshould reach for in order to stay out of sight of nearby enemies.*/" },
#endif
		{ "DisplayName", "Try Find Hinding Position Sync" },
		{ "Keywords", "Navigation,Hiding" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A complex function designed to determine the best position the AI \xe2\x80\x8b\xe2\x80\x8bshould reach for in order to stay out of sight of nearby enemies." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Succesful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succesful;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoosedTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PathLenght;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TracingOrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryParamsData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_Succesful_SetBit(void* Obj)
{
	((AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms*)Obj)->Succesful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_Succesful = { "Succesful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms), &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_Succesful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_ChoosedTransform = { "ChoosedTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms, ChoosedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_PathLenght = { "PathLenght", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms, PathLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_TracingOrigin = { "TracingOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms, TracingOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_QueryParamsData = { "QueryParamsData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms, QueryParamsData), Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_CustomOverrideData = { "CustomOverrideData", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms, CustomOverrideData), Z_Construct_UClass_UClass, Z_Construct_UClass_UHidingLocSearch_EnemyProperties_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_Succesful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_ChoosedTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_PathLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_TracingOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_QueryParamsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::NewProp_CustomOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedAI_TasksAndFunctions, nullptr, "TryFindHindingPositionSync", nullptr, nullptr, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::AdvancedAI_TasksAndFunctions_eventTryFindHindingPositionSync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedAI_TasksAndFunctions::execTryFindHindingPositionSync)
{
	P_GET_UBOOL_REF(Z_Param_Out_Succesful);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ChoosedTransform);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PathLenght);
	P_GET_STRUCT(FVector,Z_Param_TracingOrigin);
	P_GET_OBJECT(UNavQuery_HidingLocSearchParams,Z_Param_QueryParamsData);
	P_GET_OBJECT(UClass,Z_Param_CustomOverrideData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryFindHindingPositionSync(Z_Param_Out_Succesful,Z_Param_Out_ChoosedTransform,Z_Param_Out_PathLenght,Z_Param_TracingOrigin,Z_Param_QueryParamsData,Z_Param_CustomOverrideData);
	P_NATIVE_END;
}
// End Class UAdvancedAI_TasksAndFunctions Function TryFindHindingPositionSync

// Begin Class UAdvancedAI_TasksAndFunctions Function TryFindPathToActorIncludingNavClimb
struct Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics
{
	struct AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms
	{
		bool Succesful;
		FClimbNav_FullPathData QueryResult;
		AActor* StartActor;
		AActor* ActorToReach;
		AClimbNavigationStorageActor* CurrentClimbNav;
		bool bStartActorIsClimb;
		bool bEndActorIsClimb;
		UNavQuery_FullNavPathFinding* QueryParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Function that allows to determine the path to reach the object (ActorToReach) including data related to NavClimbing. For correct operation, data is required \n\x09informing whether the characters are in climbing mode. These parameters are specified manually. The function is certainly not able to predict all possible cases. \n\x09The maximum number of navigation objects analyzed AClimbNavigationStorageActor can be two.*/" },
#endif
		{ "DisplayName", "Try Find Path To Actor Including Nav Climb" },
		{ "Keywords", "Navigation,Climbing,Path,Finding" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that allows to determine the path to reach the object (ActorToReach) including data related to NavClimbing. For correct operation, data is required\n       informing whether the characters are in climbing mode. These parameters are specified manually. The function is certainly not able to predict all possible cases.\n       The maximum number of navigation objects analyzed AClimbNavigationStorageActor can be two." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Succesful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succesful;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToReach;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentClimbNav;
	static void NewProp_bStartActorIsClimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartActorIsClimb;
	static void NewProp_bEndActorIsClimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndActorIsClimb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_Succesful_SetBit(void* Obj)
{
	((AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms*)Obj)->Succesful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_Succesful = { "Succesful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms), &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_Succesful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_QueryResult = { "QueryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms, QueryResult), Z_Construct_UScriptStruct_FClimbNav_FullPathData, METADATA_PARAMS(0, nullptr) }; // 2644152116
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_StartActor = { "StartActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms, StartActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_ActorToReach = { "ActorToReach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms, ActorToReach), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_CurrentClimbNav = { "CurrentClimbNav", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms, CurrentClimbNav), Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bStartActorIsClimb_SetBit(void* Obj)
{
	((AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms*)Obj)->bStartActorIsClimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bStartActorIsClimb = { "bStartActorIsClimb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms), &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bStartActorIsClimb_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bEndActorIsClimb_SetBit(void* Obj)
{
	((AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms*)Obj)->bEndActorIsClimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bEndActorIsClimb = { "bEndActorIsClimb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms), &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bEndActorIsClimb_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms, QueryParams), Z_Construct_UClass_UNavQuery_FullNavPathFinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_Succesful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_QueryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_StartActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_ActorToReach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_CurrentClimbNav,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bStartActorIsClimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_bEndActorIsClimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::NewProp_QueryParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedAI_TasksAndFunctions, nullptr, "TryFindPathToActorIncludingNavClimb", nullptr, nullptr, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::AdvancedAI_TasksAndFunctions_eventTryFindPathToActorIncludingNavClimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedAI_TasksAndFunctions::execTryFindPathToActorIncludingNavClimb)
{
	P_GET_UBOOL_REF(Z_Param_Out_Succesful);
	P_GET_STRUCT_REF(FClimbNav_FullPathData,Z_Param_Out_QueryResult);
	P_GET_OBJECT(AActor,Z_Param_StartActor);
	P_GET_OBJECT(AActor,Z_Param_ActorToReach);
	P_GET_OBJECT(AClimbNavigationStorageActor,Z_Param_CurrentClimbNav);
	P_GET_UBOOL(Z_Param_bStartActorIsClimb);
	P_GET_UBOOL(Z_Param_bEndActorIsClimb);
	P_GET_OBJECT(UNavQuery_FullNavPathFinding,Z_Param_QueryParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryFindPathToActorIncludingNavClimb(Z_Param_Out_Succesful,Z_Param_Out_QueryResult,Z_Param_StartActor,Z_Param_ActorToReach,Z_Param_CurrentClimbNav,Z_Param_bStartActorIsClimb,Z_Param_bEndActorIsClimb,Z_Param_QueryParams);
	P_NATIVE_END;
}
// End Class UAdvancedAI_TasksAndFunctions Function TryFindPathToActorIncludingNavClimb

// Begin Class UAdvancedAI_TasksAndFunctions
void UAdvancedAI_TasksAndFunctions::StaticRegisterNativesUAdvancedAI_TasksAndFunctions()
{
	UClass* Class = UAdvancedAI_TasksAndFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectedByFakeSightPerception", &UAdvancedAI_TasksAndFunctions::execDetectedByFakeSightPerception },
		{ "DrawResultFromTotalNavPath", &UAdvancedAI_TasksAndFunctions::execDrawResultFromTotalNavPath },
		{ "TryFindHindingPositionSync", &UAdvancedAI_TasksAndFunctions::execTryFindHindingPositionSync },
		{ "TryFindPathToActorIncludingNavClimb", &UAdvancedAI_TasksAndFunctions::execTryFindPathToActorIncludingNavClimb },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedAI_TasksAndFunctions);
UClass* Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_NoRegister()
{
	return UAdvancedAI_TasksAndFunctions::StaticClass();
}
struct Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "AdvancedAI_TasksAndFunctions.h" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSightHalfAngle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Default Sight Params" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSightRadius_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Default Sight Params" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSightHeight_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Default Sight Params" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTraces_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debuging" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugPointInfo_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debuging" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugPathInfo_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debuging" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugSightRange_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debuging" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDuration_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debuging" },
		{ "ModuleRelativePath", "Public/AdvancedAI_TasksAndFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSightHalfAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSightHeight;
	static void NewProp_bDrawDebugTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTraces;
	static void NewProp_bDrawDebugPointInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugPointInfo;
	static void NewProp_bDrawDebugPathInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugPathInfo;
	static void NewProp_bDrawDebugSightRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugSightRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DetectedByFakeSightPerception, "DetectedByFakeSightPerception" }, // 4139703160
		{ &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_DrawResultFromTotalNavPath, "DrawResultFromTotalNavPath" }, // 3132804174
		{ &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindHindingPositionSync, "TryFindHindingPositionSync" }, // 1420303284
		{ &Z_Construct_UFunction_UAdvancedAI_TasksAndFunctions_TryFindPathToActorIncludingNavClimb, "TryFindPathToActorIncludingNavClimb" }, // 2188956099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedAI_TasksAndFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DefaultSightHalfAngle = { "DefaultSightHalfAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedAI_TasksAndFunctions, DefaultSightHalfAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSightHalfAngle_MetaData), NewProp_DefaultSightHalfAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DefaultSightRadius = { "DefaultSightRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedAI_TasksAndFunctions, DefaultSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSightRadius_MetaData), NewProp_DefaultSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DefaultSightHeight = { "DefaultSightHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedAI_TasksAndFunctions, DefaultSightHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSightHeight_MetaData), NewProp_DefaultSightHeight_MetaData) };
void Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugTraces_SetBit(void* Obj)
{
	((UAdvancedAI_TasksAndFunctions*)Obj)->bDrawDebugTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugTraces = { "bDrawDebugTraces", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedAI_TasksAndFunctions), &Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugTraces_MetaData), NewProp_bDrawDebugTraces_MetaData) };
void Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPointInfo_SetBit(void* Obj)
{
	((UAdvancedAI_TasksAndFunctions*)Obj)->bDrawDebugPointInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPointInfo = { "bDrawDebugPointInfo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedAI_TasksAndFunctions), &Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPointInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugPointInfo_MetaData), NewProp_bDrawDebugPointInfo_MetaData) };
void Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPathInfo_SetBit(void* Obj)
{
	((UAdvancedAI_TasksAndFunctions*)Obj)->bDrawDebugPathInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPathInfo = { "bDrawDebugPathInfo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedAI_TasksAndFunctions), &Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPathInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugPathInfo_MetaData), NewProp_bDrawDebugPathInfo_MetaData) };
void Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugSightRange_SetBit(void* Obj)
{
	((UAdvancedAI_TasksAndFunctions*)Obj)->bDrawDebugSightRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugSightRange = { "bDrawDebugSightRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedAI_TasksAndFunctions), &Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugSightRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugSightRange_MetaData), NewProp_bDrawDebugSightRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DebugDuration = { "DebugDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedAI_TasksAndFunctions, DebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDuration_MetaData), NewProp_DebugDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DefaultSightHalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DefaultSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DefaultSightHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPointInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugPathInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_bDrawDebugSightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::NewProp_DebugDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::ClassParams = {
	&UAdvancedAI_TasksAndFunctions::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdvancedAI_TasksAndFunctions()
{
	if (!Z_Registration_Info_UClass_UAdvancedAI_TasksAndFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedAI_TasksAndFunctions.OuterSingleton, Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdvancedAI_TasksAndFunctions.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UAdvancedAI_TasksAndFunctions>()
{
	return UAdvancedAI_TasksAndFunctions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedAI_TasksAndFunctions);
UAdvancedAI_TasksAndFunctions::~UAdvancedAI_TasksAndFunctions() {}
// End Class UAdvancedAI_TasksAndFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedAI_TasksAndFunctions, UAdvancedAI_TasksAndFunctions::StaticClass, TEXT("UAdvancedAI_TasksAndFunctions"), &Z_Registration_Info_UClass_UAdvancedAI_TasksAndFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedAI_TasksAndFunctions), 3017021456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_2844997960(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

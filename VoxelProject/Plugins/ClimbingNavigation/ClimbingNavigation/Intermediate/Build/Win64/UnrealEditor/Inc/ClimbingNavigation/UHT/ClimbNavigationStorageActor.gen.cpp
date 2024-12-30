// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/ClimbNavigationStorageActor.h"
#include "ClimbingNavigation/Public/ClimbingNavigationBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbNavigationStorageActor() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_AClimbNavigationStorageActor();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class AClimbNavigationStorageActor Function FindNearestNavLedge
struct Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics
{
	struct ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms
	{
		int32 ReturnIndex;
		float ReturnDistance;
		FClimbNav_SingleClimbPoint ReturnLedgeParams;
		FVector InLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb Nav Core" },
		{ "DisplayName", "Find Nearest Nav Ledge" },
		{ "Keywords", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLedgeParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnIndex = { "ReturnIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms, ReturnIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnDistance = { "ReturnDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms, ReturnDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnLedgeParams = { "ReturnLedgeParams", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms, ReturnLedgeParams), Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms), &Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnLedgeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClimbNavigationStorageActor, nullptr, "FindNearestNavLedge", nullptr, nullptr, Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::ClimbNavigationStorageActor_eventFindNearestNavLedge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClimbNavigationStorageActor::execFindNearestNavLedge)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ReturnIndex);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnDistance);
	P_GET_STRUCT_REF(FClimbNav_SingleClimbPoint,Z_Param_Out_ReturnLedgeParams);
	P_GET_STRUCT(FVector,Z_Param_InLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindNearestNavLedge(Z_Param_Out_ReturnIndex,Z_Param_Out_ReturnDistance,Z_Param_Out_ReturnLedgeParams,Z_Param_InLocation);
	P_NATIVE_END;
}
// End Class AClimbNavigationStorageActor Function FindNearestNavLedge

// Begin Class AClimbNavigationStorageActor Function FindPathBetweenClimbPoints
struct Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics
{
	struct ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms
	{
		bool Succesful;
		float TotalLenght;
		TArray<FClimbNav_SingleClimbPoint> PathPoints;
		FVector StartLocation;
		FVector EndLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb Nav Core" },
		{ "DisplayName", "Find Path Between Two Climb Points" },
		{ "Keywords", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Succesful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succesful;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalLenght;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_Succesful_SetBit(void* Obj)
{
	((ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms*)Obj)->Succesful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_Succesful = { "Succesful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms), &Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_Succesful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_TotalLenght = { "TotalLenght", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms, TotalLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_Succesful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_TotalLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::NewProp_EndLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClimbNavigationStorageActor, nullptr, "FindPathBetweenClimbPoints", nullptr, nullptr, Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::ClimbNavigationStorageActor_eventFindPathBetweenClimbPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClimbNavigationStorageActor::execFindPathBetweenClimbPoints)
{
	P_GET_UBOOL_REF(Z_Param_Out_Succesful);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TotalLenght);
	P_GET_TARRAY_REF(FClimbNav_SingleClimbPoint,Z_Param_Out_PathPoints);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_EndLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindPathBetweenClimbPoints(Z_Param_Out_Succesful,Z_Param_Out_TotalLenght,Z_Param_Out_PathPoints,Z_Param_StartLocation,Z_Param_EndLocation);
	P_NATIVE_END;
}
// End Class AClimbNavigationStorageActor Function FindPathBetweenClimbPoints

// Begin Class AClimbNavigationStorageActor Function GetLastBuildedPath
struct Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics
{
	struct ClimbNavigationStorageActor_eventGetLastBuildedPath_Parms
	{
		TArray<FClimbNav_SingleClimbPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb Nav Core" },
		{ "DisplayName", "Get Last Builded Path" },
		{ "Keywords", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbNavigationStorageActor_eventGetLastBuildedPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClimbNavigationStorageActor, nullptr, "GetLastBuildedPath", nullptr, nullptr, Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::ClimbNavigationStorageActor_eventGetLastBuildedPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::ClimbNavigationStorageActor_eventGetLastBuildedPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClimbNavigationStorageActor::execGetLastBuildedPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FClimbNav_SingleClimbPoint>*)Z_Param__Result=P_THIS->GetLastBuildedPath();
	P_NATIVE_END;
}
// End Class AClimbNavigationStorageActor Function GetLastBuildedPath

// Begin Class AClimbNavigationStorageActor
void AClimbNavigationStorageActor::StaticRegisterNativesAClimbNavigationStorageActor()
{
	UClass* Class = AClimbNavigationStorageActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindNearestNavLedge", &AClimbNavigationStorageActor::execFindNearestNavLedge },
		{ "FindPathBetweenClimbPoints", &AClimbNavigationStorageActor::execFindPathBetweenClimbPoints },
		{ "GetLastBuildedPath", &AClimbNavigationStorageActor::execGetLastBuildedPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClimbNavigationStorageActor);
UClass* Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister()
{
	return AClimbNavigationStorageActor::StaticClass();
}
struct Z_Construct_UClass_AClimbNavigationStorageActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ClimbNavigationStorageActor.h" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationCompleteMap_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Climb Nav Data" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckCollisionWhenPathFinding_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Nav Generation Config" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferLowerAltitudesWeight_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Nav Generation Config" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SameAnglePreferenceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Nav Generation Config" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ClimbNavigationStorageActor.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationCompleteMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NavigationCompleteMap;
	static void NewProp_CheckCollisionWhenPathFinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckCollisionWhenPathFinding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferLowerAltitudesWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SameAnglePreferenceWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AClimbNavigationStorageActor_FindNearestNavLedge, "FindNearestNavLedge" }, // 3379853834
		{ &Z_Construct_UFunction_AClimbNavigationStorageActor_FindPathBetweenClimbPoints, "FindPathBetweenClimbPoints" }, // 2043916331
		{ &Z_Construct_UFunction_AClimbNavigationStorageActor_GetLastBuildedPath, "GetLastBuildedPath" }, // 1150826043
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClimbNavigationStorageActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_NavigationCompleteMap_Inner = { "NavigationCompleteMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_NavigationCompleteMap = { "NavigationCompleteMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbNavigationStorageActor, NavigationCompleteMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationCompleteMap_MetaData), NewProp_NavigationCompleteMap_MetaData) }; // 3422689466
void Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_CheckCollisionWhenPathFinding_SetBit(void* Obj)
{
	((AClimbNavigationStorageActor*)Obj)->CheckCollisionWhenPathFinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_CheckCollisionWhenPathFinding = { "CheckCollisionWhenPathFinding", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClimbNavigationStorageActor), &Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_CheckCollisionWhenPathFinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckCollisionWhenPathFinding_MetaData), NewProp_CheckCollisionWhenPathFinding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_PreferLowerAltitudesWeight = { "PreferLowerAltitudesWeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbNavigationStorageActor, PreferLowerAltitudesWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferLowerAltitudesWeight_MetaData), NewProp_PreferLowerAltitudesWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_SameAnglePreferenceWeight = { "SameAnglePreferenceWeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbNavigationStorageActor, SameAnglePreferenceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SameAnglePreferenceWeight_MetaData), NewProp_SameAnglePreferenceWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClimbNavigationStorageActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_NavigationCompleteMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_NavigationCompleteMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_CheckCollisionWhenPathFinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_PreferLowerAltitudesWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbNavigationStorageActor_Statics::NewProp_SameAnglePreferenceWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbNavigationStorageActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClimbNavigationStorageActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbNavigationStorageActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClimbNavigationStorageActor_Statics::ClassParams = {
	&AClimbNavigationStorageActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AClimbNavigationStorageActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AClimbNavigationStorageActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbNavigationStorageActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AClimbNavigationStorageActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClimbNavigationStorageActor()
{
	if (!Z_Registration_Info_UClass_AClimbNavigationStorageActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClimbNavigationStorageActor.OuterSingleton, Z_Construct_UClass_AClimbNavigationStorageActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClimbNavigationStorageActor.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<AClimbNavigationStorageActor>()
{
	return AClimbNavigationStorageActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClimbNavigationStorageActor);
AClimbNavigationStorageActor::~AClimbNavigationStorageActor() {}
// End Class AClimbNavigationStorageActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClimbNavigationStorageActor, AClimbNavigationStorageActor::StaticClass, TEXT("AClimbNavigationStorageActor"), &Z_Registration_Info_UClass_AClimbNavigationStorageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClimbNavigationStorageActor), 3308140024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_3278957839(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

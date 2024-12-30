// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/SmoothPathFollowingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmoothPathFollowingComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_USmoothPathFollowingComponent();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_USmoothPathFollowingComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class USmoothPathFollowingComponent Function CalculateTangentCircle
struct Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics
{
	struct SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms
	{
		FVector P1;
		FVector P2;
		FVector P3;
		float MaxRadius;
		FVector OutCenter;
		float OutRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Path Following Component" },
		{ "DisplayName", "Calculate Tangent Circle" },
		{ "Keywords", "Navigation,Path,Following,AI" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms, P1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1_MetaData), NewProp_P1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms, P2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2_MetaData), NewProp_P2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_P3 = { "P3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms, P3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P3_MetaData), NewProp_P3_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms, MaxRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_OutCenter = { "OutCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms, OutCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms, OutRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms), &Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_P1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_P2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_P3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_MaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_OutCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_OutRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothPathFollowingComponent, nullptr, "CalculateTangentCircle", nullptr, nullptr, Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::SmoothPathFollowingComponent_eventCalculateTangentCircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmoothPathFollowingComponent::execCalculateTangentCircle)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_P1);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_P2);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_P3);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRadius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCenter);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CalculateTangentCircle(Z_Param_Out_P1,Z_Param_Out_P2,Z_Param_Out_P3,Z_Param_MaxRadius,Z_Param_Out_OutCenter,Z_Param_Out_OutRadius);
	P_NATIVE_END;
}
// End Class USmoothPathFollowingComponent Function CalculateTangentCircle

// Begin Class USmoothPathFollowingComponent Function DisableRoundingPath
struct Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics
{
	struct SmoothPathFollowingComponent_eventDisableRoundingPath_Parms
	{
		bool UseRoundingPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Path Following Component" },
		{ "DisplayName", "Disable Rounding Path" },
		{ "Keywords", "Navigation,Path,Following,AI" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseRoundingPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseRoundingPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::NewProp_UseRoundingPath_SetBit(void* Obj)
{
	((SmoothPathFollowingComponent_eventDisableRoundingPath_Parms*)Obj)->UseRoundingPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::NewProp_UseRoundingPath = { "UseRoundingPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmoothPathFollowingComponent_eventDisableRoundingPath_Parms), &Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::NewProp_UseRoundingPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::NewProp_UseRoundingPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothPathFollowingComponent, nullptr, "DisableRoundingPath", nullptr, nullptr, Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::SmoothPathFollowingComponent_eventDisableRoundingPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::SmoothPathFollowingComponent_eventDisableRoundingPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmoothPathFollowingComponent::execDisableRoundingPath)
{
	P_GET_UBOOL(Z_Param_UseRoundingPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableRoundingPath(Z_Param_UseRoundingPath);
	P_NATIVE_END;
}
// End Class USmoothPathFollowingComponent Function DisableRoundingPath

// Begin Class USmoothPathFollowingComponent Function PauseCurrentMove
struct Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics
{
	struct SmoothPathFollowingComponent_eventPauseCurrentMove_Parms
	{
		bool ResetVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Path Following Component" },
		{ "CPP_Default_ResetVelocity", "false" },
		{ "DisplayName", "Pause Move" },
		{ "Keywords", "Navigation,Path,Following,AI" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ResetVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::NewProp_ResetVelocity_SetBit(void* Obj)
{
	((SmoothPathFollowingComponent_eventPauseCurrentMove_Parms*)Obj)->ResetVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::NewProp_ResetVelocity = { "ResetVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmoothPathFollowingComponent_eventPauseCurrentMove_Parms), &Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::NewProp_ResetVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::NewProp_ResetVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothPathFollowingComponent, nullptr, "PauseCurrentMove", nullptr, nullptr, Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::SmoothPathFollowingComponent_eventPauseCurrentMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::SmoothPathFollowingComponent_eventPauseCurrentMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmoothPathFollowingComponent::execPauseCurrentMove)
{
	P_GET_UBOOL(Z_Param_ResetVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseCurrentMove(Z_Param_ResetVelocity);
	P_NATIVE_END;
}
// End Class USmoothPathFollowingComponent Function PauseCurrentMove

// Begin Class USmoothPathFollowingComponent Function ResumePausedMove
struct Z_Construct_UFunction_USmoothPathFollowingComponent_ResumePausedMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Path Following Component" },
		{ "DisplayName", "Resume Move" },
		{ "Keywords", "Navigation,Path,Following,AI" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothPathFollowingComponent_ResumePausedMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothPathFollowingComponent, nullptr, "ResumePausedMove", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothPathFollowingComponent_ResumePausedMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmoothPathFollowingComponent_ResumePausedMove_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USmoothPathFollowingComponent_ResumePausedMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothPathFollowingComponent_ResumePausedMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmoothPathFollowingComponent::execResumePausedMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumePausedMove();
	P_NATIVE_END;
}
// End Class USmoothPathFollowingComponent Function ResumePausedMove

// Begin Class USmoothPathFollowingComponent
void USmoothPathFollowingComponent::StaticRegisterNativesUSmoothPathFollowingComponent()
{
	UClass* Class = USmoothPathFollowingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateTangentCircle", &USmoothPathFollowingComponent::execCalculateTangentCircle },
		{ "DisableRoundingPath", &USmoothPathFollowingComponent::execDisableRoundingPath },
		{ "PauseCurrentMove", &USmoothPathFollowingComponent::execPauseCurrentMove },
		{ "ResumePausedMove", &USmoothPathFollowingComponent::execResumePausedMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothPathFollowingComponent);
UClass* Z_Construct_UClass_USmoothPathFollowingComponent_NoRegister()
{
	return USmoothPathFollowingComponent::StaticClass();
}
struct Z_Construct_UClass_USmoothPathFollowingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SmoothPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundingRadiusScale_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
		{ "ClampMax", "0.980000" },
		{ "ClampMin", "0.050000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Specifies the scale of the maximum circle that can be attempted to be placed between two segments (circle tangent to straight lines). You should not set a value greater than 0.5 or less than 0.05.\n\n\x09TotalLength = (PrevPoint - CurrentPoint).Size() + (CurrentPoint - NextPoint).Size();\n\x09TargetMaxRadius = TotalLength * |RoundingRadiusScale|;\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the scale of the maximum circle that can be attempted to be placed between two segments (circle tangent to straight lines). You should not set a value greater than 0.5 or less than 0.05.\n\nTotalLength = (PrevPoint - CurrentPoint).Size() + (CurrentPoint - NextPoint).Size();\nTargetMaxRadius = TotalLength * |RoundingRadiusScale|;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathRoundingAccuracy_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The number of iterations determining the accuracy of adding additional points from the tangent circle. Can be set to 0. The value is not valid if 'DynamicRoundingAccuracy' is set to true */" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of iterations determining the accuracy of adding additional points from the tangent circle. Can be set to 0. The value is not valid if 'DynamicRoundingAccuracy' is set to true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicRoundingAccuracy_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* It allows you to dynamically determine how many additional points from the tangent circle should be added. */" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It allows you to dynamically determine how many additional points from the tangent circle should be added." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundingAccuracyDivider_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
		{ "EditCondition", "DynamicRoundingAccuracy" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceptableDistToNext_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If the distance between the previous point and the current point is greater than this value, or the distance between the current point and the next point is greater, rounding will not be applied.*/" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the distance between the previous point and the current point is greater than this value, or the distance between the current point and the next point is greater, rounding will not be applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngleTolleranceInRadians_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
		{ "ClampMax", "3.140000" },
		{ "ClampMin", "0.010000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specifies for which value of the angle between lines (PrevPoint, CurrentPoint), (CurrentPoint, NextPoint) rounding should not be applied. \n\x09   The PI value means that the angle condition does not affect whether rounding should be performed*/" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies for which value of the angle between lines (PrevPoint, CurrentPoint), (CurrentPoint, NextPoint) rounding should not be applied.\n         The PI value means that the angle condition does not affect whether rounding should be performed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceBetweenTangents_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "1.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min Distance Between Tangents For Circle\n" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min Distance Between Tangents For Circle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxRadiusWhenMoveToActor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//When AI is current performing moving to actor then scale rounding radius by this value. If equal 1.0 then this value is do nothing\n" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When AI is current performing moving to actor then scale rounding radius by this value. If equal 1.0 then this value is do nothing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHeightDifference_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Path Following Component" },
		{ "ClampMax", "200" },
		{ "ClampMin", "-1.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If this value is <= 0.0 then this condition is ignored\n" },
#endif
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this value is <= 0.0 then this condition is ignored" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugPath_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDisplayTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debug" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/SmoothPathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundingRadiusScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathRoundingAccuracy;
	static void NewProp_DynamicRoundingAccuracy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DynamicRoundingAccuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundingAccuracyDivider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAcceptableDistToNext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngleTolleranceInRadians;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceBetweenTangents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxRadiusWhenMoveToActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHeightDifference;
	static void NewProp_bDrawDebugPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDisplayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USmoothPathFollowingComponent_CalculateTangentCircle, "CalculateTangentCircle" }, // 3086501561
		{ &Z_Construct_UFunction_USmoothPathFollowingComponent_DisableRoundingPath, "DisableRoundingPath" }, // 1514025080
		{ &Z_Construct_UFunction_USmoothPathFollowingComponent_PauseCurrentMove, "PauseCurrentMove" }, // 1260585205
		{ &Z_Construct_UFunction_USmoothPathFollowingComponent_ResumePausedMove, "ResumePausedMove" }, // 2348330424
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothPathFollowingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_RoundingRadiusScale = { "RoundingRadiusScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, RoundingRadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundingRadiusScale_MetaData), NewProp_RoundingRadiusScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_PathRoundingAccuracy = { "PathRoundingAccuracy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, PathRoundingAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathRoundingAccuracy_MetaData), NewProp_PathRoundingAccuracy_MetaData) };
void Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_DynamicRoundingAccuracy_SetBit(void* Obj)
{
	((USmoothPathFollowingComponent*)Obj)->DynamicRoundingAccuracy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_DynamicRoundingAccuracy = { "DynamicRoundingAccuracy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmoothPathFollowingComponent), &Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_DynamicRoundingAccuracy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicRoundingAccuracy_MetaData), NewProp_DynamicRoundingAccuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_RoundingAccuracyDivider = { "RoundingAccuracyDivider", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, RoundingAccuracyDivider), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundingAccuracyDivider_MetaData), NewProp_RoundingAccuracyDivider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MaxAcceptableDistToNext = { "MaxAcceptableDistToNext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, MaxAcceptableDistToNext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAcceptableDistToNext_MetaData), NewProp_MaxAcceptableDistToNext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MinAngleTolleranceInRadians = { "MinAngleTolleranceInRadians", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, MinAngleTolleranceInRadians), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngleTolleranceInRadians_MetaData), NewProp_MinAngleTolleranceInRadians_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MinDistanceBetweenTangents = { "MinDistanceBetweenTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, MinDistanceBetweenTangents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceBetweenTangents_MetaData), NewProp_MinDistanceBetweenTangents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_ScaleMaxRadiusWhenMoveToActor = { "ScaleMaxRadiusWhenMoveToActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, ScaleMaxRadiusWhenMoveToActor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMaxRadiusWhenMoveToActor_MetaData), NewProp_ScaleMaxRadiusWhenMoveToActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MaximumHeightDifference = { "MaximumHeightDifference", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, MaximumHeightDifference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHeightDifference_MetaData), NewProp_MaximumHeightDifference_MetaData) };
void Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_bDrawDebugPath_SetBit(void* Obj)
{
	((USmoothPathFollowingComponent*)Obj)->bDrawDebugPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_bDrawDebugPath = { "bDrawDebugPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmoothPathFollowingComponent), &Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_bDrawDebugPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugPath_MetaData), NewProp_bDrawDebugPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_DebugDisplayTime = { "DebugDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothPathFollowingComponent, DebugDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDisplayTime_MetaData), NewProp_DebugDisplayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothPathFollowingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_RoundingRadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_PathRoundingAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_DynamicRoundingAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_RoundingAccuracyDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MaxAcceptableDistToNext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MinAngleTolleranceInRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MinDistanceBetweenTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_ScaleMaxRadiusWhenMoveToActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_MaximumHeightDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_bDrawDebugPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothPathFollowingComponent_Statics::NewProp_DebugDisplayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothPathFollowingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothPathFollowingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothPathFollowingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothPathFollowingComponent_Statics::ClassParams = {
	&USmoothPathFollowingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USmoothPathFollowingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothPathFollowingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothPathFollowingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothPathFollowingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothPathFollowingComponent()
{
	if (!Z_Registration_Info_UClass_USmoothPathFollowingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothPathFollowingComponent.OuterSingleton, Z_Construct_UClass_USmoothPathFollowingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothPathFollowingComponent.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<USmoothPathFollowingComponent>()
{
	return USmoothPathFollowingComponent::StaticClass();
}
USmoothPathFollowingComponent::USmoothPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothPathFollowingComponent);
USmoothPathFollowingComponent::~USmoothPathFollowingComponent() {}
// End Class USmoothPathFollowingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USmoothPathFollowingComponent, USmoothPathFollowingComponent::StaticClass, TEXT("USmoothPathFollowingComponent"), &Z_Registration_Info_UClass_USmoothPathFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothPathFollowingComponent), 2279659209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_2877134895(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

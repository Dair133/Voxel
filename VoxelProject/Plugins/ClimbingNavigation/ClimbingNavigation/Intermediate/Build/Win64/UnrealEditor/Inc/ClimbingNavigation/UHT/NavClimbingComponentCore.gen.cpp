// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/NavClimbingComponentCore.h"
#include "ClimbingNavigation/Public/ClimbingNavigationBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavClimbingComponentCore() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavClimbingComponentCore();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavClimbingComponentCore_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UNavClimbingComponentCore Function CheckCanReleaseClimb
struct Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics
{
	struct NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms
	{
		float Duration;
		bool bRunWhenCheckValid;
		FVector LedgeOrigin;
		FVector CheckDirection;
		FVector ActorLocation;
		bool PreferJumpDown;
		int32 MaxSearchInterations;
		float TraceForwardOffset;
		FVector2D TraceOffsetUp;
		FVector2D TraceOffsetDown;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Nav Climb|Release" },
		{ "CPP_Default_MaxSearchInterations", "3" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "CPP_Default_TraceForwardOffset", "35.000000" },
		{ "CPP_Default_TraceOffsetDown", "(X=-20.000,Y=-330.000)" },
		{ "CPP_Default_TraceOffsetUp", "(X=50.000,Y=-25.000)" },
		{ "DisplayName", "Check Can Release Climb" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bRunWhenCheckValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunWhenCheckValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
	static void NewProp_PreferJumpDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreferJumpDown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchInterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceForwardOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceOffsetUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceOffsetDown;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_bRunWhenCheckValid_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms*)Obj)->bRunWhenCheckValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_bRunWhenCheckValid = { "bRunWhenCheckValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_bRunWhenCheckValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_LedgeOrigin = { "LedgeOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, LedgeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_CheckDirection = { "CheckDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, CheckDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_PreferJumpDown_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms*)Obj)->PreferJumpDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_PreferJumpDown = { "PreferJumpDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_PreferJumpDown_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_MaxSearchInterations = { "MaxSearchInterations", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, MaxSearchInterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceForwardOffset = { "TraceForwardOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, TraceForwardOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceOffsetUp = { "TraceOffsetUp", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, TraceOffsetUp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceOffsetDown = { "TraceOffsetDown", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, TraceOffsetDown), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_bRunWhenCheckValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_LedgeOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_CheckDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_ActorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_PreferJumpDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_MaxSearchInterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceOffsetUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceOffsetDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "CheckCanReleaseClimb", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::NavClimbingComponentCore_eventCheckCanReleaseClimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execCheckCanReleaseClimb)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
	P_GET_UBOOL(Z_Param_bRunWhenCheckValid);
	P_GET_STRUCT(FVector,Z_Param_LedgeOrigin);
	P_GET_STRUCT(FVector,Z_Param_CheckDirection);
	P_GET_STRUCT(FVector,Z_Param_ActorLocation);
	P_GET_UBOOL(Z_Param_PreferJumpDown);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSearchInterations);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceForwardOffset);
	P_GET_STRUCT(FVector2D,Z_Param_TraceOffsetUp);
	P_GET_STRUCT(FVector2D,Z_Param_TraceOffsetDown);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanReleaseClimb(Z_Param_Out_Duration,Z_Param_bRunWhenCheckValid,Z_Param_LedgeOrigin,Z_Param_CheckDirection,Z_Param_ActorLocation,Z_Param_PreferJumpDown,Z_Param_MaxSearchInterations,Z_Param_TraceForwardOffset,Z_Param_TraceOffsetUp,Z_Param_TraceOffsetDown,ECollisionChannel(Z_Param_TraceChannel));
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function CheckCanReleaseClimb

// Begin Class UNavClimbingComponentCore Function ChooseInterpolationMethod
struct NavClimbingComponentCore_eventChooseInterpolationMethod_Parms
{
	FTransform ReturnValue;
};
static const FName NAME_UNavClimbingComponentCore_ChooseInterpolationMethod = FName(TEXT("ChooseInterpolationMethod"));
FTransform UNavClimbingComponentCore::ChooseInterpolationMethod()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_ChooseInterpolationMethod);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventChooseInterpolationMethod_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return ChooseInterpolationMethod_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Core" },
		{ "DisplayName", "Trajectory Interpolation Method" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventChooseInterpolationMethod_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "ChooseInterpolationMethod", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventChooseInterpolationMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventChooseInterpolationMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execChooseInterpolationMethod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->ChooseInterpolationMethod_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function ChooseInterpolationMethod

// Begin Class UNavClimbingComponentCore Function DropFromLedgeHold
static const FName NAME_UNavClimbingComponentCore_DropFromLedgeHold = FName(TEXT("DropFromLedgeHold"));
void UNavClimbingComponentCore::DropFromLedgeHold()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_DropFromLedgeHold);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		DropFromLedgeHold_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_DropFromLedgeHold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Release" },
		{ "DisplayName", "Drop From Ledge Hold" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_DropFromLedgeHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "DropFromLedgeHold", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_DropFromLedgeHold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_DropFromLedgeHold_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_DropFromLedgeHold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_DropFromLedgeHold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execDropFromLedgeHold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropFromLedgeHold_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function DropFromLedgeHold

// Begin Class UNavClimbingComponentCore Function GetPathPointsStruct
struct Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics
{
	struct NavClimbingComponentCore_eventGetPathPointsStruct_Parms
	{
		TArray<FClimbNav_SingleClimbPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Utility" },
		{ "DisplayName", "Get Path Points Struct" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventGetPathPointsStruct_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "GetPathPointsStruct", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::NavClimbingComponentCore_eventGetPathPointsStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::NavClimbingComponentCore_eventGetPathPointsStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execGetPathPointsStruct)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FClimbNav_SingleClimbPoint>*)Z_Param__Result=P_THIS->GetPathPointsStruct();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function GetPathPointsStruct

// Begin Class UNavClimbingComponentCore Function GetPlayerIsClimbing
struct NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms
{
	int32 PlayerIndex;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNavClimbingComponentCore_GetPlayerIsClimbing = FName(TEXT("GetPlayerIsClimbing"));
bool UNavClimbingComponentCore::GetPlayerIsClimbing(int32 PlayerIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_GetPlayerIsClimbing);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms Parms;
		Parms.PlayerIndex=PlayerIndex;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return GetPlayerIsClimbing_Implementation(PlayerIndex);
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Control" },
		{ "DisplayName", "Get Player Is Climbing" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "GetPlayerIsClimbing", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventGetPlayerIsClimbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execGetPlayerIsClimbing)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPlayerIsClimbing_Implementation(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function GetPlayerIsClimbing

// Begin Class UNavClimbingComponentCore Function GetStartingClimbMontage
struct NavClimbingComponentCore_eventGetStartingClimbMontage_Parms
{
	float PlayRate;
	float StartTime;
	UAnimMontage* ReturnValue;

	/** Constructor, initializes return property only **/
	NavClimbingComponentCore_eventGetStartingClimbMontage_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNavClimbingComponentCore_GetStartingClimbMontage = FName(TEXT("GetStartingClimbMontage"));
UAnimMontage* UNavClimbingComponentCore::GetStartingClimbMontage(float& PlayRate, float& StartTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_GetStartingClimbMontage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventGetStartingClimbMontage_Parms Parms;
		Parms.PlayRate=PlayRate;
		Parms.StartTime=StartTime;
	ProcessEvent(Func,&Parms);
		PlayRate=Parms.PlayRate;
		StartTime=Parms.StartTime;
		return Parms.ReturnValue;
	}
	else
	{
		return GetStartingClimbMontage_Implementation(PlayRate, StartTime);
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Starting" },
		{ "DisplayName", "Get Starting Climb Montage" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventGetStartingClimbMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventGetStartingClimbMontage_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventGetStartingClimbMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "GetStartingClimbMontage", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventGetStartingClimbMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventGetStartingClimbMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execGetStartingClimbMontage)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PlayRate);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetStartingClimbMontage_Implementation(Z_Param_Out_PlayRate,Z_Param_Out_StartTime);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function GetStartingClimbMontage

// Begin Class UNavClimbingComponentCore Function InitializeComponent
static const FName NAME_UNavClimbingComponentCore_InitializeComponent = FName(TEXT("InitializeComponent"));
void UNavClimbingComponentCore::InitializeComponent()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_InitializeComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitializeComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_InitializeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Initialize" },
		{ "DisplayName", "Initialize Component" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_InitializeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "InitializeComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_InitializeComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_InitializeComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_InitializeComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_InitializeComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execInitializeComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function InitializeComponent

// Begin Class UNavClimbingComponentCore Function JumpToLedgeClimb
struct Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics
{
	struct NavClimbingComponentCore_eventJumpToLedgeClimb_Parms
	{
		FVector NavPointLocation;
		FVector NavPointDirection;
		AClimbNavigationStorageActor* NavActor;
		bool bStopMontages;
		FVector WarpOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bStopMontages,WarpOffset" },
		{ "Category", "Nav Climb|Starting" },
		{ "CPP_Default_bStopMontages", "true" },
		{ "CPP_Default_WarpOffset", "0.000000,0.000000,-98.000000" },
		{ "DisplayName", "Jump To Ledge Climb" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavPointLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavPointDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavActor;
	static void NewProp_bStopMontages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopMontages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_NavPointLocation = { "NavPointLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventJumpToLedgeClimb_Parms, NavPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_NavPointDirection = { "NavPointDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventJumpToLedgeClimb_Parms, NavPointDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_NavActor = { "NavActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventJumpToLedgeClimb_Parms, NavActor), Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_bStopMontages_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventJumpToLedgeClimb_Parms*)Obj)->bStopMontages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_bStopMontages = { "bStopMontages", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventJumpToLedgeClimb_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_bStopMontages_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_WarpOffset = { "WarpOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventJumpToLedgeClimb_Parms, WarpOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventJumpToLedgeClimb_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventJumpToLedgeClimb_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_NavPointLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_NavPointDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_NavActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_bStopMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_WarpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "JumpToLedgeClimb", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NavClimbingComponentCore_eventJumpToLedgeClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::NavClimbingComponentCore_eventJumpToLedgeClimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execJumpToLedgeClimb)
{
	P_GET_STRUCT(FVector,Z_Param_NavPointLocation);
	P_GET_STRUCT(FVector,Z_Param_NavPointDirection);
	P_GET_OBJECT(AClimbNavigationStorageActor,Z_Param_NavActor);
	P_GET_UBOOL(Z_Param_bStopMontages);
	P_GET_STRUCT(FVector,Z_Param_WarpOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->JumpToLedgeClimb(Z_Param_NavPointLocation,Z_Param_NavPointDirection,Z_Param_NavActor,Z_Param_bStopMontages,Z_Param_WarpOffset);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function JumpToLedgeClimb

// Begin Class UNavClimbingComponentCore Function MoveToTargetOnClimbNavigation
struct NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms
{
	FVector StartLocation;
	FVector EndLocation;
	float MaxPathLenght;
	float MaxMovingTime;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation = FName(TEXT("MoveToTargetOnClimbNavigation"));
bool UNavClimbingComponentCore::MoveToTargetOnClimbNavigation(FVector StartLocation, FVector EndLocation, float MaxPathLenght, float MaxMovingTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.EndLocation=EndLocation;
		Parms.MaxPathLenght=MaxPathLenght;
		Parms.MaxMovingTime=MaxMovingTime;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return MoveToTargetOnClimbNavigation_Implementation(StartLocation, EndLocation, MaxPathLenght, MaxMovingTime);
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Core" },
		{ "CPP_Default_MaxMovingTime", "9999.000000" },
		{ "CPP_Default_MaxPathLenght", "-1.000000" },
		{ "DisplayName", "Move To Target On Climb Navigation" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPathLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMovingTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_MaxPathLenght = { "MaxPathLenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms, MaxPathLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_MaxMovingTime = { "MaxMovingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms, MaxMovingTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_MaxPathLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_MaxMovingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "MoveToTargetOnClimbNavigation", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventMoveToTargetOnClimbNavigation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execMoveToTargetOnClimbNavigation)
{
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_EndLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPathLenght);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxMovingTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MoveToTargetOnClimbNavigation_Implementation(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_MaxPathLenght,Z_Param_MaxMovingTime);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function MoveToTargetOnClimbNavigation

// Begin Class UNavClimbingComponentCore Function NormalizedMainTimer
struct Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics
{
	struct NavClimbingComponentCore_eventNormalizedMainTimer_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Utility" },
		{ "DisplayName", "Get Action Normalized Time Elapsed" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventNormalizedMainTimer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "NormalizedMainTimer", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::NavClimbingComponentCore_eventNormalizedMainTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::NavClimbingComponentCore_eventNormalizedMainTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execNormalizedMainTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->NormalizedMainTimer();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function NormalizedMainTimer

// Begin Class UNavClimbingComponentCore Function PerformFollowing
struct Z_Construct_UFunction_UNavClimbingComponentCore_PerformFollowing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Control" },
		{ "DisplayName", "Perform Following Player" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_PerformFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "PerformFollowing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_PerformFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_PerformFollowing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_PerformFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_PerformFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execPerformFollowing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformFollowing();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function PerformFollowing

// Begin Class UNavClimbingComponentCore Function PrepareAnimInstParams
struct NavClimbingComponentCore_eventPrepareAnimInstParams_Parms
{
	bool Enable;
};
static const FName NAME_UNavClimbingComponentCore_PrepareAnimInstParams = FName(TEXT("PrepareAnimInstParams"));
void UNavClimbingComponentCore::PrepareAnimInstParams(bool Enable)
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_PrepareAnimInstParams);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventPrepareAnimInstParams_Parms Parms;
		Parms.Enable=Enable ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		PrepareAnimInstParams_Implementation(Enable);
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Anim Control" },
		{ "CPP_Default_Enable", "true" },
		{ "DisplayName", "Set Climb Enable For References" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventPrepareAnimInstParams_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventPrepareAnimInstParams_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "PrepareAnimInstParams", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventPrepareAnimInstParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventPrepareAnimInstParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execPrepareAnimInstParams)
{
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareAnimInstParams_Implementation(Z_Param_Enable);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function PrepareAnimInstParams

// Begin Class UNavClimbingComponentCore Function ReleaseLedgeFinished
static const FName NAME_UNavClimbingComponentCore_ReleaseLedgeFinished = FName(TEXT("ReleaseLedgeFinished"));
void UNavClimbingComponentCore::ReleaseLedgeFinished()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_ReleaseLedgeFinished);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ReleaseLedgeFinished_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_ReleaseLedgeFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Release" },
		{ "DisplayName", "Release Ledge Finished" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_ReleaseLedgeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "ReleaseLedgeFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_ReleaseLedgeFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_ReleaseLedgeFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_ReleaseLedgeFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_ReleaseLedgeFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execReleaseLedgeFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseLedgeFinished_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function ReleaseLedgeFinished

// Begin Class UNavClimbingComponentCore Function ScaleForwardCapOffset
struct Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics
{
	struct NavClimbingComponentCore_eventScaleForwardCapOffset_Parms
	{
		FTransform InTransform;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Utilities functions\n" },
#endif
		{ "DisplayName", "Scale Forward Cap Offset" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utilities functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventScaleForwardCapOffset_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventScaleForwardCapOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "ScaleForwardCapOffset", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::NavClimbingComponentCore_eventScaleForwardCapOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::NavClimbingComponentCore_eventScaleForwardCapOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execScaleForwardCapOffset)
{
	P_GET_STRUCT(FTransform,Z_Param_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->ScaleForwardCapOffset(Z_Param_InTransform);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function ScaleForwardCapOffset

// Begin Class UNavClimbingComponentCore Function SetTargetActionState
static const FName NAME_UNavClimbingComponentCore_SetTargetActionState = FName(TEXT("SetTargetActionState"));
void UNavClimbingComponentCore::SetTargetActionState()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_SetTargetActionState);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		SetTargetActionState_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_SetTargetActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Core" },
		{ "DisplayName", "Set Target Action State" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_SetTargetActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "SetTargetActionState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_SetTargetActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_SetTargetActionState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_SetTargetActionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_SetTargetActionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execSetTargetActionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetActionState_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function SetTargetActionState

// Begin Class UNavClimbingComponentCore Function SetTransformWhen
struct Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics
{
	struct NavClimbingComponentCore_eventSetTransformWhen_Parms
	{
		FVector NewLocation;
		FRotator NewRotation;
		bool bSweep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Utility" },
		{ "DisplayName", "Set Transform When" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventSetTransformWhen_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventSetTransformWhen_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventSetTransformWhen_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventSetTransformWhen_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NewProp_bSweep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "SetTransformWhen", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NavClimbingComponentCore_eventSetTransformWhen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::NavClimbingComponentCore_eventSetTransformWhen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execSetTransformWhen)
{
	P_GET_STRUCT(FVector,Z_Param_NewLocation);
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransformWhen(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function SetTransformWhen

// Begin Class UNavClimbingComponentCore Function StartReleaseLedgeClimb
struct NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms
{
	float ReturnAnimDuration;
	FTransform CapTransformWS;
	UPrimitiveComponent* LedgeComponent;
	FVector LedgeOrigin;
	bool bForJumpDown;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNavClimbingComponentCore_StartReleaseLedgeClimb = FName(TEXT("StartReleaseLedgeClimb"));
bool UNavClimbingComponentCore::StartReleaseLedgeClimb(float& ReturnAnimDuration, FTransform CapTransformWS, UPrimitiveComponent* LedgeComponent, FVector LedgeOrigin, bool bForJumpDown)
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_StartReleaseLedgeClimb);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms Parms;
		Parms.ReturnAnimDuration=ReturnAnimDuration;
		Parms.CapTransformWS=CapTransformWS;
		Parms.LedgeComponent=LedgeComponent;
		Parms.LedgeOrigin=LedgeOrigin;
		Parms.bForJumpDown=bForJumpDown ? true : false;
	ProcessEvent(Func,&Parms);
		ReturnAnimDuration=Parms.ReturnAnimDuration;
		return !!Parms.ReturnValue;
	}
	else
	{
		return StartReleaseLedgeClimb_Implementation(ReturnAnimDuration, CapTransformWS, LedgeComponent, LedgeOrigin, bForJumpDown);
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Release" },
		{ "DisplayName", "Start Release Ledge Climb" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnAnimDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapTransformWS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LedgeComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeOrigin;
	static void NewProp_bForJumpDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForJumpDown;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_ReturnAnimDuration = { "ReturnAnimDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms, ReturnAnimDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_CapTransformWS = { "CapTransformWS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms, CapTransformWS), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_LedgeComponent = { "LedgeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms, LedgeComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeComponent_MetaData), NewProp_LedgeComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_LedgeOrigin = { "LedgeOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms, LedgeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_bForJumpDown_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms*)Obj)->bForJumpDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_bForJumpDown = { "bForJumpDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_bForJumpDown_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_ReturnAnimDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_CapTransformWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_LedgeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_LedgeOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_bForJumpDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "StartReleaseLedgeClimb", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventStartReleaseLedgeClimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execStartReleaseLedgeClimb)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnAnimDuration);
	P_GET_STRUCT(FTransform,Z_Param_CapTransformWS);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_LedgeComponent);
	P_GET_STRUCT(FVector,Z_Param_LedgeOrigin);
	P_GET_UBOOL(Z_Param_bForJumpDown);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartReleaseLedgeClimb_Implementation(Z_Param_Out_ReturnAnimDuration,Z_Param_CapTransformWS,Z_Param_LedgeComponent,Z_Param_LedgeOrigin,Z_Param_bForJumpDown);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function StartReleaseLedgeClimb

// Begin Class UNavClimbingComponentCore Function SwitchToNextPathPoint
struct Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics
{
	struct NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms
	{
		bool ItsEndingPoint;
		float NextActionDelay;
		bool UpdateTimer;
		float WaitTimeScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Core" },
		{ "CPP_Default_WaitTimeScale", "1.000000" },
		{ "DisplayName", "Switch To Next Path Point" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ItsEndingPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ItsEndingPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NextActionDelay;
	static void NewProp_UpdateTimer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTimeScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_ItsEndingPoint_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms*)Obj)->ItsEndingPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_ItsEndingPoint = { "ItsEndingPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_ItsEndingPoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_NextActionDelay = { "NextActionDelay", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms, NextActionDelay), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_UpdateTimer_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms*)Obj)->UpdateTimer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_UpdateTimer = { "UpdateTimer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_UpdateTimer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_WaitTimeScale = { "WaitTimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms, WaitTimeScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_ItsEndingPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_NextActionDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_UpdateTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NewProp_WaitTimeScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "SwitchToNextPathPoint", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::NavClimbingComponentCore_eventSwitchToNextPathPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execSwitchToNextPathPoint)
{
	P_GET_UBOOL_REF(Z_Param_Out_ItsEndingPoint);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NextActionDelay);
	P_GET_UBOOL(Z_Param_UpdateTimer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WaitTimeScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToNextPathPoint(Z_Param_Out_ItsEndingPoint,Z_Param_Out_NextActionDelay,Z_Param_UpdateTimer,Z_Param_WaitTimeScale);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function SwitchToNextPathPoint

// Begin Class UNavClimbingComponentCore Function TimerFinishedTollerance
struct Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics
{
	struct NavClimbingComponentCore_eventTimerFinishedTollerance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Utility" },
		{ "DisplayName", "Timer Finished Tollerance" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventTimerFinishedTollerance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "TimerFinishedTollerance", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::NavClimbingComponentCore_eventTimerFinishedTollerance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::NavClimbingComponentCore_eventTimerFinishedTollerance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execTimerFinishedTollerance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TimerFinishedTollerance();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function TimerFinishedTollerance

// Begin Class UNavClimbingComponentCore Function TryPauseMovement
struct Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics
{
	struct NavClimbingComponentCore_eventTryPauseMovement_Parms
	{
		bool bPause;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Control" },
		{ "CPP_Default_bPause", "true" },
		{ "DisplayName", "Pause Movement" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::NewProp_bPause_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventTryPauseMovement_Parms*)Obj)->bPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventTryPauseMovement_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::NewProp_bPause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "TryPauseMovement", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::NavClimbingComponentCore_eventTryPauseMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::NavClimbingComponentCore_eventTryPauseMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execTryPauseMovement)
{
	P_GET_UBOOL(Z_Param_bPause);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryPauseMovement(Z_Param_bPause);
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function TryPauseMovement

// Begin Class UNavClimbingComponentCore Function TryPerformMovingOnClimbPath
struct NavClimbingComponentCore_eventTryPerformMovingOnClimbPath_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NavClimbingComponentCore_eventTryPerformMovingOnClimbPath_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNavClimbingComponentCore_TryPerformMovingOnClimbPath = FName(TEXT("TryPerformMovingOnClimbPath"));
bool UNavClimbingComponentCore::TryPerformMovingOnClimbPath()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_TryPerformMovingOnClimbPath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventTryPerformMovingOnClimbPath_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryPerformMovingOnClimbPath_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Core" },
		{ "DisplayName", "Try Perform Moving On Climb Path" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavClimbingComponentCore_eventTryPerformMovingOnClimbPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavClimbingComponentCore_eventTryPerformMovingOnClimbPath_Parms), &Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "TryPerformMovingOnClimbPath", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventTryPerformMovingOnClimbPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventTryPerformMovingOnClimbPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execTryPerformMovingOnClimbPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPerformMovingOnClimbPath_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function TryPerformMovingOnClimbPath

// Begin Class UNavClimbingComponentCore Function UpdateAnimValuesWhenClimb
static const FName NAME_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb = FName(TEXT("UpdateAnimValuesWhenClimb"));
void UNavClimbingComponentCore::UpdateAnimValuesWhenClimb()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateAnimValuesWhenClimb_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Anim Control" },
		{ "DisplayName", "Update Anim Values When Start Action" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "UpdateAnimValuesWhenClimb", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execUpdateAnimValuesWhenClimb)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAnimValuesWhenClimb_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function UpdateAnimValuesWhenClimb

// Begin Class UNavClimbingComponentCore Function UpdateMovementOnPath
static const FName NAME_UNavClimbingComponentCore_UpdateMovementOnPath = FName(TEXT("UpdateMovementOnPath"));
void UNavClimbingComponentCore::UpdateMovementOnPath()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_UpdateMovementOnPath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateMovementOnPath_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_UpdateMovementOnPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Core" },
		{ "DisplayName", "Update Movement On Path" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_UpdateMovementOnPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "UpdateMovementOnPath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_UpdateMovementOnPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_UpdateMovementOnPath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_UpdateMovementOnPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_UpdateMovementOnPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execUpdateMovementOnPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMovementOnPath_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function UpdateMovementOnPath

// Begin Class UNavClimbingComponentCore Function UpdatePrepareToClimbLedge
static const FName NAME_UNavClimbingComponentCore_UpdatePrepareToClimbLedge = FName(TEXT("UpdatePrepareToClimbLedge"));
void UNavClimbingComponentCore::UpdatePrepareToClimbLedge()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_UpdatePrepareToClimbLedge);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdatePrepareToClimbLedge_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_UpdatePrepareToClimbLedge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Starting" },
		{ "DisplayName", "Update Prepare To Climb Ledge" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_UpdatePrepareToClimbLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "UpdatePrepareToClimbLedge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_UpdatePrepareToClimbLedge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_UpdatePrepareToClimbLedge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_UpdatePrepareToClimbLedge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_UpdatePrepareToClimbLedge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execUpdatePrepareToClimbLedge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePrepareToClimbLedge_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function UpdatePrepareToClimbLedge

// Begin Class UNavClimbingComponentCore Function UpdateWhenReleaseLedge
struct NavClimbingComponentCore_eventUpdateWhenReleaseLedge_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NavClimbingComponentCore_eventUpdateWhenReleaseLedge_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNavClimbingComponentCore_UpdateWhenReleaseLedge = FName(TEXT("UpdateWhenReleaseLedge"));
float UNavClimbingComponentCore::UpdateWhenReleaseLedge()
{
	UFunction* Func = FindFunctionChecked(NAME_UNavClimbingComponentCore_UpdateWhenReleaseLedge);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavClimbingComponentCore_eventUpdateWhenReleaseLedge_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return UpdateWhenReleaseLedge_Implementation();
	}
}
struct Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nav Climb|Release" },
		{ "DisplayName", "Update When Release Ledge" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Navigation,Climbing" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavClimbingComponentCore_eventUpdateWhenReleaseLedge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavClimbingComponentCore, nullptr, "UpdateWhenReleaseLedge", nullptr, nullptr, Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::PropPointers), sizeof(NavClimbingComponentCore_eventUpdateWhenReleaseLedge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavClimbingComponentCore_eventUpdateWhenReleaseLedge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavClimbingComponentCore::execUpdateWhenReleaseLedge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->UpdateWhenReleaseLedge_Implementation();
	P_NATIVE_END;
}
// End Class UNavClimbingComponentCore Function UpdateWhenReleaseLedge

// Begin Class UNavClimbingComponentCore
void UNavClimbingComponentCore::StaticRegisterNativesUNavClimbingComponentCore()
{
	UClass* Class = UNavClimbingComponentCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCanReleaseClimb", &UNavClimbingComponentCore::execCheckCanReleaseClimb },
		{ "ChooseInterpolationMethod", &UNavClimbingComponentCore::execChooseInterpolationMethod },
		{ "DropFromLedgeHold", &UNavClimbingComponentCore::execDropFromLedgeHold },
		{ "GetPathPointsStruct", &UNavClimbingComponentCore::execGetPathPointsStruct },
		{ "GetPlayerIsClimbing", &UNavClimbingComponentCore::execGetPlayerIsClimbing },
		{ "GetStartingClimbMontage", &UNavClimbingComponentCore::execGetStartingClimbMontage },
		{ "InitializeComponent", &UNavClimbingComponentCore::execInitializeComponent },
		{ "JumpToLedgeClimb", &UNavClimbingComponentCore::execJumpToLedgeClimb },
		{ "MoveToTargetOnClimbNavigation", &UNavClimbingComponentCore::execMoveToTargetOnClimbNavigation },
		{ "NormalizedMainTimer", &UNavClimbingComponentCore::execNormalizedMainTimer },
		{ "PerformFollowing", &UNavClimbingComponentCore::execPerformFollowing },
		{ "PrepareAnimInstParams", &UNavClimbingComponentCore::execPrepareAnimInstParams },
		{ "ReleaseLedgeFinished", &UNavClimbingComponentCore::execReleaseLedgeFinished },
		{ "ScaleForwardCapOffset", &UNavClimbingComponentCore::execScaleForwardCapOffset },
		{ "SetTargetActionState", &UNavClimbingComponentCore::execSetTargetActionState },
		{ "SetTransformWhen", &UNavClimbingComponentCore::execSetTransformWhen },
		{ "StartReleaseLedgeClimb", &UNavClimbingComponentCore::execStartReleaseLedgeClimb },
		{ "SwitchToNextPathPoint", &UNavClimbingComponentCore::execSwitchToNextPathPoint },
		{ "TimerFinishedTollerance", &UNavClimbingComponentCore::execTimerFinishedTollerance },
		{ "TryPauseMovement", &UNavClimbingComponentCore::execTryPauseMovement },
		{ "TryPerformMovingOnClimbPath", &UNavClimbingComponentCore::execTryPerformMovingOnClimbPath },
		{ "UpdateAnimValuesWhenClimb", &UNavClimbingComponentCore::execUpdateAnimValuesWhenClimb },
		{ "UpdateMovementOnPath", &UNavClimbingComponentCore::execUpdateMovementOnPath },
		{ "UpdatePrepareToClimbLedge", &UNavClimbingComponentCore::execUpdatePrepareToClimbLedge },
		{ "UpdateWhenReleaseLedge", &UNavClimbingComponentCore::execUpdateWhenReleaseLedge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavClimbingComponentCore);
UClass* Z_Construct_UClass_UNavClimbingComponentCore_NoRegister()
{
	return UNavClimbingComponentCore::StaticClass();
}
struct Z_Construct_UClass_UNavClimbingComponentCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NavClimbingComponentCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowPlayerWhenClimb_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorrectDistanceTollerance_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedScale_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
		{ "SliderMax", "2.0" },
		{ "SliderMin", "0.1" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitTimeBetweenJumps_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
		{ "SliderMax", "1.0" },
		{ "SliderMin", "0.0" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToPlayerCorrectDistance_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceBetweenLedges_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
		{ "SliderMax", "300.0" },
		{ "SliderMin", "100.0" },
		{ "UIMax", "300.0" },
		{ "UIMin", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongJumpMinDistance_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
		{ "SliderMax", "200.0" },
		{ "SliderMin", "50.0" },
		{ "UIMax", "200.0" },
		{ "UIMin", "50.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowingTickInterval_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
		{ "SliderMax", "10.0" },
		{ "SliderMin", "0.1" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapConstForwardOffset_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
		{ "SliderMax", "50.0" },
		{ "SliderMin", "0.0" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryInterpCurves_MetaData[] = {
		{ "Category", "Nav Climb|Config" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleReleaseLedgeMontage_MetaData[] = {
		{ "Category", "Nav Climb|Config|Release" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleReleaseTrajectoryCurve_MetaData[] = {
		{ "Category", "Nav Climb|Config|Release" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintAditionalInfoInLog_MetaData[] = {
		{ "Category", "Nav Climb|Config|Debug" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintAditionalInfoOnScreen_MetaData[] = {
		{ "Category", "Nav Climb|Config|Debug" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Nav Climb|References" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNavStorageActor_MetaData[] = {
		{ "Category", "Nav Climb|References" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLedgeParams_MetaData[] = {
		{ "Category", "Nav Climb|Ledge Structs" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextLedgeParams_MetaData[] = {
		{ "Category", "Nav Climb|Ledge Structs" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLedgeIndex_MetaData[] = {
		{ "Category", "Nav Climb|Basic States" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsClimbing_MetaData[] = {
		{ "Category", "Nav Climb|Basic States" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavClimbActionState_MetaData[] = {
		{ "Category", "Nav Climb|Basic States" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartedReleaseLedge_MetaData[] = {
		{ "Category", "Nav Climb|Release" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Release Ledge Climbing\n" },
#endif
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release Ledge Climbing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevPauseMove_MetaData[] = {
		{ "Category", "Nav Climb|Cached" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathRefreshedWhenFollow_MetaData[] = {
		{ "Category", "Nav Climb|Cached" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[] = {
		{ "Category", "Nav Climb|Animation" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimJumpsParams_MetaData[] = {
		{ "Category", "Nav Climb|Animation" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseCurrentMove_MetaData[] = {
		{ "Category", "Nav Climb|Core" },
		{ "ModuleRelativePath", "Public/NavClimbingComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_FollowPlayerWhenClimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FollowPlayerWhenClimb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CorrectDistanceTollerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTimeBetweenJumps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToPlayerCorrectDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceBetweenLedges;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LongJumpMinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowingTickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapConstForwardOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrajectoryInterpCurves_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrajectoryInterpCurves_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrajectoryInterpCurves_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TrajectoryInterpCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MantleReleaseLedgeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MantleReleaseTrajectoryCurve;
	static void NewProp_bPrintAditionalInfoInLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintAditionalInfoInLog;
	static void NewProp_bPrintAditionalInfoOnScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintAditionalInfoOnScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentNavStorageActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLedgeParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextLedgeParams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLedgeIndex;
	static void NewProp_IsClimbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsClimbing;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NavClimbActionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NavClimbActionState;
	static void NewProp_StartedReleaseLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedReleaseLedge;
	static void NewProp_PrevPauseMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrevPauseMove;
	static void NewProp_PathRefreshedWhenFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PathRefreshedWhenFollow;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimJumpsParams;
	static void NewProp_PauseCurrentMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseCurrentMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_CheckCanReleaseClimb, "CheckCanReleaseClimb" }, // 2763096567
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_ChooseInterpolationMethod, "ChooseInterpolationMethod" }, // 3871538658
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_DropFromLedgeHold, "DropFromLedgeHold" }, // 1158985642
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_GetPathPointsStruct, "GetPathPointsStruct" }, // 4265972130
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_GetPlayerIsClimbing, "GetPlayerIsClimbing" }, // 4182144868
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_GetStartingClimbMontage, "GetStartingClimbMontage" }, // 458300916
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_InitializeComponent, "InitializeComponent" }, // 4156973849
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_JumpToLedgeClimb, "JumpToLedgeClimb" }, // 775963420
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_MoveToTargetOnClimbNavigation, "MoveToTargetOnClimbNavigation" }, // 3400467633
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_NormalizedMainTimer, "NormalizedMainTimer" }, // 965410297
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_PerformFollowing, "PerformFollowing" }, // 737157198
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_PrepareAnimInstParams, "PrepareAnimInstParams" }, // 2247122181
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_ReleaseLedgeFinished, "ReleaseLedgeFinished" }, // 586016873
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_ScaleForwardCapOffset, "ScaleForwardCapOffset" }, // 228898664
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_SetTargetActionState, "SetTargetActionState" }, // 2613227467
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_SetTransformWhen, "SetTransformWhen" }, // 3175613832
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_StartReleaseLedgeClimb, "StartReleaseLedgeClimb" }, // 1389861557
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_SwitchToNextPathPoint, "SwitchToNextPathPoint" }, // 2909769142
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_TimerFinishedTollerance, "TimerFinishedTollerance" }, // 3603108838
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_TryPauseMovement, "TryPauseMovement" }, // 1738925158
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_TryPerformMovingOnClimbPath, "TryPerformMovingOnClimbPath" }, // 1672907363
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_UpdateAnimValuesWhenClimb, "UpdateAnimValuesWhenClimb" }, // 1512525563
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_UpdateMovementOnPath, "UpdateMovementOnPath" }, // 137130023
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_UpdatePrepareToClimbLedge, "UpdatePrepareToClimbLedge" }, // 3088231260
		{ &Z_Construct_UFunction_UNavClimbingComponentCore_UpdateWhenReleaseLedge, "UpdateWhenReleaseLedge" }, // 284033671
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavClimbingComponentCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_FollowPlayerWhenClimb_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->FollowPlayerWhenClimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_FollowPlayerWhenClimb = { "FollowPlayerWhenClimb", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_FollowPlayerWhenClimb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowPlayerWhenClimb_MetaData), NewProp_FollowPlayerWhenClimb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CorrectDistanceTollerance = { "CorrectDistanceTollerance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, CorrectDistanceTollerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorrectDistanceTollerance_MetaData), NewProp_CorrectDistanceTollerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MovementSpeedScale = { "MovementSpeedScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, MovementSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedScale_MetaData), NewProp_MovementSpeedScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_WaitTimeBetweenJumps = { "WaitTimeBetweenJumps", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, WaitTimeBetweenJumps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitTimeBetweenJumps_MetaData), NewProp_WaitTimeBetweenJumps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_ToPlayerCorrectDistance = { "ToPlayerCorrectDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, ToPlayerCorrectDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToPlayerCorrectDistance_MetaData), NewProp_ToPlayerCorrectDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MaxDistanceBetweenLedges = { "MaxDistanceBetweenLedges", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, MaxDistanceBetweenLedges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceBetweenLedges_MetaData), NewProp_MaxDistanceBetweenLedges_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_LongJumpMinDistance = { "LongJumpMinDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, LongJumpMinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongJumpMinDistance_MetaData), NewProp_LongJumpMinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_FollowingTickInterval = { "FollowingTickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, FollowingTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowingTickInterval_MetaData), NewProp_FollowingTickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CapConstForwardOffset = { "CapConstForwardOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, CapConstForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapConstForwardOffset_MetaData), NewProp_CapConstForwardOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves_ValueProp = { "TrajectoryInterpCurves", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves_Key_KeyProp = { "TrajectoryInterpCurves_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState, METADATA_PARAMS(0, nullptr) }; // 3103417325
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves = { "TrajectoryInterpCurves", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, TrajectoryInterpCurves), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryInterpCurves_MetaData), NewProp_TrajectoryInterpCurves_MetaData) }; // 3103417325
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MantleReleaseLedgeMontage = { "MantleReleaseLedgeMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, MantleReleaseLedgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleReleaseLedgeMontage_MetaData), NewProp_MantleReleaseLedgeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MantleReleaseTrajectoryCurve = { "MantleReleaseTrajectoryCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, MantleReleaseTrajectoryCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleReleaseTrajectoryCurve_MetaData), NewProp_MantleReleaseTrajectoryCurve_MetaData) };
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoInLog_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->bPrintAditionalInfoInLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoInLog = { "bPrintAditionalInfoInLog", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoInLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintAditionalInfoInLog_MetaData), NewProp_bPrintAditionalInfoInLog_MetaData) };
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoOnScreen_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->bPrintAditionalInfoOnScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoOnScreen = { "bPrintAditionalInfoOnScreen", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoOnScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintAditionalInfoOnScreen_MetaData), NewProp_bPrintAditionalInfoOnScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CurrentNavStorageActor = { "CurrentNavStorageActor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, CurrentNavStorageActor), Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNavStorageActor_MetaData), NewProp_CurrentNavStorageActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CurrentLedgeParams = { "CurrentLedgeParams", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, CurrentLedgeParams), Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLedgeParams_MetaData), NewProp_CurrentLedgeParams_MetaData) }; // 3422689466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_NextLedgeParams = { "NextLedgeParams", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, NextLedgeParams), Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextLedgeParams_MetaData), NewProp_NextLedgeParams_MetaData) }; // 3422689466
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CurrentLedgeIndex = { "CurrentLedgeIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, CurrentLedgeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLedgeIndex_MetaData), NewProp_CurrentLedgeIndex_MetaData) };
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_IsClimbing_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->IsClimbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_IsClimbing = { "IsClimbing", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_IsClimbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsClimbing_MetaData), NewProp_IsClimbing_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_NavClimbActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_NavClimbActionState = { "NavClimbActionState", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, NavClimbActionState), Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavClimbActionState_MetaData), NewProp_NavClimbActionState_MetaData) }; // 3103417325
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_StartedReleaseLedge_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->StartedReleaseLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_StartedReleaseLedge = { "StartedReleaseLedge", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_StartedReleaseLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartedReleaseLedge_MetaData), NewProp_StartedReleaseLedge_MetaData) };
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PrevPauseMove_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->PrevPauseMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PrevPauseMove = { "PrevPauseMove", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PrevPauseMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevPauseMove_MetaData), NewProp_PrevPauseMove_MetaData) };
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PathRefreshedWhenFollow_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->PathRefreshedWhenFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PathRefreshedWhenFollow = { "PathRefreshedWhenFollow", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PathRefreshedWhenFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathRefreshedWhenFollow_MetaData), NewProp_PathRefreshedWhenFollow_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MovementDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, MovementDirection), Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementDirection_MetaData), NewProp_MovementDirection_MetaData) }; // 26629476
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_AnimJumpsParams = { "AnimJumpsParams", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavClimbingComponentCore, AnimJumpsParams), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimJumpsParams_MetaData), NewProp_AnimJumpsParams_MetaData) };
void Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PauseCurrentMove_SetBit(void* Obj)
{
	((UNavClimbingComponentCore*)Obj)->PauseCurrentMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PauseCurrentMove = { "PauseCurrentMove", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavClimbingComponentCore), &Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PauseCurrentMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseCurrentMove_MetaData), NewProp_PauseCurrentMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavClimbingComponentCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_FollowPlayerWhenClimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CorrectDistanceTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MovementSpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_WaitTimeBetweenJumps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_ToPlayerCorrectDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MaxDistanceBetweenLedges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_LongJumpMinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_FollowingTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CapConstForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_TrajectoryInterpCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MantleReleaseLedgeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MantleReleaseTrajectoryCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoInLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_bPrintAditionalInfoOnScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CurrentNavStorageActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CurrentLedgeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_NextLedgeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_CurrentLedgeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_IsClimbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_NavClimbActionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_NavClimbActionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_StartedReleaseLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PrevPauseMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PathRefreshedWhenFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MovementDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_MovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_AnimJumpsParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavClimbingComponentCore_Statics::NewProp_PauseCurrentMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavClimbingComponentCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavClimbingComponentCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavClimbingComponentCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavClimbingComponentCore_Statics::ClassParams = {
	&UNavClimbingComponentCore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavClimbingComponentCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavClimbingComponentCore_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavClimbingComponentCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavClimbingComponentCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavClimbingComponentCore()
{
	if (!Z_Registration_Info_UClass_UNavClimbingComponentCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavClimbingComponentCore.OuterSingleton, Z_Construct_UClass_UNavClimbingComponentCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavClimbingComponentCore.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UNavClimbingComponentCore>()
{
	return UNavClimbingComponentCore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavClimbingComponentCore);
UNavClimbingComponentCore::~UNavClimbingComponentCore() {}
// End Class UNavClimbingComponentCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavClimbingComponentCore, UNavClimbingComponentCore::StaticClass, TEXT("UNavClimbingComponentCore"), &Z_Registration_Info_UClass_UNavClimbingComponentCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavClimbingComponentCore), 2030056865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_4147185969(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavClimbingComponentCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

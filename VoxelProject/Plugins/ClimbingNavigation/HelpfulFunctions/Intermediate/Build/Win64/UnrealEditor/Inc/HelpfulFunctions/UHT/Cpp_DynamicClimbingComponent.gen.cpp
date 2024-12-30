// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_DynamicClimbingComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
#include "JakubCableComponent/Public/JakubCablePhysic.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_DynamicClimbingComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTwoVectors();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_DynamicClimbingComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_DynamicClimbingComponent_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCMC_LedgeC();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCablePhysic_NoRegister();
JAKUBCABLECOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FExposedCableParticle();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UCpp_DynamicClimbingComponent Function CheckCanDropToLedgeC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventCheckCanDropToLedgeC_Parms
	{
		FCMC_LedgeC LedgeStructWS;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Start Or End" },
		{ "DisplayName", "Check Can Drop To Ledge" },
		{ "Keywords", "Corner CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeStructWS;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::NewProp_LedgeStructWS = { "LedgeStructWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckCanDropToLedgeC_Parms, LedgeStructWS), Z_Construct_UScriptStruct_FCMC_LedgeC, METADATA_PARAMS(0, nullptr) }; // 38286648
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckCanDropToLedgeC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanDropToLedgeC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::NewProp_LedgeStructWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "CheckCanDropToLedgeC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::Cpp_DynamicClimbingComponent_eventCheckCanDropToLedgeC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::Cpp_DynamicClimbingComponent_eventCheckCanDropToLedgeC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execCheckCanDropToLedgeC)
{
	P_GET_STRUCT_REF(FCMC_LedgeC,Z_Param_Out_LedgeStructWS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanDropToLedgeC(Z_Param_Out_LedgeStructWS);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function CheckCanDropToLedgeC

// Begin Class UCpp_DynamicClimbingComponent Function CheckCanJumpBackC
struct Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms
{
	bool ReturnValue;
	FCMC_SingleClimbPointC LeftPoint;
	FCMC_SingleClimbPointC RightPoint;
	FCMC_SingleClimbPointC OriginPoint;
	bool UseCameraCondition;
	float JumpMaxDistance;
};
static const FName NAME_UCpp_DynamicClimbingComponent_CheckCanJumpBackC = FName(TEXT("CheckCanJumpBackC"));
void UCpp_DynamicClimbingComponent::CheckCanJumpBackC(bool& ReturnValue, FCMC_SingleClimbPointC& LeftPoint, FCMC_SingleClimbPointC& RightPoint, FCMC_SingleClimbPointC& OriginPoint, bool UseCameraCondition, float JumpMaxDistance)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_CheckCanJumpBackC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms Parms;
		Parms.ReturnValue=ReturnValue ? true : false;
		Parms.LeftPoint=LeftPoint;
		Parms.RightPoint=RightPoint;
		Parms.OriginPoint=OriginPoint;
		Parms.UseCameraCondition=UseCameraCondition ? true : false;
		Parms.JumpMaxDistance=JumpMaxDistance;
	ProcessEvent(Func,&Parms);
		ReturnValue=Parms.ReturnValue;
		LeftPoint=Parms.LeftPoint;
		RightPoint=Parms.RightPoint;
		OriginPoint=Parms.OriginPoint;
	}
	else
	{
		CheckCanJumpBackC_Implementation(ReturnValue, LeftPoint, RightPoint, OriginPoint, UseCameraCondition, JumpMaxDistance);
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Do While Climbing|Jumps" },
		{ "CPP_Default_JumpMaxDistance", "220.000000" },
		{ "CPP_Default_UseCameraCondition", "true" },
		{ "DisplayName", "Check Can Jump Back" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginPoint;
	static void NewProp_UseCameraCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCameraCondition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpMaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_LeftPoint = { "LeftPoint", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms, LeftPoint), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_RightPoint = { "RightPoint", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms, RightPoint), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_OriginPoint = { "OriginPoint", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms, OriginPoint), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_UseCameraCondition_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms*)Obj)->UseCameraCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_UseCameraCondition = { "UseCameraCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_UseCameraCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_JumpMaxDistance = { "JumpMaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms, JumpMaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_LeftPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_RightPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_OriginPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_UseCameraCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::NewProp_JumpMaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "CheckCanJumpBackC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventCheckCanJumpBackC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execCheckCanJumpBackC)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_GET_STRUCT_REF(FCMC_SingleClimbPointC,Z_Param_Out_LeftPoint);
	P_GET_STRUCT_REF(FCMC_SingleClimbPointC,Z_Param_Out_RightPoint);
	P_GET_STRUCT_REF(FCMC_SingleClimbPointC,Z_Param_Out_OriginPoint);
	P_GET_UBOOL(Z_Param_UseCameraCondition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_JumpMaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCanJumpBackC_Implementation(Z_Param_Out_ReturnValue,Z_Param_Out_LeftPoint,Z_Param_Out_RightPoint,Z_Param_Out_OriginPoint,Z_Param_UseCameraCondition,Z_Param_JumpMaxDistance);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function CheckCanJumpBackC

// Begin Class UCpp_DynamicClimbingComponent Function CheckCanStartCornerC
struct Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms
{
	bool DetectedCorner;
	bool OuterType;
	FCMC_LedgeC TargetLedgeStruct;
	bool Valid;
	bool InputLock;
};
static const FName NAME_UCpp_DynamicClimbingComponent_CheckCanStartCornerC = FName(TEXT("CheckCanStartCornerC"));
void UCpp_DynamicClimbingComponent::CheckCanStartCornerC(bool& DetectedCorner, bool& OuterType, FCMC_LedgeC& TargetLedgeStruct, bool Valid, bool InputLock)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_CheckCanStartCornerC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms Parms;
		Parms.DetectedCorner=DetectedCorner ? true : false;
		Parms.OuterType=OuterType ? true : false;
		Parms.TargetLedgeStruct=TargetLedgeStruct;
		Parms.Valid=Valid ? true : false;
		Parms.InputLock=InputLock ? true : false;
	ProcessEvent(Func,&Parms);
		DetectedCorner=Parms.DetectedCorner;
		OuterType=Parms.OuterType;
		TargetLedgeStruct=Parms.TargetLedgeStruct;
	}
	else
	{
		CheckCanStartCornerC_Implementation(DetectedCorner, OuterType, TargetLedgeStruct, Valid, InputLock);
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Do While Climbing|Corner" },
		{ "CPP_Default_InputLock", "false" },
		{ "CPP_Default_Valid", "true" },
		{ "DisplayName", "Check Can Start Corner" },
		{ "Keywords", "CPP Corner" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DetectedCorner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DetectedCorner;
	static void NewProp_OuterType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OuterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLedgeStruct;
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static void NewProp_InputLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InputLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_DetectedCorner_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms*)Obj)->DetectedCorner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_DetectedCorner = { "DetectedCorner", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_DetectedCorner_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_OuterType_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms*)Obj)->OuterType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_OuterType = { "OuterType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_OuterType_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_TargetLedgeStruct = { "TargetLedgeStruct", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms, TargetLedgeStruct), Z_Construct_UScriptStruct_FCMC_LedgeC, METADATA_PARAMS(0, nullptr) }; // 38286648
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_InputLock_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms*)Obj)->InputLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_InputLock = { "InputLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_InputLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_DetectedCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_OuterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_TargetLedgeStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::NewProp_InputLock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "CheckCanStartCornerC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventCheckCanStartCornerC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execCheckCanStartCornerC)
{
	P_GET_UBOOL_REF(Z_Param_Out_DetectedCorner);
	P_GET_UBOOL_REF(Z_Param_Out_OuterType);
	P_GET_STRUCT_REF(FCMC_LedgeC,Z_Param_Out_TargetLedgeStruct);
	P_GET_UBOOL(Z_Param_Valid);
	P_GET_UBOOL(Z_Param_InputLock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCanStartCornerC_Implementation(Z_Param_Out_DetectedCorner,Z_Param_Out_OuterType,Z_Param_Out_TargetLedgeStruct,Z_Param_Valid,Z_Param_InputLock);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function CheckCanStartCornerC

// Begin Class UCpp_DynamicClimbingComponent Function CheckFootIkValidC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms
	{
		FTransform Transform;
		bool ForRightFoot;
		float TraceUpOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|IK" },
		{ "DisplayName", "Check Foot IK Valid" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_ForRightFoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForRightFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceUpOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ForRightFoot_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms*)Obj)->ForRightFoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ForRightFoot = { "ForRightFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ForRightFoot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_TraceUpOffset = { "TraceUpOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms, TraceUpOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ForRightFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_TraceUpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "CheckFootIkValidC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::Cpp_DynamicClimbingComponent_eventCheckFootIkValidC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execCheckFootIkValidC)
{
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_UBOOL(Z_Param_ForRightFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceUpOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckFootIkValidC(Z_Param_Transform,Z_Param_ForRightFoot,Z_Param_TraceUpOffset);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function CheckFootIkValidC

// Begin Class UCpp_DynamicClimbingComponent Function CheckNormalForPointC
struct Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms
{
	FExposedCableParticle InParticle;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_DynamicClimbingComponent_CheckNormalForPointC = FName(TEXT("CheckNormalForPointC"));
bool UCpp_DynamicClimbingComponent::CheckNormalForPointC(FExposedCableParticle& InParticle)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_CheckNormalForPointC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms Parms;
		Parms.InParticle=InParticle;
	ProcessEvent(Func,&Parms);
		InParticle=Parms.InParticle;
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckNormalForPointC_Implementation(InParticle);
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rope Swing System|Base" },
		{ "DisplayName", "Check Normal For Point" },
		{ "Keywords", "Rope Swing System" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParticle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::NewProp_InParticle = { "InParticle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms, InParticle), Z_Construct_UScriptStruct_FExposedCableParticle, METADATA_PARAMS(0, nullptr) }; // 3054290502
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::NewProp_InParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "CheckNormalForPointC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventCheckNormalForPointC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execCheckNormalForPointC)
{
	P_GET_STRUCT_REF(FExposedCableParticle,Z_Param_Out_InParticle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckNormalForPointC_Implementation(Z_Param_Out_InParticle);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function CheckNormalForPointC

// Begin Class UCpp_DynamicClimbingComponent Function CheckPlayerCanMoveToWallC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms
	{
		bool Check;
		FCALS_ComponentAndTransform TransformWS;
		FCALS_ComponentAndTransform ReturnTransformWS;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickaxe Climbing|Base" },
		{ "DisplayName", "Check Player Can Move To Wall" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_Check_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Check;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnTransformWS;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_Check_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms*)Obj)->Check = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_Check = { "Check", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_Check_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_TransformWS = { "TransformWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms, TransformWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_ReturnTransformWS = { "ReturnTransformWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms, ReturnTransformWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_Check,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_TransformWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_ReturnTransformWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "CheckPlayerCanMoveToWallC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::Cpp_DynamicClimbingComponent_eventCheckPlayerCanMoveToWallC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execCheckPlayerCanMoveToWallC)
{
	P_GET_UBOOL(Z_Param_Check);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_TransformWS);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_ReturnTransformWS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckPlayerCanMoveToWallC(Z_Param_Check,Z_Param_TransformWS,Z_Param_Out_ReturnTransformWS);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function CheckPlayerCanMoveToWallC

// Begin Class UCpp_DynamicClimbingComponent Function ChooseLedgeFindingTransformC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventChooseLedgeFindingTransformC_Parms
	{
		bool GetByLedge;
		FVector ReturnLocation;
		FVector ReturnDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Transformation" },
		{ "DisplayName", "Choose Ledge Finding Transform" },
		{ "Keywords", "Transformation CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_GetByLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GetByLedge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_GetByLedge_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventChooseLedgeFindingTransformC_Parms*)Obj)->GetByLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_GetByLedge = { "GetByLedge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventChooseLedgeFindingTransformC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_GetByLedge_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventChooseLedgeFindingTransformC_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_ReturnDirection = { "ReturnDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventChooseLedgeFindingTransformC_Parms, ReturnDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_GetByLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_ReturnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::NewProp_ReturnDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ChooseLedgeFindingTransformC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::Cpp_DynamicClimbingComponent_eventChooseLedgeFindingTransformC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::Cpp_DynamicClimbingComponent_eventChooseLedgeFindingTransformC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execChooseLedgeFindingTransformC)
{
	P_GET_UBOOL(Z_Param_GetByLedge);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseLedgeFindingTransformC(Z_Param_GetByLedge,Z_Param_Out_ReturnLocation,Z_Param_Out_ReturnDirection);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ChooseLedgeFindingTransformC

// Begin Class UCpp_DynamicClimbingComponent Function ConvertAxisToNameC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventConvertAxisToNameC_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickaxe Climbing|Base" },
		{ "DisplayName", "Convert Axis To Name" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertAxisToNameC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ConvertAxisToNameC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::Cpp_DynamicClimbingComponent_eventConvertAxisToNameC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::Cpp_DynamicClimbingComponent_eventConvertAxisToNameC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execConvertAxisToNameC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->ConvertAxisToNameC();
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ConvertAxisToNameC

// Begin Class UCpp_DynamicClimbingComponent Function ConvertFloorToCapPositionC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventConvertFloorToCapPositionC_Parms
	{
		FCALS_ComponentAndTransform Center;
		FCALS_ComponentAndTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Transformation" },
		{ "DisplayName", "Convert Floor To Cap Position" },
		{ "Keywords", "Transformation CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertFloorToCapPositionC_Parms, Center), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertFloorToCapPositionC_Parms, ReturnValue), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ConvertFloorToCapPositionC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::Cpp_DynamicClimbingComponent_eventConvertFloorToCapPositionC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::Cpp_DynamicClimbingComponent_eventConvertFloorToCapPositionC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execConvertFloorToCapPositionC)
{
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_Center);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCALS_ComponentAndTransform*)Z_Param__Result=P_THIS->ConvertFloorToCapPositionC(Z_Param_Center);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ConvertFloorToCapPositionC

// Begin Class UCpp_DynamicClimbingComponent Function ConvertLedgeStructToLS
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics
{
	struct Cpp_DynamicClimbingComponent_eventConvertLedgeStructToLS_Parms
	{
		FCMC_SingleClimbPointC SingleClimbPointWS;
		FCALS_ComponentAndTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Transformation" },
		{ "CPP_Default_SingleClimbPointWS", "()" },
		{ "DisplayName", "Convert Ledge Vector To Transform LS" },
		{ "Keywords", "Transformation CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleClimbPointWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::NewProp_SingleClimbPointWS = { "SingleClimbPointWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertLedgeStructToLS_Parms, SingleClimbPointWS), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertLedgeStructToLS_Parms, ReturnValue), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::NewProp_SingleClimbPointWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ConvertLedgeStructToLS", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::Cpp_DynamicClimbingComponent_eventConvertLedgeStructToLS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::Cpp_DynamicClimbingComponent_eventConvertLedgeStructToLS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execConvertLedgeStructToLS)
{
	P_GET_STRUCT(FCMC_SingleClimbPointC,Z_Param_SingleClimbPointWS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCALS_ComponentAndTransform*)Z_Param__Result=P_THIS->ConvertLedgeStructToLS(Z_Param_SingleClimbPointWS);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ConvertLedgeStructToLS

// Begin Class UCpp_DynamicClimbingComponent Function ConvertLedgeStructToWS
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics
{
	struct Cpp_DynamicClimbingComponent_eventConvertLedgeStructToWS_Parms
	{
		FCMC_SingleClimbPointC SingleClimbPointWS;
		FCALS_ComponentAndTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Transformation" },
		{ "CPP_Default_SingleClimbPointWS", "()" },
		{ "DisplayName", "Convert Ledge Vector To Transform WS" },
		{ "Keywords", "Transformation CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleClimbPointWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::NewProp_SingleClimbPointWS = { "SingleClimbPointWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertLedgeStructToWS_Parms, SingleClimbPointWS), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertLedgeStructToWS_Parms, ReturnValue), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::NewProp_SingleClimbPointWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ConvertLedgeStructToWS", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::Cpp_DynamicClimbingComponent_eventConvertLedgeStructToWS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::Cpp_DynamicClimbingComponent_eventConvertLedgeStructToWS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execConvertLedgeStructToWS)
{
	P_GET_STRUCT(FCMC_SingleClimbPointC,Z_Param_SingleClimbPointWS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCALS_ComponentAndTransform*)Z_Param__Result=P_THIS->ConvertLedgeStructToWS(Z_Param_SingleClimbPointWS);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ConvertLedgeStructToWS

// Begin Class UCpp_DynamicClimbingComponent Function ConvertLedgeToCapPositionC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventConvertLedgeToCapPositionC_Parms
	{
		FCALS_ComponentAndTransform Center;
		FCALS_ComponentAndTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Transformation" },
		{ "DisplayName", "Convert Ledge To Cap Position" },
		{ "Keywords", "Transformation CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertLedgeToCapPositionC_Parms, Center), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertLedgeToCapPositionC_Parms, ReturnValue), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ConvertLedgeToCapPositionC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::Cpp_DynamicClimbingComponent_eventConvertLedgeToCapPositionC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::Cpp_DynamicClimbingComponent_eventConvertLedgeToCapPositionC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execConvertLedgeToCapPositionC)
{
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_Center);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCALS_ComponentAndTransform*)Z_Param__Result=P_THIS->ConvertLedgeToCapPositionC(Z_Param_Center);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ConvertLedgeToCapPositionC

// Begin Class UCpp_DynamicClimbingComponent Function ConvertWallToCapPositionC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventConvertWallToCapPositionC_Parms
	{
		FCALS_ComponentAndTransform TransformWS;
		FCALS_ComponentAndTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickaxe Climbing|Base" },
		{ "CompactNodeTitle", "WallToCap" },
		{ "DisplayName", "Convert Wall To Cap Position" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::NewProp_TransformWS = { "TransformWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertWallToCapPositionC_Parms, TransformWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventConvertWallToCapPositionC_Parms, ReturnValue), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::NewProp_TransformWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ConvertWallToCapPositionC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::Cpp_DynamicClimbingComponent_eventConvertWallToCapPositionC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::Cpp_DynamicClimbingComponent_eventConvertWallToCapPositionC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execConvertWallToCapPositionC)
{
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_TransformWS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCALS_ComponentAndTransform*)Z_Param__Result=P_THIS->ConvertWallToCapPositionC(Z_Param_TransformWS);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ConvertWallToCapPositionC

// Begin Class UCpp_DynamicClimbingComponent Function CreateAxisValuesWithInterpFast
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics
{
	struct Cpp_DynamicClimbingComponent_eventCreateAxisValuesWithInterpFast_Parms
	{
		float InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Other" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FUNCTIONS (NOT OVERRIDE)\n" },
#endif
		{ "CPP_Default_InterpSpeed", "5.000000" },
		{ "DisplayName", "Create Axis Values With Interp" },
		{ "Keywords", "Axis" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FUNCTIONS (NOT OVERRIDE)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventCreateAxisValuesWithInterpFast_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "CreateAxisValuesWithInterpFast", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::Cpp_DynamicClimbingComponent_eventCreateAxisValuesWithInterpFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::Cpp_DynamicClimbingComponent_eventCreateAxisValuesWithInterpFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execCreateAxisValuesWithInterpFast)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAxisValuesWithInterpFast(Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function CreateAxisValuesWithInterpFast

// Begin Class UCpp_DynamicClimbingComponent Function DetachRopeOrEndSwingC
struct Cpp_DynamicClimbingComponent_eventDetachRopeOrEndSwingC_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_DynamicClimbingComponent_eventDetachRopeOrEndSwingC_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC = FName(TEXT("DetachRopeOrEndSwingC"));
bool UCpp_DynamicClimbingComponent::DetachRopeOrEndSwingC()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventDetachRopeOrEndSwingC_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return DetachRopeOrEndSwingC_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rope Swing System|Base" },
		{ "DisplayName", "Detach Rope Or End Swing" },
		{ "Keywords", "Rope Swing System" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventDetachRopeOrEndSwingC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventDetachRopeOrEndSwingC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "DetachRopeOrEndSwingC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventDetachRopeOrEndSwingC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventDetachRopeOrEndSwingC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execDetachRopeOrEndSwingC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DetachRopeOrEndSwingC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function DetachRopeOrEndSwingC

// Begin Class UCpp_DynamicClimbingComponent Function FinishRopeSwingC
struct Cpp_DynamicClimbingComponent_eventFinishRopeSwingC_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_DynamicClimbingComponent_eventFinishRopeSwingC_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_DynamicClimbingComponent_FinishRopeSwingC = FName(TEXT("FinishRopeSwingC"));
bool UCpp_DynamicClimbingComponent::FinishRopeSwingC()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_FinishRopeSwingC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventFinishRopeSwingC_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return FinishRopeSwingC_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rope Swing System|Base" },
		{ "DisplayName", "Finish Rope Swing" },
		{ "Keywords", "Rope Swing System" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventFinishRopeSwingC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventFinishRopeSwingC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "FinishRopeSwingC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventFinishRopeSwingC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventFinishRopeSwingC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execFinishRopeSwingC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FinishRopeSwingC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function FinishRopeSwingC

// Begin Class UCpp_DynamicClimbingComponent Function GetCharacterAxisC
struct Cpp_DynamicClimbingComponent_eventGetCharacterAxisC_Parms
{
	float Forward;
	float Right;
};
static const FName NAME_UCpp_DynamicClimbingComponent_GetCharacterAxisC = FName(TEXT("GetCharacterAxisC"));
void UCpp_DynamicClimbingComponent::GetCharacterAxisC(float& Forward, float& Right)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_GetCharacterAxisC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventGetCharacterAxisC_Parms Parms;
		Parms.Forward=Forward;
		Parms.Right=Right;
	ProcessEvent(Func,&Parms);
		Forward=Parms.Forward;
		Right=Parms.Right;
	}
	else
	{
		GetCharacterAxisC_Implementation(Forward, Right);
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Other" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Functions Library (Can Be Override!!!)\n" },
#endif
		{ "DisplayName", "Get Character Axis" },
		{ "Keywords", "Axis Character" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions Library (Can Be Override!!!)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventGetCharacterAxisC_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventGetCharacterAxisC_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::NewProp_Forward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::NewProp_Right,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "GetCharacterAxisC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventGetCharacterAxisC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventGetCharacterAxisC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execGetCharacterAxisC)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Forward);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterAxisC_Implementation(Z_Param_Out_Forward,Z_Param_Out_Right);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function GetCharacterAxisC

// Begin Class UCpp_DynamicClimbingComponent Function GetDirectionByInputC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventGetDirectionByInputC_Parms
	{
		float LerpWithForward;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Other" },
		{ "CPP_Default_LerpWithForward", "0.200000" },
		{ "DisplayName", "Get Direction By Axis Input" },
		{ "Keywords", "Vector" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpWithForward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::NewProp_LerpWithForward = { "LerpWithForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventGetDirectionByInputC_Parms, LerpWithForward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventGetDirectionByInputC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::NewProp_LerpWithForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "GetDirectionByInputC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::Cpp_DynamicClimbingComponent_eventGetDirectionByInputC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::Cpp_DynamicClimbingComponent_eventGetDirectionByInputC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execGetDirectionByInputC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LerpWithForward);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDirectionByInputC(Z_Param_LerpWithForward);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function GetDirectionByInputC

// Begin Class UCpp_DynamicClimbingComponent Function GetFootsRelativeVelocityC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventGetFootsRelativeVelocityC_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Other" },
		{ "DisplayName", "Get Foots Relative Velocity" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventGetFootsRelativeVelocityC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "GetFootsRelativeVelocityC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::Cpp_DynamicClimbingComponent_eventGetFootsRelativeVelocityC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::Cpp_DynamicClimbingComponent_eventGetFootsRelativeVelocityC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execGetFootsRelativeVelocityC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFootsRelativeVelocityC();
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function GetFootsRelativeVelocityC

// Begin Class UCpp_DynamicClimbingComponent Function LedgeValidationPart2C
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics
{
	struct Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms
	{
		bool Valid;
		FCMC_SingleClimbPointC LeftStruct;
		FCMC_SingleClimbPointC RightStruct;
		float MinDistanceBetweenPoints;
		float RotationTollerance;
		float CapsuleUpOffset;
		FVector2D CapsuleChecking;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Ledge Finding" },
		{ "CPP_Default_CapsuleChecking", "(X=90.000,Y=30.000)" },
		{ "CPP_Default_CapsuleUpOffset", "-50.000000" },
		{ "CPP_Default_LeftStruct", "()" },
		{ "CPP_Default_MinDistanceBetweenPoints", "14.000000" },
		{ "CPP_Default_RightStruct", "()" },
		{ "CPP_Default_RotationTollerance", "0.400000" },
		{ "CPP_Default_Valid", "false" },
		{ "DisplayName", "Check Ledge Is Valid Part 2" },
		{ "Keywords", "Transformation CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightStruct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceBetweenPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationTollerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleUpOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleChecking;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_LeftStruct = { "LeftStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms, LeftStruct), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_RightStruct = { "RightStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms, RightStruct), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_MinDistanceBetweenPoints = { "MinDistanceBetweenPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms, MinDistanceBetweenPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_RotationTollerance = { "RotationTollerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms, RotationTollerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_CapsuleUpOffset = { "CapsuleUpOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms, CapsuleUpOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_CapsuleChecking = { "CapsuleChecking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms, CapsuleChecking), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_LeftStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_RightStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_MinDistanceBetweenPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_RotationTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_CapsuleUpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_CapsuleChecking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "LedgeValidationPart2C", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::Cpp_DynamicClimbingComponent_eventLedgeValidationPart2C_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execLedgeValidationPart2C)
{
	P_GET_UBOOL(Z_Param_Valid);
	P_GET_STRUCT(FCMC_SingleClimbPointC,Z_Param_LeftStruct);
	P_GET_STRUCT(FCMC_SingleClimbPointC,Z_Param_RightStruct);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceBetweenPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RotationTollerance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleUpOffset);
	P_GET_STRUCT(FVector2D,Z_Param_CapsuleChecking);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LedgeValidationPart2C(Z_Param_Valid,Z_Param_LeftStruct,Z_Param_RightStruct,Z_Param_MinDistanceBetweenPoints,Z_Param_RotationTollerance,Z_Param_CapsuleUpOffset,Z_Param_CapsuleChecking);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function LedgeValidationPart2C

// Begin Class UCpp_DynamicClimbingComponent Function ReducingVelocityWhenSwingC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventReducingVelocityWhenSwingC_Parms
	{
		float ReductionDampingFactor;
		float VelocityTrigger;
		float SwingingDampingFactor;
		int32 ActionIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rope Swing System|Base" },
		{ "CPP_Default_ActionIndex", "0" },
		{ "CPP_Default_ReductionDampingFactor", "0.250000" },
		{ "CPP_Default_SwingingDampingFactor", "0.600000" },
		{ "CPP_Default_VelocityTrigger", "500.000000" },
		{ "DisplayName", "Reducing Velocity When Swing" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReductionDampingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingingDampingFactor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_ReductionDampingFactor = { "ReductionDampingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventReducingVelocityWhenSwingC_Parms, ReductionDampingFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_VelocityTrigger = { "VelocityTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventReducingVelocityWhenSwingC_Parms, VelocityTrigger), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_SwingingDampingFactor = { "SwingingDampingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventReducingVelocityWhenSwingC_Parms, SwingingDampingFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventReducingVelocityWhenSwingC_Parms, ActionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_ReductionDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_VelocityTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_SwingingDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::NewProp_ActionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ReducingVelocityWhenSwingC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::Cpp_DynamicClimbingComponent_eventReducingVelocityWhenSwingC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::Cpp_DynamicClimbingComponent_eventReducingVelocityWhenSwingC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execReducingVelocityWhenSwingC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReductionDampingFactor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityTrigger);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SwingingDampingFactor);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReducingVelocityWhenSwingC(Z_Param_ReductionDampingFactor,Z_Param_VelocityTrigger,Z_Param_SwingingDampingFactor,Z_Param_ActionIndex);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ReducingVelocityWhenSwingC

// Begin Class UCpp_DynamicClimbingComponent Function ResizeCapsuleToDefaultC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventResizeCapsuleToDefaultC_Parms
	{
		float InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Other" },
		{ "CPP_Default_InterpSpeed", "100.000000" },
		{ "DisplayName", "Resize Radius To Default" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventResizeCapsuleToDefaultC_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "ResizeCapsuleToDefaultC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::Cpp_DynamicClimbingComponent_eventResizeCapsuleToDefaultC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::Cpp_DynamicClimbingComponent_eventResizeCapsuleToDefaultC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execResizeCapsuleToDefaultC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeCapsuleToDefaultC(Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function ResizeCapsuleToDefaultC

// Begin Class UCpp_DynamicClimbingComponent Function RopeHookedConditionC
struct Cpp_DynamicClimbingComponent_eventRopeHookedConditionC_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_DynamicClimbingComponent_eventRopeHookedConditionC_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_DynamicClimbingComponent_RopeHookedConditionC = FName(TEXT("RopeHookedConditionC"));
bool UCpp_DynamicClimbingComponent::RopeHookedConditionC()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_RopeHookedConditionC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventRopeHookedConditionC_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return RopeHookedConditionC_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rope Swing System|Base" },
		{ "DisplayName", "Rope Hooked Condition" },
		{ "Keywords", "Rope Swing System" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventRopeHookedConditionC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventRopeHookedConditionC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "RopeHookedConditionC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventRopeHookedConditionC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventRopeHookedConditionC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execRopeHookedConditionC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RopeHookedConditionC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function RopeHookedConditionC

// Begin Class UCpp_DynamicClimbingComponent Function RopeLenghtUpdateC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms
	{
		UCurveVector* ForceCurve;
		float RopeMinLeght;
		float RopeMaxLenght;
		int32 HandAttachIndex;
		FName TimerName;
		float TimerMaxTime;
		float UpForceStrenght;
		int32 ExpandDivite;
		FVector2D InterpSpeedRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Rope Swing System|Base" },
		{ "CPP_Default_ExpandDivite", "4" },
		{ "CPP_Default_ForceCurve", "None" },
		{ "CPP_Default_HandAttachIndex", "5" },
		{ "CPP_Default_InterpSpeedRange", "(X=6.000,Y=12.000)" },
		{ "CPP_Default_RopeMaxLenght", "800.000000" },
		{ "CPP_Default_RopeMinLeght", "50.000000" },
		{ "CPP_Default_TimerMaxTime", "4.000000" },
		{ "CPP_Default_TimerName", "RopeSwingTimer2" },
		{ "CPP_Default_UpForceStrenght", "-800.000000" },
		{ "DisplayName", "Rope Lenght Update" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RopeMinLeght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RopeMaxLenght;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandAttachIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TimerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerMaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpForceStrenght;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpandDivite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSpeedRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_ForceCurve = { "ForceCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, ForceCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_RopeMinLeght = { "RopeMinLeght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, RopeMinLeght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_RopeMaxLenght = { "RopeMaxLenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, RopeMaxLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_HandAttachIndex = { "HandAttachIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, HandAttachIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_TimerName = { "TimerName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, TimerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_TimerMaxTime = { "TimerMaxTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, TimerMaxTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_UpForceStrenght = { "UpForceStrenght", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, UpForceStrenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_ExpandDivite = { "ExpandDivite", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, ExpandDivite), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_InterpSpeedRange = { "InterpSpeedRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms, InterpSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_ForceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_RopeMinLeght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_RopeMaxLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_HandAttachIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_TimerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_TimerMaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_UpForceStrenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_ExpandDivite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::NewProp_InterpSpeedRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "RopeLenghtUpdateC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::Cpp_DynamicClimbingComponent_eventRopeLenghtUpdateC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execRopeLenghtUpdateC)
{
	P_GET_OBJECT(UCurveVector,Z_Param_ForceCurve);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RopeMinLeght);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RopeMaxLenght);
	P_GET_PROPERTY(FIntProperty,Z_Param_HandAttachIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_TimerName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimerMaxTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpForceStrenght);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExpandDivite);
	P_GET_STRUCT(FVector2D,Z_Param_InterpSpeedRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RopeLenghtUpdateC(Z_Param_ForceCurve,Z_Param_RopeMinLeght,Z_Param_RopeMaxLenght,Z_Param_HandAttachIndex,Z_Param_TimerName,Z_Param_TimerMaxTime,Z_Param_UpForceStrenght,Z_Param_ExpandDivite,Z_Param_InterpSpeedRange);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function RopeLenghtUpdateC

// Begin Class UCpp_DynamicClimbingComponent Function RopeSwingUpdatePhysicC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms
	{
		UCurveVector* RegulationCurve;
		float SwingMinRange;
		float SwingMaxRange;
		int32 HandAttachIndex;
		bool AddtiveCondition;
		float HysteresisMin;
		float GravityStabilityFactor;
		float ForceScaleFactor;
		float InterpSpeedIn;
		float SphereOriginInterpSpeed;
		float RadiusInterpSpeed;
		FVector2D SwingLenghtFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Rope Swing System|Base" },
		{ "CPP_Default_AddtiveCondition", "true" },
		{ "CPP_Default_ForceScaleFactor", "1.000000" },
		{ "CPP_Default_GravityStabilityFactor", "0.100000" },
		{ "CPP_Default_HandAttachIndex", "5" },
		{ "CPP_Default_HysteresisMin", "100.000000" },
		{ "CPP_Default_InterpSpeedIn", "18.000000" },
		{ "CPP_Default_RadiusInterpSpeed", "10.000000" },
		{ "CPP_Default_RegulationCurve", "None" },
		{ "CPP_Default_SphereOriginInterpSpeed", "20.000000" },
		{ "CPP_Default_SwingLenghtFactor", "(X=1.400,Y=1.300)" },
		{ "CPP_Default_SwingMaxRange", "800.000000" },
		{ "CPP_Default_SwingMinRange", "100.000000" },
		{ "DisplayName", "Rope Swing Update Physic" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegulationCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingMinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingMaxRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandAttachIndex;
	static void NewProp_AddtiveCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddtiveCondition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HysteresisMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityStabilityFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceScaleFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereOriginInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusInterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingLenghtFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_RegulationCurve = { "RegulationCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, RegulationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SwingMinRange = { "SwingMinRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, SwingMinRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SwingMaxRange = { "SwingMaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, SwingMaxRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_HandAttachIndex = { "HandAttachIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, HandAttachIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_AddtiveCondition_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms*)Obj)->AddtiveCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_AddtiveCondition = { "AddtiveCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_AddtiveCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_HysteresisMin = { "HysteresisMin", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, HysteresisMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_GravityStabilityFactor = { "GravityStabilityFactor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, GravityStabilityFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_ForceScaleFactor = { "ForceScaleFactor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, ForceScaleFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_InterpSpeedIn = { "InterpSpeedIn", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, InterpSpeedIn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SphereOriginInterpSpeed = { "SphereOriginInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, SphereOriginInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_RadiusInterpSpeed = { "RadiusInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, RadiusInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SwingLenghtFactor = { "SwingLenghtFactor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms, SwingLenghtFactor), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_RegulationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SwingMinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SwingMaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_HandAttachIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_AddtiveCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_HysteresisMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_GravityStabilityFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_ForceScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_InterpSpeedIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SphereOriginInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_RadiusInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::NewProp_SwingLenghtFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "RopeSwingUpdatePhysicC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::Cpp_DynamicClimbingComponent_eventRopeSwingUpdatePhysicC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execRopeSwingUpdatePhysicC)
{
	P_GET_OBJECT(UCurveVector,Z_Param_RegulationCurve);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SwingMinRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SwingMaxRange);
	P_GET_PROPERTY(FIntProperty,Z_Param_HandAttachIndex);
	P_GET_UBOOL(Z_Param_AddtiveCondition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HysteresisMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GravityStabilityFactor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForceScaleFactor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeedIn);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SphereOriginInterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RadiusInterpSpeed);
	P_GET_STRUCT(FVector2D,Z_Param_SwingLenghtFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RopeSwingUpdatePhysicC(Z_Param_RegulationCurve,Z_Param_SwingMinRange,Z_Param_SwingMaxRange,Z_Param_HandAttachIndex,Z_Param_AddtiveCondition,Z_Param_HysteresisMin,Z_Param_GravityStabilityFactor,Z_Param_ForceScaleFactor,Z_Param_InterpSpeedIn,Z_Param_SphereOriginInterpSpeed,Z_Param_RadiusInterpSpeed,Z_Param_SwingLenghtFactor);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function RopeSwingUpdatePhysicC

// Begin Class UCpp_DynamicClimbingComponent Function StartedPickaxeClimbC
struct Cpp_DynamicClimbingComponent_eventStartedPickaxeClimbC_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_DynamicClimbingComponent_eventStartedPickaxeClimbC_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC = FName(TEXT("StartedPickaxeClimbC"));
bool UCpp_DynamicClimbingComponent::StartedPickaxeClimbC()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventStartedPickaxeClimbC_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return StartedPickaxeClimbC_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickaxe Climbing|Base" },
		{ "DisplayName", "Started Pickaxe Climb" },
		{ "Keywords", "Zipline" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventStartedPickaxeClimbC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventStartedPickaxeClimbC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "StartedPickaxeClimbC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventStartedPickaxeClimbC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventStartedPickaxeClimbC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execStartedPickaxeClimbC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartedPickaxeClimbC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function StartedPickaxeClimbC

// Begin Class UCpp_DynamicClimbingComponent Function StartedZiplineC
struct Cpp_DynamicClimbingComponent_eventStartedZiplineC_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_DynamicClimbingComponent_eventStartedZiplineC_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_DynamicClimbingComponent_StartedZiplineC = FName(TEXT("StartedZiplineC"));
bool UCpp_DynamicClimbingComponent::StartedZiplineC()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_StartedZiplineC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventStartedZiplineC_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return StartedZiplineC_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zipline System" },
		{ "DisplayName", "Started Zipline" },
		{ "Keywords", "Zipline" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventStartedZiplineC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventStartedZiplineC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "StartedZiplineC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventStartedZiplineC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventStartedZiplineC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execStartedZiplineC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartedZiplineC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function StartedZiplineC

// Begin Class UCpp_DynamicClimbingComponent Function TryCreateLedgeStructureC
struct Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms
{
	bool Valid;
	FCMC_SingleClimbPointC LeftPoint;
	FCMC_SingleClimbPointC RightPoint;
	FCMC_SingleClimbPointC OriginPoint;
	bool FirstNotValid;
	FVector TraceOrigin;
	FVector TraceDirection;
	FVector2D AxisNormals;
	float Z_Offset;
	float ForwardTraceLength;
	float RightOffsetScale;
	bool UseWallCondition;
	bool InverseTracing;
};
static const FName NAME_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC = FName(TEXT("TryCreateLedgeStructureC"));
void UCpp_DynamicClimbingComponent::TryCreateLedgeStructureC(bool& Valid, FCMC_SingleClimbPointC& LeftPoint, FCMC_SingleClimbPointC& RightPoint, FCMC_SingleClimbPointC& OriginPoint, bool& FirstNotValid, FVector TraceOrigin, FVector TraceDirection, FVector2D AxisNormals, float Z_Offset, float ForwardTraceLength, float RightOffsetScale, bool UseWallCondition, bool InverseTracing)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms Parms;
		Parms.Valid=Valid ? true : false;
		Parms.LeftPoint=LeftPoint;
		Parms.RightPoint=RightPoint;
		Parms.OriginPoint=OriginPoint;
		Parms.FirstNotValid=FirstNotValid ? true : false;
		Parms.TraceOrigin=TraceOrigin;
		Parms.TraceDirection=TraceDirection;
		Parms.AxisNormals=AxisNormals;
		Parms.Z_Offset=Z_Offset;
		Parms.ForwardTraceLength=ForwardTraceLength;
		Parms.RightOffsetScale=RightOffsetScale;
		Parms.UseWallCondition=UseWallCondition ? true : false;
		Parms.InverseTracing=InverseTracing ? true : false;
	ProcessEvent(Func,&Parms);
		Valid=Parms.Valid;
		LeftPoint=Parms.LeftPoint;
		RightPoint=Parms.RightPoint;
		OriginPoint=Parms.OriginPoint;
		FirstNotValid=Parms.FirstNotValid;
	}
	else
	{
		TryCreateLedgeStructureC_Implementation(Valid, LeftPoint, RightPoint, OriginPoint, FirstNotValid, TraceOrigin, TraceDirection, AxisNormals, Z_Offset, ForwardTraceLength, RightOffsetScale, UseWallCondition, InverseTracing);
	}
}
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Ledge Finding" },
		{ "CPP_Default_AxisNormals", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_ForwardTraceLength", "45.000000" },
		{ "CPP_Default_InverseTracing", "true" },
		{ "CPP_Default_RightOffsetScale", "1.000000" },
		{ "CPP_Default_TraceDirection", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_TraceOrigin", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_UseWallCondition", "true" },
		{ "CPP_Default_Z_Offset", "0.000000" },
		{ "DisplayName", "Try Create Ledge Structure" },
		{ "Keywords", "CPP Ledge" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginPoint;
	static void NewProp_FirstNotValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstNotValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisNormals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardTraceLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightOffsetScale;
	static void NewProp_UseWallCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseWallCondition;
	static void NewProp_InverseTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InverseTracing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_LeftPoint = { "LeftPoint", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, LeftPoint), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_RightPoint = { "RightPoint", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, RightPoint), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_OriginPoint = { "OriginPoint", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, OriginPoint), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_FirstNotValid_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms*)Obj)->FirstNotValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_FirstNotValid = { "FirstNotValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_FirstNotValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_TraceOrigin = { "TraceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, TraceOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_TraceDirection = { "TraceDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, TraceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_AxisNormals = { "AxisNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, AxisNormals), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_Z_Offset = { "Z_Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, Z_Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_ForwardTraceLength = { "ForwardTraceLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, ForwardTraceLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_RightOffsetScale = { "RightOffsetScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms, RightOffsetScale), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_UseWallCondition_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms*)Obj)->UseWallCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_UseWallCondition = { "UseWallCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_UseWallCondition_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_InverseTracing_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms*)Obj)->InverseTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_InverseTracing = { "InverseTracing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_InverseTracing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_LeftPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_RightPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_OriginPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_FirstNotValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_TraceOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_TraceDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_AxisNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_Z_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_ForwardTraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_RightOffsetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_UseWallCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::NewProp_InverseTracing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "TryCreateLedgeStructureC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::PropPointers), sizeof(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_DynamicClimbingComponent_eventTryCreateLedgeStructureC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execTryCreateLedgeStructureC)
{
	P_GET_UBOOL_REF(Z_Param_Out_Valid);
	P_GET_STRUCT_REF(FCMC_SingleClimbPointC,Z_Param_Out_LeftPoint);
	P_GET_STRUCT_REF(FCMC_SingleClimbPointC,Z_Param_Out_RightPoint);
	P_GET_STRUCT_REF(FCMC_SingleClimbPointC,Z_Param_Out_OriginPoint);
	P_GET_UBOOL_REF(Z_Param_Out_FirstNotValid);
	P_GET_STRUCT(FVector,Z_Param_TraceOrigin);
	P_GET_STRUCT(FVector,Z_Param_TraceDirection);
	P_GET_STRUCT(FVector2D,Z_Param_AxisNormals);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Z_Offset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardTraceLength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RightOffsetScale);
	P_GET_UBOOL(Z_Param_UseWallCondition);
	P_GET_UBOOL(Z_Param_InverseTracing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryCreateLedgeStructureC_Implementation(Z_Param_Out_Valid,Z_Param_Out_LeftPoint,Z_Param_Out_RightPoint,Z_Param_Out_OriginPoint,Z_Param_Out_FirstNotValid,Z_Param_TraceOrigin,Z_Param_TraceDirection,Z_Param_AxisNormals,Z_Param_Z_Offset,Z_Param_ForwardTraceLength,Z_Param_RightOffsetScale,Z_Param_UseWallCondition,Z_Param_InverseTracing);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function TryCreateLedgeStructureC

// Begin Class UCpp_DynamicClimbingComponent Function TryFindHookPointC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms
	{
		AActor* HookActor;
		TEnumAsByte<EObjectTypeQuery> TraceObject;
		float FindingRadius;
		float CapsuleHeightScale;
		FVector Direction;
		float DistancePioryty;
		int32 DrawDebug;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Rope Swing System|Base" },
		{ "CPP_Default_CapsuleHeightScale", "5.000000" },
		{ "CPP_Default_Direction", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_DistancePioryty", "0.500000" },
		{ "CPP_Default_DrawDebug", "0" },
		{ "CPP_Default_FindingRadius", "200.000000" },
		{ "DisplayName", "Try Find Hook Point" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HookActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FindingRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHeightScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistancePioryty;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawDebug;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_HookActor = { "HookActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms, HookActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_TraceObject = { "TraceObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms, TraceObject), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_FindingRadius = { "FindingRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms, FindingRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_CapsuleHeightScale = { "CapsuleHeightScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms, CapsuleHeightScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_DistancePioryty = { "DistancePioryty", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms, DistancePioryty), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms, DrawDebug), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_HookActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_TraceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_FindingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_CapsuleHeightScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_DistancePioryty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "TryFindHookPointC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::Cpp_DynamicClimbingComponent_eventTryFindHookPointC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execTryFindHookPointC)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_HookActor);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FindingRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleHeightScale);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistancePioryty);
	P_GET_PROPERTY(FIntProperty,Z_Param_DrawDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryFindHookPointC(P_ARG_GC_BARRIER(Z_Param_Out_HookActor),EObjectTypeQuery(Z_Param_TraceObject),Z_Param_FindingRadius,Z_Param_CapsuleHeightScale,Z_Param_Direction,Z_Param_DistancePioryty,Z_Param_DrawDebug);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function TryFindHookPointC

// Begin Class UCpp_DynamicClimbingComponent Function TryFindTangentForWallC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms
	{
		bool ReturnValid;
		FCALS_ComponentAndTransform TransformWS;
		FVector FindingLocation;
		FVector FindingDirection;
		float FindingLength;
		float FirstRadius;
		float DistanceOffsetScale;
		int32 VerticalAccuracy;
		FVector2D CapsuleSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickaxe Climbing|Base" },
		{ "CPP_Default_CapsuleSize", "(X=30.000,Y=90.000)" },
		{ "CPP_Default_DistanceOffsetScale", "-0.500000" },
		{ "CPP_Default_FindingLength", "80.000000" },
		{ "CPP_Default_FirstRadius", "20.000000" },
		{ "CPP_Default_VerticalAccuracy", "2" },
		{ "DisplayName", "Try Find Tangent For Wall" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FindingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FindingDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FindingLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceOffsetScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalAccuracy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_ReturnValid_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms*)Obj)->ReturnValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_ReturnValid = { "ReturnValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_ReturnValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_TransformWS = { "TransformWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, TransformWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FindingLocation = { "FindingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, FindingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FindingDirection = { "FindingDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, FindingDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FindingLength = { "FindingLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, FindingLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FirstRadius = { "FirstRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, FirstRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_DistanceOffsetScale = { "DistanceOffsetScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, DistanceOffsetScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_VerticalAccuracy = { "VerticalAccuracy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, VerticalAccuracy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_CapsuleSize = { "CapsuleSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms, CapsuleSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_ReturnValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_TransformWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FindingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FindingDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FindingLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_FirstRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_DistanceOffsetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_VerticalAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::NewProp_CapsuleSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "TryFindTangentForWallC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::Cpp_DynamicClimbingComponent_eventTryFindTangentForWallC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execTryFindTangentForWallC)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValid);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_TransformWS);
	P_GET_STRUCT(FVector,Z_Param_FindingLocation);
	P_GET_STRUCT(FVector,Z_Param_FindingDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FindingLength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FirstRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceOffsetScale);
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticalAccuracy);
	P_GET_STRUCT(FVector2D,Z_Param_CapsuleSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryFindTangentForWallC(Z_Param_Out_ReturnValid,Z_Param_Out_TransformWS,Z_Param_FindingLocation,Z_Param_FindingDirection,Z_Param_FindingLength,Z_Param_FirstRadius,Z_Param_DistanceOffsetScale,Z_Param_VerticalAccuracy,Z_Param_CapsuleSize);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function TryFindTangentForWallC

// Begin Class UCpp_DynamicClimbingComponent Function UpdateAirControlC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms
	{
		int32 ActionIndex;
		float RopeMinLenght;
		float SwingMinRange;
		float SwingMaxRange;
		FVector2D AirControlRange;
		float SwingMinBias;
		float InterpToSpeed;
		float ReduceToZeroSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Rope Swing System|Base" },
		{ "CPP_Default_ActionIndex", "0" },
		{ "CPP_Default_AirControlRange", "(X=0.070,Y=0.130)" },
		{ "CPP_Default_InterpToSpeed", "8.000000" },
		{ "CPP_Default_ReduceToZeroSpeed", "10.000000" },
		{ "CPP_Default_RopeMinLenght", "50.000000" },
		{ "CPP_Default_SwingMaxRange", "800.000000" },
		{ "CPP_Default_SwingMinBias", "100.000000" },
		{ "CPP_Default_SwingMinRange", "100.000000" },
		{ "DisplayName", "Update Air Control" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RopeMinLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingMinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingMaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AirControlRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingMinBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpToSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReduceToZeroSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, ActionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_RopeMinLenght = { "RopeMinLenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, RopeMinLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_SwingMinRange = { "SwingMinRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, SwingMinRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_SwingMaxRange = { "SwingMaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, SwingMaxRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_AirControlRange = { "AirControlRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, AirControlRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_SwingMinBias = { "SwingMinBias", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, SwingMinBias), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_InterpToSpeed = { "InterpToSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, InterpToSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_ReduceToZeroSpeed = { "ReduceToZeroSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms, ReduceToZeroSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_ActionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_RopeMinLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_SwingMinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_SwingMaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_AirControlRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_SwingMinBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_InterpToSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::NewProp_ReduceToZeroSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "UpdateAirControlC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::Cpp_DynamicClimbingComponent_eventUpdateAirControlC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execUpdateAirControlC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ActionIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RopeMinLenght);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SwingMinRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SwingMaxRange);
	P_GET_STRUCT(FVector2D,Z_Param_AirControlRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SwingMinBias);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpToSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReduceToZeroSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAirControlC(Z_Param_ActionIndex,Z_Param_RopeMinLenght,Z_Param_SwingMinRange,Z_Param_SwingMaxRange,Z_Param_AirControlRange,Z_Param_SwingMinBias,Z_Param_InterpToSpeed,Z_Param_ReduceToZeroSpeed);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function UpdateAirControlC

// Begin Class UCpp_DynamicClimbingComponent Function UpdateLedgePerFrameC
struct Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics
{
	struct Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms
	{
		FCMC_LedgeC OutLedge;
		FVector OutOrigin;
		FVector2D SlopeScale;
		float ConstMovementOffset;
		bool InputLock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "New Climbing System|Do While Climbing" },
		{ "CPP_Default_ConstMovementOffset", "2.000000" },
		{ "CPP_Default_InputLock", "false" },
		{ "CPP_Default_SlopeScale", "(X=1.000,Y=0.400)" },
		{ "DisplayName", "Update Ledge Per Frame" },
		{ "Keywords", "CPP" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLedge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlopeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstMovementOffset;
	static void NewProp_InputLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InputLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_OutLedge = { "OutLedge", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms, OutLedge), Z_Construct_UScriptStruct_FCMC_LedgeC, METADATA_PARAMS(0, nullptr) }; // 38286648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_OutOrigin = { "OutOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms, OutOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_SlopeScale = { "SlopeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms, SlopeScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_ConstMovementOffset = { "ConstMovementOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms, ConstMovementOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_InputLock_SetBit(void* Obj)
{
	((Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms*)Obj)->InputLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_InputLock = { "InputLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms), &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_InputLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_OutLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_OutOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_SlopeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_ConstMovementOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::NewProp_InputLock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_DynamicClimbingComponent, nullptr, "UpdateLedgePerFrameC", nullptr, nullptr, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::Cpp_DynamicClimbingComponent_eventUpdateLedgePerFrameC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_DynamicClimbingComponent::execUpdateLedgePerFrameC)
{
	P_GET_STRUCT_REF(FCMC_LedgeC,Z_Param_Out_OutLedge);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutOrigin);
	P_GET_STRUCT(FVector2D,Z_Param_SlopeScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ConstMovementOffset);
	P_GET_UBOOL(Z_Param_InputLock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLedgePerFrameC(Z_Param_Out_OutLedge,Z_Param_Out_OutOrigin,Z_Param_SlopeScale,Z_Param_ConstMovementOffset,Z_Param_InputLock);
	P_NATIVE_END;
}
// End Class UCpp_DynamicClimbingComponent Function UpdateLedgePerFrameC

// Begin Class UCpp_DynamicClimbingComponent
void UCpp_DynamicClimbingComponent::StaticRegisterNativesUCpp_DynamicClimbingComponent()
{
	UClass* Class = UCpp_DynamicClimbingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCanDropToLedgeC", &UCpp_DynamicClimbingComponent::execCheckCanDropToLedgeC },
		{ "CheckCanJumpBackC", &UCpp_DynamicClimbingComponent::execCheckCanJumpBackC },
		{ "CheckCanStartCornerC", &UCpp_DynamicClimbingComponent::execCheckCanStartCornerC },
		{ "CheckFootIkValidC", &UCpp_DynamicClimbingComponent::execCheckFootIkValidC },
		{ "CheckNormalForPointC", &UCpp_DynamicClimbingComponent::execCheckNormalForPointC },
		{ "CheckPlayerCanMoveToWallC", &UCpp_DynamicClimbingComponent::execCheckPlayerCanMoveToWallC },
		{ "ChooseLedgeFindingTransformC", &UCpp_DynamicClimbingComponent::execChooseLedgeFindingTransformC },
		{ "ConvertAxisToNameC", &UCpp_DynamicClimbingComponent::execConvertAxisToNameC },
		{ "ConvertFloorToCapPositionC", &UCpp_DynamicClimbingComponent::execConvertFloorToCapPositionC },
		{ "ConvertLedgeStructToLS", &UCpp_DynamicClimbingComponent::execConvertLedgeStructToLS },
		{ "ConvertLedgeStructToWS", &UCpp_DynamicClimbingComponent::execConvertLedgeStructToWS },
		{ "ConvertLedgeToCapPositionC", &UCpp_DynamicClimbingComponent::execConvertLedgeToCapPositionC },
		{ "ConvertWallToCapPositionC", &UCpp_DynamicClimbingComponent::execConvertWallToCapPositionC },
		{ "CreateAxisValuesWithInterpFast", &UCpp_DynamicClimbingComponent::execCreateAxisValuesWithInterpFast },
		{ "DetachRopeOrEndSwingC", &UCpp_DynamicClimbingComponent::execDetachRopeOrEndSwingC },
		{ "FinishRopeSwingC", &UCpp_DynamicClimbingComponent::execFinishRopeSwingC },
		{ "GetCharacterAxisC", &UCpp_DynamicClimbingComponent::execGetCharacterAxisC },
		{ "GetDirectionByInputC", &UCpp_DynamicClimbingComponent::execGetDirectionByInputC },
		{ "GetFootsRelativeVelocityC", &UCpp_DynamicClimbingComponent::execGetFootsRelativeVelocityC },
		{ "LedgeValidationPart2C", &UCpp_DynamicClimbingComponent::execLedgeValidationPart2C },
		{ "ReducingVelocityWhenSwingC", &UCpp_DynamicClimbingComponent::execReducingVelocityWhenSwingC },
		{ "ResizeCapsuleToDefaultC", &UCpp_DynamicClimbingComponent::execResizeCapsuleToDefaultC },
		{ "RopeHookedConditionC", &UCpp_DynamicClimbingComponent::execRopeHookedConditionC },
		{ "RopeLenghtUpdateC", &UCpp_DynamicClimbingComponent::execRopeLenghtUpdateC },
		{ "RopeSwingUpdatePhysicC", &UCpp_DynamicClimbingComponent::execRopeSwingUpdatePhysicC },
		{ "StartedPickaxeClimbC", &UCpp_DynamicClimbingComponent::execStartedPickaxeClimbC },
		{ "StartedZiplineC", &UCpp_DynamicClimbingComponent::execStartedZiplineC },
		{ "TryCreateLedgeStructureC", &UCpp_DynamicClimbingComponent::execTryCreateLedgeStructureC },
		{ "TryFindHookPointC", &UCpp_DynamicClimbingComponent::execTryFindHookPointC },
		{ "TryFindTangentForWallC", &UCpp_DynamicClimbingComponent::execTryFindTangentForWallC },
		{ "UpdateAirControlC", &UCpp_DynamicClimbingComponent::execUpdateAirControlC },
		{ "UpdateLedgePerFrameC", &UCpp_DynamicClimbingComponent::execUpdateLedgePerFrameC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_DynamicClimbingComponent);
UClass* Z_Construct_UClass_UCpp_DynamicClimbingComponent_NoRegister()
{
	return UCpp_DynamicClimbingComponent::StaticClass();
}
struct Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_DynamicClimbingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsClimbingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Base Bools Values\n" },
#endif
		{ "DisplayName", "IsClimbingC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Bools Values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeHangC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Base" },
		{ "DisplayName", "FreeHangC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNarrowFloorMovementC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Base" },
		{ "DisplayName", "StartNarrowFloorMovementC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main Action Enum\n" },
#endif
		{ "DisplayName", "ActionC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Action Enum" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgePointsLS_C_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Transforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Transformations\n" },
#endif
		{ "DisplayName", "LedgePointsLS C" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transformations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedLedgePointsLS_C_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Transforms" },
		{ "DisplayName", "CachedLedgePointsLS C" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Init Values\n" },
#endif
		{ "DisplayName", "DefCapsuleSizeC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Init Values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrowFloorCapRadiusC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
		{ "DisplayName", "NarrowFloorCapRadiusC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleUpOffsetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
		{ "DisplayName", "CapsuleUpOffsetC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstCapsuleOffsetBetWallC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Pickaxe Climbing|Config" },
		{ "DisplayName", "ConstCapsuleOffsetBetWallC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickaxeClimbChannelC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Pickaxe Climbing|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Picaxe Climbing\n" },
#endif
		{ "DisplayName", "PickaxeClimbChannelC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Picaxe Climbing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
		{ "DisplayName", "CharacterC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForClimbingChannelC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
		{ "DisplayName", "ForClimbingChannelC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassToIgnoreByLedgeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
		{ "DisplayName", "ClassToIgnoreByLedge" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
		{ "DisplayName", "DebugTraceIndex" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootsDefOffsetsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Config" },
		{ "DisplayName", "FootsDefOffsetC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValuesInterpC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Other\n" },
#endif
		{ "DisplayName", "AxisValuesInterpC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Other" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValuesInterpSlowC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Inputs" },
		{ "DisplayName", "AxisValuesInterpSlowC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValuesC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Inputs" },
		{ "DisplayName", "AxisValuesC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootsRelativeVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Time" },
		{ "DisplayName", "FootsRelativeVelocityC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpBackPoseAlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Animations" },
		{ "DisplayName", "JumpBackPoseAlphaC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftPressedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Inputs Bools\n" },
#endif
		{ "DisplayName", "ShiftPressedC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inputs Bools" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceBarImpulseC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "New Climbing System|Inputs" },
		{ "DisplayName", "SpaceBarImpulseC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstSwingLenghtOffsetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-]\n// ROPE SWING SYSTEM VARIABLES:\n" },
#endif
		{ "DisplayName", "ConstSwingLenghtOffsetC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-] - [-]\nROPE SWING SYSTEM VARIABLES:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingDebugIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System|Config" },
		{ "DisplayName", "SwingDebugIndexC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableSimC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "CableSimComponentC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HookActorC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "HookActorC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSwingingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "IsSwingingC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFallingStartedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "bIsFallingStartedC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPointInterpC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "AnchorPointInterpC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingRadiusSmoothC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "SwingRadiusSmoothC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetForceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "TargetForceC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityStabilityForceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "GravityStabilityForceC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "CollisionIndexC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingAnimPropertyC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "SwingAnimPropertyC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRopeLenghtC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Rope Swing System" },
		{ "DisplayName", "TargetRopeLenghtC" },
		{ "ModuleRelativePath", "Public/Cpp_DynamicClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsClimbingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsClimbingC;
	static void NewProp_FreeHangC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FreeHangC;
	static void NewProp_StartNarrowFloorMovementC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartNarrowFloorMovementC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgePointsLS_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLedgePointsLS_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapsuleSizeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NarrowFloorCapRadiusC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleUpOffsetC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstCapsuleOffsetBetWallC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PickaxeClimbChannelC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForClimbingChannelC;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToIgnoreByLedgeC_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassToIgnoreByLedgeC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugTraceIndexC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootsDefOffsetsC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValuesInterpC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValuesInterpSlowC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValuesC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootsRelativeVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JumpBackPoseAlphaC;
	static void NewProp_ShiftPressedC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShiftPressedC;
	static void NewProp_SpaceBarImpulseC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpaceBarImpulseC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstSwingLenghtOffsetC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SwingDebugIndexC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CableSimC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HookActorC;
	static void NewProp_bIsSwingingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSwingingC;
	static void NewProp_bIsFallingStartedC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFallingStartedC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPointInterpC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingRadiusSmoothC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetForceC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityStabilityForceC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionIndexC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingAnimPropertyC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRopeLenghtC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanDropToLedgeC, "CheckCanDropToLedgeC" }, // 42604544
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanJumpBackC, "CheckCanJumpBackC" }, // 644265241
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckCanStartCornerC, "CheckCanStartCornerC" }, // 4200316200
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckFootIkValidC, "CheckFootIkValidC" }, // 2409524073
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckNormalForPointC, "CheckNormalForPointC" }, // 317273559
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CheckPlayerCanMoveToWallC, "CheckPlayerCanMoveToWallC" }, // 3821571031
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ChooseLedgeFindingTransformC, "ChooseLedgeFindingTransformC" }, // 84859880
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertAxisToNameC, "ConvertAxisToNameC" }, // 1541988345
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertFloorToCapPositionC, "ConvertFloorToCapPositionC" }, // 2225033382
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToLS, "ConvertLedgeStructToLS" }, // 2987484148
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeStructToWS, "ConvertLedgeStructToWS" }, // 2870568939
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertLedgeToCapPositionC, "ConvertLedgeToCapPositionC" }, // 4113498803
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ConvertWallToCapPositionC, "ConvertWallToCapPositionC" }, // 2571989791
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_CreateAxisValuesWithInterpFast, "CreateAxisValuesWithInterpFast" }, // 488517197
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_DetachRopeOrEndSwingC, "DetachRopeOrEndSwingC" }, // 4114369250
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_FinishRopeSwingC, "FinishRopeSwingC" }, // 61559799
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetCharacterAxisC, "GetCharacterAxisC" }, // 408148302
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetDirectionByInputC, "GetDirectionByInputC" }, // 55602964
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_GetFootsRelativeVelocityC, "GetFootsRelativeVelocityC" }, // 1313651693
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_LedgeValidationPart2C, "LedgeValidationPart2C" }, // 18955986
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ReducingVelocityWhenSwingC, "ReducingVelocityWhenSwingC" }, // 753429961
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_ResizeCapsuleToDefaultC, "ResizeCapsuleToDefaultC" }, // 2178038686
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeHookedConditionC, "RopeHookedConditionC" }, // 2369229308
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeLenghtUpdateC, "RopeLenghtUpdateC" }, // 1894643124
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_RopeSwingUpdatePhysicC, "RopeSwingUpdatePhysicC" }, // 2770236979
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedPickaxeClimbC, "StartedPickaxeClimbC" }, // 1249361568
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_StartedZiplineC, "StartedZiplineC" }, // 2959034457
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryCreateLedgeStructureC, "TryCreateLedgeStructureC" }, // 3617204650
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindHookPointC, "TryFindHookPointC" }, // 3546902512
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_TryFindTangentForWallC, "TryFindTangentForWallC" }, // 1987911614
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateAirControlC, "UpdateAirControlC" }, // 2193255801
		{ &Z_Construct_UFunction_UCpp_DynamicClimbingComponent_UpdateLedgePerFrameC, "UpdateLedgePerFrameC" }, // 2282530675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_DynamicClimbingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_IsClimbingC_SetBit(void* Obj)
{
	((UCpp_DynamicClimbingComponent*)Obj)->IsClimbingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_IsClimbingC = { "IsClimbingC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_DynamicClimbingComponent), &Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_IsClimbingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsClimbingC_MetaData), NewProp_IsClimbingC_MetaData) };
void Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FreeHangC_SetBit(void* Obj)
{
	((UCpp_DynamicClimbingComponent*)Obj)->FreeHangC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FreeHangC = { "FreeHangC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_DynamicClimbingComponent), &Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FreeHangC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeHangC_MetaData), NewProp_FreeHangC_MetaData) };
void Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_StartNarrowFloorMovementC_SetBit(void* Obj)
{
	((UCpp_DynamicClimbingComponent*)Obj)->StartNarrowFloorMovementC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_StartNarrowFloorMovementC = { "StartNarrowFloorMovementC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_DynamicClimbingComponent), &Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_StartNarrowFloorMovementC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNarrowFloorMovementC_MetaData), NewProp_StartNarrowFloorMovementC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ActionC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ActionC = { "ActionC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, ActionC), Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionC_MetaData), NewProp_ActionC_MetaData) }; // 3053408074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_LedgePointsLS_C = { "LedgePointsLS_C", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, LedgePointsLS_C), Z_Construct_UScriptStruct_FCMC_LedgeC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgePointsLS_C_MetaData), NewProp_LedgePointsLS_C_MetaData) }; // 38286648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CachedLedgePointsLS_C = { "CachedLedgePointsLS_C", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, CachedLedgePointsLS_C), Z_Construct_UScriptStruct_FCMC_LedgeC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedLedgePointsLS_C_MetaData), NewProp_CachedLedgePointsLS_C_MetaData) }; // 38286648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_DefCapsuleSizeC = { "DefCapsuleSizeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, DefCapsuleSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapsuleSizeC_MetaData), NewProp_DefCapsuleSizeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_NarrowFloorCapRadiusC = { "NarrowFloorCapRadiusC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, NarrowFloorCapRadiusC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrowFloorCapRadiusC_MetaData), NewProp_NarrowFloorCapRadiusC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CapsuleUpOffsetC = { "CapsuleUpOffsetC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, CapsuleUpOffsetC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleUpOffsetC_MetaData), NewProp_CapsuleUpOffsetC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ConstCapsuleOffsetBetWallC = { "ConstCapsuleOffsetBetWallC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, ConstCapsuleOffsetBetWallC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstCapsuleOffsetBetWallC_MetaData), NewProp_ConstCapsuleOffsetBetWallC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_PickaxeClimbChannelC = { "PickaxeClimbChannelC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, PickaxeClimbChannelC), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickaxeClimbChannelC_MetaData), NewProp_PickaxeClimbChannelC_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterC_MetaData), NewProp_CharacterC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ForClimbingChannelC = { "ForClimbingChannelC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, ForClimbingChannelC), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForClimbingChannelC_MetaData), NewProp_ForClimbingChannelC_MetaData) }; // 756624936
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ClassToIgnoreByLedgeC_Inner = { "ClassToIgnoreByLedgeC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ClassToIgnoreByLedgeC = { "ClassToIgnoreByLedgeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, ClassToIgnoreByLedgeC), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassToIgnoreByLedgeC_MetaData), NewProp_ClassToIgnoreByLedgeC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_DebugTraceIndexC = { "DebugTraceIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, DebugTraceIndexC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceIndexC_MetaData), NewProp_DebugTraceIndexC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FootsDefOffsetsC = { "FootsDefOffsetsC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, FootsDefOffsetsC), Z_Construct_UScriptStruct_FTwoVectors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootsDefOffsetsC_MetaData), NewProp_FootsDefOffsetsC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AxisValuesInterpC = { "AxisValuesInterpC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, AxisValuesInterpC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValuesInterpC_MetaData), NewProp_AxisValuesInterpC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AxisValuesInterpSlowC = { "AxisValuesInterpSlowC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, AxisValuesInterpSlowC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValuesInterpSlowC_MetaData), NewProp_AxisValuesInterpSlowC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AxisValuesC = { "AxisValuesC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, AxisValuesC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValuesC_MetaData), NewProp_AxisValuesC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FootsRelativeVelocityC = { "FootsRelativeVelocityC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, FootsRelativeVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootsRelativeVelocityC_MetaData), NewProp_FootsRelativeVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_JumpBackPoseAlphaC = { "JumpBackPoseAlphaC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, JumpBackPoseAlphaC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpBackPoseAlphaC_MetaData), NewProp_JumpBackPoseAlphaC_MetaData) };
void Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ShiftPressedC_SetBit(void* Obj)
{
	((UCpp_DynamicClimbingComponent*)Obj)->ShiftPressedC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ShiftPressedC = { "ShiftPressedC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_DynamicClimbingComponent), &Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ShiftPressedC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftPressedC_MetaData), NewProp_ShiftPressedC_MetaData) };
void Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SpaceBarImpulseC_SetBit(void* Obj)
{
	((UCpp_DynamicClimbingComponent*)Obj)->SpaceBarImpulseC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SpaceBarImpulseC = { "SpaceBarImpulseC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_DynamicClimbingComponent), &Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SpaceBarImpulseC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceBarImpulseC_MetaData), NewProp_SpaceBarImpulseC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ConstSwingLenghtOffsetC = { "ConstSwingLenghtOffsetC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, ConstSwingLenghtOffsetC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstSwingLenghtOffsetC_MetaData), NewProp_ConstSwingLenghtOffsetC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SwingDebugIndexC = { "SwingDebugIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, SwingDebugIndexC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingDebugIndexC_MetaData), NewProp_SwingDebugIndexC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CableSimC = { "CableSimC", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, CableSimC), Z_Construct_UClass_UJakubCablePhysic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableSimC_MetaData), NewProp_CableSimC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_HookActorC = { "HookActorC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, HookActorC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HookActorC_MetaData), NewProp_HookActorC_MetaData) };
void Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsSwingingC_SetBit(void* Obj)
{
	((UCpp_DynamicClimbingComponent*)Obj)->bIsSwingingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsSwingingC = { "bIsSwingingC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_DynamicClimbingComponent), &Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsSwingingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSwingingC_MetaData), NewProp_bIsSwingingC_MetaData) };
void Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsFallingStartedC_SetBit(void* Obj)
{
	((UCpp_DynamicClimbingComponent*)Obj)->bIsFallingStartedC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsFallingStartedC = { "bIsFallingStartedC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_DynamicClimbingComponent), &Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsFallingStartedC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFallingStartedC_MetaData), NewProp_bIsFallingStartedC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AnchorPointInterpC = { "AnchorPointInterpC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, AnchorPointInterpC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPointInterpC_MetaData), NewProp_AnchorPointInterpC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SwingRadiusSmoothC = { "SwingRadiusSmoothC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, SwingRadiusSmoothC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingRadiusSmoothC_MetaData), NewProp_SwingRadiusSmoothC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_TargetForceC = { "TargetForceC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, TargetForceC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetForceC_MetaData), NewProp_TargetForceC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_GravityStabilityForceC = { "GravityStabilityForceC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, GravityStabilityForceC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityStabilityForceC_MetaData), NewProp_GravityStabilityForceC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CollisionIndexC = { "CollisionIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, CollisionIndexC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionIndexC_MetaData), NewProp_CollisionIndexC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SwingAnimPropertyC = { "SwingAnimPropertyC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, SwingAnimPropertyC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingAnimPropertyC_MetaData), NewProp_SwingAnimPropertyC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_TargetRopeLenghtC = { "TargetRopeLenghtC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_DynamicClimbingComponent, TargetRopeLenghtC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRopeLenghtC_MetaData), NewProp_TargetRopeLenghtC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_IsClimbingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FreeHangC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_StartNarrowFloorMovementC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ActionC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ActionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_LedgePointsLS_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CachedLedgePointsLS_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_DefCapsuleSizeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_NarrowFloorCapRadiusC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CapsuleUpOffsetC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ConstCapsuleOffsetBetWallC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_PickaxeClimbChannelC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CharacterC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ForClimbingChannelC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ClassToIgnoreByLedgeC_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ClassToIgnoreByLedgeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_DebugTraceIndexC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FootsDefOffsetsC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AxisValuesInterpC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AxisValuesInterpSlowC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AxisValuesC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_FootsRelativeVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_JumpBackPoseAlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ShiftPressedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SpaceBarImpulseC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_ConstSwingLenghtOffsetC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SwingDebugIndexC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CableSimC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_HookActorC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsSwingingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_bIsFallingStartedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_AnchorPointInterpC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SwingRadiusSmoothC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_TargetForceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_GravityStabilityForceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_CollisionIndexC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_SwingAnimPropertyC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::NewProp_TargetRopeLenghtC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::ClassParams = {
	&UCpp_DynamicClimbingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCpp_DynamicClimbingComponent()
{
	if (!Z_Registration_Info_UClass_UCpp_DynamicClimbingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_DynamicClimbingComponent.OuterSingleton, Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCpp_DynamicClimbingComponent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_DynamicClimbingComponent>()
{
	return UCpp_DynamicClimbingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_DynamicClimbingComponent);
UCpp_DynamicClimbingComponent::~UCpp_DynamicClimbingComponent() {}
// End Class UCpp_DynamicClimbingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_DynamicClimbingComponent, UCpp_DynamicClimbingComponent::StaticClass, TEXT("UCpp_DynamicClimbingComponent"), &Z_Registration_Info_UClass_UCpp_DynamicClimbingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_DynamicClimbingComponent), 2987412515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_4282610766(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

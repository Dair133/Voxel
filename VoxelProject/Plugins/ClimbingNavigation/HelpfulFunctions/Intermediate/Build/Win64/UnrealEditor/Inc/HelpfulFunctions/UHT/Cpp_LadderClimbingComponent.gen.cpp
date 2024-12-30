// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_LadderClimbingComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_LadderClimbingComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_LadderAnimData();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin ScriptStruct FCALS_LadderAnimData
static_assert(std::is_polymorphic<FCALS_LadderAnimData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCALS_LadderAnimData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CALS_LadderAnimData;
class UScriptStruct* FCALS_LadderAnimData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_LadderAnimData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CALS_LadderAnimData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCALS_LadderAnimData, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_LadderAnimData"));
	}
	return Z_Registration_Info_UScriptStruct_CALS_LadderAnimData.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCALS_LadderAnimData>()
{
	return FCALS_LadderAnimData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Climb_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeHang_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Default;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Climb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreeHang;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCALS_LadderAnimData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_LadderAnimData, Default), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::NewProp_Climb = { "Climb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_LadderAnimData, Climb), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Climb_MetaData), NewProp_Climb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::NewProp_FreeHang = { "FreeHang", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_LadderAnimData, FreeHang), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeHang_MetaData), NewProp_FreeHang_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::NewProp_Climb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::NewProp_FreeHang,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CALS_LadderAnimData",
	Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::PropPointers),
	sizeof(FCALS_LadderAnimData),
	alignof(FCALS_LadderAnimData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCALS_LadderAnimData()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_LadderAnimData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CALS_LadderAnimData.InnerSingleton, Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CALS_LadderAnimData.InnerSingleton;
}
// End ScriptStruct FCALS_LadderAnimData

// Begin Class UCpp_LadderClimbingComponent Function CheckCanStartClimbLadder
struct Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms
{
	bool CheckMainCondition;
	bool Param2;
	FVector InLocation;
	FRotator InRotation;
	FCALS_ComponentAndTransform TargetCapPositionWS;
	AActor* LadderActor;
	UPrimitiveComponent* RungComp;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder = FName(TEXT("CheckCanStartClimbLadder"));
bool UCpp_LadderClimbingComponent::CheckCanStartClimbLadder(bool CheckMainCondition, bool Param2, FVector InLocation, FRotator InRotation, FCALS_ComponentAndTransform& TargetCapPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms Parms;
		Parms.CheckMainCondition=CheckMainCondition ? true : false;
		Parms.Param2=Param2 ? true : false;
		Parms.InLocation=InLocation;
		Parms.InRotation=InRotation;
		Parms.TargetCapPositionWS=TargetCapPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
	ProcessEvent(Func,&Parms);
		TargetCapPositionWS=Parms.TargetCapPositionWS;
		LadderActor=Parms.LadderActor;
		RungComp=Parms.RungComp;
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckCanStartClimbLadder_Implementation(CheckMainCondition, Param2, InLocation, InRotation, TargetCapPositionWS, LadderActor, RungComp);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Check Can Start Climb Ladder" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_CheckMainCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckMainCondition;
	static void NewProp_Param2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Param2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCapPositionWS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms*)Obj)->CheckMainCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition = { "CheckMainCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms*)Obj)->Param2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_TargetCapPositionWS = { "TargetCapPositionWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, TargetCapPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungComp_MetaData), NewProp_RungComp_MetaData) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_TargetCapPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_LadderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_RungComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "CheckCanStartClimbLadder", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execCheckCanStartClimbLadder)
{
	P_GET_UBOOL(Z_Param_CheckMainCondition);
	P_GET_UBOOL(Z_Param_Param2);
	P_GET_STRUCT(FVector,Z_Param_InLocation);
	P_GET_STRUCT(FRotator,Z_Param_InRotation);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_TargetCapPositionWS);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_LadderActor);
	P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_RungComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanStartClimbLadder_Implementation(Z_Param_CheckMainCondition,Z_Param_Param2,Z_Param_InLocation,Z_Param_InRotation,Z_Param_Out_TargetCapPositionWS,P_ARG_GC_BARRIER(Z_Param_Out_LadderActor),P_ARG_GC_BARRIER(Z_Param_Out_RungComp));
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function CheckCanStartClimbLadder

// Begin Class UCpp_LadderClimbingComponent Function CheckCanStartClimbLadderIteration
struct Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms
{
	bool CheckMainCondition;
	bool FromClimb;
	FVector InStartLocation;
	FVector InEndLocation;
	FRotator InRotation;
	int32 Iterations;
	FCALS_ComponentAndTransform TargetCapPositionWS;
	AActor* LadderActor;
	UPrimitiveComponent* RungComp;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration = FName(TEXT("CheckCanStartClimbLadderIteration"));
bool UCpp_LadderClimbingComponent::CheckCanStartClimbLadderIteration(bool CheckMainCondition, bool FromClimb, FVector InStartLocation, FVector InEndLocation, FRotator InRotation, int32 Iterations, FCALS_ComponentAndTransform& TargetCapPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms Parms;
		Parms.CheckMainCondition=CheckMainCondition ? true : false;
		Parms.FromClimb=FromClimb ? true : false;
		Parms.InStartLocation=InStartLocation;
		Parms.InEndLocation=InEndLocation;
		Parms.InRotation=InRotation;
		Parms.Iterations=Iterations;
		Parms.TargetCapPositionWS=TargetCapPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
	ProcessEvent(Func,&Parms);
		TargetCapPositionWS=Parms.TargetCapPositionWS;
		LadderActor=Parms.LadderActor;
		RungComp=Parms.RungComp;
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckCanStartClimbLadderIteration_Implementation(CheckMainCondition, FromClimb, InStartLocation, InEndLocation, InRotation, Iterations, TargetCapPositionWS, LadderActor, RungComp);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Check Can Start Climb Ladder With Loop" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_CheckMainCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckMainCondition;
	static void NewProp_FromClimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FromClimb;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InEndLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCapPositionWS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_CheckMainCondition_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms*)Obj)->CheckMainCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_CheckMainCondition = { "CheckMainCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_CheckMainCondition_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_FromClimb_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms*)Obj)->FromClimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_FromClimb = { "FromClimb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_FromClimb_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_InStartLocation = { "InStartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_InEndLocation = { "InEndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms, InEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms, Iterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_TargetCapPositionWS = { "TargetCapPositionWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms, TargetCapPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungComp_MetaData), NewProp_RungComp_MetaData) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_CheckMainCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_FromClimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_InStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_InEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_TargetCapPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_LadderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_RungComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "CheckCanStartClimbLadderIteration", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadderIteration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execCheckCanStartClimbLadderIteration)
{
	P_GET_UBOOL(Z_Param_CheckMainCondition);
	P_GET_UBOOL(Z_Param_FromClimb);
	P_GET_STRUCT(FVector,Z_Param_InStartLocation);
	P_GET_STRUCT(FVector,Z_Param_InEndLocation);
	P_GET_STRUCT(FRotator,Z_Param_InRotation);
	P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_TargetCapPositionWS);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_LadderActor);
	P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_RungComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanStartClimbLadderIteration_Implementation(Z_Param_CheckMainCondition,Z_Param_FromClimb,Z_Param_InStartLocation,Z_Param_InEndLocation,Z_Param_InRotation,Z_Param_Iterations,Z_Param_Out_TargetCapPositionWS,P_ARG_GC_BARRIER(Z_Param_Out_LadderActor),P_ARG_GC_BARRIER(Z_Param_Out_RungComp));
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function CheckCanStartClimbLadderIteration

// Begin Class UCpp_LadderClimbingComponent Function ChooseMainPosesIndex
struct Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms
{
	FVector InitLocation;
	FRotator InitRotation;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_ChooseMainPosesIndex = FName(TEXT("ChooseMainPosesIndex"));
int32 UCpp_LadderClimbingComponent::ChooseMainPosesIndex(FVector InitLocation, FRotator InitRotation)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_ChooseMainPosesIndex);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms Parms;
		Parms.InitLocation=InitLocation;
		Parms.InitRotation=InitRotation;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return ChooseMainPosesIndex_Implementation(InitLocation, InitRotation);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Choose Main Poses Index" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::NewProp_InitLocation = { "InitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms, InitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::NewProp_InitRotation = { "InitRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms, InitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::NewProp_InitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::NewProp_InitRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "ChooseMainPosesIndex", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventChooseMainPosesIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execChooseMainPosesIndex)
{
	P_GET_STRUCT(FVector,Z_Param_InitLocation);
	P_GET_STRUCT(FRotator,Z_Param_InitRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ChooseMainPosesIndex_Implementation(Z_Param_InitLocation,Z_Param_InitRotation);
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function ChooseMainPosesIndex

// Begin Class UCpp_LadderClimbingComponent Function GetMainValues
struct Cpp_LadderClimbingComponent_eventGetMainValues_Parms
{
	bool StartedLadderClimb;
	FCALS_ComponentAndTransform TargetPositionWS;
	AActor* LadderActor;
	UPrimitiveComponent* RungComp;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventGetMainValues_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_GetMainValues = FName(TEXT("GetMainValues"));
bool UCpp_LadderClimbingComponent::GetMainValues(bool& StartedLadderClimb, FCALS_ComponentAndTransform& TargetPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_GetMainValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventGetMainValues_Parms Parms;
		Parms.StartedLadderClimb=StartedLadderClimb ? true : false;
		Parms.TargetPositionWS=TargetPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
	ProcessEvent(Func,&Parms);
		StartedLadderClimb=Parms.StartedLadderClimb;
		TargetPositionWS=Parms.TargetPositionWS;
		LadderActor=Parms.LadderActor;
		RungComp=Parms.RungComp;
		return !!Parms.ReturnValue;
	}
	else
	{
		return GetMainValues_Implementation(StartedLadderClimb, TargetPositionWS, LadderActor, RungComp);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Get Main Values" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_StartedLadderClimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedLadderClimb;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPositionWS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_StartedLadderClimb_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventGetMainValues_Parms*)Obj)->StartedLadderClimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_StartedLadderClimb = { "StartedLadderClimb", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventGetMainValues_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_StartedLadderClimb_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_TargetPositionWS = { "TargetPositionWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventGetMainValues_Parms, TargetPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventGetMainValues_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventGetMainValues_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungComp_MetaData), NewProp_RungComp_MetaData) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventGetMainValues_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventGetMainValues_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_StartedLadderClimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_TargetPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_LadderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_RungComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "GetMainValues", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventGetMainValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventGetMainValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execGetMainValues)
{
	P_GET_UBOOL_REF(Z_Param_Out_StartedLadderClimb);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_TargetPositionWS);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_LadderActor);
	P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_RungComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMainValues_Implementation(Z_Param_Out_StartedLadderClimb,Z_Param_Out_TargetPositionWS,P_ARG_GC_BARRIER(Z_Param_Out_LadderActor),P_ARG_GC_BARRIER(Z_Param_Out_RungComp));
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function GetMainValues

// Begin Class UCpp_LadderClimbingComponent Function InitComponent
struct Cpp_LadderClimbingComponent_eventInitComponent_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventInitComponent_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_InitComponent = FName(TEXT("InitComponent"));
bool UCpp_LadderClimbingComponent::InitComponent()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_InitComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventInitComponent_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return InitComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Initialize Component" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventInitComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventInitComponent_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "InitComponent", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventInitComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventInitComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execInitComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitComponent_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function InitComponent

// Begin Class UCpp_LadderClimbingComponent Function SetMainValues
struct Cpp_LadderClimbingComponent_eventSetMainValues_Parms
{
	bool StartedLadderClimb;
	FCALS_ComponentAndTransform TargetPositionWS;
	AActor* LadderActor;
	UPrimitiveComponent* RungComp;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventSetMainValues_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_SetMainValues = FName(TEXT("SetMainValues"));
bool UCpp_LadderClimbingComponent::SetMainValues(bool StartedLadderClimb, FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_SetMainValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventSetMainValues_Parms Parms;
		Parms.StartedLadderClimb=StartedLadderClimb ? true : false;
		Parms.TargetPositionWS=TargetPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return SetMainValues_Implementation(StartedLadderClimb, TargetPositionWS, LadderActor, RungComp);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Set Main Values" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_StartedLadderClimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedLadderClimb;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPositionWS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_StartedLadderClimb_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventSetMainValues_Parms*)Obj)->StartedLadderClimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_StartedLadderClimb = { "StartedLadderClimb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventSetMainValues_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_StartedLadderClimb_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_TargetPositionWS = { "TargetPositionWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventSetMainValues_Parms, TargetPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventSetMainValues_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventSetMainValues_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungComp_MetaData), NewProp_RungComp_MetaData) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventSetMainValues_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventSetMainValues_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_StartedLadderClimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_TargetPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_LadderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_RungComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "SetMainValues", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventSetMainValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventSetMainValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execSetMainValues)
{
	P_GET_UBOOL(Z_Param_StartedLadderClimb);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_TargetPositionWS);
	P_GET_OBJECT(AActor,Z_Param_LadderActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_RungComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMainValues_Implementation(Z_Param_StartedLadderClimb,Z_Param_TargetPositionWS,Z_Param_LadderActor,Z_Param_RungComp);
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function SetMainValues

// Begin Class UCpp_LadderClimbingComponent Function TryFinishLadderClimb
struct Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms
{
	bool IgnoreCondition;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_TryFinishLadderClimb = FName(TEXT("TryFinishLadderClimb"));
bool UCpp_LadderClimbingComponent::TryFinishLadderClimb(bool IgnoreCondition)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_TryFinishLadderClimb);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms Parms;
		Parms.IgnoreCondition=IgnoreCondition ? true : false;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryFinishLadderClimb_Implementation(IgnoreCondition);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "CPP_Default_IgnoreCondition", "false" },
		{ "DisplayName", "Try Finish Ladder Climb" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IgnoreCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreCondition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_IgnoreCondition_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms*)Obj)->IgnoreCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_IgnoreCondition = { "IgnoreCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_IgnoreCondition_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_IgnoreCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "TryFinishLadderClimb", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execTryFinishLadderClimb)
{
	P_GET_UBOOL(Z_Param_IgnoreCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryFinishLadderClimb_Implementation(Z_Param_IgnoreCondition);
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function TryFinishLadderClimb

// Begin Class UCpp_LadderClimbingComponent Function TryStartLadderClimb
struct Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms
{
	FCALS_ComponentAndTransform TargetPositionWS;
	AActor* LadderActor;
	UPrimitiveComponent* RungComp;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_TryStartLadderClimb = FName(TEXT("TryStartLadderClimb"));
bool UCpp_LadderClimbingComponent::TryStartLadderClimb(FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_TryStartLadderClimb);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms Parms;
		Parms.TargetPositionWS=TargetPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryStartLadderClimb_Implementation(TargetPositionWS, LadderActor, RungComp);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Try Start Ladder Climb" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPositionWS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_TargetPositionWS = { "TargetPositionWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms, TargetPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungComp_MetaData), NewProp_RungComp_MetaData) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_TargetPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_LadderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_RungComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "TryStartLadderClimb", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execTryStartLadderClimb)
{
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_TargetPositionWS);
	P_GET_OBJECT(AActor,Z_Param_LadderActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_RungComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryStartLadderClimb_Implementation(Z_Param_TargetPositionWS,Z_Param_LadderActor,Z_Param_RungComp);
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function TryStartLadderClimb

// Begin Class UCpp_LadderClimbingComponent Function TryStartLadderClimbWhenHoldLedge
struct Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms
{
	FCALS_ComponentAndTransform TargetPositionWS;
	AActor* LadderActor;
	UPrimitiveComponent* RungComp;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge = FName(TEXT("TryStartLadderClimbWhenHoldLedge"));
bool UCpp_LadderClimbingComponent::TryStartLadderClimbWhenHoldLedge(FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms Parms;
		Parms.TargetPositionWS=TargetPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryStartLadderClimbWhenHoldLedge_Implementation(TargetPositionWS, LadderActor, RungComp);
	}
}
struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Try Start Ladder Climb When Hold Ledge" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPositionWS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_TargetPositionWS = { "TargetPositionWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms, TargetPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungComp_MetaData), NewProp_RungComp_MetaData) };
void Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_TargetPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_LadderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_RungComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "TryStartLadderClimbWhenHoldLedge", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimbWhenHoldLedge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execTryStartLadderClimbWhenHoldLedge)
{
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_TargetPositionWS);
	P_GET_OBJECT(AActor,Z_Param_LadderActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_RungComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryStartLadderClimbWhenHoldLedge_Implementation(Z_Param_TargetPositionWS,Z_Param_LadderActor,Z_Param_RungComp);
	P_NATIVE_END;
}
// End Class UCpp_LadderClimbingComponent Function TryStartLadderClimbWhenHoldLedge

// Begin Class UCpp_LadderClimbingComponent
void UCpp_LadderClimbingComponent::StaticRegisterNativesUCpp_LadderClimbingComponent()
{
	UClass* Class = UCpp_LadderClimbingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCanStartClimbLadder", &UCpp_LadderClimbingComponent::execCheckCanStartClimbLadder },
		{ "CheckCanStartClimbLadderIteration", &UCpp_LadderClimbingComponent::execCheckCanStartClimbLadderIteration },
		{ "ChooseMainPosesIndex", &UCpp_LadderClimbingComponent::execChooseMainPosesIndex },
		{ "GetMainValues", &UCpp_LadderClimbingComponent::execGetMainValues },
		{ "InitComponent", &UCpp_LadderClimbingComponent::execInitComponent },
		{ "SetMainValues", &UCpp_LadderClimbingComponent::execSetMainValues },
		{ "TryFinishLadderClimb", &UCpp_LadderClimbingComponent::execTryFinishLadderClimb },
		{ "TryStartLadderClimb", &UCpp_LadderClimbingComponent::execTryStartLadderClimb },
		{ "TryStartLadderClimbWhenHoldLedge", &UCpp_LadderClimbingComponent::execTryStartLadderClimbWhenHoldLedge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_LadderClimbingComponent);
UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent_NoRegister()
{
	return UCpp_LadderClimbingComponent::StaticClass();
}
struct Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_LadderClimbingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLadderClimbC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ladder System" },
		{ "DisplayName", "StartLadderClimbC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "CharacterC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "DefCapsuleSizeC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungComponentC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "RungComponentC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffsetLC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Inverse Kinematic" },
		{ "DisplayName", "FootOffset_L" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffsetRC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Inverse Kinematic" },
		{ "DisplayName", "FootOffset_R" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RungLenghtC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Base" },
		{ "DisplayName", "RungLenghtC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceLenghtC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "SequenceLenghtC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosesConfigValuesC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Base" },
		{ "DisplayName", "PosesConfigValuesC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartLadderClimbC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartLadderClimbC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapsuleSizeC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComponentC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffsetLC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffsetRC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RungLenghtC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLenghtC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosesConfigValuesC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder, "CheckCanStartClimbLadder" }, // 3569350646
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadderIteration, "CheckCanStartClimbLadderIteration" }, // 2167386547
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_ChooseMainPosesIndex, "ChooseMainPosesIndex" }, // 1554107848
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_GetMainValues, "GetMainValues" }, // 1478630170
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent, "InitComponent" }, // 3575895231
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_SetMainValues, "SetMainValues" }, // 278646606
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb, "TryFinishLadderClimb" }, // 3273564408
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb, "TryStartLadderClimb" }, // 1893453127
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimbWhenHoldLedge, "TryStartLadderClimbWhenHoldLedge" }, // 3450575472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_LadderClimbingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC_SetBit(void* Obj)
{
	((UCpp_LadderClimbingComponent*)Obj)->StartLadderClimbC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC = { "StartLadderClimbC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_LadderClimbingComponent), &Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLadderClimbC_MetaData), NewProp_StartLadderClimbC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterC_MetaData), NewProp_CharacterC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_DefCapsuleSizeC = { "DefCapsuleSizeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, DefCapsuleSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapsuleSizeC_MetaData), NewProp_DefCapsuleSizeC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungComponentC = { "RungComponentC", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, RungComponentC), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungComponentC_MetaData), NewProp_RungComponentC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetLC = { "FootOffsetLC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, FootOffsetLC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffsetLC_MetaData), NewProp_FootOffsetLC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetRC = { "FootOffsetRC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, FootOffsetRC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffsetRC_MetaData), NewProp_FootOffsetRC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungLenghtC = { "RungLenghtC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, RungLenghtC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RungLenghtC_MetaData), NewProp_RungLenghtC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_SequenceLenghtC = { "SequenceLenghtC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, SequenceLenghtC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceLenghtC_MetaData), NewProp_SequenceLenghtC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_PosesConfigValuesC = { "PosesConfigValuesC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, PosesConfigValuesC), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosesConfigValuesC_MetaData), NewProp_PosesConfigValuesC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_CharacterC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_DefCapsuleSizeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungComponentC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetLC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetRC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungLenghtC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_SequenceLenghtC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_PosesConfigValuesC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::ClassParams = {
	&UCpp_LadderClimbingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent()
{
	if (!Z_Registration_Info_UClass_UCpp_LadderClimbingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_LadderClimbingComponent.OuterSingleton, Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCpp_LadderClimbingComponent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_LadderClimbingComponent>()
{
	return UCpp_LadderClimbingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_LadderClimbingComponent);
UCpp_LadderClimbingComponent::~UCpp_LadderClimbingComponent() {}
// End Class UCpp_LadderClimbingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCALS_LadderAnimData::StaticStruct, Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics::NewStructOps, TEXT("CALS_LadderAnimData"), &Z_Registration_Info_UScriptStruct_CALS_LadderAnimData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCALS_LadderAnimData), 1763629883U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_LadderClimbingComponent, UCpp_LadderClimbingComponent::StaticClass, TEXT("UCpp_LadderClimbingComponent"), &Z_Registration_Info_UClass_UCpp_LadderClimbingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_LadderClimbingComponent), 1681330108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_2867531616(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

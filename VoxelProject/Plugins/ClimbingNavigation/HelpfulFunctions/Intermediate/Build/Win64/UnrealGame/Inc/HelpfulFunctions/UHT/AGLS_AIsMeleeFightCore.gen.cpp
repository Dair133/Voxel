// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_AIsMeleeFightCore.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_AIsMeleeFightCore() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AIsMeleeFightCore();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AIsMeleeFightCore_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAI_MeleeFightSequencesData_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UAGLS_AIsMeleeFightCore Function CheckCanStartFinisher
struct AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms
{
	ACharacter* ChoosedActor;
	float DistanceTo;
	FTransform TransformVic;
	FTransform TransformAtt;
	bool StartWhenCheckValid;
	float SearchRadius;
	TEnumAsByte<ECollisionChannel> EnemyTraceChannel;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher = FName(TEXT("CheckCanStartFinisher"));
bool UAGLS_AIsMeleeFightCore::CheckCanStartFinisher(ACharacter*& ChoosedActor, float& DistanceTo, FTransform& TransformVic, FTransform& TransformAtt, bool StartWhenCheckValid, float SearchRadius, ECollisionChannel EnemyTraceChannel)
{
	AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms Parms;
	Parms.ChoosedActor=ChoosedActor;
	Parms.DistanceTo=DistanceTo;
	Parms.TransformVic=TransformVic;
	Parms.TransformAtt=TransformAtt;
	Parms.StartWhenCheckValid=StartWhenCheckValid ? true : false;
	Parms.SearchRadius=SearchRadius;
	Parms.EnemyTraceChannel=EnemyTraceChannel;
	ProcessEvent(FindFunctionChecked(NAME_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher),&Parms);
	ChoosedActor=Parms.ChoosedActor;
	DistanceTo=Parms.DistanceTo;
	TransformVic=Parms.TransformVic;
	TransformAtt=Parms.TransformAtt;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Fight Core" },
		{ "CPP_Default_EnemyTraceChannel", "ECC_Pawn" },
		{ "CPP_Default_SearchRadius", "300.000000" },
		{ "CPP_Default_StartWhenCheckValid", "false" },
		{ "DisplayName", "Check Can Start Finisher" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Finisher,Melee,AI" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoosedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformVic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformAtt;
	static void NewProp_StartWhenCheckValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartWhenCheckValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyTraceChannel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_ChoosedActor = { "ChoosedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms, ChoosedActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_DistanceTo = { "DistanceTo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms, DistanceTo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_TransformVic = { "TransformVic", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms, TransformVic), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_TransformAtt = { "TransformAtt", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms, TransformAtt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_StartWhenCheckValid_SetBit(void* Obj)
{
	((AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms*)Obj)->StartWhenCheckValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_StartWhenCheckValid = { "StartWhenCheckValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms), &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_StartWhenCheckValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms, SearchRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_EnemyTraceChannel = { "EnemyTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms, EnemyTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms), &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_ChoosedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_DistanceTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_TransformVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_TransformAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_StartWhenCheckValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_EnemyTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "CheckCanStartFinisher", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::PropPointers), sizeof(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AIsMeleeFightCore_eventCheckCanStartFinisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execCheckCanStartFinisher)
{
	P_GET_OBJECT_REF(ACharacter,Z_Param_Out_ChoosedActor);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DistanceTo);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformVic);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformAtt);
	P_GET_UBOOL(Z_Param_StartWhenCheckValid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SearchRadius);
	P_GET_PROPERTY(FByteProperty,Z_Param_EnemyTraceChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanStartFinisher_Implementation(P_ARG_GC_BARRIER(Z_Param_Out_ChoosedActor),Z_Param_Out_DistanceTo,Z_Param_Out_TransformVic,Z_Param_Out_TransformAtt,Z_Param_StartWhenCheckValid,Z_Param_SearchRadius,ECollisionChannel(Z_Param_EnemyTraceChannel));
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function CheckCanStartFinisher

// Begin Class UAGLS_AIsMeleeFightCore Function ChooseBestAnimSeq
struct AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms
{
	bool Valid;
	FAGLS_FinishersDataForAI ReturnAssets;
	ACharacter* InVicChar;
	FTransform InTransformAtt;
	FTransform InTransformVic;
};
static FName NAME_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq = FName(TEXT("ChooseBestAnimSeq"));
void UAGLS_AIsMeleeFightCore::ChooseBestAnimSeq(bool& Valid, FAGLS_FinishersDataForAI& ReturnAssets, ACharacter* InVicChar, FTransform InTransformAtt, FTransform InTransformVic)
{
	AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms Parms;
	Parms.Valid=Valid ? true : false;
	Parms.ReturnAssets=ReturnAssets;
	Parms.InVicChar=InVicChar;
	Parms.InTransformAtt=InTransformAtt;
	Parms.InTransformVic=InTransformVic;
	ProcessEvent(FindFunctionChecked(NAME_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq),&Parms);
	Valid=Parms.Valid;
	ReturnAssets=Parms.ReturnAssets;
}
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Fight Core" },
		{ "DisplayName", "Choose Best Anim Sequence" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Finisher,Melee,AI" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVicChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransformAtt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransformVic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms), &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_ReturnAssets = { "ReturnAssets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms, ReturnAssets), Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI, METADATA_PARAMS(0, nullptr) }; // 2706352487
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_InVicChar = { "InVicChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms, InVicChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_InTransformAtt = { "InTransformAtt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms, InTransformAtt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_InTransformVic = { "InTransformVic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms, InTransformVic), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_ReturnAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_InVicChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_InTransformAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::NewProp_InTransformVic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "ChooseBestAnimSeq", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::PropPointers), sizeof(AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1CC80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AIsMeleeFightCore_eventChooseBestAnimSeq_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execChooseBestAnimSeq)
{
	P_GET_UBOOL_REF(Z_Param_Out_Valid);
	P_GET_STRUCT_REF(FAGLS_FinishersDataForAI,Z_Param_Out_ReturnAssets);
	P_GET_OBJECT(ACharacter,Z_Param_InVicChar);
	P_GET_STRUCT(FTransform,Z_Param_InTransformAtt);
	P_GET_STRUCT(FTransform,Z_Param_InTransformVic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseBestAnimSeq_Implementation(Z_Param_Out_Valid,Z_Param_Out_ReturnAssets,Z_Param_InVicChar,Z_Param_InTransformAtt,Z_Param_InTransformVic);
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function ChooseBestAnimSeq

// Begin Class UAGLS_AIsMeleeFightCore Function DebugLine
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics
{
	struct AGLS_AIsMeleeFightCore_eventDebugLine_Parms
	{
		FVector Start;
		FVector End;
		FLinearColor Color;
		float Thickness;
		float Duration;
		int32 Depth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "BlueprintProtected", "" },
		{ "Category", "Melee Fight Core|Debug" },
		{ "CPP_Default_Color", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Depth", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.200000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Draw Line" },
		{ "HidePin", "Target" },
		{ "HideSelfPin", "" },
		{ "Keywords", "Debug,Shapes" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugLine_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugLine_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugLine_Parms, Depth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "DebugLine", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::AGLS_AIsMeleeFightCore_eventDebugLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::AGLS_AIsMeleeFightCore_eventDebugLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execDebugLine)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugLine(Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Color,Z_Param_Thickness,Z_Param_Duration,Z_Param_Depth);
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function DebugLine

// Begin Class UAGLS_AIsMeleeFightCore Function DebugPath
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics
{
	struct AGLS_AIsMeleeFightCore_eventDebugPath_Parms
	{
		TArray<FVector> Points;
		float Size;
		float Thickness;
		FLinearColor Color;
		float Duration;
		int32 Depth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintProtected", "" },
		{ "Category", "Melee Fight Core|Debug" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Depth", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Size", "10.000000" },
		{ "CPP_Default_Thickness", "1.200000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Draw Path" },
		{ "HidePin", "Target" },
		{ "HideSelfPin", "" },
		{ "Keywords", "Debug,Shapes" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPath_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPath_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPath_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPath_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPath_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPath_Parms, Depth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "DebugPath", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::AGLS_AIsMeleeFightCore_eventDebugPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::AGLS_AIsMeleeFightCore_eventDebugPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execDebugPath)
{
	P_GET_TARRAY(FVector,Z_Param_Points);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugPath(Z_Param_Points,Z_Param_Size,Z_Param_Thickness,Z_Param_Color,Z_Param_Duration,Z_Param_Depth);
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function DebugPath

// Begin Class UAGLS_AIsMeleeFightCore Function DebugPoint
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics
{
	struct AGLS_AIsMeleeFightCore_eventDebugPoint_Parms
	{
		FVector Position;
		float Size;
		FLinearColor Color;
		float Duration;
		int32 Depth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintProtected", "" },
		{ "Category", "Melee Fight Core|Debug" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Depth", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Size", "10.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Draw Point" },
		{ "HidePin", "Target" },
		{ "HideSelfPin", "" },
		{ "Keywords", "Debug,Shapes" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPoint_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPoint_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPoint_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugPoint_Parms, Depth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "DebugPoint", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::AGLS_AIsMeleeFightCore_eventDebugPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::AGLS_AIsMeleeFightCore_eventDebugPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execDebugPoint)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugPoint(Z_Param_Out_Position,Z_Param_Size,Z_Param_Color,Z_Param_Duration,Z_Param_Depth);
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function DebugPoint

// Begin Class UAGLS_AIsMeleeFightCore Function DebugSphere
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics
{
	struct AGLS_AIsMeleeFightCore_eventDebugSphere_Parms
	{
		FVector Position;
		float Radius;
		FLinearColor Color;
		float Thickness;
		float Duration;
		int32 Depth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintProtected", "" },
		{ "Category", "Melee Fight Core|Debug" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Depth", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Radius", "50.000000" },
		{ "CPP_Default_Thickness", "1.200000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Draw Sphere" },
		{ "HidePin", "Target" },
		{ "HideSelfPin", "" },
		{ "Keywords", "Debug,Shapes" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugSphere_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugSphere_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugSphere_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventDebugSphere_Parms, Depth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "DebugSphere", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::AGLS_AIsMeleeFightCore_eventDebugSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::AGLS_AIsMeleeFightCore_eventDebugSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execDebugSphere)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugSphere(Z_Param_Out_Position,Z_Param_Radius,Z_Param_Color,Z_Param_Thickness,Z_Param_Duration,Z_Param_Depth);
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function DebugSphere

// Begin Class UAGLS_AIsMeleeFightCore Function DoWhenFinisherAction
static FName NAME_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction = FName(TEXT("DoWhenFinisherAction"));
void UAGLS_AIsMeleeFightCore::DoWhenFinisherAction()
{
	ProcessEvent(FindFunctionChecked(NAME_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction),NULL);
}
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Fight Core" },
		{ "DisplayName", "Do When Finisher Action" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Finisher,Melee,AI" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "DoWhenFinisherAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execDoWhenFinisherAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoWhenFinisherAction_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function DoWhenFinisherAction

// Begin Class UAGLS_AIsMeleeFightCore Function GetAllSequencesData
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics
{
	struct AGLS_AIsMeleeFightCore_eventGetAllSequencesData_Parms
	{
		TMap<FName,FAGLS_FinishersDataForAI> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Fight Core" },
		{ "CompactNodeTitle", "Anims Data" },
		{ "DisplayName", "Get All Sequences Data" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Finisher,Melee,AI" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI, METADATA_PARAMS(0, nullptr) }; // 2706352487
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventGetAllSequencesData_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2706352487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "GetAllSequencesData", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::AGLS_AIsMeleeFightCore_eventGetAllSequencesData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::AGLS_AIsMeleeFightCore_eventGetAllSequencesData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execGetAllSequencesData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FAGLS_FinishersDataForAI>*)Z_Param__Result=P_THIS->GetAllSequencesData();
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function GetAllSequencesData

// Begin Class UAGLS_AIsMeleeFightCore Function GetFinisherTimeElapsed
struct AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms
{
	bool bNormalized;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed = FName(TEXT("GetFinisherTimeElapsed"));
float UAGLS_AIsMeleeFightCore::GetFinisherTimeElapsed(bool bNormalized)
{
	AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms Parms;
	Parms.bNormalized=bNormalized ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Fight Core" },
		{ "CPP_Default_bNormalized", "true" },
		{ "DisplayName", "Get Finisher Time Elapsed" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Finisher,Melee,AI" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNormalized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalized;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::NewProp_bNormalized_SetBit(void* Obj)
{
	((AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms*)Obj)->bNormalized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::NewProp_bNormalized = { "bNormalized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms), &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::NewProp_bNormalized_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::NewProp_bNormalized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "GetFinisherTimeElapsed", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::PropPointers), sizeof(AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AIsMeleeFightCore_eventGetFinisherTimeElapsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execGetFinisherTimeElapsed)
{
	P_GET_UBOOL(Z_Param_bNormalized);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFinisherTimeElapsed_Implementation(Z_Param_bNormalized);
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function GetFinisherTimeElapsed

// Begin Class UAGLS_AIsMeleeFightCore Function TryInterruptFinisherAction
struct AGLS_AIsMeleeFightCore_eventTryInterruptFinisherAction_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_AIsMeleeFightCore_eventTryInterruptFinisherAction_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction = FName(TEXT("TryInterruptFinisherAction"));
bool UAGLS_AIsMeleeFightCore::TryInterruptFinisherAction()
{
	AGLS_AIsMeleeFightCore_eventTryInterruptFinisherAction_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Fight Core" },
		{ "DisplayName", "Try Interrupt Finisher Action" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Finisher,Melee,AI" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AIsMeleeFightCore_eventTryInterruptFinisherAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AIsMeleeFightCore_eventTryInterruptFinisherAction_Parms), &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "TryInterruptFinisherAction", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::PropPointers), sizeof(AGLS_AIsMeleeFightCore_eventTryInterruptFinisherAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AIsMeleeFightCore_eventTryInterruptFinisherAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execTryInterruptFinisherAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryInterruptFinisherAction_Implementation();
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function TryInterruptFinisherAction

// Begin Class UAGLS_AIsMeleeFightCore Function TryStartFinisherAction
struct AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms
{
	bool CanStart;
	ACharacter* ChoosedEnemy;
	float DistanceTo;
	FTransform TransformVic;
	FTransform TransformAtt;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAGLS_AIsMeleeFightCore_TryStartFinisherAction = FName(TEXT("TryStartFinisherAction"));
bool UAGLS_AIsMeleeFightCore::TryStartFinisherAction(bool CanStart, ACharacter* ChoosedEnemy, float DistanceTo, FTransform TransformVic, FTransform TransformAtt)
{
	AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms Parms;
	Parms.CanStart=CanStart ? true : false;
	Parms.ChoosedEnemy=ChoosedEnemy;
	Parms.DistanceTo=DistanceTo;
	Parms.TransformVic=TransformVic;
	Parms.TransformAtt=TransformAtt;
	ProcessEvent(FindFunctionChecked(NAME_UAGLS_AIsMeleeFightCore_TryStartFinisherAction),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Fight Core" },
		{ "DisplayName", "Try Start Finisher Action" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Finisher,Melee,AI" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoosedEnemy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformVic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformAtt;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_CanStart_SetBit(void* Obj)
{
	((AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms*)Obj)->CanStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_CanStart = { "CanStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms), &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_CanStart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_ChoosedEnemy = { "ChoosedEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms, ChoosedEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_DistanceTo = { "DistanceTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms, DistanceTo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_TransformVic = { "TransformVic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms, TransformVic), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_TransformAtt = { "TransformAtt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms, TransformAtt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms), &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_CanStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_ChoosedEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_DistanceTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_TransformVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_TransformAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AIsMeleeFightCore, nullptr, "TryStartFinisherAction", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::PropPointers), sizeof(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AIsMeleeFightCore_eventTryStartFinisherAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_AIsMeleeFightCore::execTryStartFinisherAction)
{
	P_GET_UBOOL(Z_Param_CanStart);
	P_GET_OBJECT(ACharacter,Z_Param_ChoosedEnemy);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceTo);
	P_GET_STRUCT(FTransform,Z_Param_TransformVic);
	P_GET_STRUCT(FTransform,Z_Param_TransformAtt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryStartFinisherAction_Implementation(Z_Param_CanStart,Z_Param_ChoosedEnemy,Z_Param_DistanceTo,Z_Param_TransformVic,Z_Param_TransformAtt);
	P_NATIVE_END;
}
// End Class UAGLS_AIsMeleeFightCore Function TryStartFinisherAction

// Begin Class UAGLS_AIsMeleeFightCore
void UAGLS_AIsMeleeFightCore::StaticRegisterNativesUAGLS_AIsMeleeFightCore()
{
	UClass* Class = UAGLS_AIsMeleeFightCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCanStartFinisher", &UAGLS_AIsMeleeFightCore::execCheckCanStartFinisher },
		{ "ChooseBestAnimSeq", &UAGLS_AIsMeleeFightCore::execChooseBestAnimSeq },
		{ "DebugLine", &UAGLS_AIsMeleeFightCore::execDebugLine },
		{ "DebugPath", &UAGLS_AIsMeleeFightCore::execDebugPath },
		{ "DebugPoint", &UAGLS_AIsMeleeFightCore::execDebugPoint },
		{ "DebugSphere", &UAGLS_AIsMeleeFightCore::execDebugSphere },
		{ "DoWhenFinisherAction", &UAGLS_AIsMeleeFightCore::execDoWhenFinisherAction },
		{ "GetAllSequencesData", &UAGLS_AIsMeleeFightCore::execGetAllSequencesData },
		{ "GetFinisherTimeElapsed", &UAGLS_AIsMeleeFightCore::execGetFinisherTimeElapsed },
		{ "TryInterruptFinisherAction", &UAGLS_AIsMeleeFightCore::execTryInterruptFinisherAction },
		{ "TryStartFinisherAction", &UAGLS_AIsMeleeFightCore::execTryStartFinisherAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_AIsMeleeFightCore);
UClass* Z_Construct_UClass_UAGLS_AIsMeleeFightCore_NoRegister()
{
	return UAGLS_AIsMeleeFightCore::StaticClass();
}
struct Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AGLS_AIsMeleeFightCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencesData_MetaData[] = {
		{ "Category", "Melee Fight Core|Config" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefChar_MetaData[] = {
		{ "Category", "Melee Fight Core|References" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartedFinisher_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherMontageAtt_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherMontageVic_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionDuration_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeqTransformAttLS_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeqTransformVicLS_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoosedActionData_MetaData[] = {
		{ "Category", "Melee Fight Core|Finisher Action" },
		{ "ModuleRelativePath", "Public/AGLS_AIsMeleeFightCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequencesData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefChar;
	static void NewProp_bStartedFinisher_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartedFinisher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinisherMontageAtt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinisherMontageVic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeqTransformAttLS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeqTransformVicLS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoosedActionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_CheckCanStartFinisher, "CheckCanStartFinisher" }, // 2818242971
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_ChooseBestAnimSeq, "ChooseBestAnimSeq" }, // 1489743119
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugLine, "DebugLine" }, // 3023154612
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPath, "DebugPath" }, // 4147044219
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugPoint, "DebugPoint" }, // 3896790946
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DebugSphere, "DebugSphere" }, // 2150213517
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_DoWhenFinisherAction, "DoWhenFinisherAction" }, // 2262593583
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetAllSequencesData, "GetAllSequencesData" }, // 1919273499
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_GetFinisherTimeElapsed, "GetFinisherTimeElapsed" }, // 2557689596
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryInterruptFinisherAction, "TryInterruptFinisherAction" }, // 1131397644
		{ &Z_Construct_UFunction_UAGLS_AIsMeleeFightCore_TryStartFinisherAction, "TryStartFinisherAction" }, // 1611543509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_AIsMeleeFightCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_SequencesData = { "SequencesData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, SequencesData), Z_Construct_UClass_UAI_MeleeFightSequencesData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencesData_MetaData), NewProp_SequencesData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_RefChar = { "RefChar", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, RefChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefChar_MetaData), NewProp_RefChar_MetaData) };
void Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_bStartedFinisher_SetBit(void* Obj)
{
	((UAGLS_AIsMeleeFightCore*)Obj)->bStartedFinisher = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_bStartedFinisher = { "bStartedFinisher", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_AIsMeleeFightCore), &Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_bStartedFinisher_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartedFinisher_MetaData), NewProp_bStartedFinisher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, EnemyCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCharacter_MetaData), NewProp_EnemyCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_FinisherMontageAtt = { "FinisherMontageAtt", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, FinisherMontageAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherMontageAtt_MetaData), NewProp_FinisherMontageAtt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_FinisherMontageVic = { "FinisherMontageVic", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, FinisherMontageVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherMontageVic_MetaData), NewProp_FinisherMontageVic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_ActionDuration = { "ActionDuration", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, ActionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionDuration_MetaData), NewProp_ActionDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_SeqTransformAttLS = { "SeqTransformAttLS", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, SeqTransformAttLS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeqTransformAttLS_MetaData), NewProp_SeqTransformAttLS_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_SeqTransformVicLS = { "SeqTransformVicLS", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, SeqTransformVicLS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeqTransformVicLS_MetaData), NewProp_SeqTransformVicLS_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_ChoosedActionData = { "ChoosedActionData", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_AIsMeleeFightCore, ChoosedActionData), Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoosedActionData_MetaData), NewProp_ChoosedActionData_MetaData) }; // 2706352487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_SequencesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_RefChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_bStartedFinisher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_EnemyCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_FinisherMontageAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_FinisherMontageVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_ActionDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_SeqTransformAttLS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_SeqTransformVicLS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::NewProp_ChoosedActionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::ClassParams = {
	&UAGLS_AIsMeleeFightCore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_AIsMeleeFightCore()
{
	if (!Z_Registration_Info_UClass_UAGLS_AIsMeleeFightCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_AIsMeleeFightCore.OuterSingleton, Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_AIsMeleeFightCore.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAGLS_AIsMeleeFightCore>()
{
	return UAGLS_AIsMeleeFightCore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_AIsMeleeFightCore);
UAGLS_AIsMeleeFightCore::~UAGLS_AIsMeleeFightCore() {}
// End Class UAGLS_AIsMeleeFightCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_AIsMeleeFightCore, UAGLS_AIsMeleeFightCore::StaticClass, TEXT("UAGLS_AIsMeleeFightCore"), &Z_Registration_Info_UClass_UAGLS_AIsMeleeFightCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_AIsMeleeFightCore), 1968045186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_991160056(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_HumanAI_CharacterBase.h"
#include "HelpfulFunctions/Public/ALS_BaseAI_CharacterCpp.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_HumanAI_CharacterBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_HumanAI_CharacterBase();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_BaseAI_CharacterCpp();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_HumanCharInterface_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncFunctionsPlayer_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_PropsAttachValues();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettings();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class AAGLS_HumanAI_CharacterBase Function ApplyDamageValue
struct AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms
{
	AActor* DamageCauser;
	FHitResult HitInfo;
	float DamageValue;
	int32 DamageTypeIndex;
	float UnRagdollTime;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_ApplyDamageValue = FName(TEXT("ApplyDamageValue"));
bool AAGLS_HumanAI_CharacterBase::ApplyDamageValue(AActor* DamageCauser, FHitResult HitInfo, float DamageValue, int32 DamageTypeIndex, float UnRagdollTime)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_ApplyDamageValue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms Parms;
		Parms.DamageCauser=DamageCauser;
		Parms.HitInfo=HitInfo;
		Parms.DamageValue=DamageValue;
		Parms.DamageTypeIndex=DamageTypeIndex;
		Parms.UnRagdollTime=UnRagdollTime;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ApplyDamageValue_Implementation(DamageCauser, HitInfo, DamageValue, DamageTypeIndex, UnRagdollTime);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Health And Damage" },
		{ "CPP_Default_DamageTypeIndex", "1" },
		{ "CPP_Default_DamageValue", "1.000000" },
		{ "CPP_Default_UnRagdollTime", "-1.000000" },
		{ "DisplayName", "Apply Damage Value" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DamageTypeIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnRagdollTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms, DamageValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_DamageTypeIndex = { "DamageTypeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms, DamageTypeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_UnRagdollTime = { "UnRagdollTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms, UnRagdollTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_DamageValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_DamageTypeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_UnRagdollTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "ApplyDamageValue", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventApplyDamageValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execApplyDamageValue)
{
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_STRUCT(FHitResult,Z_Param_HitInfo);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_DamageTypeIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UnRagdollTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyDamageValue_Implementation(Z_Param_DamageCauser,Z_Param_HitInfo,Z_Param_DamageValue,Z_Param_DamageTypeIndex,Z_Param_UnRagdollTime);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function ApplyDamageValue

// Begin Class AAGLS_HumanAI_CharacterBase Function AttachAllPropsToDefault
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachAllPropsToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Held Objects" },
		{ "DisplayName", "Attach All Props To Default Parent" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachAllPropsToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "AttachAllPropsToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachAllPropsToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachAllPropsToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachAllPropsToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachAllPropsToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execAttachAllPropsToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachAllPropsToDefault();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function AttachAllPropsToDefault

// Begin Class AAGLS_HumanAI_CharacterBase Function AttachPropTo
struct AGLS_HumanAI_CharacterBase_eventAttachPropTo_Parms
{
	CALS_OverlayState TargetOverlay;
	float DelayTime;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_AttachPropTo = FName(TEXT("AttachPropTo"));
void AAGLS_HumanAI_CharacterBase::AttachPropTo(CALS_OverlayState TargetOverlay, float DelayTime)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_AttachPropTo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventAttachPropTo_Parms Parms;
		Parms.TargetOverlay=TargetOverlay;
		Parms.DelayTime=DelayTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		AttachPropTo_Implementation(TargetOverlay, DelayTime);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Held Objects" },
		{ "DisplayName", "AttachPropTo" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetOverlay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetOverlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::NewProp_TargetOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::NewProp_TargetOverlay = { "TargetOverlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventAttachPropTo_Parms, TargetOverlay), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventAttachPropTo_Parms, DelayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::NewProp_TargetOverlay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::NewProp_TargetOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::NewProp_DelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "AttachPropTo", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventAttachPropTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventAttachPropTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execAttachPropTo)
{
	P_GET_ENUM(CALS_OverlayState,Z_Param_TargetOverlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachPropTo_Implementation(CALS_OverlayState(Z_Param_TargetOverlay),Z_Param_DelayTime);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function AttachPropTo

// Begin Class AAGLS_HumanAI_CharacterBase Function CanUpdateOverlay
struct AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms
{
	CALS_OverlayState NewOverlay;
	CALS_OverlayState CurrentOverlay;
	bool forced;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay = FName(TEXT("CanUpdateOverlay"));
bool AAGLS_HumanAI_CharacterBase::CanUpdateOverlay(CALS_OverlayState NewOverlay, CALS_OverlayState CurrentOverlay, bool forced)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms Parms;
		Parms.NewOverlay=NewOverlay;
		Parms.CurrentOverlay=CurrentOverlay;
		Parms.forced=forced ? true : false;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CanUpdateOverlay_Implementation(NewOverlay, CurrentOverlay, forced);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Overlay" },
		{ "DisplayName", "Can Update Overlay" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewOverlay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOverlay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentOverlay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentOverlay;
	static void NewProp_forced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_forced;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_NewOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_NewOverlay = { "NewOverlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms, NewOverlay), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_CurrentOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_CurrentOverlay = { "CurrentOverlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms, CurrentOverlay), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_forced_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms*)Obj)->forced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_forced = { "forced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_forced_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_NewOverlay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_NewOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_CurrentOverlay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_CurrentOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_forced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "CanUpdateOverlay", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventCanUpdateOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execCanUpdateOverlay)
{
	P_GET_ENUM(CALS_OverlayState,Z_Param_NewOverlay);
	P_GET_ENUM(CALS_OverlayState,Z_Param_CurrentOverlay);
	P_GET_UBOOL(Z_Param_forced);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUpdateOverlay_Implementation(CALS_OverlayState(Z_Param_NewOverlay),CALS_OverlayState(Z_Param_CurrentOverlay),Z_Param_forced);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function CanUpdateOverlay

// Begin Class AAGLS_HumanAI_CharacterBase Function ChangeToPistolWhenNoAmmo
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventChangeToPistolWhenNoAmmo_Parms
	{
		CALS_OverlayState NewOverlay;
		CALS_OverlayState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Overlay" },
		{ "DisplayName", "Change To Pistol When No Ammo" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewOverlay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOverlay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_NewOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_NewOverlay = { "NewOverlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventChangeToPistolWhenNoAmmo_Parms, NewOverlay), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventChangeToPistolWhenNoAmmo_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_NewOverlay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_NewOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "ChangeToPistolWhenNoAmmo", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::AGLS_HumanAI_CharacterBase_eventChangeToPistolWhenNoAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::AGLS_HumanAI_CharacterBase_eventChangeToPistolWhenNoAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execChangeToPistolWhenNoAmmo)
{
	P_GET_ENUM(CALS_OverlayState,Z_Param_NewOverlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(CALS_OverlayState*)Z_Param__Result=P_THIS->ChangeToPistolWhenNoAmmo(CALS_OverlayState(Z_Param_NewOverlay));
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function ChangeToPistolWhenNoAmmo

// Begin Class AAGLS_HumanAI_CharacterBase Function CheckCanShoot
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventCheckCanShoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Shooting System" },
		{ "DisplayName", "Check Can Shoot" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventCheckCanShoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventCheckCanShoot_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "CheckCanShoot", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::AGLS_HumanAI_CharacterBase_eventCheckCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::AGLS_HumanAI_CharacterBase_eventCheckCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execCheckCanShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanShoot();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function CheckCanShoot

// Begin Class AAGLS_HumanAI_CharacterBase Function CheckFallDamage
struct AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms
{
	FHitResult LandHitResult;
	float VelocityMaxRange;
	FVector DamageTresholds;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_CheckFallDamage = FName(TEXT("CheckFallDamage"));
bool AAGLS_HumanAI_CharacterBase::CheckFallDamage(FHitResult LandHitResult, float VelocityMaxRange, FVector DamageTresholds)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_CheckFallDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms Parms;
		Parms.LandHitResult=LandHitResult;
		Parms.VelocityMaxRange=VelocityMaxRange;
		Parms.DamageTresholds=DamageTresholds;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckFallDamage_Implementation(LandHitResult, VelocityMaxRange, DamageTresholds);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "VelocityMaxRange,DamageTresholds" },
		{ "Category", "Human AI|Health And Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//More Functions For Human AI\n" },
#endif
		{ "CPP_Default_DamageTresholds", "0.700000,0.550000,0.420000" },
		{ "CPP_Default_VelocityMaxRange", "1500.000000" },
		{ "DisplayName", "Check Fall Damage" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "More Functions For Human AI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandHitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityMaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTresholds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_LandHitResult = { "LandHitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms, LandHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_VelocityMaxRange = { "VelocityMaxRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms, VelocityMaxRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_DamageTresholds = { "DamageTresholds", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms, DamageTresholds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_LandHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_VelocityMaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_DamageTresholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "CheckFallDamage", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventCheckFallDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execCheckFallDamage)
{
	P_GET_STRUCT(FHitResult,Z_Param_LandHitResult);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMaxRange);
	P_GET_STRUCT(FVector,Z_Param_DamageTresholds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckFallDamage_Implementation(Z_Param_LandHitResult,Z_Param_VelocityMaxRange,Z_Param_DamageTresholds);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function CheckFallDamage

// Begin Class AAGLS_HumanAI_CharacterBase Function CheckHealthPerFrame
struct AGLS_HumanAI_CharacterBase_eventCheckHealthPerFrame_Parms
{
	bool Update;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame = FName(TEXT("CheckHealthPerFrame"));
void AAGLS_HumanAI_CharacterBase::CheckHealthPerFrame(bool Update)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventCheckHealthPerFrame_Parms Parms;
		Parms.Update=Update ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CheckHealthPerFrame_Implementation(Update);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Health And Damage" },
		{ "CPP_Default_Update", "true" },
		{ "DisplayName", "Check Health Per Frame" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Update_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Update;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::NewProp_Update_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventCheckHealthPerFrame_Parms*)Obj)->Update = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventCheckHealthPerFrame_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::NewProp_Update_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::NewProp_Update,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "CheckHealthPerFrame", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventCheckHealthPerFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventCheckHealthPerFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execCheckHealthPerFrame)
{
	P_GET_UBOOL(Z_Param_Update);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckHealthPerFrame_Implementation(Z_Param_Update);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function CheckHealthPerFrame

// Begin Class AAGLS_HumanAI_CharacterBase Function DeathByFallDamage
struct AGLS_HumanAI_CharacterBase_eventDeathByFallDamage_Parms
{
	FHitResult HitGroundResult;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_DeathByFallDamage = FName(TEXT("DeathByFallDamage"));
void AAGLS_HumanAI_CharacterBase::DeathByFallDamage(FHitResult HitGroundResult)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_DeathByFallDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventDeathByFallDamage_Parms Parms;
		Parms.HitGroundResult=HitGroundResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DeathByFallDamage_Implementation(HitGroundResult);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Health And Damage" },
		{ "DisplayName", "Death By Fall Damage" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitGroundResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::NewProp_HitGroundResult = { "HitGroundResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventDeathByFallDamage_Parms, HitGroundResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::NewProp_HitGroundResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "DeathByFallDamage", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventDeathByFallDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventDeathByFallDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execDeathByFallDamage)
{
	P_GET_STRUCT(FHitResult,Z_Param_HitGroundResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeathByFallDamage_Implementation(Z_Param_HitGroundResult);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function DeathByFallDamage

// Begin Class AAGLS_HumanAI_CharacterBase Function DropProps
struct AGLS_HumanAI_CharacterBase_eventDropProps_Parms
{
	TArray<CALS_OverlayState> PropsList;
	bool DropGunsAttachedToBody;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_DropProps = FName(TEXT("DropProps"));
void AAGLS_HumanAI_CharacterBase::DropProps(TArray<CALS_OverlayState> const& PropsList, bool DropGunsAttachedToBody)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_DropProps);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventDropProps_Parms Parms;
		Parms.PropsList=PropsList;
		Parms.DropGunsAttachedToBody=DropGunsAttachedToBody ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DropProps_Implementation(PropsList, DropGunsAttachedToBody);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PropsList" },
		{ "Category", "Human AI|Held Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "DisplayName", "Drop Props" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropsList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PropsList_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PropsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropsList;
	static void NewProp_DropGunsAttachedToBody_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DropGunsAttachedToBody;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_PropsList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_PropsList_Inner = { "PropsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_PropsList = { "PropsList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventDropProps_Parms, PropsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropsList_MetaData), NewProp_PropsList_MetaData) }; // 3098219672
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_DropGunsAttachedToBody_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventDropProps_Parms*)Obj)->DropGunsAttachedToBody = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_DropGunsAttachedToBody = { "DropGunsAttachedToBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventDropProps_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_DropGunsAttachedToBody_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_PropsList_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_PropsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_PropsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::NewProp_DropGunsAttachedToBody,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "DropProps", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventDropProps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventDropProps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execDropProps)
{
	P_GET_TARRAY_REF(CALS_OverlayState,Z_Param_Out_PropsList);
	P_GET_UBOOL(Z_Param_DropGunsAttachedToBody);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropProps_Implementation(Z_Param_Out_PropsList,Z_Param_DropGunsAttachedToBody);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function DropProps

// Begin Class AAGLS_HumanAI_CharacterBase Function FindCoverFast
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms
	{
		bool CanCover;
		float WallHeigh;
		FVector Impact;
		FVector Normal;
		FVector StartLocation;
		FVector StartDirection;
		int32 DebugIndex;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		float ForwardTraceLenght;
		float GroundOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceChannel,ForwardTraceLenght,GroundOffset,ActiveOnLOD" },
		{ "Category", "Human AI|Cover System" },
		{ "CPP_Default_ForwardTraceLenght", "70.000000" },
		{ "CPP_Default_GroundOffset", "20.000000" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "DisplayName", "Find Cover" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_CanCover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCover;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallHeigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impact;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartDirection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardTraceLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_CanCover_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms*)Obj)->CanCover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_CanCover = { "CanCover", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_CanCover_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_WallHeigh = { "WallHeigh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, WallHeigh), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, Impact), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_StartDirection = { "StartDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, StartDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_ForwardTraceLenght = { "ForwardTraceLenght", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, ForwardTraceLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_GroundOffset = { "GroundOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms, GroundOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_CanCover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_WallHeigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_Impact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_StartDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_ForwardTraceLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::NewProp_GroundOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "FindCoverFast", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::AGLS_HumanAI_CharacterBase_eventFindCoverFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execFindCoverFast)
{
	P_GET_UBOOL_REF(Z_Param_Out_CanCover);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_WallHeigh);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Impact);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_StartDirection);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardTraceLenght);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GroundOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindCoverFast(Z_Param_Out_CanCover,Z_Param_Out_WallHeigh,Z_Param_Out_Impact,Z_Param_Out_Normal,Z_Param_StartLocation,Z_Param_StartDirection,Z_Param_DebugIndex,ECollisionChannel(Z_Param_TraceChannel),Z_Param_ForwardTraceLenght,Z_Param_GroundOffset);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function FindCoverFast

// Begin Class AAGLS_HumanAI_CharacterBase Function GetCalpsuleBaseLocation
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventGetCalpsuleBaseLocation_Parms
	{
		float ZOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Utility" },
		{ "DisplayName", "Get Calpsule Base Location" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetCalpsuleBaseLocation_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetCalpsuleBaseLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "GetCalpsuleBaseLocation", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::AGLS_HumanAI_CharacterBase_eventGetCalpsuleBaseLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::AGLS_HumanAI_CharacterBase_eventGetCalpsuleBaseLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execGetCalpsuleBaseLocation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCalpsuleBaseLocation(Z_Param_ZOffset);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function GetCalpsuleBaseLocation

// Begin Class AAGLS_HumanAI_CharacterBase Function GetCapsuleLocationFromBase
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventGetCapsuleLocationFromBase_Parms
	{
		FVector BaseLocation;
		float ZOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Utility" },
		{ "DisplayName", "Get Capsule Location From Base" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::NewProp_BaseLocation = { "BaseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetCapsuleLocationFromBase_Parms, BaseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetCapsuleLocationFromBase_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetCapsuleLocationFromBase_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::NewProp_BaseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "GetCapsuleLocationFromBase", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::AGLS_HumanAI_CharacterBase_eventGetCapsuleLocationFromBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::AGLS_HumanAI_CharacterBase_eventGetCapsuleLocationFromBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execGetCapsuleLocationFromBase)
{
	P_GET_STRUCT(FVector,Z_Param_BaseLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCapsuleLocationFromBase(Z_Param_BaseLocation,Z_Param_ZOffset);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function GetCapsuleLocationFromBase

// Begin Class AAGLS_HumanAI_CharacterBase Function GetControlForwardRightVector
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventGetControlForwardRightVector_Parms
	{
		FVector ReturnForward;
		FVector ReturnRight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Utility" },
		{ "DisplayName", "Get Control Forward Right Vector" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnForward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::NewProp_ReturnForward = { "ReturnForward", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetControlForwardRightVector_Parms, ReturnForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::NewProp_ReturnRight = { "ReturnRight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetControlForwardRightVector_Parms, ReturnRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::NewProp_ReturnForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::NewProp_ReturnRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "GetControlForwardRightVector", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::AGLS_HumanAI_CharacterBase_eventGetControlForwardRightVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::AGLS_HumanAI_CharacterBase_eventGetControlForwardRightVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execGetControlForwardRightVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnForward);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnRight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetControlForwardRightVector(Z_Param_Out_ReturnForward,Z_Param_Out_ReturnRight);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function GetControlForwardRightVector

// Begin Class AAGLS_HumanAI_CharacterBase Function GetGetUpAnimation
struct AGLS_HumanAI_CharacterBase_eventGetGetUpAnimation_Parms
{
	TSoftObjectPtr<UAnimMontage> ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventGetGetUpAnimation_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation = FName(TEXT("GetGetUpAnimation"));
TSoftObjectPtr<UAnimMontage> AAGLS_HumanAI_CharacterBase::GetGetUpAnimation()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventGetGetUpAnimation_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetGetUpAnimation_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Ragdoll" },
		{ "DisplayName", "Get Get Up Animation" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetGetUpAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "GetGetUpAnimation", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventGetGetUpAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventGetGetUpAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execGetGetUpAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UAnimMontage>*)Z_Param__Result=P_THIS->GetGetUpAnimation_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function GetGetUpAnimation

// Begin Class AAGLS_HumanAI_CharacterBase Function GetPistolAmmoData
struct AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms
{
	int32 CurrentAmmoCount;
	int32 CurrentMagazinesCount;
	int32 MaxAmmoCount;
	int32 MaxMagazinesCount;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData = FName(TEXT("GetPistolAmmoData"));
bool AAGLS_HumanAI_CharacterBase::GetPistolAmmoData(int32& CurrentAmmoCount, int32& CurrentMagazinesCount, int32& MaxAmmoCount, int32& MaxMagazinesCount)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms Parms;
		Parms.CurrentAmmoCount=CurrentAmmoCount;
		Parms.CurrentMagazinesCount=CurrentMagazinesCount;
		Parms.MaxAmmoCount=MaxAmmoCount;
		Parms.MaxMagazinesCount=MaxMagazinesCount;
	ProcessEvent(Func,&Parms);
		CurrentAmmoCount=Parms.CurrentAmmoCount;
		CurrentMagazinesCount=Parms.CurrentMagazinesCount;
		MaxAmmoCount=Parms.MaxAmmoCount;
		MaxMagazinesCount=Parms.MaxMagazinesCount;
		return !!Parms.ReturnValue;
	}
	else
	{
		return GetPistolAmmoData_Implementation(CurrentAmmoCount, CurrentMagazinesCount, MaxAmmoCount, MaxMagazinesCount);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Shooting System" },
		{ "DisplayName", "Get Pistol Ammo Values" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmoCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagazinesCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMagazinesCount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_CurrentAmmoCount = { "CurrentAmmoCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms, CurrentAmmoCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_CurrentMagazinesCount = { "CurrentMagazinesCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms, CurrentMagazinesCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_MaxAmmoCount = { "MaxAmmoCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms, MaxAmmoCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_MaxMagazinesCount = { "MaxMagazinesCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms, MaxMagazinesCount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_CurrentAmmoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_CurrentMagazinesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_MaxAmmoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_MaxMagazinesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "GetPistolAmmoData", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventGetPistolAmmoData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execGetPistolAmmoData)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CurrentAmmoCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CurrentMagazinesCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxAmmoCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxMagazinesCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPistolAmmoData_Implementation(Z_Param_Out_CurrentAmmoCount,Z_Param_Out_CurrentMagazinesCount,Z_Param_Out_MaxAmmoCount,Z_Param_Out_MaxMagazinesCount);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function GetPistolAmmoData

// Begin Class AAGLS_HumanAI_CharacterBase Function GetRifleAmmoData
struct AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms
{
	int32 CurrentAmmoCount;
	int32 CurrentMagazinesCount;
	int32 MaxAmmoCount;
	int32 MaxMagazinesCount;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData = FName(TEXT("GetRifleAmmoData"));
bool AAGLS_HumanAI_CharacterBase::GetRifleAmmoData(int32& CurrentAmmoCount, int32& CurrentMagazinesCount, int32& MaxAmmoCount, int32& MaxMagazinesCount)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms Parms;
		Parms.CurrentAmmoCount=CurrentAmmoCount;
		Parms.CurrentMagazinesCount=CurrentMagazinesCount;
		Parms.MaxAmmoCount=MaxAmmoCount;
		Parms.MaxMagazinesCount=MaxMagazinesCount;
	ProcessEvent(Func,&Parms);
		CurrentAmmoCount=Parms.CurrentAmmoCount;
		CurrentMagazinesCount=Parms.CurrentMagazinesCount;
		MaxAmmoCount=Parms.MaxAmmoCount;
		MaxMagazinesCount=Parms.MaxMagazinesCount;
		return !!Parms.ReturnValue;
	}
	else
	{
		return GetRifleAmmoData_Implementation(CurrentAmmoCount, CurrentMagazinesCount, MaxAmmoCount, MaxMagazinesCount);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Shooting System" },
		{ "DisplayName", "Get Rifle Ammo Values" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmoCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagazinesCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMagazinesCount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_CurrentAmmoCount = { "CurrentAmmoCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms, CurrentAmmoCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_CurrentMagazinesCount = { "CurrentMagazinesCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms, CurrentMagazinesCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_MaxAmmoCount = { "MaxAmmoCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms, MaxAmmoCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_MaxMagazinesCount = { "MaxMagazinesCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms, MaxMagazinesCount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_CurrentAmmoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_CurrentMagazinesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_MaxAmmoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_MaxMagazinesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "GetRifleAmmoData", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventGetRifleAmmoData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execGetRifleAmmoData)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CurrentAmmoCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CurrentMagazinesCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxAmmoCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxMagazinesCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRifleAmmoData_Implementation(Z_Param_Out_CurrentAmmoCount,Z_Param_Out_CurrentMagazinesCount,Z_Param_Out_MaxAmmoCount,Z_Param_Out_MaxMagazinesCount);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function GetRifleAmmoData

// Begin Class AAGLS_HumanAI_CharacterBase Function GetTargetSpeedWithStrafe
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventGetTargetSpeedWithStrafe_Parms
	{
		FVector SpeedValues;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Essential" },
		{ "DisplayName", "Get Target Speed With Strafe" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::NewProp_SpeedValues = { "SpeedValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetTargetSpeedWithStrafe_Parms, SpeedValues), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventGetTargetSpeedWithStrafe_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::NewProp_SpeedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "GetTargetSpeedWithStrafe", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::AGLS_HumanAI_CharacterBase_eventGetTargetSpeedWithStrafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::AGLS_HumanAI_CharacterBase_eventGetTargetSpeedWithStrafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execGetTargetSpeedWithStrafe)
{
	P_GET_STRUCT(FVector,Z_Param_SpeedValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTargetSpeedWithStrafe(Z_Param_SpeedValues);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function GetTargetSpeedWithStrafe

// Begin Class AAGLS_HumanAI_CharacterBase Function IsAlive
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Utility" },
		{ "DisplayName", "Is Alive" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventIsAlive_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::AGLS_HumanAI_CharacterBase_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::AGLS_HumanAI_CharacterBase_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function IsAlive

// Begin Class AAGLS_HumanAI_CharacterBase Function MakeForPropsAttachValues
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_MakeForPropsAttachValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Held Objects" },
		{ "DisplayName", "Make For Props Attach Values" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_MakeForPropsAttachValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "MakeForPropsAttachValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_MakeForPropsAttachValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_MakeForPropsAttachValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_MakeForPropsAttachValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_MakeForPropsAttachValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execMakeForPropsAttachValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeForPropsAttachValues();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function MakeForPropsAttachValues

// Begin Class AAGLS_HumanAI_CharacterBase Function OnCharacterMovementModeChanged
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventOnCharacterMovementModeChanged_Parms
	{
		TEnumAsByte<EMovementMode> PrevMovementMode;
		TEnumAsByte<EMovementMode> NewMovementMode;
		uint8 PrevCustomMode;
		uint8 NewCustomMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|State Changes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//States Functions [][][][][][][][][][][][] [S] [T] [A] [T] [E] [S]   [F] [U] [N] [C] [T] [I] [O] [N] [S]\n" },
#endif
		{ "DisplayName", "On Character Movement Mode Changed" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States Functions [][][][][][][][][][][][] [S] [T] [A] [T] [E] [S]   [F] [U] [N] [C] [T] [I] [O] [N] [S]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevCustomMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewCustomMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_PrevMovementMode = { "PrevMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnCharacterMovementModeChanged_Parms, PrevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnCharacterMovementModeChanged_Parms, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_PrevCustomMode = { "PrevCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnCharacterMovementModeChanged_Parms, PrevCustomMode), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_NewCustomMode = { "NewCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnCharacterMovementModeChanged_Parms, NewCustomMode), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_PrevMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_NewMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_PrevCustomMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::NewProp_NewCustomMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "OnCharacterMovementModeChanged", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::AGLS_HumanAI_CharacterBase_eventOnCharacterMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::AGLS_HumanAI_CharacterBase_eventOnCharacterMovementModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execOnCharacterMovementModeChanged)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_PrevMovementMode);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewMovementMode);
	P_GET_PROPERTY(FByteProperty,Z_Param_PrevCustomMode);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewCustomMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCharacterMovementModeChanged(EMovementMode(Z_Param_PrevMovementMode),EMovementMode(Z_Param_NewMovementMode),Z_Param_PrevCustomMode,Z_Param_NewCustomMode);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function OnCharacterMovementModeChanged

// Begin Class AAGLS_HumanAI_CharacterBase Function OnGaitChanged
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventOnGaitChanged_Parms
	{
		CALS_Gait NewActualGait;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|State Changes" },
		{ "DisplayName", "On Gait Changed" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewActualGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewActualGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::NewProp_NewActualGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::NewProp_NewActualGait = { "NewActualGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnGaitChanged_Parms, NewActualGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::NewProp_NewActualGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::NewProp_NewActualGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "OnGaitChanged", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::AGLS_HumanAI_CharacterBase_eventOnGaitChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::AGLS_HumanAI_CharacterBase_eventOnGaitChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execOnGaitChanged)
{
	P_GET_ENUM(CALS_Gait,Z_Param_NewActualGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGaitChanged(CALS_Gait(Z_Param_NewActualGait));
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function OnGaitChanged

// Begin Class AAGLS_HumanAI_CharacterBase Function OnMovementActionChanged
struct AGLS_HumanAI_CharacterBase_eventOnMovementActionChanged_Parms
{
	CALS_MovementAction NewMovementAction;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged = FName(TEXT("OnMovementActionChanged"));
void AAGLS_HumanAI_CharacterBase::OnMovementActionChanged(CALS_MovementAction NewMovementAction)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventOnMovementActionChanged_Parms Parms;
		Parms.NewMovementAction=NewMovementAction;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnMovementActionChanged_Implementation(NewMovementAction);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|State Changes" },
		{ "DisplayName", "On Movement Action Changed" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovementAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::NewProp_NewMovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::NewProp_NewMovementAction = { "NewMovementAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnMovementActionChanged_Parms, NewMovementAction), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(0, nullptr) }; // 3049088149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::NewProp_NewMovementAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::NewProp_NewMovementAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "OnMovementActionChanged", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventOnMovementActionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventOnMovementActionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execOnMovementActionChanged)
{
	P_GET_ENUM(CALS_MovementAction,Z_Param_NewMovementAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMovementActionChanged_Implementation(CALS_MovementAction(Z_Param_NewMovementAction));
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function OnMovementActionChanged

// Begin Class AAGLS_HumanAI_CharacterBase Function OnMovementStateChanged
struct AGLS_HumanAI_CharacterBase_eventOnMovementStateChanged_Parms
{
	CALS_MovementState NewMovementState;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged = FName(TEXT("OnMovementStateChanged"));
void AAGLS_HumanAI_CharacterBase::OnMovementStateChanged(CALS_MovementState NewMovementState)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventOnMovementStateChanged_Parms Parms;
		Parms.NewMovementState=NewMovementState;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnMovementStateChanged_Implementation(NewMovementState);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|State Changes" },
		{ "DisplayName", "On Movement State Changed" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovementState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::NewProp_NewMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::NewProp_NewMovementState = { "NewMovementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnMovementStateChanged_Parms, NewMovementState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 3255268152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::NewProp_NewMovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::NewProp_NewMovementState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "OnMovementStateChanged", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventOnMovementStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventOnMovementStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execOnMovementStateChanged)
{
	P_GET_ENUM(CALS_MovementState,Z_Param_NewMovementState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMovementStateChanged_Implementation(CALS_MovementState(Z_Param_NewMovementState));
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function OnMovementStateChanged

// Begin Class AAGLS_HumanAI_CharacterBase Function OnOverlayStateChanged
struct AGLS_HumanAI_CharacterBase_eventOnOverlayStateChanged_Parms
{
	CALS_OverlayState NewOverlayState;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged = FName(TEXT("OnOverlayStateChanged"));
void AAGLS_HumanAI_CharacterBase::OnOverlayStateChanged(CALS_OverlayState NewOverlayState)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventOnOverlayStateChanged_Parms Parms;
		Parms.NewOverlayState=NewOverlayState;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnOverlayStateChanged_Implementation(NewOverlayState);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|State Changes" },
		{ "DisplayName", "On Overlay State Changed" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewOverlayState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOverlayState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::NewProp_NewOverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::NewProp_NewOverlayState = { "NewOverlayState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnOverlayStateChanged_Parms, NewOverlayState), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::NewProp_NewOverlayState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::NewProp_NewOverlayState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "OnOverlayStateChanged", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventOnOverlayStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventOnOverlayStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execOnOverlayStateChanged)
{
	P_GET_ENUM(CALS_OverlayState,Z_Param_NewOverlayState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlayStateChanged_Implementation(CALS_OverlayState(Z_Param_NewOverlayState));
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function OnOverlayStateChanged

// Begin Class AAGLS_HumanAI_CharacterBase Function OnRotationModeChanged
struct AGLS_HumanAI_CharacterBase_eventOnRotationModeChanged_Parms
{
	CALS_RotationMode NewRotationMode;
	float LockTime;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged = FName(TEXT("OnRotationModeChanged"));
void AAGLS_HumanAI_CharacterBase::OnRotationModeChanged(CALS_RotationMode NewRotationMode, float LockTime)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventOnRotationModeChanged_Parms Parms;
		Parms.NewRotationMode=NewRotationMode;
		Parms.LockTime=LockTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnRotationModeChanged_Implementation(NewRotationMode, LockTime);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|State Changes" },
		{ "CPP_Default_LockTime", "0.500000" },
		{ "DisplayName", "On Rotation Mode Changed" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewRotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRotationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::NewProp_NewRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::NewProp_NewRotationMode = { "NewRotationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnRotationModeChanged_Parms, NewRotationMode), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(0, nullptr) }; // 1340769226
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::NewProp_LockTime = { "LockTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnRotationModeChanged_Parms, LockTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::NewProp_NewRotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::NewProp_NewRotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::NewProp_LockTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "OnRotationModeChanged", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventOnRotationModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventOnRotationModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execOnRotationModeChanged)
{
	P_GET_ENUM(CALS_RotationMode,Z_Param_NewRotationMode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LockTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRotationModeChanged_Implementation(CALS_RotationMode(Z_Param_NewRotationMode),Z_Param_LockTime);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function OnRotationModeChanged

// Begin Class AAGLS_HumanAI_CharacterBase Function OnStanceChanged
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventOnStanceChanged_Parms
	{
		CALS_Stance NewStance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|State Changes" },
		{ "DisplayName", "On Stance Changed" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::NewProp_NewStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::NewProp_NewStance = { "NewStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventOnStanceChanged_Parms, NewStance), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(0, nullptr) }; // 87690985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::NewProp_NewStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::NewProp_NewStance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "OnStanceChanged", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::AGLS_HumanAI_CharacterBase_eventOnStanceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::AGLS_HumanAI_CharacterBase_eventOnStanceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execOnStanceChanged)
{
	P_GET_ENUM(CALS_Stance,Z_Param_NewStance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStanceChanged(CALS_Stance(Z_Param_NewStance));
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function OnStanceChanged

// Begin Class AAGLS_HumanAI_CharacterBase Function RagdollEnd
static const FName NAME_AAGLS_HumanAI_CharacterBase_RagdollEnd = FName(TEXT("RagdollEnd"));
void AAGLS_HumanAI_CharacterBase::RagdollEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_RagdollEnd);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RagdollEnd_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Ragdoll" },
		{ "DisplayName", "Ragdoll End" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "RagdollEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execRagdollEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RagdollEnd_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function RagdollEnd

// Begin Class AAGLS_HumanAI_CharacterBase Function RagdollStart
static const FName NAME_AAGLS_HumanAI_CharacterBase_RagdollStart = FName(TEXT("RagdollStart"));
void AAGLS_HumanAI_CharacterBase::RagdollStart()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_RagdollStart);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RagdollStart_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Ragdoll" },
		{ "DisplayName", "Ragdoll Start" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "RagdollStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execRagdollStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RagdollStart_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function RagdollStart

// Begin Class AAGLS_HumanAI_CharacterBase Function RagdollUpdate
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventRagdollUpdate_Parms
	{
		float OutSpringRange;
		float InDamping;
		float InForceLimit;
		int32 DebugIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OutSpringRange,InDamping,InForceLimit,DebugIndex" },
		{ "Category", "Human AI|Ragdoll" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_InDamping", "0.000000" },
		{ "CPP_Default_InForceLimit", "0.000000" },
		{ "CPP_Default_OutSpringRange", "25000.000000" },
		{ "DisplayName", "Ragdoll Update" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSpringRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_OutSpringRange = { "OutSpringRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventRagdollUpdate_Parms, OutSpringRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_InDamping = { "InDamping", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventRagdollUpdate_Parms, InDamping), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventRagdollUpdate_Parms, InForceLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventRagdollUpdate_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_OutSpringRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_InDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_InForceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::NewProp_DebugIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "RagdollUpdate", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::AGLS_HumanAI_CharacterBase_eventRagdollUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::AGLS_HumanAI_CharacterBase_eventRagdollUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execRagdollUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutSpringRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamping);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RagdollUpdate(Z_Param_OutSpringRange,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_DebugIndex);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function RagdollUpdate

// Begin Class AAGLS_HumanAI_CharacterBase Function SetCurrentMovementParametersValues
struct AGLS_HumanAI_CharacterBase_eventSetCurrentMovementParametersValues_Parms
{
	bool UseVectorControl;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues = FName(TEXT("SetCurrentMovementParametersValues"));
void AAGLS_HumanAI_CharacterBase::SetCurrentMovementParametersValues(bool UseVectorControl)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventSetCurrentMovementParametersValues_Parms Parms;
		Parms.UseVectorControl=UseVectorControl ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetCurrentMovementParametersValues_Implementation(UseVectorControl);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Essential" },
		{ "DisplayName", "Set Current Movement Parameters Values" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseVectorControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseVectorControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::NewProp_UseVectorControl_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventSetCurrentMovementParametersValues_Parms*)Obj)->UseVectorControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::NewProp_UseVectorControl = { "UseVectorControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventSetCurrentMovementParametersValues_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::NewProp_UseVectorControl_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::NewProp_UseVectorControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "SetCurrentMovementParametersValues", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventSetCurrentMovementParametersValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventSetCurrentMovementParametersValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execSetCurrentMovementParametersValues)
{
	P_GET_UBOOL(Z_Param_UseVectorControl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentMovementParametersValues_Implementation(Z_Param_UseVectorControl);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function SetCurrentMovementParametersValues

// Begin Class AAGLS_HumanAI_CharacterBase Function ShotFirstTraceCheck
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms
	{
		bool StartScan;
		FHitResult HitResult;
		FVector OutScanOrigin;
		FVector OutTraceDirection;
		TArray<TEnumAsByte<EObjectTypeQuery> > ObjectsType;
		FName HeadSocketName;
		FName MuzzleSocketName;
		float BlendWithMuzzle;
		float TraceBasicLenght;
		float DispersionScale;
		float WallPenetrationLen;
		int32 DebugTraceIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "ObjectsType" },
		{ "Category", "Human AI|Shooting System" },
		{ "CPP_Default_BlendWithMuzzle", "0.500000" },
		{ "CPP_Default_DebugTraceIndex", "0" },
		{ "CPP_Default_DispersionScale", "1.000000" },
		{ "CPP_Default_HeadSocketName", "Head" },
		{ "CPP_Default_MuzzleSocketName", "Muzzle" },
		{ "CPP_Default_TraceBasicLenght", "5000.000000" },
		{ "CPP_Default_WallPenetrationLen", "100.000000" },
		{ "DisplayName", "Shot First Trace Check" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_StartScan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartScan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutScanOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTraceDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectsType_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeadSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWithMuzzle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceBasicLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DispersionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallPenetrationLen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugTraceIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_StartScan_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms*)Obj)->StartScan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_StartScan = { "StartScan", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_StartScan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_OutScanOrigin = { "OutScanOrigin", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, OutScanOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_OutTraceDirection = { "OutTraceDirection", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, OutTraceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ObjectsType_Inner = { "ObjectsType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ObjectsType = { "ObjectsType", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, ObjectsType), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectsType_MetaData), NewProp_ObjectsType_MetaData) }; // 1798967895
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_HeadSocketName = { "HeadSocketName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, HeadSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, MuzzleSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_BlendWithMuzzle = { "BlendWithMuzzle", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, BlendWithMuzzle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_TraceBasicLenght = { "TraceBasicLenght", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, TraceBasicLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_DispersionScale = { "DispersionScale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, DispersionScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_WallPenetrationLen = { "WallPenetrationLen", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, WallPenetrationLen), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_DebugTraceIndex = { "DebugTraceIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms, DebugTraceIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_StartScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_OutScanOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_OutTraceDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ObjectsType_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ObjectsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_HeadSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_MuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_BlendWithMuzzle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_TraceBasicLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_DispersionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_WallPenetrationLen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_DebugTraceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "ShotFirstTraceCheck", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::AGLS_HumanAI_CharacterBase_eventShotFirstTraceCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execShotFirstTraceCheck)
{
	P_GET_UBOOL_REF(Z_Param_Out_StartScan);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutScanOrigin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTraceDirection);
	P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_ObjectsType);
	P_GET_PROPERTY(FNameProperty,Z_Param_HeadSocketName);
	P_GET_PROPERTY(FNameProperty,Z_Param_MuzzleSocketName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendWithMuzzle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceBasicLenght);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DispersionScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WallPenetrationLen);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugTraceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShotFirstTraceCheck(Z_Param_Out_StartScan,Z_Param_Out_HitResult,Z_Param_Out_OutScanOrigin,Z_Param_Out_OutTraceDirection,Z_Param_ObjectsType,Z_Param_HeadSocketName,Z_Param_MuzzleSocketName,Z_Param_BlendWithMuzzle,Z_Param_TraceBasicLenght,Z_Param_DispersionScale,Z_Param_WallPenetrationLen,Z_Param_DebugTraceIndex);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function ShotFirstTraceCheck

// Begin Class AAGLS_HumanAI_CharacterBase Function ShotScanTraceCheck
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms
	{
		FHitResult HitResult;
		TArray<TEnumAsByte<EObjectTypeQuery> > ObjectsType;
		bool StartScan;
		FVector Origin;
		float TraceBasicLenght;
		int32 DebugTraceIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "ObjectsType" },
		{ "Category", "Human AI|Shooting System" },
		{ "CPP_Default_DebugTraceIndex", "0" },
		{ "CPP_Default_Origin", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_StartScan", "false" },
		{ "CPP_Default_TraceBasicLenght", "5000.000000" },
		{ "DisplayName", "Shot Scan Trace Check" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectsType_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsType;
	static void NewProp_StartScan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartScan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceBasicLenght;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugTraceIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ObjectsType_Inner = { "ObjectsType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ObjectsType = { "ObjectsType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms, ObjectsType), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectsType_MetaData), NewProp_ObjectsType_MetaData) }; // 1798967895
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_StartScan_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms*)Obj)->StartScan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_StartScan = { "StartScan", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_StartScan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_TraceBasicLenght = { "TraceBasicLenght", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms, TraceBasicLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_DebugTraceIndex = { "DebugTraceIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms, DebugTraceIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ObjectsType_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ObjectsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_StartScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_TraceBasicLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_DebugTraceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "ShotScanTraceCheck", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::AGLS_HumanAI_CharacterBase_eventShotScanTraceCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execShotScanTraceCheck)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_ObjectsType);
	P_GET_UBOOL(Z_Param_StartScan);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceBasicLenght);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugTraceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShotScanTraceCheck(Z_Param_Out_HitResult,Z_Param_ObjectsType,Z_Param_StartScan,Z_Param_Origin,Z_Param_TraceBasicLenght,Z_Param_DebugTraceIndex);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function ShotScanTraceCheck

// Begin Class AAGLS_HumanAI_CharacterBase Function SmoothedCapsuleRadiusUpdate
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics
{
	struct AGLS_HumanAI_CharacterBase_eventSmoothedCapsuleRadiusUpdate_Parms
	{
		float TargetHeight;
		float InterpSpeed;
		bool UpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Utility" },
		{ "CPP_Default_InterpSpeed", "30.000000" },
		{ "CPP_Default_TargetHeight", "90.000000" },
		{ "CPP_Default_UpdateOverlaps", "true" },
		{ "DisplayName", "Smooth Capsule Radius Update" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static void NewProp_UpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_TargetHeight = { "TargetHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventSmoothedCapsuleRadiusUpdate_Parms, TargetHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventSmoothedCapsuleRadiusUpdate_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_UpdateOverlaps_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventSmoothedCapsuleRadiusUpdate_Parms*)Obj)->UpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_UpdateOverlaps = { "UpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventSmoothedCapsuleRadiusUpdate_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_UpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_TargetHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::NewProp_UpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "SmoothedCapsuleRadiusUpdate", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::AGLS_HumanAI_CharacterBase_eventSmoothedCapsuleRadiusUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::AGLS_HumanAI_CharacterBase_eventSmoothedCapsuleRadiusUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execSmoothedCapsuleRadiusUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_GET_UBOOL(Z_Param_UpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothedCapsuleRadiusUpdate(Z_Param_TargetHeight,Z_Param_InterpSpeed,Z_Param_UpdateOverlaps);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function SmoothedCapsuleRadiusUpdate

// Begin Class AAGLS_HumanAI_CharacterBase Function StartDyingSequence
struct AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms
{
	FVector ImpulseNormal;
	FVector ImpulseLocation;
	CALS_DeathType DeathType;
	FName HitBoneName;
	int32 RifleModelIndex;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_StartDyingSequence = FName(TEXT("StartDyingSequence"));
bool AAGLS_HumanAI_CharacterBase::StartDyingSequence(FVector ImpulseNormal, FVector ImpulseLocation, CALS_DeathType DeathType, FName HitBoneName, int32 RifleModelIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_StartDyingSequence);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms Parms;
		Parms.ImpulseNormal=ImpulseNormal;
		Parms.ImpulseLocation=ImpulseLocation;
		Parms.DeathType=DeathType;
		Parms.HitBoneName=HitBoneName;
		Parms.RifleModelIndex=RifleModelIndex;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return StartDyingSequence_Implementation(ImpulseNormal, ImpulseLocation, DeathType, HitBoneName, RifleModelIndex);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Health And Damage" },
		{ "DisplayName", "Start Dying Sequence" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpulseNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpulseLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeathType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RifleModelIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ImpulseNormal = { "ImpulseNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms, ImpulseNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ImpulseLocation = { "ImpulseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms, ImpulseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_DeathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_DeathType = { "DeathType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms, DeathType), Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType, METADATA_PARAMS(0, nullptr) }; // 1991249896
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms, HitBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_RifleModelIndex = { "RifleModelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms, RifleModelIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ImpulseNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ImpulseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_DeathType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_DeathType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_HitBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_RifleModelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "StartDyingSequence", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventStartDyingSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execStartDyingSequence)
{
	P_GET_STRUCT(FVector,Z_Param_ImpulseNormal);
	P_GET_STRUCT(FVector,Z_Param_ImpulseLocation);
	P_GET_ENUM(CALS_DeathType,Z_Param_DeathType);
	P_GET_PROPERTY(FNameProperty,Z_Param_HitBoneName);
	P_GET_PROPERTY(FIntProperty,Z_Param_RifleModelIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartDyingSequence_Implementation(Z_Param_ImpulseNormal,Z_Param_ImpulseLocation,CALS_DeathType(Z_Param_DeathType),Z_Param_HitBoneName,Z_Param_RifleModelIndex);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function StartDyingSequence

// Begin Class AAGLS_HumanAI_CharacterBase Function TrySimpleTraversalAction
struct AGLS_HumanAI_CharacterBase_eventTrySimpleTraversalAction_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_HumanAI_CharacterBase_eventTrySimpleTraversalAction_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction = FName(TEXT("TrySimpleTraversalAction"));
bool AAGLS_HumanAI_CharacterBase::TrySimpleTraversalAction()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventTrySimpleTraversalAction_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return TrySimpleTraversalAction_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Traversal" },
		{ "DisplayName", "Try Simple Traversal Action" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventTrySimpleTraversalAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventTrySimpleTraversalAction_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "TrySimpleTraversalAction", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventTrySimpleTraversalAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventTrySimpleTraversalAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execTrySimpleTraversalAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySimpleTraversalAction_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function TrySimpleTraversalAction

// Begin Class AAGLS_HumanAI_CharacterBase Function UpdateGroundedMovementValues
struct AGLS_HumanAI_CharacterBase_eventUpdateGroundedMovementValues_Parms
{
	bool UseVectorControl;
};
static const FName NAME_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues = FName(TEXT("UpdateGroundedMovementValues"));
void AAGLS_HumanAI_CharacterBase::UpdateGroundedMovementValues(bool UseVectorControl)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_HumanAI_CharacterBase_eventUpdateGroundedMovementValues_Parms Parms;
		Parms.UseVectorControl=UseVectorControl ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateGroundedMovementValues_Implementation(UseVectorControl);
	}
}
struct Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI|Essential" },
		{ "DisplayName", "Update Grounded Movement Values" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS Character" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseVectorControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseVectorControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::NewProp_UseVectorControl_SetBit(void* Obj)
{
	((AGLS_HumanAI_CharacterBase_eventUpdateGroundedMovementValues_Parms*)Obj)->UseVectorControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::NewProp_UseVectorControl = { "UseVectorControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_HumanAI_CharacterBase_eventUpdateGroundedMovementValues_Parms), &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::NewProp_UseVectorControl_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::NewProp_UseVectorControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, nullptr, "UpdateGroundedMovementValues", nullptr, nullptr, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::PropPointers), sizeof(AGLS_HumanAI_CharacterBase_eventUpdateGroundedMovementValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_HumanAI_CharacterBase_eventUpdateGroundedMovementValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_HumanAI_CharacterBase::execUpdateGroundedMovementValues)
{
	P_GET_UBOOL(Z_Param_UseVectorControl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGroundedMovementValues_Implementation(Z_Param_UseVectorControl);
	P_NATIVE_END;
}
// End Class AAGLS_HumanAI_CharacterBase Function UpdateGroundedMovementValues

// Begin Class AAGLS_HumanAI_CharacterBase
void AAGLS_HumanAI_CharacterBase::StaticRegisterNativesAAGLS_HumanAI_CharacterBase()
{
	UClass* Class = AAGLS_HumanAI_CharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamageValue", &AAGLS_HumanAI_CharacterBase::execApplyDamageValue },
		{ "AttachAllPropsToDefault", &AAGLS_HumanAI_CharacterBase::execAttachAllPropsToDefault },
		{ "AttachPropTo", &AAGLS_HumanAI_CharacterBase::execAttachPropTo },
		{ "CanUpdateOverlay", &AAGLS_HumanAI_CharacterBase::execCanUpdateOverlay },
		{ "ChangeToPistolWhenNoAmmo", &AAGLS_HumanAI_CharacterBase::execChangeToPistolWhenNoAmmo },
		{ "CheckCanShoot", &AAGLS_HumanAI_CharacterBase::execCheckCanShoot },
		{ "CheckFallDamage", &AAGLS_HumanAI_CharacterBase::execCheckFallDamage },
		{ "CheckHealthPerFrame", &AAGLS_HumanAI_CharacterBase::execCheckHealthPerFrame },
		{ "DeathByFallDamage", &AAGLS_HumanAI_CharacterBase::execDeathByFallDamage },
		{ "DropProps", &AAGLS_HumanAI_CharacterBase::execDropProps },
		{ "FindCoverFast", &AAGLS_HumanAI_CharacterBase::execFindCoverFast },
		{ "GetCalpsuleBaseLocation", &AAGLS_HumanAI_CharacterBase::execGetCalpsuleBaseLocation },
		{ "GetCapsuleLocationFromBase", &AAGLS_HumanAI_CharacterBase::execGetCapsuleLocationFromBase },
		{ "GetControlForwardRightVector", &AAGLS_HumanAI_CharacterBase::execGetControlForwardRightVector },
		{ "GetGetUpAnimation", &AAGLS_HumanAI_CharacterBase::execGetGetUpAnimation },
		{ "GetPistolAmmoData", &AAGLS_HumanAI_CharacterBase::execGetPistolAmmoData },
		{ "GetRifleAmmoData", &AAGLS_HumanAI_CharacterBase::execGetRifleAmmoData },
		{ "GetTargetSpeedWithStrafe", &AAGLS_HumanAI_CharacterBase::execGetTargetSpeedWithStrafe },
		{ "IsAlive", &AAGLS_HumanAI_CharacterBase::execIsAlive },
		{ "MakeForPropsAttachValues", &AAGLS_HumanAI_CharacterBase::execMakeForPropsAttachValues },
		{ "OnCharacterMovementModeChanged", &AAGLS_HumanAI_CharacterBase::execOnCharacterMovementModeChanged },
		{ "OnGaitChanged", &AAGLS_HumanAI_CharacterBase::execOnGaitChanged },
		{ "OnMovementActionChanged", &AAGLS_HumanAI_CharacterBase::execOnMovementActionChanged },
		{ "OnMovementStateChanged", &AAGLS_HumanAI_CharacterBase::execOnMovementStateChanged },
		{ "OnOverlayStateChanged", &AAGLS_HumanAI_CharacterBase::execOnOverlayStateChanged },
		{ "OnRotationModeChanged", &AAGLS_HumanAI_CharacterBase::execOnRotationModeChanged },
		{ "OnStanceChanged", &AAGLS_HumanAI_CharacterBase::execOnStanceChanged },
		{ "RagdollEnd", &AAGLS_HumanAI_CharacterBase::execRagdollEnd },
		{ "RagdollStart", &AAGLS_HumanAI_CharacterBase::execRagdollStart },
		{ "RagdollUpdate", &AAGLS_HumanAI_CharacterBase::execRagdollUpdate },
		{ "SetCurrentMovementParametersValues", &AAGLS_HumanAI_CharacterBase::execSetCurrentMovementParametersValues },
		{ "ShotFirstTraceCheck", &AAGLS_HumanAI_CharacterBase::execShotFirstTraceCheck },
		{ "ShotScanTraceCheck", &AAGLS_HumanAI_CharacterBase::execShotScanTraceCheck },
		{ "SmoothedCapsuleRadiusUpdate", &AAGLS_HumanAI_CharacterBase::execSmoothedCapsuleRadiusUpdate },
		{ "StartDyingSequence", &AAGLS_HumanAI_CharacterBase::execStartDyingSequence },
		{ "TrySimpleTraversalAction", &AAGLS_HumanAI_CharacterBase::execTrySimpleTraversalAction },
		{ "UpdateGroundedMovementValues", &AAGLS_HumanAI_CharacterBase::execUpdateGroundedMovementValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGLS_HumanAI_CharacterBase);
UClass* Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_NoRegister()
{
	return AAGLS_HumanAI_CharacterBase::StaticClass();
}
struct Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AGLS_HumanAI_CharacterBase.h" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightLandMontage_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Anims Assets" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardLandMontage_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Anims Assets" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSpeedMapCurveC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Grounded" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMoveSettingsVectorC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Grounded" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMoveSettingsScalarC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Grounded" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDeathC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitedByKnifeOrHandC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEquipPropC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsReloadingWeaponC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHostageC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsVicForSF_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStealthKillC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is Vis For Stealth Finisher Action\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is Vis For Stealth Finisher Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSittingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanUpdateStanceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanUpdateRotationMode_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOverlayChangeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODsUp_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakFall_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAiming_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthPoints_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IMPORTANT VARIABLE: If CurrentHealth < 0 OR CurrentHealth > MaxHealth THEN on BeginPlay CurrentHealth = MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMPORTANT VARIABLE: If CurrentHealth < 0 OR CurrentHealth > MaxHealth THEN on BeginPlay CurrentHealth = MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScaleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollFaceUp_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRagdollVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollGetUpAnim_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HaveRifle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Shooting System" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HavePistol_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Shooting System" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanShoot_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Shooting System" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealingDamageScalar_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Shooting System" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DispersionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Shooting System" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevMovementStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|States" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotationModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|States" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredStanceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|States" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevOverlayState_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|States" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundedMoveModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|States" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_State_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|States" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayingPushAnimationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayingHitByZombieMontageC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousAimYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DyingMontageC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostageAtt_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropsAttachValues_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHoldingProp_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Cached Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateCapsuleToControlInIdle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Implemented in AGLS v1.2+\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in AGLS v1.2+" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRotationRateInIdle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Movement" },
		{ "EditCondition", "RotateCapsuleToControlInIdle==true" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelerationBiasScale_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This valie is required when current playing animation has anim curve when editing Deceleration value for Character Movement\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This valie is required when current playing animation has anim curve when editing Deceleration value for Character Movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundFrictionBiasScale_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human AI|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This valie is required when current playing animation has anim curve when editing GroundFriction value for Character Movement\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This valie is required when current playing animation has anim curve when editing GroundFriction value for Character Movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncFunctionsComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AGLS_HumanAI_CharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LightLandMontage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HardLandMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrafeSpeedMapCurveC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundMoveSettingsVectorC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundMoveSettingsScalarC;
	static void NewProp_IsDeathC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDeathC;
	static void NewProp_HitedByKnifeOrHandC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HitedByKnifeOrHandC;
	static void NewProp_IsEquipPropC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEquipPropC;
	static void NewProp_IsReloadingWeaponC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReloadingWeaponC;
	static void NewProp_IsHostageC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHostageC;
	static void NewProp_IsVicForSF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVicForSF;
	static void NewProp_StartStealthKillC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartStealthKillC;
	static void NewProp_IsSittingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSittingC;
	static void NewProp_CanUpdateStanceC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanUpdateStanceC;
	static void NewProp_CanUpdateRotationMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanUpdateRotationMode;
	static void NewProp_LockOverlayChangeC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockOverlayChangeC;
	static void NewProp_LODsUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LODsUp;
	static void NewProp_BreakFall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BreakFall;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScaleC;
	static void NewProp_RagdollOnGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollOnGround;
	static void NewProp_RagdollFaceUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollFaceUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastRagdollVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RagdollGetUpAnim;
	static void NewProp_HaveRifle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRifle;
	static void NewProp_HavePistol_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HavePistol;
	static void NewProp_CanShoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanShoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DealingDamageScalar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DispersionOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementStateC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredRotationModeC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredRotationModeC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredStanceC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredStanceC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevOverlayState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevOverlayState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedMoveModeC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedMoveModeC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LOD_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LOD_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapsuleSizeC;
	static void NewProp_IsPlayingPushAnimationC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayingPushAnimationC;
	static void NewProp_IsPlayingHitByZombieMontageC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayingHitByZombieMontageC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousVelocityC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousAimYawC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DyingMontageC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostageAtt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropsAttachValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PropsAttachValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PropsAttachValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PropsAttachValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHoldingProp;
	static void NewProp_RotateCapsuleToControlInIdle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateCapsuleToControlInIdle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRotationRateInIdle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecelerationBiasScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFrictionBiasScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncFunctionsComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ApplyDamageValue, "ApplyDamageValue" }, // 4017082478
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachAllPropsToDefault, "AttachAllPropsToDefault" }, // 2341016775
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_AttachPropTo, "AttachPropTo" }, // 3792128245
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CanUpdateOverlay, "CanUpdateOverlay" }, // 1618213735
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ChangeToPistolWhenNoAmmo, "ChangeToPistolWhenNoAmmo" }, // 3728405644
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckCanShoot, "CheckCanShoot" }, // 2228392308
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckFallDamage, "CheckFallDamage" }, // 320655433
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_CheckHealthPerFrame, "CheckHealthPerFrame" }, // 784793176
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DeathByFallDamage, "DeathByFallDamage" }, // 2861833240
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_DropProps, "DropProps" }, // 831682539
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_FindCoverFast, "FindCoverFast" }, // 2698595570
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCalpsuleBaseLocation, "GetCalpsuleBaseLocation" }, // 1116876251
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetCapsuleLocationFromBase, "GetCapsuleLocationFromBase" }, // 1931899913
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetControlForwardRightVector, "GetControlForwardRightVector" }, // 3644366210
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetGetUpAnimation, "GetGetUpAnimation" }, // 2739883479
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetPistolAmmoData, "GetPistolAmmoData" }, // 3140058611
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetRifleAmmoData, "GetRifleAmmoData" }, // 3895311324
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_GetTargetSpeedWithStrafe, "GetTargetSpeedWithStrafe" }, // 2386930156
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_IsAlive, "IsAlive" }, // 230474113
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_MakeForPropsAttachValues, "MakeForPropsAttachValues" }, // 3504944191
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnCharacterMovementModeChanged, "OnCharacterMovementModeChanged" }, // 961140383
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnGaitChanged, "OnGaitChanged" }, // 301482826
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementActionChanged, "OnMovementActionChanged" }, // 3119153089
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnMovementStateChanged, "OnMovementStateChanged" }, // 4095733408
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnOverlayStateChanged, "OnOverlayStateChanged" }, // 257693746
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnRotationModeChanged, "OnRotationModeChanged" }, // 1827721222
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_OnStanceChanged, "OnStanceChanged" }, // 1916005945
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollEnd, "RagdollEnd" }, // 16034869
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollStart, "RagdollStart" }, // 599246136
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_RagdollUpdate, "RagdollUpdate" }, // 1930211845
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SetCurrentMovementParametersValues, "SetCurrentMovementParametersValues" }, // 1319693472
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotFirstTraceCheck, "ShotFirstTraceCheck" }, // 3881442853
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_ShotScanTraceCheck, "ShotScanTraceCheck" }, // 876679153
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_SmoothedCapsuleRadiusUpdate, "SmoothedCapsuleRadiusUpdate" }, // 2080264727
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_StartDyingSequence, "StartDyingSequence" }, // 670929936
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_TrySimpleTraversalAction, "TrySimpleTraversalAction" }, // 1656998175
		{ &Z_Construct_UFunction_AAGLS_HumanAI_CharacterBase_UpdateGroundedMovementValues, "UpdateGroundedMovementValues" }, // 2404250576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGLS_HumanAI_CharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LightLandMontage = { "LightLandMontage", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, LightLandMontage), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightLandMontage_MetaData), NewProp_LightLandMontage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HardLandMontage = { "HardLandMontage", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, HardLandMontage), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardLandMontage_MetaData), NewProp_HardLandMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_StrafeSpeedMapCurveC = { "StrafeSpeedMapCurveC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, StrafeSpeedMapCurveC), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSpeedMapCurveC_MetaData), NewProp_StrafeSpeedMapCurveC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundMoveSettingsVectorC = { "GroundMoveSettingsVectorC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, GroundMoveSettingsVectorC), Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMoveSettingsVectorC_MetaData), NewProp_GroundMoveSettingsVectorC_MetaData) }; // 2042637900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundMoveSettingsScalarC = { "GroundMoveSettingsScalarC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, GroundMoveSettingsScalarC), Z_Construct_UScriptStruct_FCALSMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMoveSettingsScalarC_MetaData), NewProp_GroundMoveSettingsScalarC_MetaData) }; // 3277164154
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsDeathC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsDeathC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsDeathC = { "IsDeathC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsDeathC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDeathC_MetaData), NewProp_IsDeathC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HitedByKnifeOrHandC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->HitedByKnifeOrHandC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HitedByKnifeOrHandC = { "HitedByKnifeOrHandC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HitedByKnifeOrHandC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitedByKnifeOrHandC_MetaData), NewProp_HitedByKnifeOrHandC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsEquipPropC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsEquipPropC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsEquipPropC = { "IsEquipPropC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsEquipPropC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEquipPropC_MetaData), NewProp_IsEquipPropC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsReloadingWeaponC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsReloadingWeaponC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsReloadingWeaponC = { "IsReloadingWeaponC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsReloadingWeaponC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsReloadingWeaponC_MetaData), NewProp_IsReloadingWeaponC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsHostageC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsHostageC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsHostageC = { "IsHostageC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsHostageC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHostageC_MetaData), NewProp_IsHostageC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsVicForSF_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsVicForSF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsVicForSF = { "IsVicForSF", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsVicForSF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsVicForSF_MetaData), NewProp_IsVicForSF_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_StartStealthKillC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->StartStealthKillC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_StartStealthKillC = { "StartStealthKillC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_StartStealthKillC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStealthKillC_MetaData), NewProp_StartStealthKillC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsSittingC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsSittingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsSittingC = { "IsSittingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsSittingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSittingC_MetaData), NewProp_IsSittingC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateStanceC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->CanUpdateStanceC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateStanceC = { "CanUpdateStanceC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateStanceC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanUpdateStanceC_MetaData), NewProp_CanUpdateStanceC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateRotationMode_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->CanUpdateRotationMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateRotationMode = { "CanUpdateRotationMode", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateRotationMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanUpdateRotationMode_MetaData), NewProp_CanUpdateRotationMode_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LockOverlayChangeC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->LockOverlayChangeC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LockOverlayChangeC = { "LockOverlayChangeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LockOverlayChangeC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOverlayChangeC_MetaData), NewProp_LockOverlayChangeC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LODsUp_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->LODsUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LODsUp = { "LODsUp", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LODsUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODsUp_MetaData), NewProp_LODsUp_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_BreakFall_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->BreakFall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_BreakFall = { "BreakFall", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_BreakFall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakFall_MetaData), NewProp_BreakFall_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_TargetAiming = { "TargetAiming", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, TargetAiming), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAiming_MetaData), NewProp_TargetAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CurrentHealthPoints = { "CurrentHealthPoints", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, CurrentHealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealthPoints_MetaData), NewProp_CurrentHealthPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_SpeedScaleC = { "SpeedScaleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, SpeedScaleC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedScaleC_MetaData), NewProp_SpeedScaleC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollOnGround_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->RagdollOnGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollOnGround = { "RagdollOnGround", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollOnGround_MetaData), NewProp_RagdollOnGround_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollFaceUp_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->RagdollFaceUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollFaceUp = { "RagdollFaceUp", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollFaceUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollFaceUp_MetaData), NewProp_RagdollFaceUp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LastRagdollVelocity = { "LastRagdollVelocity", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, LastRagdollVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRagdollVelocity_MetaData), NewProp_LastRagdollVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DeathTime = { "DeathTime", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DeathTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathTime_MetaData), NewProp_DeathTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollGetUpAnim = { "RagdollGetUpAnim", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, RagdollGetUpAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollGetUpAnim_MetaData), NewProp_RagdollGetUpAnim_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HaveRifle_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->HaveRifle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HaveRifle = { "HaveRifle", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HaveRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HaveRifle_MetaData), NewProp_HaveRifle_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HavePistol_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->HavePistol = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HavePistol = { "HavePistol", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HavePistol_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HavePistol_MetaData), NewProp_HavePistol_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanShoot_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->CanShoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanShoot = { "CanShoot", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanShoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanShoot_MetaData), NewProp_CanShoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DealingDamageScalar = { "DealingDamageScalar", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DealingDamageScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealingDamageScalar_MetaData), NewProp_DealingDamageScalar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DispersionOffset = { "DispersionOffset", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DispersionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DispersionOffset_MetaData), NewProp_DispersionOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevMovementStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevMovementStateC = { "PrevMovementStateC", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, PrevMovementStateC), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevMovementStateC_MetaData), NewProp_PrevMovementStateC_MetaData) }; // 3255268152
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredRotationModeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredRotationModeC = { "DesiredRotationModeC", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DesiredRotationModeC), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredRotationModeC_MetaData), NewProp_DesiredRotationModeC_MetaData) }; // 1340769226
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredStanceC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredStanceC = { "DesiredStanceC", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DesiredStanceC), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredStanceC_MetaData), NewProp_DesiredStanceC_MetaData) }; // 87690985
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevOverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevOverlayState = { "PrevOverlayState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, PrevOverlayState), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevOverlayState_MetaData), NewProp_PrevOverlayState_MetaData) }; // 3098219672
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundedMoveModeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundedMoveModeC = { "GroundedMoveModeC", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, GroundedMoveModeC), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundedMoveModeC_MetaData), NewProp_GroundedMoveModeC_MetaData) }; // 1562728553
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LOD_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LOD_State = { "LOD_State", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, LOD_State), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_State_MetaData), NewProp_LOD_State_MetaData) }; // 4107279616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DefCapsuleSizeC = { "DefCapsuleSizeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DefCapsuleSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapsuleSizeC_MetaData), NewProp_DefCapsuleSizeC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingPushAnimationC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsPlayingPushAnimationC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingPushAnimationC = { "IsPlayingPushAnimationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingPushAnimationC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayingPushAnimationC_MetaData), NewProp_IsPlayingPushAnimationC_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingHitByZombieMontageC_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->IsPlayingHitByZombieMontageC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingHitByZombieMontageC = { "IsPlayingHitByZombieMontageC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingHitByZombieMontageC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayingHitByZombieMontageC_MetaData), NewProp_IsPlayingHitByZombieMontageC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PreviousVelocityC = { "PreviousVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, PreviousVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousVelocityC_MetaData), NewProp_PreviousVelocityC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PreviousAimYawC = { "PreviousAimYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, PreviousAimYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousAimYawC_MetaData), NewProp_PreviousAimYawC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DyingMontageC = { "DyingMontageC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DyingMontageC), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DyingMontageC_MetaData), NewProp_DyingMontageC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HostageAtt = { "HostageAtt", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, HostageAtt), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostageAtt_MetaData), NewProp_HostageAtt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues_ValueProp = { "PropsAttachValues", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCALS_PropsAttachValues, METADATA_PARAMS(0, nullptr) }; // 2522046275
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues_Key_KeyProp = { "PropsAttachValues_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues = { "PropsAttachValues", nullptr, (EPropertyFlags)0x0040008000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, PropsAttachValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropsAttachValues_MetaData), NewProp_PropsAttachValues_MetaData) }; // 3098219672 2522046275
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CurrentHoldingProp = { "CurrentHoldingProp", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, CurrentHoldingProp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHoldingProp_MetaData), NewProp_CurrentHoldingProp_MetaData) };
void Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RotateCapsuleToControlInIdle_SetBit(void* Obj)
{
	((AAGLS_HumanAI_CharacterBase*)Obj)->RotateCapsuleToControlInIdle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RotateCapsuleToControlInIdle = { "RotateCapsuleToControlInIdle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_HumanAI_CharacterBase), &Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RotateCapsuleToControlInIdle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateCapsuleToControlInIdle_MetaData), NewProp_RotateCapsuleToControlInIdle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CapsuleRotationRateInIdle = { "CapsuleRotationRateInIdle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, CapsuleRotationRateInIdle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRotationRateInIdle_MetaData), NewProp_CapsuleRotationRateInIdle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DecelerationBiasScale = { "DecelerationBiasScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, DecelerationBiasScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelerationBiasScale_MetaData), NewProp_DecelerationBiasScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundFrictionBiasScale = { "GroundFrictionBiasScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, GroundFrictionBiasScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundFrictionBiasScale_MetaData), NewProp_GroundFrictionBiasScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_AsyncFunctionsComponent = { "AsyncFunctionsComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_HumanAI_CharacterBase, AsyncFunctionsComponent), Z_Construct_UClass_UAsyncFunctionsPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncFunctionsComponent_MetaData), NewProp_AsyncFunctionsComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LightLandMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HardLandMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_StrafeSpeedMapCurveC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundMoveSettingsVectorC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundMoveSettingsScalarC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsDeathC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HitedByKnifeOrHandC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsEquipPropC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsReloadingWeaponC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsHostageC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsVicForSF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_StartStealthKillC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsSittingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateStanceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanUpdateRotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LockOverlayChangeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LODsUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_BreakFall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_TargetAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CurrentHealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_SpeedScaleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollOnGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollFaceUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LastRagdollVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DeathTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RagdollGetUpAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HaveRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HavePistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CanShoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DealingDamageScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DispersionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevMovementStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevMovementStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredRotationModeC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredRotationModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredStanceC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DesiredStanceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevOverlayState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PrevOverlayState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundedMoveModeC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundedMoveModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LOD_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_LOD_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DefCapsuleSizeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingPushAnimationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_IsPlayingHitByZombieMontageC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PreviousVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PreviousAimYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DyingMontageC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_HostageAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_PropsAttachValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CurrentHoldingProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_RotateCapsuleToControlInIdle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_CapsuleRotationRateInIdle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_DecelerationBiasScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_GroundFrictionBiasScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::NewProp_AsyncFunctionsComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAGLS_AI_HumanCharInterface_NoRegister, (int32)VTABLE_OFFSET(AAGLS_HumanAI_CharacterBase, IAGLS_AI_HumanCharInterface), false },  // 3641697735
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::ClassParams = {
	&AAGLS_HumanAI_CharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGLS_HumanAI_CharacterBase()
{
	if (!Z_Registration_Info_UClass_AAGLS_HumanAI_CharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGLS_HumanAI_CharacterBase.OuterSingleton, Z_Construct_UClass_AAGLS_HumanAI_CharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGLS_HumanAI_CharacterBase.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<AAGLS_HumanAI_CharacterBase>()
{
	return AAGLS_HumanAI_CharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGLS_HumanAI_CharacterBase);
AAGLS_HumanAI_CharacterBase::~AAGLS_HumanAI_CharacterBase() {}
// End Class AAGLS_HumanAI_CharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGLS_HumanAI_CharacterBase, AAGLS_HumanAI_CharacterBase::StaticClass, TEXT("AAGLS_HumanAI_CharacterBase"), &Z_Registration_Info_UClass_AAGLS_HumanAI_CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGLS_HumanAI_CharacterBase), 3957059067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_3396308050(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_HumanAI_CharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

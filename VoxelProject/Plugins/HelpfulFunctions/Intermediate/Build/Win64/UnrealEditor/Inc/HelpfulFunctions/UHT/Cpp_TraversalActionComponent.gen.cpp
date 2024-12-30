// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_TraversalActionComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_TraversalActionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_TraversalActionComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_TraversalActionComponent_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UMantleAssetData_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UTraversalActionsParamsData_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FMantleChooserValues();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalChooserValues();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalCollisionCheck();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalGroundInfo();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalJumpTrajectory();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalStateEvaluation();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalTraceSettings();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Enum CALS_TraversalAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_TraversalAction;
static UEnum* CALS_TraversalAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_TraversalAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_TraversalAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_TraversalAction"));
	}
	return Z_Registration_Info_UEnum_CALS_TraversalAction.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_TraversalAction>()
{
	return CALS_TraversalAction_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HighVault.Name", "CALS_TraversalAction::HighVault" },
		{ "Hurdle.Name", "CALS_TraversalAction::Hurdle" },
		{ "Mantle.Name", "CALS_TraversalAction::Mantle" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
		{ "None.Name", "CALS_TraversalAction::None" },
		{ "ToLedgeHold.Name", "CALS_TraversalAction::ToLedgeHold" },
		{ "Vault.Name", "CALS_TraversalAction::Vault" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_TraversalAction::None", (int64)CALS_TraversalAction::None },
		{ "CALS_TraversalAction::Hurdle", (int64)CALS_TraversalAction::Hurdle },
		{ "CALS_TraversalAction::Vault", (int64)CALS_TraversalAction::Vault },
		{ "CALS_TraversalAction::Mantle", (int64)CALS_TraversalAction::Mantle },
		{ "CALS_TraversalAction::HighVault", (int64)CALS_TraversalAction::HighVault },
		{ "CALS_TraversalAction::ToLedgeHold", (int64)CALS_TraversalAction::ToLedgeHold },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_TraversalAction",
	"CALS_TraversalAction",
	Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction()
{
	if (!Z_Registration_Info_UEnum_CALS_TraversalAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_TraversalAction.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_TraversalAction.InnerSingleton;
}
// End Enum CALS_TraversalAction

// Begin Enum CALS_MantleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_MantleType;
static UEnum* CALS_MantleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_MantleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_MantleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_MantleType"));
	}
	return Z_Registration_Info_UEnum_CALS_MantleType.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MantleType>()
{
	return CALS_MantleType_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FallingCatch.Name", "CALS_MantleType::FallingCatch" },
		{ "HighMantle.Name", "CALS_MantleType::HighMantle" },
		{ "LowMantle.Name", "CALS_MantleType::LowMantle" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
		{ "None.Name", "CALS_MantleType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_MantleType::HighMantle", (int64)CALS_MantleType::HighMantle },
		{ "CALS_MantleType::LowMantle", (int64)CALS_MantleType::LowMantle },
		{ "CALS_MantleType::FallingCatch", (int64)CALS_MantleType::FallingCatch },
		{ "CALS_MantleType::None", (int64)CALS_MantleType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_MantleType",
	"CALS_MantleType",
	Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType()
{
	if (!Z_Registration_Info_UEnum_CALS_MantleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_MantleType.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_MantleType.InnerSingleton;
}
// End Enum CALS_MantleType

// Begin ScriptStruct FTraversalCollisionCheck
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraversalCollisionCheck;
class UScriptStruct* FTraversalCollisionCheck::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalCollisionCheck.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraversalCollisionCheck.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraversalCollisionCheck, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("TraversalCollisionCheck"));
	}
	return Z_Registration_Info_UScriptStruct_TraversalCollisionCheck.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FTraversalCollisionCheck>()
{
	return FTraversalCollisionCheck::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionIndex_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasFrontLedge_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontLedgeTransform_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasBackLedge_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackLedgeTransform_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasBackFloor_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackFloorTransform_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleHeight_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDepth_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackLedgeHeight_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoosedMontage_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "TraversalCollisionCheck" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionIndex;
	static void NewProp_HasFrontLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasFrontLedge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrontLedgeTransform;
	static void NewProp_HasBackLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBackLedge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackLedgeTransform;
	static void NewProp_HasBackFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBackFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackFloorTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackLedgeHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoosedMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraversalCollisionCheck>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, ActionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionIndex_MetaData), NewProp_ActionIndex_MetaData) };
void Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasFrontLedge_SetBit(void* Obj)
{
	((FTraversalCollisionCheck*)Obj)->HasFrontLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasFrontLedge = { "HasFrontLedge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraversalCollisionCheck), &Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasFrontLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasFrontLedge_MetaData), NewProp_HasFrontLedge_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_FrontLedgeTransform = { "FrontLedgeTransform", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, FrontLedgeTransform), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontLedgeTransform_MetaData), NewProp_FrontLedgeTransform_MetaData) }; // 954340455
void Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackLedge_SetBit(void* Obj)
{
	((FTraversalCollisionCheck*)Obj)->HasBackLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackLedge = { "HasBackLedge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraversalCollisionCheck), &Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasBackLedge_MetaData), NewProp_HasBackLedge_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_BackLedgeTransform = { "BackLedgeTransform", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, BackLedgeTransform), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLedgeTransform_MetaData), NewProp_BackLedgeTransform_MetaData) }; // 954340455
void Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackFloor_SetBit(void* Obj)
{
	((FTraversalCollisionCheck*)Obj)->HasBackFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackFloor = { "HasBackFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraversalCollisionCheck), &Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasBackFloor_MetaData), NewProp_HasBackFloor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_BackFloorTransform = { "BackFloorTransform", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, BackFloorTransform), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackFloorTransform_MetaData), NewProp_BackFloorTransform_MetaData) }; // 954340455
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ObstacleHeight = { "ObstacleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, ObstacleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleHeight_MetaData), NewProp_ObstacleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ObstacleDepth = { "ObstacleDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, ObstacleDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleDepth_MetaData), NewProp_ObstacleDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_BackLedgeHeight = { "BackLedgeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, BackLedgeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLedgeHeight_MetaData), NewProp_BackLedgeHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ChoosedMontage = { "ChoosedMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, ChoosedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoosedMontage_MetaData), NewProp_ChoosedMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalCollisionCheck, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ActionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasFrontLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_FrontLedgeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_BackLedgeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_HasBackFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_BackFloorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ObstacleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ObstacleDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_BackLedgeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_ChoosedMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"TraversalCollisionCheck",
	Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::PropPointers),
	sizeof(FTraversalCollisionCheck),
	alignof(FTraversalCollisionCheck),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraversalCollisionCheck()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalCollisionCheck.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraversalCollisionCheck.InnerSingleton, Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraversalCollisionCheck.InnerSingleton;
}
// End ScriptStruct FTraversalCollisionCheck

// Begin ScriptStruct FTraversalChooserValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraversalChooserValues;
class UScriptStruct* FTraversalChooserValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalChooserValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraversalChooserValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraversalChooserValues, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("TraversalChooserValues"));
	}
	return Z_Registration_Info_UScriptStruct_TraversalChooserValues.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FTraversalChooserValues>()
{
	return FTraversalChooserValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraversalChooserValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[] = {
		{ "Category", "TraversalChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaitIndex_MetaData[] = {
		{ "Category", "TraversalChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "TraversalChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleHeight_MetaData[] = {
		{ "Category", "TraversalChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDepth_MetaData[] = {
		{ "Category", "TraversalChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GaitIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraversalChooserValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalChooserValues, ActionType), Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionType_MetaData), NewProp_ActionType_MetaData) }; // 2501583752
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_GaitIndex = { "GaitIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalChooserValues, GaitIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaitIndex_MetaData), NewProp_GaitIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalChooserValues, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ObstacleHeight = { "ObstacleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalChooserValues, ObstacleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleHeight_MetaData), NewProp_ObstacleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ObstacleDepth = { "ObstacleDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalChooserValues, ObstacleDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleDepth_MetaData), NewProp_ObstacleDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_GaitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ObstacleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewProp_ObstacleDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"TraversalChooserValues",
	Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::PropPointers),
	sizeof(FTraversalChooserValues),
	alignof(FTraversalChooserValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraversalChooserValues()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalChooserValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraversalChooserValues.InnerSingleton, Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraversalChooserValues.InnerSingleton;
}
// End ScriptStruct FTraversalChooserValues

// Begin ScriptStruct FTraversalTraceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraversalTraceSettings;
class UScriptStruct* FTraversalTraceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalTraceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraversalTraceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraversalTraceSettings, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("TraversalTraceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TraversalTraceSettings.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FTraversalTraceSettings>()
{
	return FTraversalTraceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLedgeHeight_MetaData[] = {
		{ "Category", "TraversalTraceSettings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLedgeHeight_MetaData[] = {
		{ "Category", "TraversalTraceSettings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[] = {
		{ "Category", "TraversalTraceSettings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardTraceRadius_MetaData[] = {
		{ "Category", "TraversalTraceSettings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownwardTraceRadius_MetaData[] = {
		{ "Category", "TraversalTraceSettings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationLenght_MetaData[] = {
		{ "Category", "TraversalTraceSettings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxForwarIterations_MetaData[] = {
		{ "Category", "TraversalTraceSettings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLedgeHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLedgeHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardTraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownwardTraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationLenght;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxForwarIterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraversalTraceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_MaxLedgeHeight = { "MaxLedgeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalTraceSettings, MaxLedgeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLedgeHeight_MetaData), NewProp_MaxLedgeHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_MinLedgeHeight = { "MinLedgeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalTraceSettings, MinLedgeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLedgeHeight_MetaData), NewProp_MinLedgeHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalTraceSettings, ReachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachDistance_MetaData), NewProp_ReachDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_ForwardTraceRadius = { "ForwardTraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalTraceSettings, ForwardTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardTraceRadius_MetaData), NewProp_ForwardTraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_DownwardTraceRadius = { "DownwardTraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalTraceSettings, DownwardTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownwardTraceRadius_MetaData), NewProp_DownwardTraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_NormalizationLenght = { "NormalizationLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalTraceSettings, NormalizationLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationLenght_MetaData), NewProp_NormalizationLenght_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_MaxForwarIterations = { "MaxForwarIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalTraceSettings, MaxForwarIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxForwarIterations_MetaData), NewProp_MaxForwarIterations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_MaxLedgeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_MinLedgeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_ReachDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_ForwardTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_DownwardTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_NormalizationLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewProp_MaxForwarIterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"TraversalTraceSettings",
	Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::PropPointers),
	sizeof(FTraversalTraceSettings),
	alignof(FTraversalTraceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraversalTraceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalTraceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraversalTraceSettings.InnerSingleton, Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraversalTraceSettings.InnerSingleton;
}
// End ScriptStruct FTraversalTraceSettings

// Begin ScriptStruct FTraversalGroundInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraversalGroundInfo;
class UScriptStruct* FTraversalGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraversalGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraversalGroundInfo, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("TraversalGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TraversalGroundInfo.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FTraversalGroundInfo>()
{
	return FTraversalGroundInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOrigin_MetaData[] = {
		{ "Category", "TraversalGroundInfo" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRadius_MetaData[] = {
		{ "Category", "TraversalGroundInfo" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffsetOrigin_MetaData[] = {
		{ "Category", "TraversalGroundInfo" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffsetRadius_MetaData[] = {
		{ "Category", "TraversalGroundInfo" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardOffsetOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffsetRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraversalGroundInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_GlobalOrigin = { "GlobalOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalGroundInfo, GlobalOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalOrigin_MetaData), NewProp_GlobalOrigin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_GlobalRadius = { "GlobalRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalGroundInfo, GlobalRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRadius_MetaData), NewProp_GlobalRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_ForwardOffsetOrigin = { "ForwardOffsetOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalGroundInfo, ForwardOffsetOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffsetOrigin_MetaData), NewProp_ForwardOffsetOrigin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_ForwardOffsetRadius = { "ForwardOffsetRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalGroundInfo, ForwardOffsetRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffsetRadius_MetaData), NewProp_ForwardOffsetRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_GlobalOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_GlobalRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_ForwardOffsetOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewProp_ForwardOffsetRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"TraversalGroundInfo",
	Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::PropPointers),
	sizeof(FTraversalGroundInfo),
	alignof(FTraversalGroundInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraversalGroundInfo()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalGroundInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraversalGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraversalGroundInfo.InnerSingleton;
}
// End ScriptStruct FTraversalGroundInfo

// Begin ScriptStruct FTraversalJumpTrajectory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory;
class UScriptStruct* FTraversalJumpTrajectory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraversalJumpTrajectory, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("TraversalJumpTrajectory"));
	}
	return Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FTraversalJumpTrajectory>()
{
	return FTraversalJumpTrajectory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPositionLS_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandPositionLS_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPositionWS_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandPositionWS_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGroundType_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandGroundType_MetaData[] = {
		{ "Category", "TraversalJumpTrajectory" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPositionLS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandPositionLS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPositionWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandPositionWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartGroundType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandGroundType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraversalJumpTrajectory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((FTraversalJumpTrajectory*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraversalJumpTrajectory), &Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsValid_MetaData), NewProp_IsValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_StartPositionLS = { "StartPositionLS", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalJumpTrajectory, StartPositionLS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPositionLS_MetaData), NewProp_StartPositionLS_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_LandPositionLS = { "LandPositionLS", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalJumpTrajectory, LandPositionLS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandPositionLS_MetaData), NewProp_LandPositionLS_MetaData) }; // 954340455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalJumpTrajectory, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_StartPositionWS = { "StartPositionWS", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalJumpTrajectory, StartPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPositionWS_MetaData), NewProp_StartPositionWS_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_LandPositionWS = { "LandPositionWS", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalJumpTrajectory, LandPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandPositionWS_MetaData), NewProp_LandPositionWS_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_StartGroundType = { "StartGroundType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalJumpTrajectory, StartGroundType), Z_Construct_UScriptStruct_FTraversalGroundInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGroundType_MetaData), NewProp_StartGroundType_MetaData) }; // 2642573680
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_LandGroundType = { "LandGroundType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalJumpTrajectory, LandGroundType), Z_Construct_UScriptStruct_FTraversalGroundInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandGroundType_MetaData), NewProp_LandGroundType_MetaData) }; // 2642573680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_StartPositionLS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_LandPositionLS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_StartPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_LandPositionWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_StartGroundType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewProp_LandGroundType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"TraversalJumpTrajectory",
	Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::PropPointers),
	sizeof(FTraversalJumpTrajectory),
	alignof(FTraversalJumpTrajectory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraversalJumpTrajectory()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory.InnerSingleton, Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory.InnerSingleton;
}
// End ScriptStruct FTraversalJumpTrajectory

// Begin ScriptStruct FMantleChooserValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MantleChooserValues;
class UScriptStruct* FMantleChooserValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MantleChooserValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MantleChooserValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMantleChooserValues, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("MantleChooserValues"));
	}
	return Z_Registration_Info_UScriptStruct_MantleChooserValues.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FMantleChooserValues>()
{
	return FMantleChooserValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMantleChooserValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleType_MetaData[] = {
		{ "Category", "MantleChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaitIndex_MetaData[] = {
		{ "Category", "MantleChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "MantleChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityZ_MetaData[] = {
		{ "Category", "MantleChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleHeight_MetaData[] = {
		{ "Category", "MantleChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDepth_MetaData[] = {
		{ "Category", "MantleChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "MantleChooserValues" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MantleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GaitIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMantleChooserValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_MantleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_MantleType = { "MantleType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleChooserValues, MantleType), Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleType_MetaData), NewProp_MantleType_MetaData) }; // 2285271331
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_GaitIndex = { "GaitIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleChooserValues, GaitIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaitIndex_MetaData), NewProp_GaitIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleChooserValues, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_VelocityZ = { "VelocityZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleChooserValues, VelocityZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityZ_MetaData), NewProp_VelocityZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_MantleHeight = { "MantleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleChooserValues, MantleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleHeight_MetaData), NewProp_MantleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_ObstacleDepth = { "ObstacleDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleChooserValues, ObstacleDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleDepth_MetaData), NewProp_ObstacleDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleChooserValues, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMantleChooserValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_MantleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_MantleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_GaitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_VelocityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_MantleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_ObstacleDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleChooserValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMantleChooserValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"MantleChooserValues",
	Z_Construct_UScriptStruct_FMantleChooserValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleChooserValues_Statics::PropPointers),
	sizeof(FMantleChooserValues),
	alignof(FMantleChooserValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleChooserValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMantleChooserValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMantleChooserValues()
{
	if (!Z_Registration_Info_UScriptStruct_MantleChooserValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MantleChooserValues.InnerSingleton, Z_Construct_UScriptStruct_FMantleChooserValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MantleChooserValues.InnerSingleton;
}
// End ScriptStruct FMantleChooserValues

// Begin Class UCpp_TraversalActionComponent Function CalculateLandPositionForJump
struct Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms
{
	FCALS_ComponentAndTransform LandPosition;
	FCALS_ComponentAndTransform BeginPosition;
	FVector ReturnVelocity;
	FVector StartPositionOffset;
	float ProjectileRadius;
	bool DrawDebug;
	float GroundDetectionRadius;
	float MaxVelocityZ;
	float AirControlBoostMultipler;
	float AirControlBoostVelocity;
	float VelocityBias;
	TEnumAsByte<ETraceTypeQuery> TraceChannel;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_CalculateLandPositionForJump = FName(TEXT("CalculateLandPositionForJump"));
bool UCpp_TraversalActionComponent::CalculateLandPositionForJump(FCALS_ComponentAndTransform& LandPosition, FCALS_ComponentAndTransform& BeginPosition, FVector& ReturnVelocity, FVector StartPositionOffset, float ProjectileRadius, bool DrawDebug, float GroundDetectionRadius, float MaxVelocityZ, float AirControlBoostMultipler, float AirControlBoostVelocity, float VelocityBias, ETraceTypeQuery TraceChannel)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_CalculateLandPositionForJump);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms Parms;
		Parms.LandPosition=LandPosition;
		Parms.BeginPosition=BeginPosition;
		Parms.ReturnVelocity=ReturnVelocity;
		Parms.StartPositionOffset=StartPositionOffset;
		Parms.ProjectileRadius=ProjectileRadius;
		Parms.DrawDebug=DrawDebug ? true : false;
		Parms.GroundDetectionRadius=GroundDetectionRadius;
		Parms.MaxVelocityZ=MaxVelocityZ;
		Parms.AirControlBoostMultipler=AirControlBoostMultipler;
		Parms.AirControlBoostVelocity=AirControlBoostVelocity;
		Parms.VelocityBias=VelocityBias;
		Parms.TraceChannel=TraceChannel;
	ProcessEvent(Func,&Parms);
		LandPosition=Parms.LandPosition;
		BeginPosition=Parms.BeginPosition;
		ReturnVelocity=Parms.ReturnVelocity;
		return !!Parms.ReturnValue;
	}
	else
	{
		return CalculateLandPositionForJump_Implementation(LandPosition, BeginPosition, ReturnVelocity, StartPositionOffset, ProjectileRadius, DrawDebug, GroundDetectionRadius, MaxVelocityZ, AirControlBoostMultipler, AirControlBoostVelocity, VelocityBias, TraceChannel);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceChannel" },
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Calculate Land Position For Jump" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeginPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPositionOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius;
	static void NewProp_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDetectionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocityZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControlBoostMultipler;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControlBoostVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_LandPosition = { "LandPosition", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, LandPosition), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_BeginPosition = { "BeginPosition", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, BeginPosition), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ReturnVelocity = { "ReturnVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, ReturnVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_StartPositionOffset = { "StartPositionOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, StartPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ProjectileRadius = { "ProjectileRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, ProjectileRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_DrawDebug_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms*)Obj)->DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_GroundDetectionRadius = { "GroundDetectionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, GroundDetectionRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_MaxVelocityZ = { "MaxVelocityZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, MaxVelocityZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_AirControlBoostMultipler = { "AirControlBoostMultipler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, AirControlBoostMultipler), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_AirControlBoostVelocity = { "AirControlBoostVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, AirControlBoostVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_VelocityBias = { "VelocityBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, VelocityBias), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_LandPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_BeginPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ReturnVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_StartPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ProjectileRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_GroundDetectionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_MaxVelocityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_AirControlBoostMultipler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_AirControlBoostVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_VelocityBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "CalculateLandPositionForJump", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventCalculateLandPositionForJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execCalculateLandPositionForJump)
{
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_LandPosition);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_BeginPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnVelocity);
	P_GET_STRUCT(FVector,Z_Param_StartPositionOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectileRadius);
	P_GET_UBOOL(Z_Param_DrawDebug);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GroundDetectionRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxVelocityZ);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AirControlBoostMultipler);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AirControlBoostVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityBias);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CalculateLandPositionForJump_Implementation(Z_Param_Out_LandPosition,Z_Param_Out_BeginPosition,Z_Param_Out_ReturnVelocity,Z_Param_StartPositionOffset,Z_Param_ProjectileRadius,Z_Param_DrawDebug,Z_Param_GroundDetectionRadius,Z_Param_MaxVelocityZ,Z_Param_AirControlBoostMultipler,Z_Param_AirControlBoostVelocity,Z_Param_VelocityBias,ETraceTypeQuery(Z_Param_TraceChannel));
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function CalculateLandPositionForJump

// Begin Class UCpp_TraversalActionComponent Function CheckAndStartMantle
struct Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms
{
	FTraversalTraceSettings InTraceSettings;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_CheckAndStartMantle = FName(TEXT("CheckAndStartMantle"));
bool UCpp_TraversalActionComponent::CheckAndStartMantle(FTraversalTraceSettings InTraceSettings)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_CheckAndStartMantle);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms Parms;
		Parms.InTraceSettings=InTraceSettings;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckAndStartMantle_Implementation(InTraceSettings);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core| Mantle" },
		{ "DisplayName", "Check And Start Mantle" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTraceSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::NewProp_InTraceSettings = { "InTraceSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms, InTraceSettings), Z_Construct_UScriptStruct_FTraversalTraceSettings, METADATA_PARAMS(0, nullptr) }; // 1969718689
void Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::NewProp_InTraceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "CheckAndStartMantle", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventCheckAndStartMantle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execCheckAndStartMantle)
{
	P_GET_STRUCT(FTraversalTraceSettings,Z_Param_InTraceSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckAndStartMantle_Implementation(Z_Param_InTraceSettings);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function CheckAndStartMantle

// Begin Class UCpp_TraversalActionComponent Function CheckMantle
struct Cpp_TraversalActionComponent_eventCheckMantle_Parms
{
	float MantleHeight;
	FCALS_ComponentAndTransform MantleLedgeWS;
	FCALS_ComponentAndTransform VaultLedgeWS;
	FCALS_ComponentAndTransform MantleCapsuleWS;
	CALS_MantleType MantleType;
	FTraversalTraceSettings TraceSettings;
	TEnumAsByte<ETraceTypeQuery> TraceChannel;
	float CapHeightScale;
	float CapRadiusScale;
	bool CapSizeByDef;
	float VelocityOffsetScale;
	float LedgeFindingRadius;
	float DebugTime;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventCheckMantle_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_CheckMantle = FName(TEXT("CheckMantle"));
bool UCpp_TraversalActionComponent::CheckMantle(float& MantleHeight, FCALS_ComponentAndTransform& MantleLedgeWS, FCALS_ComponentAndTransform& VaultLedgeWS, FCALS_ComponentAndTransform& MantleCapsuleWS, CALS_MantleType& MantleType, FTraversalTraceSettings TraceSettings, ETraceTypeQuery TraceChannel, float CapHeightScale, float CapRadiusScale, bool CapSizeByDef, float VelocityOffsetScale, float LedgeFindingRadius, float DebugTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_CheckMantle);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventCheckMantle_Parms Parms;
		Parms.MantleHeight=MantleHeight;
		Parms.MantleLedgeWS=MantleLedgeWS;
		Parms.VaultLedgeWS=VaultLedgeWS;
		Parms.MantleCapsuleWS=MantleCapsuleWS;
		Parms.MantleType=MantleType;
		Parms.TraceSettings=TraceSettings;
		Parms.TraceChannel=TraceChannel;
		Parms.CapHeightScale=CapHeightScale;
		Parms.CapRadiusScale=CapRadiusScale;
		Parms.CapSizeByDef=CapSizeByDef ? true : false;
		Parms.VelocityOffsetScale=VelocityOffsetScale;
		Parms.LedgeFindingRadius=LedgeFindingRadius;
		Parms.DebugTime=DebugTime;
	ProcessEvent(Func,&Parms);
		MantleHeight=Parms.MantleHeight;
		MantleLedgeWS=Parms.MantleLedgeWS;
		VaultLedgeWS=Parms.VaultLedgeWS;
		MantleCapsuleWS=Parms.MantleCapsuleWS;
		MantleType=Parms.MantleType;
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckMantle_Implementation(MantleHeight, MantleLedgeWS, VaultLedgeWS, MantleCapsuleWS, MantleType, TraceSettings, TraceChannel, CapHeightScale, CapRadiusScale, CapSizeByDef, VelocityOffsetScale, LedgeFindingRadius, DebugTime);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceChannel,CapHeightScale,CapRadiusScale,CapSizeByDef,VelocityOffsetScale,LedgeFindingRadius,DebugTime" },
		{ "Category", "Traversal Core| Mantle" },
		{ "CPP_Default_CapHeightScale", "0.850000" },
		{ "CPP_Default_CapRadiusScale", "0.900000" },
		{ "CPP_Default_CapSizeByDef", "false" },
		{ "CPP_Default_DebugTime", "0.500000" },
		{ "CPP_Default_LedgeFindingRadius", "2.000000" },
		{ "CPP_Default_VelocityOffsetScale", "1.000000" },
		{ "DisplayName", "Check Mantle" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MantleLedgeWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VaultLedgeWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MantleCapsuleWS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MantleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapHeightScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapRadiusScale;
	static void NewProp_CapSizeByDef_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CapSizeByDef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityOffsetScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeFindingRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleHeight = { "MantleHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, MantleHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleLedgeWS = { "MantleLedgeWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, MantleLedgeWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_VaultLedgeWS = { "VaultLedgeWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, VaultLedgeWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleCapsuleWS = { "MantleCapsuleWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, MantleCapsuleWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleType = { "MantleType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, MantleType), Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType, METADATA_PARAMS(0, nullptr) }; // 2285271331
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_TraceSettings = { "TraceSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, TraceSettings), Z_Construct_UScriptStruct_FTraversalTraceSettings, METADATA_PARAMS(0, nullptr) }; // 1969718689
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapHeightScale = { "CapHeightScale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, CapHeightScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapRadiusScale = { "CapRadiusScale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, CapRadiusScale), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapSizeByDef_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventCheckMantle_Parms*)Obj)->CapSizeByDef = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapSizeByDef = { "CapSizeByDef", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventCheckMantle_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapSizeByDef_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_VelocityOffsetScale = { "VelocityOffsetScale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, VelocityOffsetScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_LedgeFindingRadius = { "LedgeFindingRadius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, LedgeFindingRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckMantle_Parms, DebugTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventCheckMantle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventCheckMantle_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleLedgeWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_VaultLedgeWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleCapsuleWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_MantleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_TraceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapHeightScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapRadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_CapSizeByDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_VelocityOffsetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_LedgeFindingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_DebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "CheckMantle", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventCheckMantle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventCheckMantle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execCheckMantle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MantleHeight);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_MantleLedgeWS);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_VaultLedgeWS);
	P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_MantleCapsuleWS);
	P_GET_ENUM_REF(CALS_MantleType,Z_Param_Out_MantleType);
	P_GET_STRUCT(FTraversalTraceSettings,Z_Param_TraceSettings);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapHeightScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapRadiusScale);
	P_GET_UBOOL(Z_Param_CapSizeByDef);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityOffsetScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LedgeFindingRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckMantle_Implementation(Z_Param_Out_MantleHeight,Z_Param_Out_MantleLedgeWS,Z_Param_Out_VaultLedgeWS,Z_Param_Out_MantleCapsuleWS,(CALS_MantleType&)(Z_Param_Out_MantleType),Z_Param_TraceSettings,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_CapHeightScale,Z_Param_CapRadiusScale,Z_Param_CapSizeByDef,Z_Param_VelocityOffsetScale,Z_Param_LedgeFindingRadius,Z_Param_DebugTime);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function CheckMantle

// Begin Class UCpp_TraversalActionComponent Function CheckTraversalActionFast
struct Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms
{
	FTraversalCollisionCheck CheckingResult;
	FTraversalTraceSettings TraceSettings;
	TEnumAsByte<ETraceTypeQuery> TraceChannel;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_CheckTraversalActionFast = FName(TEXT("CheckTraversalActionFast"));
bool UCpp_TraversalActionComponent::CheckTraversalActionFast(FTraversalCollisionCheck& CheckingResult, FTraversalTraceSettings TraceSettings, ETraceTypeQuery TraceChannel)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_CheckTraversalActionFast);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms Parms;
		Parms.CheckingResult=CheckingResult;
		Parms.TraceSettings=TraceSettings;
		Parms.TraceChannel=TraceChannel;
	ProcessEvent(Func,&Parms);
		CheckingResult=Parms.CheckingResult;
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckTraversalActionFast_Implementation(CheckingResult, TraceSettings, TraceChannel);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceChannel" },
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Check Traversal Action" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckingResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_CheckingResult = { "CheckingResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms, CheckingResult), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(0, nullptr) }; // 4278759738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_TraceSettings = { "TraceSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms, TraceSettings), Z_Construct_UScriptStruct_FTraversalTraceSettings, METADATA_PARAMS(0, nullptr) }; // 1969718689
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_CheckingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_TraceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "CheckTraversalActionFast", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventCheckTraversalActionFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execCheckTraversalActionFast)
{
	P_GET_STRUCT_REF(FTraversalCollisionCheck,Z_Param_Out_CheckingResult);
	P_GET_STRUCT(FTraversalTraceSettings,Z_Param_TraceSettings);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckTraversalActionFast_Implementation(Z_Param_Out_CheckingResult,Z_Param_TraceSettings,ETraceTypeQuery(Z_Param_TraceChannel));
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function CheckTraversalActionFast

// Begin Class UCpp_TraversalActionComponent Function ChooseTraversalActionState
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics
{
	struct Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms
	{
		bool StateValid;
		TMap<int32,FTraversalStateEvaluation> StatesData;
		FTraversalCollisionCheck CheckingResult;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Choose Traversal Action State" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatesData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_StateValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StateValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatesData_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatesData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatesData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckingResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StateValid_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms*)Obj)->StateValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StateValid = { "StateValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StateValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StatesData_ValueProp = { "StatesData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTraversalStateEvaluation, METADATA_PARAMS(0, nullptr) }; // 4249654316
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StatesData_Key_KeyProp = { "StatesData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StatesData = { "StatesData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms, StatesData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatesData_MetaData), NewProp_StatesData_MetaData) }; // 4249654316
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_CheckingResult = { "CheckingResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms, CheckingResult), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(0, nullptr) }; // 4278759738
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StateValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StatesData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StatesData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_StatesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_CheckingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "ChooseTraversalActionState", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::Cpp_TraversalActionComponent_eventChooseTraversalActionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execChooseTraversalActionState)
{
	P_GET_UBOOL_REF(Z_Param_Out_StateValid);
	P_GET_TMAP(int32,FTraversalStateEvaluation,Z_Param_StatesData);
	P_GET_STRUCT(FTraversalCollisionCheck,Z_Param_CheckingResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ChooseTraversalActionState(Z_Param_Out_StateValid,Z_Param_StatesData,Z_Param_CheckingResult);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function ChooseTraversalActionState

// Begin Class UCpp_TraversalActionComponent Function ConvertStatesDataAssetToMap
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics
{
	struct Cpp_TraversalActionComponent_eventConvertStatesDataAssetToMap_Parms
	{
		const UTraversalActionsParamsData* DataGrounded;
		const UTraversalActionsParamsData* DataInAir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Convert States Data Asset To Map" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataGrounded_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInAir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataGrounded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataInAir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::NewProp_DataGrounded = { "DataGrounded", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventConvertStatesDataAssetToMap_Parms, DataGrounded), Z_Construct_UClass_UTraversalActionsParamsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataGrounded_MetaData), NewProp_DataGrounded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::NewProp_DataInAir = { "DataInAir", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventConvertStatesDataAssetToMap_Parms, DataInAir), Z_Construct_UClass_UTraversalActionsParamsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInAir_MetaData), NewProp_DataInAir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::NewProp_DataGrounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::NewProp_DataInAir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "ConvertStatesDataAssetToMap", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::Cpp_TraversalActionComponent_eventConvertStatesDataAssetToMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::Cpp_TraversalActionComponent_eventConvertStatesDataAssetToMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execConvertStatesDataAssetToMap)
{
	P_GET_OBJECT(UTraversalActionsParamsData,Z_Param_DataGrounded);
	P_GET_OBJECT(UTraversalActionsParamsData,Z_Param_DataInAir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertStatesDataAssetToMap(Z_Param_DataGrounded,Z_Param_DataInAir);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function ConvertStatesDataAssetToMap

// Begin Class UCpp_TraversalActionComponent Function GetLocationFromBase
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics
{
	struct Cpp_TraversalActionComponent_eventGetLocationFromBase_Parms
	{
		float ZOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "CPP_Default_ZOffset", "0.000000" },
		{ "DisplayName", "Get Location From Base" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventGetLocationFromBase_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventGetLocationFromBase_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "GetLocationFromBase", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::Cpp_TraversalActionComponent_eventGetLocationFromBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::Cpp_TraversalActionComponent_eventGetLocationFromBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execGetLocationFromBase)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLocationFromBase(Z_Param_ZOffset);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function GetLocationFromBase

// Begin Class UCpp_TraversalActionComponent Function GetPlayerMovementInput
struct Cpp_TraversalActionComponent_eventGetPlayerMovementInput_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventGetPlayerMovementInput_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_GetPlayerMovementInput = FName(TEXT("GetPlayerMovementInput"));
FVector UCpp_TraversalActionComponent::GetPlayerMovementInput()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_GetPlayerMovementInput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventGetPlayerMovementInput_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetPlayerMovementInput_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Get Player Movement Input" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventGetPlayerMovementInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "GetPlayerMovementInput", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventGetPlayerMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventGetPlayerMovementInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execGetPlayerMovementInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPlayerMovementInput_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function GetPlayerMovementInput

// Begin Class UCpp_TraversalActionComponent Function GetReachOffset
struct Cpp_TraversalActionComponent_eventGetReachOffset_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventGetReachOffset_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_GetReachOffset = FName(TEXT("GetReachOffset"));
float UCpp_TraversalActionComponent::GetReachOffset()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_GetReachOffset);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventGetReachOffset_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetReachOffset_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Get Reach Offset" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventGetReachOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "GetReachOffset", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventGetReachOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventGetReachOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execGetReachOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReachOffset_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function GetReachOffset

// Begin Class UCpp_TraversalActionComponent Function MantleStart
struct Cpp_TraversalActionComponent_eventMantleStart_Parms
{
	float MantleHeight;
	FCALS_ComponentAndTransform MantleLedgeWS;
	FCALS_ComponentAndTransform VaultLedgeWS;
	FCALS_ComponentAndTransform MantleCapsuleWS;
	CALS_MantleType MantleType;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventMantleStart_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_MantleStart = FName(TEXT("MantleStart"));
bool UCpp_TraversalActionComponent::MantleStart(float MantleHeight, FCALS_ComponentAndTransform MantleLedgeWS, FCALS_ComponentAndTransform VaultLedgeWS, FCALS_ComponentAndTransform MantleCapsuleWS, CALS_MantleType MantleType)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_MantleStart);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventMantleStart_Parms Parms;
		Parms.MantleHeight=MantleHeight;
		Parms.MantleLedgeWS=MantleLedgeWS;
		Parms.VaultLedgeWS=VaultLedgeWS;
		Parms.MantleCapsuleWS=MantleCapsuleWS;
		Parms.MantleType=MantleType;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return MantleStart_Implementation(MantleHeight, MantleLedgeWS, VaultLedgeWS, MantleCapsuleWS, MantleType);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core| Mantle" },
		{ "DisplayName", "Mantle Start" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MantleLedgeWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VaultLedgeWS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MantleCapsuleWS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MantleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleHeight = { "MantleHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventMantleStart_Parms, MantleHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleLedgeWS = { "MantleLedgeWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventMantleStart_Parms, MantleLedgeWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_VaultLedgeWS = { "VaultLedgeWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventMantleStart_Parms, VaultLedgeWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleCapsuleWS = { "MantleCapsuleWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventMantleStart_Parms, MantleCapsuleWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleType = { "MantleType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventMantleStart_Parms, MantleType), Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType, METADATA_PARAMS(0, nullptr) }; // 2285271331
void Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventMantleStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventMantleStart_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleLedgeWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_VaultLedgeWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleCapsuleWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_MantleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "MantleStart", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventMantleStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventMantleStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execMantleStart)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MantleHeight);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_MantleLedgeWS);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_VaultLedgeWS);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_MantleCapsuleWS);
	P_GET_ENUM(CALS_MantleType,Z_Param_MantleType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MantleStart_Implementation(Z_Param_MantleHeight,Z_Param_MantleLedgeWS,Z_Param_VaultLedgeWS,Z_Param_MantleCapsuleWS,CALS_MantleType(Z_Param_MantleType));
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function MantleStart

// Begin Class UCpp_TraversalActionComponent Function MantleStop
struct Cpp_TraversalActionComponent_eventMantleStop_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventMantleStop_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_MantleStop = FName(TEXT("MantleStop"));
bool UCpp_TraversalActionComponent::MantleStop()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_MantleStop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventMantleStop_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return MantleStop_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core| Mantle" },
		{ "DisplayName", "Mantle Stop" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventMantleStop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventMantleStop_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "MantleStop", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventMantleStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventMantleStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execMantleStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MantleStop_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function MantleStop

// Begin Class UCpp_TraversalActionComponent Function NormalizeLedgeToObjectCenter
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics
{
	struct Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms
	{
		FVector NewPosition;
		UPrimitiveComponent* InComponent;
		FVector DownLocation;
		FVector InNormal;
		FTraversalTraceSettings InTraceSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Normalize Ledge To Object Center" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DownLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTraceSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_DownLocation = { "DownLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms, DownLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_InNormal = { "InNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms, InNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_InTraceSettings = { "InTraceSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms, InTraceSettings), Z_Construct_UScriptStruct_FTraversalTraceSettings, METADATA_PARAMS(0, nullptr) }; // 1969718689
void Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_NewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_DownLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_InNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_InTraceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "NormalizeLedgeToObjectCenter", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::Cpp_TraversalActionComponent_eventNormalizeLedgeToObjectCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execNormalizeLedgeToObjectCenter)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewPosition);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_STRUCT(FVector,Z_Param_DownLocation);
	P_GET_STRUCT(FVector,Z_Param_InNormal);
	P_GET_STRUCT(FTraversalTraceSettings,Z_Param_InTraceSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NormalizeLedgeToObjectCenter(Z_Param_Out_NewPosition,Z_Param_InComponent,Z_Param_DownLocation,Z_Param_InNormal,Z_Param_InTraceSettings);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function NormalizeLedgeToObjectCenter

// Begin Class UCpp_TraversalActionComponent Function PlayTraversalAnimAction
struct Cpp_TraversalActionComponent_eventPlayTraversalAnimAction_Parms
{
	FTraversalCollisionCheck OurParams;
};
static const FName NAME_UCpp_TraversalActionComponent_PlayTraversalAnimAction = FName(TEXT("PlayTraversalAnimAction"));
void UCpp_TraversalActionComponent::PlayTraversalAnimAction(FTraversalCollisionCheck OurParams)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_PlayTraversalAnimAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventPlayTraversalAnimAction_Parms Parms;
		Parms.OurParams=OurParams;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		PlayTraversalAnimAction_Implementation(OurParams);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Play Traversal Anim Action" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OurParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::NewProp_OurParams = { "OurParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventPlayTraversalAnimAction_Parms, OurParams), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(0, nullptr) }; // 4278759738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::NewProp_OurParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "PlayTraversalAnimAction", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventPlayTraversalAnimAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventPlayTraversalAnimAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execPlayTraversalAnimAction)
{
	P_GET_STRUCT(FTraversalCollisionCheck,Z_Param_OurParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayTraversalAnimAction_Implementation(Z_Param_OurParams);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function PlayTraversalAnimAction

// Begin Class UCpp_TraversalActionComponent Function PredictableJumpStop
struct Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms
{
	int32 LandAnimIndex;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_PredictableJumpStop = FName(TEXT("PredictableJumpStop"));
bool UCpp_TraversalActionComponent::PredictableJumpStop(int32& LandAnimIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_PredictableJumpStop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms Parms;
		Parms.LandAnimIndex=LandAnimIndex;
	ProcessEvent(Func,&Parms);
		LandAnimIndex=Parms.LandAnimIndex;
		return !!Parms.ReturnValue;
	}
	else
	{
		return PredictableJumpStop_Implementation(LandAnimIndex);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Predictable Jump Stop" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LandAnimIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::NewProp_LandAnimIndex = { "LandAnimIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms, LandAnimIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::NewProp_LandAnimIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "PredictableJumpStop", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventPredictableJumpStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execPredictableJumpStop)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LandAnimIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PredictableJumpStop_Implementation(Z_Param_Out_LandAnimIndex);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function PredictableJumpStop

// Begin Class UCpp_TraversalActionComponent Function ToCapsuleLocation
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics
{
	struct Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms
	{
		FVector FloorLocation;
		float ZOffset;
		bool ByDef;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "CPP_Default_ByDef", "false" },
		{ "CPP_Default_ZOffset", "2.000000" },
		{ "DisplayName", "Floor To Capsule Location" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static void NewProp_ByDef_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ByDef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_FloorLocation = { "FloorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms, FloorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ByDef_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms*)Obj)->ByDef = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ByDef = { "ByDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ByDef_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_FloorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ByDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "ToCapsuleLocation", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::Cpp_TraversalActionComponent_eventToCapsuleLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execToCapsuleLocation)
{
	P_GET_STRUCT(FVector,Z_Param_FloorLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_GET_UBOOL(Z_Param_ByDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ToCapsuleLocation(Z_Param_FloorLocation,Z_Param_ZOffset,Z_Param_ByDef);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function ToCapsuleLocation

// Begin Class UCpp_TraversalActionComponent Function TryActivatePredictableJump
struct Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms
{
	TEnumAsByte<ETraceTypeQuery> TraceChannel;
	bool StartNormalJump;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_TryActivatePredictableJump = FName(TEXT("TryActivatePredictableJump"));
bool UCpp_TraversalActionComponent::TryActivatePredictableJump(ETraceTypeQuery TraceChannel, bool& StartNormalJump)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_TryActivatePredictableJump);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms Parms;
		Parms.TraceChannel=TraceChannel;
		Parms.StartNormalJump=StartNormalJump ? true : false;
	ProcessEvent(Func,&Parms);
		StartNormalJump=Parms.StartNormalJump;
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryActivatePredictableJump_Implementation(TraceChannel, StartNormalJump);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceChannel" },
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Try Activate Predictable Jump" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_StartNormalJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartNormalJump;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_StartNormalJump_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms*)Obj)->StartNormalJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_StartNormalJump = { "StartNormalJump", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_StartNormalJump_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_StartNormalJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "TryActivatePredictableJump", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventTryActivatePredictableJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execTryActivatePredictableJump)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL_REF(Z_Param_Out_StartNormalJump);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivatePredictableJump_Implementation(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_Out_StartNormalJump);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function TryActivatePredictableJump

// Begin Class UCpp_TraversalActionComponent Function TryActivateTraversalAction
struct Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms
{
	float Duration;
	UAnimMontage* SelectedMontage;
	FTraversalCollisionCheck InCheckingResult;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_TryActivateTraversalAction = FName(TEXT("TryActivateTraversalAction"));
bool UCpp_TraversalActionComponent::TryActivateTraversalAction(float& Duration, UAnimMontage*& SelectedMontage, FTraversalCollisionCheck InCheckingResult)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_TryActivateTraversalAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms Parms;
		Parms.Duration=Duration;
		Parms.SelectedMontage=SelectedMontage;
		Parms.InCheckingResult=InCheckingResult;
	ProcessEvent(Func,&Parms);
		Duration=Parms.Duration;
		SelectedMontage=Parms.SelectedMontage;
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryActivateTraversalAction_Implementation(Duration, SelectedMontage, InCheckingResult);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Try Activate Traversal Action" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCheckingResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_SelectedMontage = { "SelectedMontage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms, SelectedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_InCheckingResult = { "InCheckingResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms, InCheckingResult), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(0, nullptr) }; // 4278759738
void Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_SelectedMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_InCheckingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "TryActivateTraversalAction", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventTryActivateTraversalAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execTryActivateTraversalAction)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
	P_GET_OBJECT_REF(UAnimMontage,Z_Param_Out_SelectedMontage);
	P_GET_STRUCT(FTraversalCollisionCheck,Z_Param_InCheckingResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateTraversalAction_Implementation(Z_Param_Out_Duration,P_ARG_GC_BARRIER(Z_Param_Out_SelectedMontage),Z_Param_InCheckingResult);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function TryActivateTraversalAction

// Begin Class UCpp_TraversalActionComponent Function TryActivateTraversalForClimb
struct Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms
{
	float Duration;
	int32 ActionIndex;
	FTraversalCollisionCheck InCheckingResult;
	FCALS_ComponentAndTransform LedgeL;
	FCALS_ComponentAndTransform LedgeR;
	FCALS_ComponentAndTransform LedgeOrigin;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_TryActivateTraversalForClimb = FName(TEXT("TryActivateTraversalForClimb"));
bool UCpp_TraversalActionComponent::TryActivateTraversalForClimb(float& Duration, int32& ActionIndex, FTraversalCollisionCheck InCheckingResult, FCALS_ComponentAndTransform LedgeL, FCALS_ComponentAndTransform LedgeR, FCALS_ComponentAndTransform LedgeOrigin)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_TryActivateTraversalForClimb);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms Parms;
		Parms.Duration=Duration;
		Parms.ActionIndex=ActionIndex;
		Parms.InCheckingResult=InCheckingResult;
		Parms.LedgeL=LedgeL;
		Parms.LedgeR=LedgeR;
		Parms.LedgeOrigin=LedgeOrigin;
	ProcessEvent(Func,&Parms);
		Duration=Parms.Duration;
		ActionIndex=Parms.ActionIndex;
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryActivateTraversalForClimb_Implementation(Duration, ActionIndex, InCheckingResult, LedgeL, LedgeR, LedgeOrigin);
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Try Activate And Start Traversal For Climb" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCheckingResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeR;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeOrigin;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms, ActionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_InCheckingResult = { "InCheckingResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms, InCheckingResult), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(0, nullptr) }; // 4278759738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_LedgeL = { "LedgeL", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms, LedgeL), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_LedgeR = { "LedgeR", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms, LedgeR), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_LedgeOrigin = { "LedgeOrigin", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms, LedgeOrigin), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
void Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_ActionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_InCheckingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_LedgeL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_LedgeR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_LedgeOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "TryActivateTraversalForClimb", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventTryActivateTraversalForClimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execTryActivateTraversalForClimb)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ActionIndex);
	P_GET_STRUCT(FTraversalCollisionCheck,Z_Param_InCheckingResult);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_LedgeL);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_LedgeR);
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_LedgeOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateTraversalForClimb_Implementation(Z_Param_Out_Duration,Z_Param_Out_ActionIndex,Z_Param_InCheckingResult,Z_Param_LedgeL,Z_Param_LedgeR,Z_Param_LedgeOrigin);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function TryActivateTraversalForClimb

// Begin Class UCpp_TraversalActionComponent Function TryGetTraversalComponent
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics
{
	struct Cpp_TraversalActionComponent_eventTryGetTraversalComponent_Parms
	{
		UObject* WorldContextObject;
		ACharacter* Target;
		UCpp_TraversalActionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Try Get Traversal Component" },
		{ "Keywords", "Traversal Component" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryGetTraversalComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryGetTraversalComponent_Parms, Target), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventTryGetTraversalComponent_Parms, ReturnValue), Z_Construct_UClass_UCpp_TraversalActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "TryGetTraversalComponent", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::Cpp_TraversalActionComponent_eventTryGetTraversalComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::Cpp_TraversalActionComponent_eventTryGetTraversalComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execTryGetTraversalComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCpp_TraversalActionComponent**)Z_Param__Result=UCpp_TraversalActionComponent::TryGetTraversalComponent(Z_Param_WorldContextObject,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function TryGetTraversalComponent

// Begin Class UCpp_TraversalActionComponent Function UpdateOffsetsForCharacter
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics
{
	struct Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms
	{
		FTransform FrontLedgeOffset;
		FTransform BackLedgeOffset;
		FTransform BackFloorOffset;
		FTraversalCollisionCheck CurrentData;
		float MaxVectorSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "CPP_Default_MaxVectorSize", "1000.000000" },
		{ "DisplayName", "Update Offsets For Character" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrontLedgeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackLedgeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackFloorOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVectorSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_FrontLedgeOffset = { "FrontLedgeOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms, FrontLedgeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_BackLedgeOffset = { "BackLedgeOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms, BackLedgeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_BackFloorOffset = { "BackFloorOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms, BackFloorOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_CurrentData = { "CurrentData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms, CurrentData), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(0, nullptr) }; // 4278759738
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_MaxVectorSize = { "MaxVectorSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms, MaxVectorSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_FrontLedgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_BackLedgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_BackFloorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_CurrentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_MaxVectorSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "UpdateOffsetsForCharacter", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::Cpp_TraversalActionComponent_eventUpdateOffsetsForCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execUpdateOffsetsForCharacter)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_FrontLedgeOffset);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_BackLedgeOffset);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_BackFloorOffset);
	P_GET_STRUCT(FTraversalCollisionCheck,Z_Param_CurrentData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxVectorSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateOffsetsForCharacter(Z_Param_Out_FrontLedgeOffset,Z_Param_Out_BackLedgeOffset,Z_Param_Out_BackFloorOffset,Z_Param_CurrentData,Z_Param_MaxVectorSize);
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function UpdateOffsetsForCharacter

// Begin Class UCpp_TraversalActionComponent Function UpdateTraveralStatesData
struct Cpp_TraversalActionComponent_eventUpdateTraveralStatesData_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_TraversalActionComponent_eventUpdateTraveralStatesData_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_TraversalActionComponent_UpdateTraveralStatesData = FName(TEXT("UpdateTraveralStatesData"));
bool UCpp_TraversalActionComponent::UpdateTraveralStatesData()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_TraversalActionComponent_UpdateTraveralStatesData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_TraversalActionComponent_eventUpdateTraveralStatesData_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return UpdateTraveralStatesData_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traversal Core" },
		{ "DisplayName", "Update Traveral States Data" },
		{ "Keywords", "Traversal Parkour system" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_TraversalActionComponent_eventUpdateTraveralStatesData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_TraversalActionComponent_eventUpdateTraveralStatesData_Parms), &Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_TraversalActionComponent, nullptr, "UpdateTraveralStatesData", nullptr, nullptr, Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::PropPointers), sizeof(Cpp_TraversalActionComponent_eventUpdateTraveralStatesData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_TraversalActionComponent_eventUpdateTraveralStatesData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_TraversalActionComponent::execUpdateTraveralStatesData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateTraveralStatesData_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_TraversalActionComponent Function UpdateTraveralStatesData

// Begin Class UCpp_TraversalActionComponent
void UCpp_TraversalActionComponent::StaticRegisterNativesUCpp_TraversalActionComponent()
{
	UClass* Class = UCpp_TraversalActionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateLandPositionForJump", &UCpp_TraversalActionComponent::execCalculateLandPositionForJump },
		{ "CheckAndStartMantle", &UCpp_TraversalActionComponent::execCheckAndStartMantle },
		{ "CheckMantle", &UCpp_TraversalActionComponent::execCheckMantle },
		{ "CheckTraversalActionFast", &UCpp_TraversalActionComponent::execCheckTraversalActionFast },
		{ "ChooseTraversalActionState", &UCpp_TraversalActionComponent::execChooseTraversalActionState },
		{ "ConvertStatesDataAssetToMap", &UCpp_TraversalActionComponent::execConvertStatesDataAssetToMap },
		{ "GetLocationFromBase", &UCpp_TraversalActionComponent::execGetLocationFromBase },
		{ "GetPlayerMovementInput", &UCpp_TraversalActionComponent::execGetPlayerMovementInput },
		{ "GetReachOffset", &UCpp_TraversalActionComponent::execGetReachOffset },
		{ "MantleStart", &UCpp_TraversalActionComponent::execMantleStart },
		{ "MantleStop", &UCpp_TraversalActionComponent::execMantleStop },
		{ "NormalizeLedgeToObjectCenter", &UCpp_TraversalActionComponent::execNormalizeLedgeToObjectCenter },
		{ "PlayTraversalAnimAction", &UCpp_TraversalActionComponent::execPlayTraversalAnimAction },
		{ "PredictableJumpStop", &UCpp_TraversalActionComponent::execPredictableJumpStop },
		{ "ToCapsuleLocation", &UCpp_TraversalActionComponent::execToCapsuleLocation },
		{ "TryActivatePredictableJump", &UCpp_TraversalActionComponent::execTryActivatePredictableJump },
		{ "TryActivateTraversalAction", &UCpp_TraversalActionComponent::execTryActivateTraversalAction },
		{ "TryActivateTraversalForClimb", &UCpp_TraversalActionComponent::execTryActivateTraversalForClimb },
		{ "TryGetTraversalComponent", &UCpp_TraversalActionComponent::execTryGetTraversalComponent },
		{ "UpdateOffsetsForCharacter", &UCpp_TraversalActionComponent::execUpdateOffsetsForCharacter },
		{ "UpdateTraveralStatesData", &UCpp_TraversalActionComponent::execUpdateTraveralStatesData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_TraversalActionComponent);
UClass* Z_Construct_UClass_UCpp_TraversalActionComponent_NoRegister()
{
	return UCpp_TraversalActionComponent::StaticClass();
}
struct Z_Construct_UClass_UCpp_TraversalActionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_TraversalActionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefChar_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "Character" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefJumpMaxZ_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefAirControlBoostMultipler_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefAirControlBoostVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceIndex_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugShapes_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapesDebugTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroudedTraceSettings_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAirTraceSettings_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoneTraceSettings_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreList_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraversalActionsDataGrounded_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// <- New States Chooser Method. Then we need to set this in variable. Now states chooser parameters is store in data asset\n" },
#endif
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<- New States Chooser Method. Then we need to set this in variable. Now states chooser parameters is store in data asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraversalActionsDataInAir_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// <- New States Chooser Method. Then we need to set this in variable. Now states chooser parameters is store in data asset\n" },
#endif
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<- New States Chooser Method. Then we need to set this in variable. Now states chooser parameters is store in data asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackLedgeSearchLenght_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpOffsetRangePerPoint_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Predictable Jump Settings" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsePredictableJumps_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Predictable Jump Core" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartedPredictableJump_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Predictable Jump Core" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Predictable Jump Core" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartedTraversalAction_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Action Core" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartedTraversalClimb_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Action Core" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraversalData_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Action Core" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevTraversalData_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Traversal Action Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// previously Traversal Transforms Data - Used to calculate offset for Character when is climb on movable object\n" },
#endif
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "previously Traversal Transforms Data - Used to calculate offset for Character when is climb on movable object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartedMantleAction_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Mantle Action" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleLedge_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Mantle Action" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VaultLedge_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Mantle Action" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleCapsulePos_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Mantle Action" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleActionType_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Mantle Action" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMantleAsset_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Mantle Action" },
		{ "ModuleRelativePath", "Public/Cpp_TraversalActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefChar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefJumpMaxZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefAirControlBoostMultipler;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefAirControlBoostVelocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugTraceIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDebugTime;
	static void NewProp_DrawDebugShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugShapes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapesDebugTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroudedTraceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAirTraceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoneTraceSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraversalActionsDataGrounded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraversalActionsDataInAir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackLedgeSearchLenght;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpOffsetRangePerPoint;
	static void NewProp_UsePredictableJumps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePredictableJumps;
	static void NewProp_StartedPredictableJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedPredictableJump;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JumpTrajectory;
	static void NewProp_StartedTraversalAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedTraversalAction;
	static void NewProp_StartedTraversalClimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedTraversalClimb;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraversalData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevTraversalData;
	static void NewProp_StartedMantleAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedMantleAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MantleLedge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VaultLedge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MantleCapsulePos;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MantleActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleActionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMantleAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_CalculateLandPositionForJump, "CalculateLandPositionForJump" }, // 3432657977
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckAndStartMantle, "CheckAndStartMantle" }, // 1047414641
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckMantle, "CheckMantle" }, // 1850645315
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_CheckTraversalActionFast, "CheckTraversalActionFast" }, // 1093411673
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_ChooseTraversalActionState, "ChooseTraversalActionState" }, // 1117031655
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_ConvertStatesDataAssetToMap, "ConvertStatesDataAssetToMap" }, // 3407584958
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_GetLocationFromBase, "GetLocationFromBase" }, // 2291032775
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_GetPlayerMovementInput, "GetPlayerMovementInput" }, // 2062410340
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_GetReachOffset, "GetReachOffset" }, // 3419083528
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStart, "MantleStart" }, // 1349680155
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_MantleStop, "MantleStop" }, // 1655498959
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_NormalizeLedgeToObjectCenter, "NormalizeLedgeToObjectCenter" }, // 2719012992
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_PlayTraversalAnimAction, "PlayTraversalAnimAction" }, // 2828971992
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_PredictableJumpStop, "PredictableJumpStop" }, // 2467644905
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_ToCapsuleLocation, "ToCapsuleLocation" }, // 3819975658
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivatePredictableJump, "TryActivatePredictableJump" }, // 2055482739
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalAction, "TryActivateTraversalAction" }, // 3642822061
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryActivateTraversalForClimb, "TryActivateTraversalForClimb" }, // 1024867630
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_TryGetTraversalComponent, "TryGetTraversalComponent" }, // 1407894382
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateOffsetsForCharacter, "UpdateOffsetsForCharacter" }, // 2089250793
		{ &Z_Construct_UFunction_UCpp_TraversalActionComponent_UpdateTraveralStatesData, "UpdateTraveralStatesData" }, // 532615200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_TraversalActionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_RefChar = { "RefChar", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, RefChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefChar_MetaData), NewProp_RefChar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DefJumpMaxZ = { "DefJumpMaxZ", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, DefJumpMaxZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefJumpMaxZ_MetaData), NewProp_DefJumpMaxZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DefAirControlBoostMultipler = { "DefAirControlBoostMultipler", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, DefAirControlBoostMultipler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefAirControlBoostMultipler_MetaData), NewProp_DefAirControlBoostMultipler_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DefAirControlBoostVelocity = { "DefAirControlBoostVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, DefAirControlBoostVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefAirControlBoostVelocity_MetaData), NewProp_DefAirControlBoostVelocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DebugTraceIndex = { "DebugTraceIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, DebugTraceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceIndex_MetaData), NewProp_DebugTraceIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DrawDebugTime = { "DrawDebugTime", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, DrawDebugTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugTime_MetaData), NewProp_DrawDebugTime_MetaData) };
void Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DrawDebugShapes_SetBit(void* Obj)
{
	((UCpp_TraversalActionComponent*)Obj)->DrawDebugShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DrawDebugShapes = { "DrawDebugShapes", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_TraversalActionComponent), &Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DrawDebugShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugShapes_MetaData), NewProp_DrawDebugShapes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_ShapesDebugTime = { "ShapesDebugTime", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, ShapesDebugTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapesDebugTime_MetaData), NewProp_ShapesDebugTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_GroudedTraceSettings = { "GroudedTraceSettings", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, GroudedTraceSettings), Z_Construct_UScriptStruct_FTraversalTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroudedTraceSettings_MetaData), NewProp_GroudedTraceSettings_MetaData) }; // 1969718689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_InAirTraceSettings = { "InAirTraceSettings", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, InAirTraceSettings), Z_Construct_UScriptStruct_FTraversalTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAirTraceSettings_MetaData), NewProp_InAirTraceSettings_MetaData) }; // 1969718689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_NoneTraceSettings = { "NoneTraceSettings", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, NoneTraceSettings), Z_Construct_UScriptStruct_FTraversalTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoneTraceSettings_MetaData), NewProp_NoneTraceSettings_MetaData) }; // 1969718689
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_ActorsToIgnoreList_Inner = { "ActorsToIgnoreList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_ActorsToIgnoreList = { "ActorsToIgnoreList", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, ActorsToIgnoreList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnoreList_MetaData), NewProp_ActorsToIgnoreList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_TraversalActionsDataGrounded = { "TraversalActionsDataGrounded", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, TraversalActionsDataGrounded), Z_Construct_UClass_UTraversalActionsParamsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraversalActionsDataGrounded_MetaData), NewProp_TraversalActionsDataGrounded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_TraversalActionsDataInAir = { "TraversalActionsDataInAir", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, TraversalActionsDataInAir), Z_Construct_UClass_UTraversalActionsParamsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraversalActionsDataInAir_MetaData), NewProp_TraversalActionsDataInAir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_BackLedgeSearchLenght = { "BackLedgeSearchLenght", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, BackLedgeSearchLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLedgeSearchLenght_MetaData), NewProp_BackLedgeSearchLenght_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_UpOffsetRangePerPoint = { "UpOffsetRangePerPoint", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, UpOffsetRangePerPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpOffsetRangePerPoint_MetaData), NewProp_UpOffsetRangePerPoint_MetaData) };
void Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_UsePredictableJumps_SetBit(void* Obj)
{
	((UCpp_TraversalActionComponent*)Obj)->UsePredictableJumps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_UsePredictableJumps = { "UsePredictableJumps", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_TraversalActionComponent), &Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_UsePredictableJumps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsePredictableJumps_MetaData), NewProp_UsePredictableJumps_MetaData) };
void Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedPredictableJump_SetBit(void* Obj)
{
	((UCpp_TraversalActionComponent*)Obj)->StartedPredictableJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedPredictableJump = { "StartedPredictableJump", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_TraversalActionComponent), &Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedPredictableJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartedPredictableJump_MetaData), NewProp_StartedPredictableJump_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_JumpTrajectory = { "JumpTrajectory", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, JumpTrajectory), Z_Construct_UScriptStruct_FTraversalJumpTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpTrajectory_MetaData), NewProp_JumpTrajectory_MetaData) }; // 426168190
void Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalAction_SetBit(void* Obj)
{
	((UCpp_TraversalActionComponent*)Obj)->StartedTraversalAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalAction = { "StartedTraversalAction", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_TraversalActionComponent), &Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartedTraversalAction_MetaData), NewProp_StartedTraversalAction_MetaData) };
void Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalClimb_SetBit(void* Obj)
{
	((UCpp_TraversalActionComponent*)Obj)->StartedTraversalClimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalClimb = { "StartedTraversalClimb", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_TraversalActionComponent), &Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalClimb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartedTraversalClimb_MetaData), NewProp_StartedTraversalClimb_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_TraversalData = { "TraversalData", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, TraversalData), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraversalData_MetaData), NewProp_TraversalData_MetaData) }; // 4278759738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_PrevTraversalData = { "PrevTraversalData", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, PrevTraversalData), Z_Construct_UScriptStruct_FTraversalCollisionCheck, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevTraversalData_MetaData), NewProp_PrevTraversalData_MetaData) }; // 4278759738
void Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedMantleAction_SetBit(void* Obj)
{
	((UCpp_TraversalActionComponent*)Obj)->StartedMantleAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedMantleAction = { "StartedMantleAction", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_TraversalActionComponent), &Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedMantleAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartedMantleAction_MetaData), NewProp_StartedMantleAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleLedge = { "MantleLedge", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, MantleLedge), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleLedge_MetaData), NewProp_MantleLedge_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_VaultLedge = { "VaultLedge", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, VaultLedge), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VaultLedge_MetaData), NewProp_VaultLedge_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleCapsulePos = { "MantleCapsulePos", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, MantleCapsulePos), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleCapsulePos_MetaData), NewProp_MantleCapsulePos_MetaData) }; // 954340455
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleActionType = { "MantleActionType", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, MantleActionType), Z_Construct_UEnum_HelpfulFunctions_CALS_MantleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleActionType_MetaData), NewProp_MantleActionType_MetaData) }; // 2285271331
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_SelectedMantleAsset = { "SelectedMantleAsset", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_TraversalActionComponent, SelectedMantleAsset), Z_Construct_UClass_UMantleAssetData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMantleAsset_MetaData), NewProp_SelectedMantleAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_RefChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DefJumpMaxZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DefAirControlBoostMultipler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DefAirControlBoostVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DebugTraceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DrawDebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_DrawDebugShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_ShapesDebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_GroudedTraceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_InAirTraceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_NoneTraceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_ActorsToIgnoreList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_ActorsToIgnoreList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_TraversalActionsDataGrounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_TraversalActionsDataInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_BackLedgeSearchLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_UpOffsetRangePerPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_UsePredictableJumps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedPredictableJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_JumpTrajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedTraversalClimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_TraversalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_PrevTraversalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_StartedMantleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_VaultLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleCapsulePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_MantleActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::NewProp_SelectedMantleAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::ClassParams = {
	&UCpp_TraversalActionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCpp_TraversalActionComponent()
{
	if (!Z_Registration_Info_UClass_UCpp_TraversalActionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_TraversalActionComponent.OuterSingleton, Z_Construct_UClass_UCpp_TraversalActionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCpp_TraversalActionComponent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_TraversalActionComponent>()
{
	return UCpp_TraversalActionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_TraversalActionComponent);
UCpp_TraversalActionComponent::~UCpp_TraversalActionComponent() {}
// End Class UCpp_TraversalActionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CALS_TraversalAction_StaticEnum, TEXT("CALS_TraversalAction"), &Z_Registration_Info_UEnum_CALS_TraversalAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2501583752U) },
		{ CALS_MantleType_StaticEnum, TEXT("CALS_MantleType"), &Z_Registration_Info_UEnum_CALS_MantleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2285271331U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTraversalCollisionCheck::StaticStruct, Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics::NewStructOps, TEXT("TraversalCollisionCheck"), &Z_Registration_Info_UScriptStruct_TraversalCollisionCheck, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraversalCollisionCheck), 4278759738U) },
		{ FTraversalChooserValues::StaticStruct, Z_Construct_UScriptStruct_FTraversalChooserValues_Statics::NewStructOps, TEXT("TraversalChooserValues"), &Z_Registration_Info_UScriptStruct_TraversalChooserValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraversalChooserValues), 938757804U) },
		{ FTraversalTraceSettings::StaticStruct, Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics::NewStructOps, TEXT("TraversalTraceSettings"), &Z_Registration_Info_UScriptStruct_TraversalTraceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraversalTraceSettings), 1969718689U) },
		{ FTraversalGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics::NewStructOps, TEXT("TraversalGroundInfo"), &Z_Registration_Info_UScriptStruct_TraversalGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraversalGroundInfo), 2642573680U) },
		{ FTraversalJumpTrajectory::StaticStruct, Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics::NewStructOps, TEXT("TraversalJumpTrajectory"), &Z_Registration_Info_UScriptStruct_TraversalJumpTrajectory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraversalJumpTrajectory), 426168190U) },
		{ FMantleChooserValues::StaticStruct, Z_Construct_UScriptStruct_FMantleChooserValues_Statics::NewStructOps, TEXT("MantleChooserValues"), &Z_Registration_Info_UScriptStruct_MantleChooserValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMantleChooserValues), 2568949873U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_TraversalActionComponent, UCpp_TraversalActionComponent::StaticClass, TEXT("UCpp_TraversalActionComponent"), &Z_Registration_Info_UClass_UCpp_TraversalActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_TraversalActionComponent), 981907690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_4054224567(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/HelpfulFunctionsBPLibrary.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelpfulFunctionsBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UHelpfulFunctionsBPLibrary();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UHelpfulFunctionsBPLibrary_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSingleClimbPoint();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendCpp();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin ScriptStruct FSingleClimbPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SingleClimbPoint;
class UScriptStruct* FSingleClimbPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SingleClimbPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SingleClimbPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleClimbPoint, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("SingleClimbPoint"));
	}
	return Z_Registration_Info_UScriptStruct_SingleClimbPoint.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FSingleClimbPoint>()
{
	return FSingleClimbPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSingleClimbPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ValidPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleClimbPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_ValidPoint_SetBit(void* Obj)
{
	((FSingleClimbPoint*)Obj)->ValidPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_ValidPoint = { "ValidPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSingleClimbPoint), &Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_ValidPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidPoint_MetaData), NewProp_ValidPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleClimbPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleClimbPoint, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleClimbPoint, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleClimbPoint, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_ValidPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"SingleClimbPoint",
	Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::PropPointers),
	sizeof(FSingleClimbPoint),
	alignof(FSingleClimbPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSingleClimbPoint()
{
	if (!Z_Registration_Info_UScriptStruct_SingleClimbPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SingleClimbPoint.InnerSingleton, Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SingleClimbPoint.InnerSingleton;
}
// End ScriptStruct FSingleClimbPoint

// Begin ScriptStruct FVelocityBlendCpp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VelocityBlendCpp;
class UScriptStruct* FVelocityBlendCpp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityBlendCpp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VelocityBlendCpp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVelocityBlendCpp, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("VelocityBlendCpp"));
	}
	return Z_Registration_Info_UScriptStruct_VelocityBlendCpp.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FVelocityBlendCpp>()
{
	return FVelocityBlendCpp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVelocityBlendCpp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendCpp, F), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_F_MetaData), NewProp_F_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendCpp, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendCpp, L), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_MetaData), NewProp_L_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendCpp, R), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MetaData), NewProp_R_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_F,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewProp_R,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"VelocityBlendCpp",
	Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::PropPointers),
	sizeof(FVelocityBlendCpp),
	alignof(FVelocityBlendCpp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendCpp()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityBlendCpp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VelocityBlendCpp.InnerSingleton, Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VelocityBlendCpp.InnerSingleton;
}
// End ScriptStruct FVelocityBlendCpp

// Begin Enum EAnimBaseEvalType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimBaseEvalType;
static UEnum* EAnimBaseEvalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimBaseEvalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimBaseEvalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("EAnimBaseEvalType"));
	}
	return Z_Registration_Info_UEnum_EAnimBaseEvalType.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<EAnimBaseEvalType>()
{
	return EAnimBaseEvalType_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compressed.Comment", "// Evaluates the compressed Animation data - matching runtime (cooked)\n" },
		{ "Compressed.Name", "EAnimBaseEvalType::Compressed" },
		{ "Compressed.ToolTip", "Evaluates the compressed Animation data - matching runtime (cooked)" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "Raw.Comment", "// Evaluates the original Animation Source data with additive animation layers\n" },
		{ "Raw.Name", "EAnimBaseEvalType::Raw" },
		{ "Raw.ToolTip", "Evaluates the original Animation Source data with additive animation layers" },
		{ "Source.Comment", "// Evaluates the original Animation Source data \n" },
		{ "Source.Name", "EAnimBaseEvalType::Source" },
		{ "Source.ToolTip", "Evaluates the original Animation Source data" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimBaseEvalType::Source", (int64)EAnimBaseEvalType::Source },
		{ "EAnimBaseEvalType::Raw", (int64)EAnimBaseEvalType::Raw },
		{ "EAnimBaseEvalType::Compressed", (int64)EAnimBaseEvalType::Compressed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"EAnimBaseEvalType",
	"EAnimBaseEvalType",
	Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType()
{
	if (!Z_Registration_Info_UEnum_EAnimBaseEvalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimBaseEvalType.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimBaseEvalType.InnerSingleton;
}
// End Enum EAnimBaseEvalType

// Begin ScriptStruct FAnimPoseEvaluationConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig;
class UScriptStruct* FAnimPoseEvaluationConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("AnimPoseEvaluationConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FAnimPoseEvaluationConfig>()
{
	return FAnimPoseEvaluationConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationType_MetaData[] = {
		{ "Category", "Animation|Pose" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of evaluation which should be used\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of evaluation which should be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRetarget_MetaData[] = {
		{ "Category", "Animation|Pose" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to retarget animation during evaluation\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to retarget animation during evaluation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtractRootMotion_MetaData[] = {
		{ "Category", "Animation|Pose" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to extract root motion values\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to extract root motion values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncorporateRootMotionIntoPose_MetaData[] = {
		{ "Category", "Animation|Pose" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to force root motion being incorporated into retrieved pose\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to force root motion being incorporated into retrieved pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSkeletalMesh_MetaData[] = {
		{ "Category", "Animation|Pose" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional skeletal mesh with proportions to use when evaluating a pose\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional skeletal mesh with proportions to use when evaluating a pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetrieveAdditiveAsFullPose_MetaData[] = {
		{ "Category", "Animation|Pose" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or additive animations should be applied to their base-pose \n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or additive animations should be applied to their base-pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateCurves_MetaData[] = {
		{ "Category", "Animation|Pose" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to evaluate Animation Curves\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to evaluate Animation Curves" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationType;
	static void NewProp_bShouldRetarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRetarget;
	static void NewProp_bExtractRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractRootMotion;
	static void NewProp_bIncorporateRootMotionIntoPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncorporateRootMotionIntoPose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalSkeletalMesh;
	static void NewProp_bRetrieveAdditiveAsFullPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetrieveAdditiveAsFullPose;
	static void NewProp_bEvaluateCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPoseEvaluationConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_EvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_EvaluationType = { "EvaluationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPoseEvaluationConfig, EvaluationType), Z_Construct_UEnum_HelpfulFunctions_EAnimBaseEvalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationType_MetaData), NewProp_EvaluationType_MetaData) }; // 3269369114
void Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bShouldRetarget_SetBit(void* Obj)
{
	((FAnimPoseEvaluationConfig*)Obj)->bShouldRetarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bShouldRetarget = { "bShouldRetarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimPoseEvaluationConfig), &Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bShouldRetarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRetarget_MetaData), NewProp_bShouldRetarget_MetaData) };
void Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bExtractRootMotion_SetBit(void* Obj)
{
	((FAnimPoseEvaluationConfig*)Obj)->bExtractRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bExtractRootMotion = { "bExtractRootMotion", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimPoseEvaluationConfig), &Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bExtractRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtractRootMotion_MetaData), NewProp_bExtractRootMotion_MetaData) };
void Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bIncorporateRootMotionIntoPose_SetBit(void* Obj)
{
	((FAnimPoseEvaluationConfig*)Obj)->bIncorporateRootMotionIntoPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bIncorporateRootMotionIntoPose = { "bIncorporateRootMotionIntoPose", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimPoseEvaluationConfig), &Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bIncorporateRootMotionIntoPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncorporateRootMotionIntoPose_MetaData), NewProp_bIncorporateRootMotionIntoPose_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_OptionalSkeletalMesh = { "OptionalSkeletalMesh", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPoseEvaluationConfig, OptionalSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSkeletalMesh_MetaData), NewProp_OptionalSkeletalMesh_MetaData) };
void Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bRetrieveAdditiveAsFullPose_SetBit(void* Obj)
{
	((FAnimPoseEvaluationConfig*)Obj)->bRetrieveAdditiveAsFullPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bRetrieveAdditiveAsFullPose = { "bRetrieveAdditiveAsFullPose", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimPoseEvaluationConfig), &Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bRetrieveAdditiveAsFullPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetrieveAdditiveAsFullPose_MetaData), NewProp_bRetrieveAdditiveAsFullPose_MetaData) };
void Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bEvaluateCurves_SetBit(void* Obj)
{
	((FAnimPoseEvaluationConfig*)Obj)->bEvaluateCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bEvaluateCurves = { "bEvaluateCurves", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimPoseEvaluationConfig), &Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bEvaluateCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateCurves_MetaData), NewProp_bEvaluateCurves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_EvaluationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_EvaluationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bShouldRetarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bExtractRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bIncorporateRootMotionIntoPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_OptionalSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bRetrieveAdditiveAsFullPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewProp_bEvaluateCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"AnimPoseEvaluationConfig",
	Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::PropPointers),
	sizeof(FAnimPoseEvaluationConfig),
	alignof(FAnimPoseEvaluationConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig.InnerSingleton, Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig.InnerSingleton;
}
// End ScriptStruct FAnimPoseEvaluationConfig

// Begin Enum CALS_IntputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_IntputType;
static UEnum* CALS_IntputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_IntputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_IntputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_IntputType"));
	}
	return Z_Registration_Info_UEnum_CALS_IntputType.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_IntputType>()
{
	return CALS_IntputType_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AimAction.Name", "CALS_IntputType::AimAction" },
		{ "BlueprintType", "true" },
		{ "JumpAction.Name", "CALS_IntputType::JumpAction" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "ShotAction.Name", "CALS_IntputType::ShotAction" },
		{ "SprintAction.Name", "CALS_IntputType::SprintAction" },
		{ "StanceAction.Name", "CALS_IntputType::StanceAction" },
		{ "WalkAction.Name", "CALS_IntputType::WalkAction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_IntputType::JumpAction", (int64)CALS_IntputType::JumpAction },
		{ "CALS_IntputType::WalkAction", (int64)CALS_IntputType::WalkAction },
		{ "CALS_IntputType::SprintAction", (int64)CALS_IntputType::SprintAction },
		{ "CALS_IntputType::AimAction", (int64)CALS_IntputType::AimAction },
		{ "CALS_IntputType::ShotAction", (int64)CALS_IntputType::ShotAction },
		{ "CALS_IntputType::StanceAction", (int64)CALS_IntputType::StanceAction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_IntputType",
	"CALS_IntputType",
	Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType()
{
	if (!Z_Registration_Info_UEnum_CALS_IntputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_IntputType.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_IntputType.InnerSingleton;
}
// End Enum CALS_IntputType

// Begin Class UHelpfulFunctionsBPLibrary Function AngleInRange
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics
{
	struct HelpfulFunctionsBPLibrary_eventAngleInRange_Parms
	{
		float Angle;
		float MinAngle;
		float MaxAngle;
		float Buffer;
		bool IncreaseBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
		{ "DisplayName", "Angle In Range" },
		{ "Keywords", "Float State Direction" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer;
	static void NewProp_IncreaseBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncreaseBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAngleInRange_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAngleInRange_Parms, MinAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAngleInRange_Parms, MaxAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAngleInRange_Parms, Buffer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventAngleInRange_Parms*)Obj)->IncreaseBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer = { "IncreaseBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventAngleInRange_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventAngleInRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventAngleInRange_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_MinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "AngleInRange", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::HelpfulFunctionsBPLibrary_eventAngleInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::HelpfulFunctionsBPLibrary_eventAngleInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execAngleInRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Buffer);
	P_GET_UBOOL(Z_Param_IncreaseBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::AngleInRange(Z_Param_Angle,Z_Param_MinAngle,Z_Param_MaxAngle,Z_Param_Buffer,Z_Param_IncreaseBuffer);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function AngleInRange

// Begin Class UHelpfulFunctionsBPLibrary Function AnimSlotIsActivated
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics
{
	struct HelpfulFunctionsBPLibrary_eventAnimSlotIsActivated_Parms
	{
		UObject* WorldContextObject;
		FName SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Animation" },
		{ "DisplayName", "Anim Slot Is Activated" },
		{ "Keywords", "Animation Instance" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAnimSlotIsActivated_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAnimSlotIsActivated_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventAnimSlotIsActivated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventAnimSlotIsActivated_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "AnimSlotIsActivated", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::HelpfulFunctionsBPLibrary_eventAnimSlotIsActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::HelpfulFunctionsBPLibrary_eventAnimSlotIsActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execAnimSlotIsActivated)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::AnimSlotIsActivated(Z_Param_WorldContextObject,Z_Param_SlotName);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function AnimSlotIsActivated

// Begin Class UHelpfulFunctionsBPLibrary Function AnimSlotIsActivatedByTaget
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics
{
	struct HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms
	{
		UObject* WorldContextObject;
		UAnimInstance* Target;
		FName SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Animation" },
		{ "DisplayName", "Anim Slot Is Activated By Target" },
		{ "Keywords", "Animation Instance" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms, Target), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "AnimSlotIsActivatedByTaget", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::HelpfulFunctionsBPLibrary_eventAnimSlotIsActivatedByTaget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execAnimSlotIsActivatedByTaget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAnimInstance,Z_Param_Target);
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::AnimSlotIsActivatedByTaget(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_SlotName);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function AnimSlotIsActivatedByTaget

// Begin Class UHelpfulFunctionsBPLibrary Function Autocorrelation
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics
{
	struct HelpfulFunctionsBPLibrary_eventAutocorrelation_Parms
	{
		TArray<FVector2D> data;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
		{ "DisplayName", "Autocorrelation" },
		{ "Keywords", "Autocorrelation Function Array" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAutocorrelation_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventAutocorrelation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "Autocorrelation", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::HelpfulFunctionsBPLibrary_eventAutocorrelation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::HelpfulFunctionsBPLibrary_eventAutocorrelation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execAutocorrelation)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=UHelpfulFunctionsBPLibrary::Autocorrelation(Z_Param_Out_data);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function Autocorrelation

// Begin Class UHelpfulFunctionsBPLibrary Function BouceOutInterpFast
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics
{
	struct HelpfulFunctionsBPLibrary_eventBouceOutInterpFast_Parms
	{
		FVector A;
		FVector B;
		float Alpha;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Interpolation" },
		{ "DisplayName", "Bounce Out Interp (Vector)" },
		{ "Keywords", "Interpolation Vector" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventBouceOutInterpFast_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventBouceOutInterpFast_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventBouceOutInterpFast_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventBouceOutInterpFast_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "BouceOutInterpFast", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::HelpfulFunctionsBPLibrary_eventBouceOutInterpFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::HelpfulFunctionsBPLibrary_eventBouceOutInterpFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execBouceOutInterpFast)
{
	P_GET_STRUCT(FVector,Z_Param_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::BouceOutInterpFast(Z_Param_A,Z_Param_B,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function BouceOutInterpFast

// Begin Class UHelpfulFunctionsBPLibrary Function BounceOutTimeFunction
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics
{
	struct HelpfulFunctionsBPLibrary_eventBounceOutTimeFunction_Parms
	{
		float time;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Interpolation" },
		{ "DisplayName", "Bounce Out Time Function" },
		{ "Keywords", "Interpolation Vector" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventBounceOutTimeFunction_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventBounceOutTimeFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::NewProp_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "BounceOutTimeFunction", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::HelpfulFunctionsBPLibrary_eventBounceOutTimeFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::HelpfulFunctionsBPLibrary_eventBounceOutTimeFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execBounceOutTimeFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::BounceOutTimeFunction(Z_Param_time);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function BounceOutTimeFunction

// Begin Class UHelpfulFunctionsBPLibrary Function CalcFootsOffset
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms
	{
		const UObject* WorldContextObject;
		ACharacter* Character;
		float EnableFootCurveValue;
		FName IKFootName;
		FName RootBone;
		FVector CurrentLocation;
		FVector CurrentLocationOffset;
		FRotator CurrentRotationOffset;
		float DeltaSecond;
		float IKTraceDistanceAboveFoot;
		float TraceUpOffset;
		float IKTraceDistanceBelowFoot;
		float FootHeight;
		FVector NewLocation;
		FVector NewLocationOffset;
		FRotator NewRotationOffset;
		int32 DebugIndex;
		bool UseByFloorFinding;
		bool TracingType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CurrentLocation" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Find Foot IK Offset" },
		{ "Keywords", "Foots IK Character" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnableFootCurveValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IKFootName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IKTraceDistanceAboveFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceUpOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IKTraceDistanceBelowFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotationOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static void NewProp_UseByFloorFinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseByFloorFinding;
	static void NewProp_TracingType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TracingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_EnableFootCurveValue = { "EnableFootCurveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, EnableFootCurveValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_IKFootName = { "IKFootName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, IKFootName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, RootBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_CurrentLocationOffset = { "CurrentLocationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, CurrentLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_CurrentRotationOffset = { "CurrentRotationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, CurrentRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_DeltaSecond = { "DeltaSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, DeltaSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_IKTraceDistanceAboveFoot = { "IKTraceDistanceAboveFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, IKTraceDistanceAboveFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_TraceUpOffset = { "TraceUpOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, TraceUpOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_IKTraceDistanceBelowFoot = { "IKTraceDistanceBelowFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, IKTraceDistanceBelowFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_FootHeight = { "FootHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, FootHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_NewLocationOffset = { "NewLocationOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, NewLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_NewRotationOffset = { "NewRotationOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, NewRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_UseByFloorFinding_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms*)Obj)->UseByFloorFinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_UseByFloorFinding = { "UseByFloorFinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_UseByFloorFinding_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_TracingType_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms*)Obj)->TracingType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_TracingType = { "TracingType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_TracingType_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_EnableFootCurveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_IKFootName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_RootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_CurrentLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_CurrentLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_CurrentRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_DeltaSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_IKTraceDistanceAboveFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_TraceUpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_IKTraceDistanceBelowFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_FootHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_NewLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_NewRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_UseByFloorFinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::NewProp_TracingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CalcFootsOffset", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::HelpfulFunctionsBPLibrary_eventCalcFootsOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCalcFootsOffset)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EnableFootCurveValue);
	P_GET_PROPERTY(FNameProperty,Z_Param_IKFootName);
	P_GET_PROPERTY(FNameProperty,Z_Param_RootBone);
	P_GET_STRUCT(FVector,Z_Param_CurrentLocation);
	P_GET_STRUCT(FVector,Z_Param_CurrentLocationOffset);
	P_GET_STRUCT(FRotator,Z_Param_CurrentRotationOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSecond);
	P_GET_PROPERTY(FFloatProperty,Z_Param_IKTraceDistanceAboveFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceUpOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_IKTraceDistanceBelowFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FootHeight);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocationOffset);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotationOffset);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_UBOOL(Z_Param_UseByFloorFinding);
	P_GET_UBOOL_REF(Z_Param_Out_TracingType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::CalcFootsOffset(Z_Param_WorldContextObject,Z_Param_Character,Z_Param_EnableFootCurveValue,Z_Param_IKFootName,Z_Param_RootBone,Z_Param_CurrentLocation,Z_Param_CurrentLocationOffset,Z_Param_CurrentRotationOffset,Z_Param_DeltaSecond,Z_Param_IKTraceDistanceAboveFoot,Z_Param_TraceUpOffset,Z_Param_IKTraceDistanceBelowFoot,Z_Param_FootHeight,Z_Param_Out_NewLocation,Z_Param_Out_NewLocationOffset,Z_Param_Out_NewRotationOffset,Z_Param_DebugIndex,Z_Param_UseByFloorFinding,Z_Param_Out_TracingType);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CalcFootsOffset

// Begin Class UHelpfulFunctionsBPLibrary Function CalculateDiagonalScale
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCalculateDiagonalScale_Parms
	{
		UCurveFloat* Curve;
		FVelocityBlendCpp VelocityBlend;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Calculate Diagonal Scale Amount (Fast)" },
		{ "Keywords", "Movement Animations Character" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateDiagonalScale_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateDiagonalScale_Parms, VelocityBlend), Z_Construct_UScriptStruct_FVelocityBlendCpp, METADATA_PARAMS(0, nullptr) }; // 2177867100
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateDiagonalScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::NewProp_VelocityBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CalculateDiagonalScale", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::HelpfulFunctionsBPLibrary_eventCalculateDiagonalScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::HelpfulFunctionsBPLibrary_eventCalculateDiagonalScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCalculateDiagonalScale)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
	P_GET_STRUCT(FVelocityBlendCpp,Z_Param_VelocityBlend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::CalculateDiagonalScale(Z_Param_Curve,Z_Param_VelocityBlend);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CalculateDiagonalScale

// Begin Class UHelpfulFunctionsBPLibrary Function CalculateQuadrant
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms
	{
		int32 MovementDirection;
		float FR_Threshold;
		float FL_Threshold;
		float BR_Threshold;
		float BL_Threshold;
		float Buffer;
		float Angle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FL_Threshold,BR_Threshold,FR_Threshold,BL_Threshold" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Calculate Quadrant" },
		{ "Keywords", "Float State Direction" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FR_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FL_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BR_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BL_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, MovementDirection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_FR_Threshold = { "FR_Threshold", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, FR_Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_FL_Threshold = { "FL_Threshold", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, FL_Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_BR_Threshold = { "BR_Threshold", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, BR_Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_BL_Threshold = { "BL_Threshold", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, BL_Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, Buffer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_MovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_FR_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_FL_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_BR_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_BL_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CalculateQuadrant", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::HelpfulFunctionsBPLibrary_eventCalculateQuadrant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCalculateQuadrant)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MovementDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FR_Threshold);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FL_Threshold);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BR_Threshold);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BL_Threshold);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Buffer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UHelpfulFunctionsBPLibrary::CalculateQuadrant(Z_Param_MovementDirection,Z_Param_FR_Threshold,Z_Param_FL_Threshold,Z_Param_BR_Threshold,Z_Param_BL_Threshold,Z_Param_Buffer,Z_Param_Angle);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CalculateQuadrant

// Begin Class UHelpfulFunctionsBPLibrary Function CalculateRelativeAcceleration
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms
	{
		const UObject* WorldContextObject;
		const UCharacterMovementComponent* CharMove;
		FRotator CharRot;
		FVector Acceleration;
		FVector Velocity;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "CPP_Default_Acceleration", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_CharRot", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_Velocity", "0.000000,0.000000,0.000000" },
		{ "DisplayName", "Calculate Relative Acceleration Amount (Fast)" },
		{ "Keywords", "Movement Animations Character" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharMove_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharRot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_CharMove = { "CharMove", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms, CharMove), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharMove_MetaData), NewProp_CharMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_CharRot = { "CharRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms, CharRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_CharMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_CharRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CalculateRelativeAcceleration", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::HelpfulFunctionsBPLibrary_eventCalculateRelativeAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCalculateRelativeAcceleration)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CharMove);
	P_GET_STRUCT(FRotator,Z_Param_CharRot);
	P_GET_STRUCT(FVector,Z_Param_Acceleration);
	P_GET_STRUCT(FVector,Z_Param_Velocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::CalculateRelativeAcceleration(Z_Param_WorldContextObject,Z_Param_CharMove,Z_Param_CharRot,Z_Param_Acceleration,Z_Param_Velocity);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CalculateRelativeAcceleration

// Begin Class UHelpfulFunctionsBPLibrary Function CalcVelocityBlendFast
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCalcVelocityBlendFast_Parms
	{
		const UObject* WorldContextObject;
		FVector Velocity;
		FVelocityBlendCpp ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Calculate Velocity Blend Fast" },
		{ "Keywords", "Character AnimCurve" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcVelocityBlendFast_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcVelocityBlendFast_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCalcVelocityBlendFast_Parms, ReturnValue), Z_Construct_UScriptStruct_FVelocityBlendCpp, METADATA_PARAMS(0, nullptr) }; // 2177867100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CalcVelocityBlendFast", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::HelpfulFunctionsBPLibrary_eventCalcVelocityBlendFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::HelpfulFunctionsBPLibrary_eventCalcVelocityBlendFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCalcVelocityBlendFast)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Velocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVelocityBlendCpp*)Z_Param__Result=UHelpfulFunctionsBPLibrary::CalcVelocityBlendFast(Z_Param_WorldContextObject,Z_Param_Velocity);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CalcVelocityBlendFast

// Begin Class UHelpfulFunctionsBPLibrary Function CapsuleHaveRoomWithIgnore
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms
	{
		const UObject* WorldContextObject;
		const ACharacter* TargetChar;
		FVector Location;
		TArray<AActor*> ToIgnore;
		float ScaleRadius;
		float ScaleHeight;
		bool DrawTrace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "CPP_Default_DrawTrace", "false" },
		{ "CPP_Default_ScaleHeight", "1.000000" },
		{ "CPP_Default_ScaleRadius", "1.000000" },
		{ "DisplayName", "Capsule Have Room (With Ignore)" },
		{ "Keywords", "Character Trace" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawTrace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHeight;
	static void NewProp_DrawTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawTrace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ToIgnore_Inner = { "ToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ToIgnore = { "ToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms, ToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ScaleRadius = { "ScaleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms, ScaleRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ScaleHeight = { "ScaleHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms, ScaleHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_DrawTrace_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms*)Obj)->DrawTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_DrawTrace = { "DrawTrace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_DrawTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawTrace_MetaData), NewProp_DrawTrace_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ScaleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ScaleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_DrawTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CapsuleHaveRoomWithIgnore", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCapsuleHaveRoomWithIgnore)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_TARRAY(AActor*,Z_Param_ToIgnore);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleHeight);
	P_GET_UBOOL(Z_Param_DrawTrace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::CapsuleHaveRoomWithIgnore(Z_Param_WorldContextObject,Z_Param_TargetChar,Z_Param_Location,Z_Param_ToIgnore,Z_Param_ScaleRadius,Z_Param_ScaleHeight,Z_Param_DrawTrace);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CapsuleHaveRoomWithIgnore

// Begin Class UHelpfulFunctionsBPLibrary Function CapsuleHaveRoomWithIgnoreTransform
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms
	{
		const UObject* WorldContextObject;
		const ACharacter* TargetChar;
		FTransform TargetTransform;
		TArray<AActor*> ToIgnore;
		float ScaleRadius;
		float ScaleHeight;
		bool DrawTrace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "CPP_Default_DrawTrace", "false" },
		{ "CPP_Default_ScaleHeight", "1.000000" },
		{ "CPP_Default_ScaleRadius", "1.000000" },
		{ "DisplayName", "Capsule Have Room (With Ignore) Transform" },
		{ "Keywords", "Character Trace" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawTrace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHeight;
	static void NewProp_DrawTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawTrace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ToIgnore_Inner = { "ToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ToIgnore = { "ToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms, ToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ScaleRadius = { "ScaleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms, ScaleRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ScaleHeight = { "ScaleHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms, ScaleHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_DrawTrace_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms*)Obj)->DrawTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_DrawTrace = { "DrawTrace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_DrawTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawTrace_MetaData), NewProp_DrawTrace_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_TargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ScaleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ScaleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_DrawTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CapsuleHaveRoomWithIgnoreTransform", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::HelpfulFunctionsBPLibrary_eventCapsuleHaveRoomWithIgnoreTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCapsuleHaveRoomWithIgnoreTransform)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
	P_GET_TARRAY(AActor*,Z_Param_ToIgnore);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleHeight);
	P_GET_UBOOL(Z_Param_DrawTrace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::CapsuleHaveRoomWithIgnoreTransform(Z_Param_WorldContextObject,Z_Param_TargetChar,Z_Param_TargetTransform,Z_Param_ToIgnore,Z_Param_ScaleRadius,Z_Param_ScaleHeight,Z_Param_DrawTrace);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CapsuleHaveRoomWithIgnoreTransform

// Begin Class UHelpfulFunctionsBPLibrary Function CheckFloorTypeC
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms
	{
		UObject* WorldContextObject;
		FVector GlobalOrigin;
		float GlobalRadius;
		FVector ForwardOrigin;
		float ForwardRadius;
		FVector FloorLocation;
		FVector Direction;
		TEnumAsByte<ETraceTypeQuery> TraceChannel;
		int32 AccuracyFactor;
		float MaxRadius;
		TArray<AActor*> ActorsToIgnore;
		bool ReturnInLocalSpace;
		int32 DrawDebugIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceChannel,AccuracyFactor,MaxRadius,ActorsToIgnore,ReturnInLocalSpace,DrawDebugIndex" },
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "Category", "JakubW_FunctionsLibrary| Collision" },
		{ "DisplayName", "Check Floor Type By Trace" },
		{ "Keywords", "Collision" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccuracyFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static void NewProp_ReturnInLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnInLocalSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawDebugIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_GlobalOrigin = { "GlobalOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, GlobalOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_GlobalRadius = { "GlobalRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, GlobalRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ForwardOrigin = { "ForwardOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, ForwardOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ForwardRadius = { "ForwardRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, ForwardRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_FloorLocation = { "FloorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, FloorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_AccuracyFactor = { "AccuracyFactor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, AccuracyFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, MaxRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnInLocalSpace_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms*)Obj)->ReturnInLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnInLocalSpace = { "ReturnInLocalSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnInLocalSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_DrawDebugIndex = { "DrawDebugIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms, DrawDebugIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_GlobalOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_GlobalRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ForwardOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ForwardRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_FloorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_AccuracyFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_MaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnInLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_DrawDebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CheckFloorTypeC", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::HelpfulFunctionsBPLibrary_eventCheckFloorTypeC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCheckFloorTypeC)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GlobalOrigin);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GlobalRadius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardOrigin);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ForwardRadius);
	P_GET_STRUCT(FVector,Z_Param_FloorLocation);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FIntProperty,Z_Param_AccuracyFactor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRadius);
	P_GET_TARRAY(AActor*,Z_Param_ActorsToIgnore);
	P_GET_UBOOL(Z_Param_ReturnInLocalSpace);
	P_GET_PROPERTY(FIntProperty,Z_Param_DrawDebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::CheckFloorTypeC(Z_Param_WorldContextObject,Z_Param_Out_GlobalOrigin,Z_Param_Out_GlobalRadius,Z_Param_Out_ForwardOrigin,Z_Param_Out_ForwardRadius,Z_Param_FloorLocation,Z_Param_Direction,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_AccuracyFactor,Z_Param_MaxRadius,Z_Param_ActorsToIgnore,Z_Param_ReturnInLocalSpace,Z_Param_DrawDebugIndex);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CheckFloorTypeC

// Begin Class UHelpfulFunctionsBPLibrary Function ClassToActorsArray
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics
{
	struct HelpfulFunctionsBPLibrary_eventClassToActorsArray_Parms
	{
		const UObject* WorldContextObject;
		TArray<UClass*> ActorsClass;
		TArray<AActor*> SingleActorToIgnore;
		TArray<AActor*> ReturnArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Array" },
		{ "DisplayName", "Class To Actors Array" },
		{ "Keywords", "Array Actor" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorsClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SingleActorToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SingleActorToIgnore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClassToActorsArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ActorsClass_Inner = { "ActorsClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ActorsClass = { "ActorsClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClassToActorsArray_Parms, ActorsClass), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_SingleActorToIgnore_Inner = { "SingleActorToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_SingleActorToIgnore = { "SingleActorToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClassToActorsArray_Parms, SingleActorToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ReturnArray_Inner = { "ReturnArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ReturnArray = { "ReturnArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClassToActorsArray_Parms, ReturnArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ActorsClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ActorsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_SingleActorToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_SingleActorToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ReturnArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::NewProp_ReturnArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ClassToActorsArray", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::HelpfulFunctionsBPLibrary_eventClassToActorsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::HelpfulFunctionsBPLibrary_eventClassToActorsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execClassToActorsArray)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(UClass*,Z_Param_ActorsClass);
	P_GET_TARRAY(AActor*,Z_Param_SingleActorToIgnore);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ReturnArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::ClassToActorsArray(Z_Param_WorldContextObject,Z_Param_ActorsClass,Z_Param_SingleActorToIgnore,Z_Param_Out_ReturnArray);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ClassToActorsArray

// Begin Class UHelpfulFunctionsBPLibrary Function ClassToIgnore
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics
{
	struct HelpfulFunctionsBPLibrary_eventClassToIgnore_Parms
	{
		UClass* Target;
		TArray<UClass*> ToIgnore;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Array" },
		{ "DisplayName", "Check Is Not This Class" },
		{ "Keywords", "Actors Class Array" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToIgnore;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClassToIgnore_Parms, Target), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ToIgnore_Inner = { "ToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ToIgnore = { "ToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClassToIgnore_Parms, ToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventClassToIgnore_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventClassToIgnore_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ClassToIgnore", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::HelpfulFunctionsBPLibrary_eventClassToIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::HelpfulFunctionsBPLibrary_eventClassToIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execClassToIgnore)
{
	P_GET_OBJECT(UClass,Z_Param_Target);
	P_GET_TARRAY(UClass*,Z_Param_ToIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::ClassToIgnore(Z_Param_Target,Z_Param_ToIgnore);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ClassToIgnore

// Begin Class UHelpfulFunctionsBPLibrary Function ClimbingFootIK
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics
{
	struct HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnHit;
		FVector ReturnLocation;
		FVector ReturnNormal;
		const ACharacter* TargetChar;
		FVector FootLocation;
		FVector Direction;
		float UpOffset;
		float TraceRadius;
		FVector2D TraceLength;
		bool UseTwoBoneIK;
		FName RootBoneName;
		FName JoinBoneName;
		FName EndBoneName;
		float FootUpOffsetGround;
		int32 DebugIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| ClimbingSystem" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_EndBoneName", "Foot_L" },
		{ "CPP_Default_FootUpOffsetGround", "14.000000" },
		{ "CPP_Default_JoinBoneName", "calf_L" },
		{ "CPP_Default_RootBoneName", "Thigh_L" },
		{ "CPP_Default_TraceLength", "(X=12.000,Y=18.000)" },
		{ "CPP_Default_TraceRadius", "18.000000" },
		{ "CPP_Default_UseTwoBoneIK", "false" },
		{ "DisplayName", "Climbing Foot IK Trace V3" },
		{ "Keywords", "Character Trace IK Climbing" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnNormal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceLength;
	static void NewProp_UseTwoBoneIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTwoBoneIK;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_JoinBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndBoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootUpOffsetGround;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnHit_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms*)Obj)->ReturnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnHit = { "ReturnHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnNormal = { "ReturnNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, ReturnNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_FootLocation = { "FootLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, FootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_UpOffset = { "UpOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, UpOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, TraceRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, TraceLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_UseTwoBoneIK_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms*)Obj)->UseTwoBoneIK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_UseTwoBoneIK = { "UseTwoBoneIK", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_UseTwoBoneIK_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, RootBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_JoinBoneName = { "JoinBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, JoinBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_EndBoneName = { "EndBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, EndBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_FootUpOffsetGround = { "FootUpOffsetGround", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, FootUpOffsetGround), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_ReturnNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_FootLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_UpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_TraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_UseTwoBoneIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_RootBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_JoinBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_EndBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_FootUpOffsetGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::NewProp_DebugIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ClimbingFootIK", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::HelpfulFunctionsBPLibrary_eventClimbingFootIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execClimbingFootIK)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnHit);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnNormal);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_STRUCT(FVector,Z_Param_FootLocation);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceRadius);
	P_GET_STRUCT(FVector2D,Z_Param_TraceLength);
	P_GET_UBOOL(Z_Param_UseTwoBoneIK);
	P_GET_PROPERTY(FNameProperty,Z_Param_RootBoneName);
	P_GET_PROPERTY(FNameProperty,Z_Param_JoinBoneName);
	P_GET_PROPERTY(FNameProperty,Z_Param_EndBoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FootUpOffsetGround);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::ClimbingFootIK(Z_Param_WorldContextObject,Z_Param_Out_ReturnHit,Z_Param_Out_ReturnLocation,Z_Param_Out_ReturnNormal,Z_Param_TargetChar,Z_Param_FootLocation,Z_Param_Direction,Z_Param_UpOffset,Z_Param_TraceRadius,Z_Param_TraceLength,Z_Param_UseTwoBoneIK,Z_Param_RootBoneName,Z_Param_JoinBoneName,Z_Param_EndBoneName,Z_Param_FootUpOffsetGround,Z_Param_DebugIndex);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ClimbingFootIK

// Begin Class UHelpfulFunctionsBPLibrary Function ClimbingLedgeValidP1
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics
{
	struct HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms
	{
		const UObject* WorldContextObject;
		bool IsValid;
		FCMC_SingleClimbPointC LeftStruct;
		FCMC_SingleClimbPointC RightStruct;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		float UpAxisTollerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| ClimbingSystem" },
		{ "CPP_Default_UpAxisTollerance", "25.000000" },
		{ "DisplayName", "Climbing - Ledge Valid P1" },
		{ "Keywords", "Climbing Validation Character" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightStruct;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpAxisTollerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_LeftStruct = { "LeftStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms, LeftStruct), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_RightStruct = { "RightStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms, RightStruct), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_UpAxisTollerance = { "UpAxisTollerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms, UpAxisTollerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_LeftStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_RightStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_UpAxisTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ClimbingLedgeValidP1", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::HelpfulFunctionsBPLibrary_eventClimbingLedgeValidP1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execClimbingLedgeValidP1)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_IsValid);
	P_GET_STRUCT(FCMC_SingleClimbPointC,Z_Param_LeftStruct);
	P_GET_STRUCT(FCMC_SingleClimbPointC,Z_Param_RightStruct);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpAxisTollerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::ClimbingLedgeValidP1(Z_Param_WorldContextObject,Z_Param_IsValid,Z_Param_LeftStruct,Z_Param_RightStruct,ECollisionChannel(Z_Param_TraceChannel),Z_Param_UpAxisTollerance);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ClimbingLedgeValidP1

// Begin Class UHelpfulFunctionsBPLibrary Function ConvertLocalToWorldFastMatrix
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics
{
	struct HelpfulFunctionsBPLibrary_eventConvertLocalToWorldFastMatrix_Parms
	{
		FCALS_ComponentAndTransform Local;
		FCALS_ComponentAndTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert transform in local space to global space. Calculations are made on matrices.\n" },
#endif
		{ "DisplayName", "Cpp Local To World (Matrix)" },
		{ "Keywords", "Transform Convert" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert transform in local space to global space. Calculations are made on matrices." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventConvertLocalToWorldFastMatrix_Parms, Local), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventConvertLocalToWorldFastMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::NewProp_Local,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ConvertLocalToWorldFastMatrix", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::HelpfulFunctionsBPLibrary_eventConvertLocalToWorldFastMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::HelpfulFunctionsBPLibrary_eventConvertLocalToWorldFastMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execConvertLocalToWorldFastMatrix)
{
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_Local);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCALS_ComponentAndTransform*)Z_Param__Result=UHelpfulFunctionsBPLibrary::ConvertLocalToWorldFastMatrix(Z_Param_Local);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ConvertLocalToWorldFastMatrix

// Begin Class UHelpfulFunctionsBPLibrary Function ConvertWorldToLocalFastMatrix
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics
{
	struct HelpfulFunctionsBPLibrary_eventConvertWorldToLocalFastMatrix_Parms
	{
		FCALS_ComponentAndTransform World;
		FCALS_ComponentAndTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert a transformation related to the global coordinate system with a transformation relative to a specific component. Calculations are made on matrices.\n" },
#endif
		{ "DisplayName", "Cpp World To Local (Matrix)" },
		{ "Keywords", "Transform Convert" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a transformation related to the global coordinate system with a transformation relative to a specific component. Calculations are made on matrices." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventConvertWorldToLocalFastMatrix_Parms, World), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventConvertWorldToLocalFastMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ConvertWorldToLocalFastMatrix", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::HelpfulFunctionsBPLibrary_eventConvertWorldToLocalFastMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::HelpfulFunctionsBPLibrary_eventConvertWorldToLocalFastMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execConvertWorldToLocalFastMatrix)
{
	P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCALS_ComponentAndTransform*)Z_Param__Result=UHelpfulFunctionsBPLibrary::ConvertWorldToLocalFastMatrix(Z_Param_World);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ConvertWorldToLocalFastMatrix

// Begin Class UHelpfulFunctionsBPLibrary Function CreateComponentAndAddToActor
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics
{
	struct HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms
	{
		AActor* TargetActor;
		TSubclassOf<UActorComponent> ComponentClass;
		FTransform RelativeTransform;
		FName ComponentName;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows you to create a permanent component for a specific actor.\n" },
#endif
		{ "CPP_Default_ComponentName", "None" },
		{ "Keywords", "Actor,Component,Arrow" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to create a permanent component for a specific actor." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms, ComponentName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "CreateComponentAndAddToActor", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::HelpfulFunctionsBPLibrary_eventCreateComponentAndAddToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execCreateComponentAndAddToActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_GET_STRUCT(FTransform,Z_Param_RelativeTransform);
	P_GET_PROPERTY(FNameProperty,Z_Param_ComponentName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UHelpfulFunctionsBPLibrary::CreateComponentAndAddToActor(Z_Param_TargetActor,Z_Param_ComponentClass,Z_Param_RelativeTransform,Z_Param_ComponentName);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function CreateComponentAndAddToActor

// Begin Class UHelpfulFunctionsBPLibrary Function DistancePointToLine
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics
{
	struct HelpfulFunctionsBPLibrary_eventDistancePointToLine_Parms
	{
		FVector LineV1;
		FVector LineV2;
		FVector PointVector;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
		{ "DisplayName", "Distance Point To Line" },
		{ "Keywords", "Vector Math Distance" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_LineV1 = { "LineV1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventDistancePointToLine_Parms, LineV1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_LineV2 = { "LineV2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventDistancePointToLine_Parms, LineV2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_PointVector = { "PointVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventDistancePointToLine_Parms, PointVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventDistancePointToLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_LineV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_LineV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_PointVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "DistancePointToLine", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::HelpfulFunctionsBPLibrary_eventDistancePointToLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::HelpfulFunctionsBPLibrary_eventDistancePointToLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execDistancePointToLine)
{
	P_GET_STRUCT(FVector,Z_Param_LineV1);
	P_GET_STRUCT(FVector,Z_Param_LineV2);
	P_GET_STRUCT(FVector,Z_Param_PointVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::DistancePointToLine(Z_Param_LineV1,Z_Param_LineV2,Z_Param_PointVector);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function DistancePointToLine

// Begin Class UHelpfulFunctionsBPLibrary Function ElasticOutInterpFast
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics
{
	struct HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms
	{
		FVector A;
		FVector B;
		float Alpha;
		float PowerBase;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Interpolation" },
		{ "CPP_Default_PowerBase", "2.000000" },
		{ "DisplayName", "Elastic Out Interp (Vector)" },
		{ "Keywords", "Interpolation Vector" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_PowerBase = { "PowerBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms, PowerBase), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_PowerBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ElasticOutInterpFast", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::HelpfulFunctionsBPLibrary_eventElasticOutInterpFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execElasticOutInterpFast)
{
	P_GET_STRUCT(FVector,Z_Param_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PowerBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::ElasticOutInterpFast(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_PowerBase);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ElasticOutInterpFast

// Begin Class UHelpfulFunctionsBPLibrary Function ExecuteInterfaceInput
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics
{
	struct HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms
	{
		UObject* WorldContextObject;
		UActorComponent* OptionalComponent;
		bool CallToAll;
		bool Hold;
		CALS_IntputType InputIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// >>>>>>>>>>>>>>>>>>>>> ZMIANY WPROWADZONE PO WYDANIU AKTUALIZACJI 2.7 <<<<<<<<<<<<<<<<<<<<<<<<\n//My Custom Input Conection With All Components With Specified Interface\n" },
#endif
		{ "CompactNodeTitle", "Inputs Interface" },
		{ "DisplayName", "Execute Interface Input" },
		{ "Keywords", "Inputs Interface" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ">>>>>>>>>>>>>>>>>>>>> ZMIANY WPROWADZONE PO WYDANIU AKTUALIZACJI 2.7 <<<<<<<<<<<<<<<<<<<<<<<<\nMy Custom Input Conection With All Components With Specified Interface" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalComponent;
	static void NewProp_CallToAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallToAll;
	static void NewProp_Hold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputIndex_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_OptionalComponent = { "OptionalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms, OptionalComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalComponent_MetaData), NewProp_OptionalComponent_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_CallToAll_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms*)Obj)->CallToAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_CallToAll = { "CallToAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_CallToAll_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_Hold_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms*)Obj)->Hold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_InputIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms, InputIndex), Z_Construct_UEnum_HelpfulFunctions_CALS_IntputType, METADATA_PARAMS(0, nullptr) }; // 580085830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_OptionalComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_CallToAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_Hold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_InputIndex_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::NewProp_InputIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ExecuteInterfaceInput", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::HelpfulFunctionsBPLibrary_eventExecuteInterfaceInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execExecuteInterfaceInput)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UActorComponent,Z_Param_OptionalComponent);
	P_GET_UBOOL(Z_Param_CallToAll);
	P_GET_UBOOL(Z_Param_Hold);
	P_GET_ENUM(CALS_IntputType,Z_Param_InputIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::ExecuteInterfaceInput(Z_Param_WorldContextObject,Z_Param_OptionalComponent,Z_Param_CallToAll,Z_Param_Hold,CALS_IntputType(Z_Param_InputIndex));
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ExecuteInterfaceInput

// Begin Class UHelpfulFunctionsBPLibrary Function FFT
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFFT_Parms
	{
		TArray<float> Data;
		int32 NumSamples;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
		{ "DisplayName", "FFT" },
		{ "Keywords", "Fast Fourier Transform" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFFT_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFFT_Parms, NumSamples), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::NewProp_NumSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FFT", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::HelpfulFunctionsBPLibrary_eventFFT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::HelpfulFunctionsBPLibrary_eventFFT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFFT)
{
	P_GET_TARRAY(float,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSamples);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::FFT(Z_Param_Data,Z_Param_NumSamples);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FFT

// Begin Class UHelpfulFunctionsBPLibrary Function FindBaseJumpAwayPosition
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValid;
		FVector ReturnLocation;
		ACharacter* Character;
		FVector GrenadePosition;
		float MaxRadius;
		FVector2D Arc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Navigation" },
		{ "CPP_Default_Arc", "(X=-50.000,Y=50.000)" },
		{ "CPP_Default_MaxRadius", "120.000000" },
		{ "DisplayName", "Find Base Jump Away Position" },
		{ "Keywords", "Navigation RayCast" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadePosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Arc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_ReturnValid_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms*)Obj)->ReturnValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_ReturnValid = { "ReturnValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_ReturnValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_GrenadePosition = { "GrenadePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms, GrenadePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms, MaxRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_Arc = { "Arc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms, Arc), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_ReturnValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_ReturnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_GrenadePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_MaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::NewProp_Arc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FindBaseJumpAwayPosition", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::HelpfulFunctionsBPLibrary_eventFindBaseJumpAwayPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFindBaseJumpAwayPosition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValid);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_STRUCT(FVector,Z_Param_GrenadePosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRadius);
	P_GET_STRUCT(FVector2D,Z_Param_Arc);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::FindBaseJumpAwayPosition(Z_Param_WorldContextObject,Z_Param_Out_ReturnValid,Z_Param_Out_ReturnLocation,Z_Param_Character,Z_Param_GrenadePosition,Z_Param_MaxRadius,Z_Param_Arc);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FindBaseJumpAwayPosition

// Begin Class UHelpfulFunctionsBPLibrary Function FindGapBySphereTrace
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms
	{
		const UObject* WorldContextObject;
		FVector Start;
		FVector End;
		float TraceRadius;
		TEnumAsByte<ETraceTypeQuery> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		int32 DebugIndex;
		FHitResult OutHit;
		bool bIgnoreSelf;
		FLinearColor TraceColor;
		FLinearColor TraceHitColor;
		float DrawTime;
		int32 MaxIteracion;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bIgnoreSelf,TraceColor,TraceHitColor,DrawTime,MaxIteracion" },
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "Category", "JakubW_FunctionsLibrary| Trace" },
		{ "CPP_Default_DrawTime", "0.500000" },
		{ "CPP_Default_MaxIteracion", "6" },
		{ "CPP_Default_TraceColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TraceHitColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "DisplayName", "Find Gap By Sphere Trace" },
		{ "Keywords", "Trace Collision" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIteracion;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, TraceRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, DrawTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_MaxIteracion = { "MaxIteracion", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms, MaxIteracion), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_TraceHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_DrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_MaxIteracion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FindGapBySphereTrace", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::HelpfulFunctionsBPLibrary_eventFindGapBySphereTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFindGapBySphereTrace)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceRadius);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxIteracion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::FindGapBySphereTrace(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_TraceRadius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_DebugIndex,Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime,Z_Param_MaxIteracion);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FindGapBySphereTrace

// Begin Class UHelpfulFunctionsBPLibrary Function FindLedgePoint
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValid;
		FVector ReturnLocation;
		FVector ReturnNormal;
		FTransform ReturnActorT;
		UPrimitiveComponent* ReturnComponent;
		const ACharacter* TargetChar;
		FVector StartLocation;
		FVector ForwardDirection;
		TArray<UClass*> NotThisClass;
		float ForwardScale;
		float UpOffset;
		bool preValid;
		FVector preLocation;
		FVector preNormal;
		bool IsFirst;
		bool ForLeftSide;
		int32 DebugIndex;
		TEnumAsByte<ECollisionChannel> TraceChannel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| ClimbingSystem" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_ForLeftSide", "false" },
		{ "CPP_Default_ForwardScale", "40.000000" },
		{ "CPP_Default_IsFirst", "false" },
		{ "CPP_Default_preLocation", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_preNormal", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_preValid", "false" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "CPP_Default_UpOffset", "20.000000" },
		{ "DisplayName", "Find Single Ledge Point" },
		{ "Keywords", "Character Trace Climbing" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnActorT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardDirection;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotThisClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NotThisClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpOffset;
	static void NewProp_preValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_preValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_preLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_preNormal;
	static void NewProp_IsFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFirst;
	static void NewProp_ForLeftSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForLeftSide;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnValid_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms*)Obj)->ReturnValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnValid = { "ReturnValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnNormal = { "ReturnNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, ReturnNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnActorT = { "ReturnActorT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, ReturnActorT), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnComponent = { "ReturnComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, ReturnComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnComponent_MetaData), NewProp_ReturnComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForwardDirection = { "ForwardDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, ForwardDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_NotThisClass_Inner = { "NotThisClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_NotThisClass = { "NotThisClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, NotThisClass), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForwardScale = { "ForwardScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, ForwardScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_UpOffset = { "UpOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, UpOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preValid_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms*)Obj)->preValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preValid = { "preValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preLocation = { "preLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, preLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preNormal = { "preNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, preNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_IsFirst_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms*)Obj)->IsFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_IsFirst = { "IsFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_IsFirst_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForLeftSide_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms*)Obj)->ForLeftSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForLeftSide = { "ForLeftSide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForLeftSide_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnActorT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ReturnComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForwardDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_NotThisClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_NotThisClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForwardScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_UpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_preNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_IsFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_ForLeftSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::NewProp_TraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FindLedgePoint", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::HelpfulFunctionsBPLibrary_eventFindLedgePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFindLedgePoint)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValid);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnNormal);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ReturnActorT);
	P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_ReturnComponent);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_ForwardDirection);
	P_GET_TARRAY(UClass*,Z_Param_NotThisClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpOffset);
	P_GET_UBOOL(Z_Param_preValid);
	P_GET_STRUCT(FVector,Z_Param_preLocation);
	P_GET_STRUCT(FVector,Z_Param_preNormal);
	P_GET_UBOOL(Z_Param_IsFirst);
	P_GET_UBOOL(Z_Param_ForLeftSide);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::FindLedgePoint(Z_Param_WorldContextObject,Z_Param_Out_ReturnValid,Z_Param_Out_ReturnLocation,Z_Param_Out_ReturnNormal,Z_Param_Out_ReturnActorT,P_ARG_GC_BARRIER(Z_Param_Out_ReturnComponent),Z_Param_TargetChar,Z_Param_StartLocation,Z_Param_ForwardDirection,Z_Param_NotThisClass,Z_Param_ForwardScale,Z_Param_UpOffset,Z_Param_preValid,Z_Param_preLocation,Z_Param_preNormal,Z_Param_IsFirst,Z_Param_ForLeftSide,Z_Param_DebugIndex,ECollisionChannel(Z_Param_TraceChannel));
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FindLedgePoint

// Begin Class UHelpfulFunctionsBPLibrary Function FindLedgePointStructure
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms
	{
		const UObject* WorldContextObject;
		const ACharacter* TargetChar;
		FVector StartLocation;
		FVector ForwardDirection;
		TArray<UClass*> NotThisClass;
		float ForwardScale;
		float UpOffset;
		bool preValid;
		FVector preLocation;
		FVector preNormal;
		bool IsFirst;
		bool ForLeftSide;
		int32 DebugIndex;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		float NormalFindOffset;
		FCMC_SingleClimbPointC ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| ClimbingSystem" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_ForLeftSide", "false" },
		{ "CPP_Default_ForwardScale", "40.000000" },
		{ "CPP_Default_IsFirst", "false" },
		{ "CPP_Default_NormalFindOffset", "2.000000" },
		{ "CPP_Default_preLocation", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_preNormal", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_preValid", "false" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "CPP_Default_UpOffset", "20.000000" },
		{ "DisplayName", "Find Single Ledge Point (Structure)" },
		{ "Keywords", "Character Trace Climbing" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardDirection;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotThisClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NotThisClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpOffset;
	static void NewProp_preValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_preValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_preLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_preNormal;
	static void NewProp_IsFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFirst;
	static void NewProp_ForLeftSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForLeftSide;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalFindOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForwardDirection = { "ForwardDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, ForwardDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_NotThisClass_Inner = { "NotThisClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_NotThisClass = { "NotThisClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, NotThisClass), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForwardScale = { "ForwardScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, ForwardScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_UpOffset = { "UpOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, UpOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preValid_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms*)Obj)->preValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preValid = { "preValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preLocation = { "preLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, preLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preNormal = { "preNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, preNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_IsFirst_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms*)Obj)->IsFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_IsFirst = { "IsFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_IsFirst_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForLeftSide_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms*)Obj)->ForLeftSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForLeftSide = { "ForLeftSide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForLeftSide_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_NormalFindOffset = { "NormalFindOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, NormalFindOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms, ReturnValue), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForwardDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_NotThisClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_NotThisClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForwardScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_UpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_preNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_IsFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ForLeftSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_NormalFindOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FindLedgePointStructure", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::HelpfulFunctionsBPLibrary_eventFindLedgePointStructure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFindLedgePointStructure)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_ForwardDirection);
	P_GET_TARRAY(UClass*,Z_Param_NotThisClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpOffset);
	P_GET_UBOOL(Z_Param_preValid);
	P_GET_STRUCT(FVector,Z_Param_preLocation);
	P_GET_STRUCT(FVector,Z_Param_preNormal);
	P_GET_UBOOL(Z_Param_IsFirst);
	P_GET_UBOOL(Z_Param_ForLeftSide);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalFindOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCMC_SingleClimbPointC*)Z_Param__Result=UHelpfulFunctionsBPLibrary::FindLedgePointStructure(Z_Param_WorldContextObject,Z_Param_TargetChar,Z_Param_StartLocation,Z_Param_ForwardDirection,Z_Param_NotThisClass,Z_Param_ForwardScale,Z_Param_UpOffset,Z_Param_preValid,Z_Param_preLocation,Z_Param_preNormal,Z_Param_IsFirst,Z_Param_ForLeftSide,Z_Param_DebugIndex,ECollisionChannel(Z_Param_TraceChannel),Z_Param_NormalFindOffset);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FindLedgePointStructure

// Begin Class UHelpfulFunctionsBPLibrary Function FindNearestCollisionByCylinder
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms
	{
		FVector OutCircleCenter;
		float OutCircleRadius;
		FVector OutNormal;
		UObject* WorldContextObject;
		FTransform OriginTransform;
		TArray<AActor*> ToIgnore;
		float MaxRadius;
		float Height;
		int32 Precision;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool DrawDebug;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Collision" },
		{ "CPP_Default_DrawDebug", "false" },
		{ "CPP_Default_Height", "5.000000" },
		{ "CPP_Default_MaxRadius", "100.000000" },
		{ "CPP_Default_Precision", "16" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "DisplayName", "Find Nearest Collision By Cylinder" },
		{ "Keywords", "Collision" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCircleCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutCircleRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutNormal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OutCircleCenter = { "OutCircleCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, OutCircleCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OutCircleRadius = { "OutCircleRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, OutCircleRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OutNormal = { "OutNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, OutNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OriginTransform = { "OriginTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, OriginTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ToIgnore_Inner = { "ToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ToIgnore = { "ToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, ToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, MaxRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, Precision), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_DrawDebug_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms*)Obj)->DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OutCircleCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OutCircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OutNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_OriginTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_MaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_Precision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FindNearestCollisionByCylinder", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::HelpfulFunctionsBPLibrary_eventFindNearestCollisionByCylinder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFindNearestCollisionByCylinder)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCircleCenter);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutCircleRadius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutNormal);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FTransform,Z_Param_OriginTransform);
	P_GET_TARRAY(AActor*,Z_Param_ToIgnore);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_PROPERTY(FIntProperty,Z_Param_Precision);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_DrawDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::FindNearestCollisionByCylinder(Z_Param_Out_OutCircleCenter,Z_Param_Out_OutCircleRadius,Z_Param_Out_OutNormal,Z_Param_WorldContextObject,Z_Param_OriginTransform,Z_Param_ToIgnore,Z_Param_MaxRadius,Z_Param_Height,Z_Param_Precision,ECollisionChannel(Z_Param_TraceChannel),Z_Param_DrawDebug);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FindNearestCollisionByCylinder

// Begin Class UHelpfulFunctionsBPLibrary Function FindNearPointToWallSurface
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms
	{
		const UObject* WorldContextObject;
		const ACharacter* Character;
		bool ValidPoint;
		FHitResult OutHitResult;
		FVector ForwardDirection;
		int32 Accuracy;
		bool UseNormalFromFirstTrace;
		float ConstForwardOffset;
		FVector RightOffset;
		int32 DebugIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Trace" },
		{ "CPP_Default_Accuracy", "7" },
		{ "CPP_Default_ConstForwardOffset", "15.000000" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_RightOffset", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_UseNormalFromFirstTrace", "false" },
		{ "DisplayName", "Find Near Point To Wall Surface (Fast)" },
		{ "Keywords", "Trace CoverSystem Collision" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static void NewProp_ValidPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardDirection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Accuracy;
	static void NewProp_UseNormalFromFirstTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNormalFromFirstTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstForwardOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ValidPoint_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms*)Obj)->ValidPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ValidPoint = { "ValidPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ValidPoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_OutHitResult = { "OutHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, OutHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ForwardDirection = { "ForwardDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, ForwardDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, Accuracy), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_UseNormalFromFirstTrace_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms*)Obj)->UseNormalFromFirstTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_UseNormalFromFirstTrace = { "UseNormalFromFirstTrace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_UseNormalFromFirstTrace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ConstForwardOffset = { "ConstForwardOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, ConstForwardOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_RightOffset = { "RightOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, RightOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ValidPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_OutHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ForwardDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_UseNormalFromFirstTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_ConstForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_RightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::NewProp_DebugIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FindNearPointToWallSurface", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::HelpfulFunctionsBPLibrary_eventFindNearPointToWallSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFindNearPointToWallSurface)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_UBOOL_REF(Z_Param_Out_ValidPoint);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult);
	P_GET_STRUCT(FVector,Z_Param_ForwardDirection);
	P_GET_PROPERTY(FIntProperty,Z_Param_Accuracy);
	P_GET_UBOOL(Z_Param_UseNormalFromFirstTrace);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ConstForwardOffset);
	P_GET_STRUCT(FVector,Z_Param_RightOffset);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::FindNearPointToWallSurface(Z_Param_WorldContextObject,Z_Param_Character,Z_Param_Out_ValidPoint,Z_Param_Out_OutHitResult,Z_Param_ForwardDirection,Z_Param_Accuracy,Z_Param_UseNormalFromFirstTrace,Z_Param_ConstForwardOffset,Z_Param_RightOffset,Z_Param_DebugIndex);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FindNearPointToWallSurface

// Begin Class UHelpfulFunctionsBPLibrary Function FixMovePointWhenIs
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics
{
	struct HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms
	{
		UObject* WorldContextObject;
		FVector TargetPoint;
		ACharacter* TargetCharacter;
		UClass* CharactersArray;
		float OffsetRadius;
		int32 MaxIteractions;
		float MinAccetableDistance;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ENG: The function's task is to add an offset to the target point so as to eliminate the collision with other AI controllers. It may happen that several controllers will reach to one point. This function tries to eliminate this situation.\n//PL : Zadaniem funckji jest dodanie przesuni\xef\xbf\xbd""cia wzgl\xef\xbf\xbd""dem punktu celu, tak aby wyeliminowa\xef\xbf\xbd kolizj\xef\xbf\xbd wzgl\xef\xbf\xbd""demi innych kontroler\xef\xbf\xbdw AI.Mo\xef\xbf\xbd""e si\xef\xbf\xbd zda\xef\xbf\xbdy\xef\xbf\xbd taka sytuacja \xef\xbf\xbd""e kilka kotroler\xef\xbf\xbdw b\xef\xbf\xbd""dzie do\xef\xbf\xbdy\xef\xbf\xbd do jednego punktu.Ta funkcja stara si\xef\xbf\xbd wyeliminowa\xef\xbf\xbd tak\xef\xbf\xbd sytuacj\xef\xbf\xbd.\n" },
#endif
		{ "CPP_Default_MaxIteractions", "6" },
		{ "CPP_Default_MinAccetableDistance", "25.000000" },
		{ "CPP_Default_OffsetRadius", "60.000000" },
		{ "DisplayName", "Fix Move Point When Is Busy" },
		{ "Keywords", "AI Navigation" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG: The function's task is to add an offset to the target point so as to eliminate the collision with other AI controllers. It may happen that several controllers will reach to one point. This function tries to eliminate this situation.\nPL : Zadaniem funckji jest dodanie przesuni\xef\xbf\xbd""cia wzgl\xef\xbf\xbd""dem punktu celu, tak aby wyeliminowa\xef\xbf\xbd kolizj\xef\xbf\xbd wzgl\xef\xbf\xbd""demi innych kontroler\xef\xbf\xbdw AI.Mo\xef\xbf\xbd""e si\xef\xbf\xbd zda\xef\xbf\xbdy\xef\xbf\xbd taka sytuacja \xef\xbf\xbd""e kilka kotroler\xef\xbf\xbdw b\xef\xbf\xbd""dzie do\xef\xbf\xbdy\xef\xbf\xbd do jednego punktu.Ta funkcja stara si\xef\xbf\xbd wyeliminowa\xef\xbf\xbd tak\xef\xbf\xbd sytuacj\xef\xbf\xbd." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharactersArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIteractions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAccetableDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, TargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_CharactersArray = { "CharactersArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, CharactersArray), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_OffsetRadius = { "OffsetRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, OffsetRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_MaxIteractions = { "MaxIteractions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, MaxIteractions), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_MinAccetableDistance = { "MinAccetableDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, MinAccetableDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_TargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_CharactersArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_OffsetRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_MaxIteractions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_MinAccetableDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "FixMovePointWhenIs", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::HelpfulFunctionsBPLibrary_eventFixMovePointWhenIs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execFixMovePointWhenIs)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_TargetPoint);
	P_GET_OBJECT(ACharacter,Z_Param_TargetCharacter);
	P_GET_OBJECT(UClass,Z_Param_CharactersArray);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetRadius);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxIteractions);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAccetableDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::FixMovePointWhenIs(Z_Param_WorldContextObject,Z_Param_TargetPoint,Z_Param_TargetCharacter,Z_Param_CharactersArray,Z_Param_OffsetRadius,Z_Param_MaxIteractions,Z_Param_MinAccetableDistance);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function FixMovePointWhenIs

// Begin Class UHelpfulFunctionsBPLibrary Function ForceDestroyComponent
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics
{
	struct HelpfulFunctionsBPLibrary_eventForceDestroyComponent_Parms
	{
		UActorComponent* ActorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Component" },
		{ "DisplayName", "Force Destroy Component" },
		{ "Keywords", "Component" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventForceDestroyComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::NewProp_ActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "ForceDestroyComponent", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::HelpfulFunctionsBPLibrary_eventForceDestroyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::HelpfulFunctionsBPLibrary_eventForceDestroyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execForceDestroyComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::ForceDestroyComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function ForceDestroyComponent

// Begin Class UHelpfulFunctionsBPLibrary Function GetAngleBetween
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetAngleBetween_Parms
	{
		FVector A;
		FVector B;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
		{ "DisplayName", "Get Angle Between Vectors" },
		{ "Keywords", "Vector Math Angle" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetAngleBetween_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetAngleBetween_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetAngleBetween_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetAngleBetween", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::HelpfulFunctionsBPLibrary_eventGetAngleBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::HelpfulFunctionsBPLibrary_eventGetAngleBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetAngleBetween)
{
	P_GET_STRUCT(FVector,Z_Param_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetAngleBetween(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetAngleBetween

// Begin Class UHelpfulFunctionsBPLibrary Function GetAnimSequenceFromMontage
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetAnimSequenceFromMontage_Parms
	{
		const UAnimMontage* TargetAnimMontage;
		int32 SequenceIndex;
		UAnimSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Animation" },
		{ "DisplayName", "Get Anim Sequence From Montage" },
		{ "Keywords", "Animations" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAnimMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAnimMontage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::NewProp_TargetAnimMontage = { "TargetAnimMontage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetAnimSequenceFromMontage_Parms, TargetAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAnimMontage_MetaData), NewProp_TargetAnimMontage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetAnimSequenceFromMontage_Parms, SequenceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetAnimSequenceFromMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::NewProp_TargetAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::NewProp_SequenceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetAnimSequenceFromMontage", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::HelpfulFunctionsBPLibrary_eventGetAnimSequenceFromMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::HelpfulFunctionsBPLibrary_eventGetAnimSequenceFromMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetAnimSequenceFromMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_TargetAnimMontage);
	P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequence**)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetAnimSequenceFromMontage(Z_Param_TargetAnimMontage,Z_Param_SequenceIndex);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetAnimSequenceFromMontage

// Begin Class UHelpfulFunctionsBPLibrary Function GetBonePositionAtTimeFromSeq
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms
	{
		const UAnimSequenceBase* AnimationSequenceBase;
		double Time;
		FName BoneName;
		FAnimPoseEvaluationConfig EvaluationOptions;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Animation" },
		{ "DisplayName", "Get Bone Transform At Time" },
		{ "Keywords", "Animations" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSequenceBase_MetaData), NewProp_AnimationSequenceBase_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_EvaluationOptions = { "EvaluationOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms, EvaluationOptions), Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig, METADATA_PARAMS(0, nullptr) }; // 2355769719
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_AnimationSequenceBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_EvaluationOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetBonePositionAtTimeFromSeq", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::HelpfulFunctionsBPLibrary_eventGetBonePositionAtTimeFromSeq_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetBonePositionAtTimeFromSeq)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Time);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FAnimPoseEvaluationConfig,Z_Param_EvaluationOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetBonePositionAtTimeFromSeq(Z_Param_AnimationSequenceBase,Z_Param_Time,Z_Param_BoneName,Z_Param_EvaluationOptions);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetBonePositionAtTimeFromSeq

// Begin Class UHelpfulFunctionsBPLibrary Function GetClampedCurveValue
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms
	{
		const UObject* WorldContextObject;
		FName Curve;
		float Bias;
		float ClampMin;
		float ClampMax;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "CPP_Default_Bias", "0.000000" },
		{ "CPP_Default_ClampMax", "1.000000" },
		{ "CPP_Default_ClampMin", "0.000000" },
		{ "DisplayName", "Get Anim Curve Value Clamped" },
		{ "Keywords", "Character AnimCurve" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms, Curve), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms, Bias), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms, ClampMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms, ClampMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_ClampMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_ClampMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetClampedCurveValue", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::HelpfulFunctionsBPLibrary_eventGetClampedCurveValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetClampedCurveValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_Curve);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Bias);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClampMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClampMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetClampedCurveValue(Z_Param_WorldContextObject,Z_Param_Curve,Z_Param_Bias,Z_Param_ClampMin,Z_Param_ClampMax);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetClampedCurveValue

// Begin Class UHelpfulFunctionsBPLibrary Function GetCurveValueAtTime
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms
	{
		UObject* WorldContextObject;
		UAnimSequence* AnimSequence;
		FName CurveName;
		float Time;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Animation" },
		{ "DisplayName", "Get Anim Curve Value At Time" },
		{ "Keywords", "Animations" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetCurveValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::HelpfulFunctionsBPLibrary_eventGetCurveValueAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetCurveValueAtTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
	P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetCurveValueAtTime(Z_Param_WorldContextObject,Z_Param_AnimSequence,Z_Param_CurveName,Z_Param_Time);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetCurveValueAtTime

// Begin Class UHelpfulFunctionsBPLibrary Function GetIsEnemyState
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms
	{
		UObject* WorldContextObject;
		AActor* Checker;
		AActor* ActorToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Us Enemy By Using Actor Tags. An actor checking whether \"ActorToCheck\" is to be treated as an enemy. When ActorToCheck have Tag with EN_[ClassName] then return = true\n" },
#endif
		{ "CPP_Default_ActorToCheck", "None" },
		{ "CPP_Default_Checker", "None" },
		{ "DisplayName", "Get Is Enemy Value" },
		{ "Keywords", "Character AI" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Us Enemy By Using Actor Tags. An actor checking whether \"ActorToCheck\" is to be treated as an enemy. When ActorToCheck have Tag with EN_[ClassName] then return = true" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Checker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_Checker = { "Checker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms, Checker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_Checker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_ActorToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetIsEnemyState", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::HelpfulFunctionsBPLibrary_eventGetIsEnemyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetIsEnemyState)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Checker);
	P_GET_OBJECT(AActor,Z_Param_ActorToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetIsEnemyState(Z_Param_WorldContextObject,Z_Param_Checker,Z_Param_ActorToCheck);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetIsEnemyState

// Begin Class UHelpfulFunctionsBPLibrary Function GetNearFromActorsArray
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms
	{
		const UObject* WorldContextObject;
		TArray<AActor*> ActorsArray;
		FVector Origin;
		bool ReturnValid;
		AActor* OutActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Array" },
		{ "DisplayName", "Get Near From Actors Array" },
		{ "Keywords", "Array Actor" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static void NewProp_ReturnValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ActorsArray_Inner = { "ActorsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ActorsArray = { "ActorsArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms, ActorsArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ReturnValid_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms*)Obj)->ReturnValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ReturnValid = { "ReturnValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ReturnValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms, OutActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ActorsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ActorsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_ReturnValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::NewProp_OutActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetNearFromActorsArray", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::HelpfulFunctionsBPLibrary_eventGetNearFromActorsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetNearFromActorsArray)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(AActor*,Z_Param_ActorsArray);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValid);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_OutActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::GetNearFromActorsArray(Z_Param_WorldContextObject,Z_Param_ActorsArray,Z_Param_Origin,Z_Param_Out_ReturnValid,P_ARG_GC_BARRIER(Z_Param_Out_OutActor));
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetNearFromActorsArray

// Begin Class UHelpfulFunctionsBPLibrary Function GetPlayerCapsuleStartLocation
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetPlayerCapsuleStartLocation_Parms
	{
		const UObject* WorldContextObject;
		const ACharacter* TargetChar;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Get Character Capsule Start Location" },
		{ "Keywords", "Character Capsule Component" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetPlayerCapsuleStartLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetPlayerCapsuleStartLocation_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetPlayerCapsuleStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetPlayerCapsuleStartLocation", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::HelpfulFunctionsBPLibrary_eventGetPlayerCapsuleStartLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::HelpfulFunctionsBPLibrary_eventGetPlayerCapsuleStartLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetPlayerCapsuleStartLocation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetPlayerCapsuleStartLocation(Z_Param_WorldContextObject,Z_Param_TargetChar);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetPlayerCapsuleStartLocation

// Begin Class UHelpfulFunctionsBPLibrary Function GetRootMotionValueAtTime
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetRootMotionValueAtTime_Parms
	{
		UObject* WorldContextObject;
		UAnimSequence* AnimSequence;
		float Time;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Animation" },
		{ "DisplayName", "Get Root Motion Curve Value At Time" },
		{ "Keywords", "Animations" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetRootMotionValueAtTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetRootMotionValueAtTime_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetRootMotionValueAtTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetRootMotionValueAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetRootMotionValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::HelpfulFunctionsBPLibrary_eventGetRootMotionValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::HelpfulFunctionsBPLibrary_eventGetRootMotionValueAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetRootMotionValueAtTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetRootMotionValueAtTime(Z_Param_WorldContextObject,Z_Param_AnimSequence,Z_Param_Time);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetRootMotionValueAtTime

// Begin Class UHelpfulFunctionsBPLibrary Function GetSafeFloatValue
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics
{
	struct HelpfulFunctionsBPLibrary_eventGetSafeFloatValue_Parms
	{
		UCurveFloat* FloatCurve;
		float Time;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Math" },
		{ "DisplayName", "Get Safe Float Value" },
		{ "Keywords", "Curves" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetSafeFloatValue_Parms, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetSafeFloatValue_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventGetSafeFloatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "GetSafeFloatValue", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::HelpfulFunctionsBPLibrary_eventGetSafeFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::HelpfulFunctionsBPLibrary_eventGetSafeFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execGetSafeFloatValue)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_FloatCurve);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::GetSafeFloatValue(Z_Param_FloatCurve,Z_Param_Time);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function GetSafeFloatValue

// Begin Class UHelpfulFunctionsBPLibrary Function HelpfulFunctionsSampleFunction
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics
{
	struct HelpfulFunctionsBPLibrary_eventHelpfulFunctionsSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "JakubW" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventHelpfulFunctionsSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventHelpfulFunctionsSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "HelpfulFunctionsSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::HelpfulFunctionsBPLibrary_eventHelpfulFunctionsSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::HelpfulFunctionsBPLibrary_eventHelpfulFunctionsSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execHelpfulFunctionsSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::HelpfulFunctionsSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function HelpfulFunctionsSampleFunction

// Begin Class UHelpfulFunctionsBPLibrary Function InterpolateBetweenPoints
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics
{
	struct HelpfulFunctionsBPLibrary_eventInterpolateBetweenPoints_Parms
	{
		TArray<FVector> Points;
		float Alpha;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Interpolation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Interpoluje liniowo pomiedzy punktami w tablicy.\n\x09* @param Points Tablica punktow w postaci FVector (musi zawierac przynajmniej 2 punkty).\n\x09* @param Alpha Wartosc Alpha (0.0 dla pierwszego punktu, 1.0 dla ostatniego).\n\x09* @return Zinterpolowany punkt na podstawie Alpha.\n\x09*/" },
#endif
		{ "Keywords", "Math,Interpolation,Points" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpoluje liniowo pomiedzy punktami w tablicy.\n@param Points Tablica punktow w postaci FVector (musi zawierac przynajmniej 2 punkty).\n@param Alpha Wartosc Alpha (0.0 dla pierwszego punktu, 1.0 dla ostatniego).\n@return Zinterpolowany punkt na podstawie Alpha." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventInterpolateBetweenPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventInterpolateBetweenPoints_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventInterpolateBetweenPoints_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "InterpolateBetweenPoints", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::HelpfulFunctionsBPLibrary_eventInterpolateBetweenPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::HelpfulFunctionsBPLibrary_eventInterpolateBetweenPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execInterpolateBetweenPoints)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::InterpolateBetweenPoints(Z_Param_Out_Points,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function InterpolateBetweenPoints

// Begin Class UHelpfulFunctionsBPLibrary Function IsNotHidingInFoliage
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics
{
	struct HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms
	{
		UObject* WorldContextObject;
		ACharacter* OwnerCharacter;
		ACharacter* Character;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		int32 DebugIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function For AI Controllers\n" },
#endif
		{ "DisplayName", "Check Is Not Hiding In Foliage" },
		{ "Keywords", "Character Trace" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function For AI Controllers" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "IsNotHidingInFoliage", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::HelpfulFunctionsBPLibrary_eventIsNotHidingInFoliage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execIsNotHidingInFoliage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_OwnerCharacter);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::IsNotHidingInFoliage(Z_Param_WorldContextObject,Z_Param_OwnerCharacter,Z_Param_Character,ECollisionChannel(Z_Param_TraceChannel),Z_Param_DebugIndex);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function IsNotHidingInFoliage

// Begin Class UHelpfulFunctionsBPLibrary Function NormalToVector
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics
{
	struct HelpfulFunctionsBPLibrary_eventNormalToVector_Parms
	{
		FVector Normal;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Math" },
		{ "DisplayName", "N To F Vector (Yaw)" },
		{ "Keywords", "Vector Math Rotation" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventNormalToVector_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventNormalToVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "NormalToVector", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::HelpfulFunctionsBPLibrary_eventNormalToVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::HelpfulFunctionsBPLibrary_eventNormalToVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execNormalToVector)
{
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::NormalToVector(Z_Param_Normal);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function NormalToVector

// Begin Class UHelpfulFunctionsBPLibrary Function RayCastSphereComplexRoomCheckFast
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics
{
	struct HelpfulFunctionsBPLibrary_eventRayCastSphereComplexRoomCheckFast_Parms
	{
		UObject* WorldContextObject;
		FTransform Origin;
		float InRadius;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Working Only When Navigation System Is Valid\n" },
#endif
		{ "CPP_Default_InRadius", "80.000000" },
		{ "DisplayName", "Check Room By Sphere Complex Ray Cast" },
		{ "Keywords", "Collision Nav" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Working Only When Navigation System Is Valid" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereComplexRoomCheckFast_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereComplexRoomCheckFast_Parms, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereComplexRoomCheckFast_Parms, InRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereComplexRoomCheckFast_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_InRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "RayCastSphereComplexRoomCheckFast", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::HelpfulFunctionsBPLibrary_eventRayCastSphereComplexRoomCheckFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::HelpfulFunctionsBPLibrary_eventRayCastSphereComplexRoomCheckFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execRayCastSphereComplexRoomCheckFast)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FTransform,Z_Param_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::RayCastSphereComplexRoomCheckFast(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_InRadius);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function RayCastSphereComplexRoomCheckFast

// Begin Class UHelpfulFunctionsBPLibrary Function RayCastSphereRoomCheckFast
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics
{
	struct HelpfulFunctionsBPLibrary_eventRayCastSphereRoomCheckFast_Parms
	{
		UObject* WorldContextObject;
		FTransform Origin;
		float InRadius;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Working Only When Navigation System Is Valid\n" },
#endif
		{ "CPP_Default_InRadius", "80.000000" },
		{ "DisplayName", "Check Room By Sphere Ray Cast" },
		{ "Keywords", "Collision Nav" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Working Only When Navigation System Is Valid" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereRoomCheckFast_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereRoomCheckFast_Parms, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereRoomCheckFast_Parms, InRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRayCastSphereRoomCheckFast_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_InRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "RayCastSphereRoomCheckFast", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::HelpfulFunctionsBPLibrary_eventRayCastSphereRoomCheckFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::HelpfulFunctionsBPLibrary_eventRayCastSphereRoomCheckFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execRayCastSphereRoomCheckFast)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FTransform,Z_Param_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHelpfulFunctionsBPLibrary::RayCastSphereRoomCheckFast(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_InRadius);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function RayCastSphereRoomCheckFast

// Begin Class UHelpfulFunctionsBPLibrary Function RotatedCapsuleTraceSingle
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics
{
	struct HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms
	{
		const UObject* WorldContextObject;
		FVector Start;
		FVector End;
		float Radius;
		float HalfHeight;
		TEnumAsByte<ETraceTypeQuery> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		int32 DebugIndex;
		FHitResult OutHit;
		bool bIgnoreSelf;
		FLinearColor TraceColor;
		FLinearColor TraceHitColor;
		float DrawTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NOT WORKING!!!\n" },
#endif
		{ "DisplayName", "Rotated Capsule Trace By Channel" },
		{ "Keywords", "Trace Collision" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOT WORKING!!!" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms, DrawTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_TraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_TraceHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_DrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "RotatedCapsuleTraceSingle", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::HelpfulFunctionsBPLibrary_eventRotatedCapsuleTraceSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execRotatedCapsuleTraceSingle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::RotatedCapsuleTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_DebugIndex,Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function RotatedCapsuleTraceSingle

// Begin Class UHelpfulFunctionsBPLibrary Function SlerpFast
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics
{
	struct HelpfulFunctionsBPLibrary_eventSlerpFast_Parms
	{
		FVector A;
		FVector B;
		float Alpha;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Interpolation" },
		{ "DisplayName", "Slerp (Vector)" },
		{ "Keywords", "Vector Math Interpolation" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpFast_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpFast_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpFast_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpFast_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "SlerpFast", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::HelpfulFunctionsBPLibrary_eventSlerpFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::HelpfulFunctionsBPLibrary_eventSlerpFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execSlerpFast)
{
	P_GET_STRUCT(FVector,Z_Param_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::SlerpFast(Z_Param_A,Z_Param_B,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function SlerpFast

// Begin Class UHelpfulFunctionsBPLibrary Function SlerpToFast
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics
{
	struct HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms
	{
		FVector Current;
		FVector Target;
		float DeltaTime;
		float InterpSpeed;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Interpolation" },
		{ "DisplayName", "SlerpTo (Vector)" },
		{ "Keywords", "Vector Math Interpolation" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "SlerpToFast", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::HelpfulFunctionsBPLibrary_eventSlerpToFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execSlerpToFast)
{
	P_GET_STRUCT(FVector,Z_Param_Current);
	P_GET_STRUCT(FVector,Z_Param_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::SlerpToFast(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function SlerpToFast

// Begin Class UHelpfulFunctionsBPLibrary Function SmoothCharacterRotation
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics
{
	struct HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms
	{
		const UObject* WorldContextObject;
		const ACharacter* Character;
		FRotator NewTargetRotation;
		FRotator Target;
		FRotator CurrentTargetRotation;
		float DeltaSecond;
		float TargetInterpSpeedConst;
		float TargetInterpSpeedSmooth;
		bool UpdateControl;
		FRotator NewControlRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TargetInterpSpeedConst,TargetInterpSpeedSmooth,UpdateControl" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Smoothed Character Rotation" },
		{ "Keywords", "Character Rotation" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetInterpSpeedConst;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetInterpSpeedSmooth;
	static void NewProp_UpdateControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewControlRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_NewTargetRotation = { "NewTargetRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, NewTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, Target), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_CurrentTargetRotation = { "CurrentTargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, CurrentTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_DeltaSecond = { "DeltaSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, DeltaSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_TargetInterpSpeedConst = { "TargetInterpSpeedConst", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, TargetInterpSpeedConst), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_TargetInterpSpeedSmooth = { "TargetInterpSpeedSmooth", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, TargetInterpSpeedSmooth), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_UpdateControl_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms*)Obj)->UpdateControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_UpdateControl = { "UpdateControl", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_UpdateControl_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_NewControlRotation = { "NewControlRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms, NewControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_NewTargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_CurrentTargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_DeltaSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_TargetInterpSpeedConst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_TargetInterpSpeedSmooth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_UpdateControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::NewProp_NewControlRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "SmoothCharacterRotation", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::HelpfulFunctionsBPLibrary_eventSmoothCharacterRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execSmoothCharacterRotation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewTargetRotation);
	P_GET_STRUCT(FRotator,Z_Param_Target);
	P_GET_STRUCT(FRotator,Z_Param_CurrentTargetRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSecond);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetInterpSpeedConst);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetInterpSpeedSmooth);
	P_GET_UBOOL(Z_Param_UpdateControl);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewControlRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::SmoothCharacterRotation(Z_Param_WorldContextObject,Z_Param_Character,Z_Param_Out_NewTargetRotation,Z_Param_Target,Z_Param_CurrentTargetRotation,Z_Param_DeltaSecond,Z_Param_TargetInterpSpeedConst,Z_Param_TargetInterpSpeedSmooth,Z_Param_UpdateControl,Z_Param_Out_NewControlRotation);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function SmoothCharacterRotation

// Begin Class UHelpfulFunctionsBPLibrary Function SplineLerpOnPathPoints
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics
{
	struct HelpfulFunctionsBPLibrary_eventSplineLerpOnPathPoints_Parms
	{
		FVector Start;
		TArray<FVector> PathPoints;
		float Alpha;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lerping between points by creating temporary Spline component.\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lerping between points by creating temporary Spline component." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSplineLerpOnPathPoints_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSplineLerpOnPathPoints_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPoints_MetaData), NewProp_PathPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSplineLerpOnPathPoints_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventSplineLerpOnPathPoints_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "SplineLerpOnPathPoints", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::HelpfulFunctionsBPLibrary_eventSplineLerpOnPathPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::HelpfulFunctionsBPLibrary_eventSplineLerpOnPathPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execSplineLerpOnPathPoints)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PathPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::SplineLerpOnPathPoints(Z_Param_Out_Start,Z_Param_Out_PathPoints,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function SplineLerpOnPathPoints

// Begin Class UHelpfulFunctionsBPLibrary Function TryFindLedgeLine
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics
{
	struct HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms
	{
		const UObject* WorldContextObject;
		bool Valid;
		FCMC_SingleClimbPointC LedgeStruct;
		const ACharacter* TargetChar;
		FVector StartLocation;
		FVector StartDirection;
		FVector2D AxisNormal;
		float ZOffset;
		float ForwardTraceLength;
		float RightOffsetScale;
		bool LeftDirection;
		bool InverseTracing;
		int32 TraceDebugIndex;
		TArray<UClass*> NotThisClass;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		float NormalFindOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| ClimbingSystem" },
		{ "CPP_Default_NormalFindOffset", "0.200000" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "DisplayName", "Try Find Ledge Line" },
		{ "Keywords", "Climbing Trace Character" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeStruct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardTraceLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightOffsetScale;
	static void NewProp_LeftDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftDirection;
	static void NewProp_InverseTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InverseTracing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceDebugIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotThisClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NotThisClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalFindOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_LedgeStruct = { "LedgeStruct", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, LedgeStruct), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, METADATA_PARAMS(0, nullptr) }; // 1225395477
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_StartDirection = { "StartDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, StartDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_AxisNormal = { "AxisNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, AxisNormal), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_ForwardTraceLength = { "ForwardTraceLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, ForwardTraceLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_RightOffsetScale = { "RightOffsetScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, RightOffsetScale), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_LeftDirection_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms*)Obj)->LeftDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_LeftDirection = { "LeftDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_LeftDirection_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_InverseTracing_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms*)Obj)->InverseTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_InverseTracing = { "InverseTracing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_InverseTracing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_TraceDebugIndex = { "TraceDebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, TraceDebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_NotThisClass_Inner = { "NotThisClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_NotThisClass = { "NotThisClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, NotThisClass), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_NormalFindOffset = { "NormalFindOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms, NormalFindOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_LedgeStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_StartDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_AxisNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_ForwardTraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_RightOffsetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_LeftDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_InverseTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_TraceDebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_NotThisClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_NotThisClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::NewProp_NormalFindOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "TryFindLedgeLine", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::HelpfulFunctionsBPLibrary_eventTryFindLedgeLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execTryFindLedgeLine)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL_REF(Z_Param_Out_Valid);
	P_GET_STRUCT_REF(FCMC_SingleClimbPointC,Z_Param_Out_LedgeStruct);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_StartDirection);
	P_GET_STRUCT(FVector2D,Z_Param_AxisNormal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardTraceLength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RightOffsetScale);
	P_GET_UBOOL(Z_Param_LeftDirection);
	P_GET_UBOOL(Z_Param_InverseTracing);
	P_GET_PROPERTY(FIntProperty,Z_Param_TraceDebugIndex);
	P_GET_TARRAY(UClass*,Z_Param_NotThisClass);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalFindOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::TryFindLedgeLine(Z_Param_WorldContextObject,Z_Param_Out_Valid,Z_Param_Out_LedgeStruct,Z_Param_TargetChar,Z_Param_StartLocation,Z_Param_StartDirection,Z_Param_AxisNormal,Z_Param_ZOffset,Z_Param_ForwardTraceLength,Z_Param_RightOffsetScale,Z_Param_LeftDirection,Z_Param_InverseTracing,Z_Param_TraceDebugIndex,Z_Param_NotThisClass,ECollisionChannel(Z_Param_TraceChannel),Z_Param_NormalFindOffset);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function TryFindLedgeLine

// Begin Class UHelpfulFunctionsBPLibrary Function TryMarkPackageDirty
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics
{
	struct HelpfulFunctionsBPLibrary_eventTryMarkPackageDirty_Parms
	{
		UObject* WorldContextObject;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Actor" },
		{ "Keywords", "Actor,Save" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryMarkPackageDirty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventTryMarkPackageDirty_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "TryMarkPackageDirty", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::HelpfulFunctionsBPLibrary_eventTryMarkPackageDirty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::HelpfulFunctionsBPLibrary_eventTryMarkPackageDirty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execTryMarkPackageDirty)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::TryMarkPackageDirty(Z_Param_WorldContextObject,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function TryMarkPackageDirty

// Begin Class UHelpfulFunctionsBPLibrary Function UpdateAimingValues
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics
{
	struct HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms
	{
		const UObject* WorldContextObject;
		const ACharacter* TargetChar;
		FRotator AimingRotation;
		FRotator SmoothedAimRotation;
		float InputYawOffsetTime;
		int32 RotationMode;
		bool HasMovementInput;
		FVector MovementInput;
		float DeltaX;
		float SmoothedAimingRotSpeed;
		float InputYawOffsetSpeed;
		FRotator ReturnSmoothedAimRotation;
		FVector2D ReturnAimingAngle;
		FVector2D ReturnSmoothedAimingAngle;
		float ReturnAimSweepTime;
		FRotator ReturnSpineRotation;
		float ReturnInputYawOffsetTime;
		float ReturnLeftYawTime;
		float ReturnRightYawTime;
		float ReturnForwardYawTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Update Aiming Values (AnimBP)" },
		{ "Keywords", "Character Anim Graph" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationMode;
	static void NewProp_HasMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothedAimingRotSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnSmoothedAimRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnAimingAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnSmoothedAimingAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnAimSweepTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnSpineRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnInputYawOffsetTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnLeftYawTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnRightYawTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnForwardYawTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChar_MetaData), NewProp_TargetChar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_AimingRotation = { "AimingRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, AimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_SmoothedAimRotation = { "SmoothedAimRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, SmoothedAimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_InputYawOffsetTime = { "InputYawOffsetTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, InputYawOffsetTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, RotationMode), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_HasMovementInput_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms*)Obj)->HasMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_HasMovementInput = { "HasMovementInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_HasMovementInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, MovementInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, DeltaX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_SmoothedAimingRotSpeed = { "SmoothedAimingRotSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, SmoothedAimingRotSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_InputYawOffsetSpeed = { "InputYawOffsetSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, InputYawOffsetSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnSmoothedAimRotation = { "ReturnSmoothedAimRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnSmoothedAimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnAimingAngle = { "ReturnAimingAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnAimingAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnSmoothedAimingAngle = { "ReturnSmoothedAimingAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnSmoothedAimingAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnAimSweepTime = { "ReturnAimSweepTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnAimSweepTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnSpineRotation = { "ReturnSpineRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnSpineRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnInputYawOffsetTime = { "ReturnInputYawOffsetTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnInputYawOffsetTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnLeftYawTime = { "ReturnLeftYawTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnLeftYawTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnRightYawTime = { "ReturnRightYawTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnRightYawTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnForwardYawTime = { "ReturnForwardYawTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms, ReturnForwardYawTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_AimingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_SmoothedAimRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_InputYawOffsetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_HasMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_MovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_SmoothedAimingRotSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_InputYawOffsetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnSmoothedAimRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnAimingAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnSmoothedAimingAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnAimSweepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnSpineRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnInputYawOffsetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnLeftYawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnRightYawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::NewProp_ReturnForwardYawTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "UpdateAimingValues", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::HelpfulFunctionsBPLibrary_eventUpdateAimingValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execUpdateAimingValues)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_STRUCT(FRotator,Z_Param_AimingRotation);
	P_GET_STRUCT(FRotator,Z_Param_SmoothedAimRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InputYawOffsetTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_RotationMode);
	P_GET_UBOOL(Z_Param_HasMovementInput);
	P_GET_STRUCT(FVector,Z_Param_MovementInput);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SmoothedAimingRotSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InputYawOffsetSpeed);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_ReturnSmoothedAimRotation);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ReturnAimingAngle);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ReturnSmoothedAimingAngle);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnAimSweepTime);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_ReturnSpineRotation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnInputYawOffsetTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnLeftYawTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnRightYawTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnForwardYawTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::UpdateAimingValues(Z_Param_WorldContextObject,Z_Param_TargetChar,Z_Param_AimingRotation,Z_Param_SmoothedAimRotation,Z_Param_InputYawOffsetTime,Z_Param_RotationMode,Z_Param_HasMovementInput,Z_Param_MovementInput,Z_Param_DeltaX,Z_Param_SmoothedAimingRotSpeed,Z_Param_InputYawOffsetSpeed,Z_Param_Out_ReturnSmoothedAimRotation,Z_Param_Out_ReturnAimingAngle,Z_Param_Out_ReturnSmoothedAimingAngle,Z_Param_Out_ReturnAimSweepTime,Z_Param_Out_ReturnSpineRotation,Z_Param_Out_ReturnInputYawOffsetTime,Z_Param_Out_ReturnLeftYawTime,Z_Param_Out_ReturnRightYawTime,Z_Param_Out_ReturnForwardYawTime);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function UpdateAimingValues

// Begin Class UHelpfulFunctionsBPLibrary Function UpdateMovementValues
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics
{
	struct HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms
	{
		const UObject* WorldContextObject;
		const UCharacterMovementComponent* CharMove;
		FRotator ActorRot;
		FVelocityBlendCpp VelocityBlend;
		float DeltaX;
		float VelocityBlendInterpSpeed;
		float AnimatedWalkSpeed;
		float AnimatedRunSpeed;
		float AnimatedSprintSpeed;
		float AnimatedCrouchSpeed;
		float Speed;
		UCurveFloat* DiagonalScaleAmountCurve;
		UCurveFloat* StrideBlend_N_Walk;
		UCurveFloat* StrideBlend_N_Run;
		UCurveFloat* StrideBlend_C_Walk;
		FVector Velocity;
		FVector Acceleration;
		FVector2D LeanAmount;
		float GroundedLeanInterpSpeed;
		FName WeightCurveName;
		FName BasePoseCurveName;
		FVelocityBlendCpp ReturnVelocityBlend;
		float ReturnDiagonalScale;
		FVector ReturnRelativeAcc;
		FVector2D ReturnLeanAmount;
		float ReturnWalkRunBlend;
		float ReturnStrideBlend;
		float ReturnStandingPlayRate;
		float ReturnCrouchPlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Update Movement Values (AnimBP)" },
		{ "Keywords", "Character Anim Graph" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharMove_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBlendInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedRunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedSprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedCrouchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DiagonalScaleAmountCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrideBlend_N_Walk;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrideBlend_N_Run;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrideBlend_C_Walk;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeanAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundedLeanInterpSpeed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightCurveName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BasePoseCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnVelocityBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnDiagonalScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnRelativeAcc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLeanAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnWalkRunBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnStrideBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnStandingPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnCrouchPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_CharMove = { "CharMove", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, CharMove), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharMove_MetaData), NewProp_CharMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ActorRot = { "ActorRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ActorRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, VelocityBlend), Z_Construct_UScriptStruct_FVelocityBlendCpp, METADATA_PARAMS(0, nullptr) }; // 2177867100
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, DeltaX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_VelocityBlendInterpSpeed = { "VelocityBlendInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, VelocityBlendInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedWalkSpeed = { "AnimatedWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, AnimatedWalkSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedRunSpeed = { "AnimatedRunSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, AnimatedRunSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedSprintSpeed = { "AnimatedSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, AnimatedSprintSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedCrouchSpeed = { "AnimatedCrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, AnimatedCrouchSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_DiagonalScaleAmountCurve = { "DiagonalScaleAmountCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, DiagonalScaleAmountCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_StrideBlend_N_Walk = { "StrideBlend_N_Walk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, StrideBlend_N_Walk), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_StrideBlend_N_Run = { "StrideBlend_N_Run", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, StrideBlend_N_Run), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_StrideBlend_C_Walk = { "StrideBlend_C_Walk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, StrideBlend_C_Walk), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_LeanAmount = { "LeanAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, LeanAmount), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_GroundedLeanInterpSpeed = { "GroundedLeanInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, GroundedLeanInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_WeightCurveName = { "WeightCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, WeightCurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_BasePoseCurveName = { "BasePoseCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, BasePoseCurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnVelocityBlend = { "ReturnVelocityBlend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnVelocityBlend), Z_Construct_UScriptStruct_FVelocityBlendCpp, METADATA_PARAMS(0, nullptr) }; // 2177867100
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnDiagonalScale = { "ReturnDiagonalScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnDiagonalScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnRelativeAcc = { "ReturnRelativeAcc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnRelativeAcc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnLeanAmount = { "ReturnLeanAmount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnLeanAmount), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnWalkRunBlend = { "ReturnWalkRunBlend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnWalkRunBlend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnStrideBlend = { "ReturnStrideBlend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnStrideBlend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnStandingPlayRate = { "ReturnStandingPlayRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnStandingPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnCrouchPlayRate = { "ReturnCrouchPlayRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms, ReturnCrouchPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_CharMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ActorRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_VelocityBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_VelocityBlendInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedRunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedSprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_AnimatedCrouchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_DiagonalScaleAmountCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_StrideBlend_N_Walk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_StrideBlend_N_Run,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_StrideBlend_C_Walk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_LeanAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_GroundedLeanInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_WeightCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_BasePoseCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnVelocityBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnDiagonalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnRelativeAcc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnLeanAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnWalkRunBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnStrideBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnStandingPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::NewProp_ReturnCrouchPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "UpdateMovementValues", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::HelpfulFunctionsBPLibrary_eventUpdateMovementValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execUpdateMovementValues)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CharMove);
	P_GET_STRUCT(FRotator,Z_Param_ActorRot);
	P_GET_STRUCT(FVelocityBlendCpp,Z_Param_VelocityBlend);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityBlendInterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedWalkSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedRunSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedSprintSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedCrouchSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_GET_OBJECT(UCurveFloat,Z_Param_DiagonalScaleAmountCurve);
	P_GET_OBJECT(UCurveFloat,Z_Param_StrideBlend_N_Walk);
	P_GET_OBJECT(UCurveFloat,Z_Param_StrideBlend_N_Run);
	P_GET_OBJECT(UCurveFloat,Z_Param_StrideBlend_C_Walk);
	P_GET_STRUCT(FVector,Z_Param_Velocity);
	P_GET_STRUCT(FVector,Z_Param_Acceleration);
	P_GET_STRUCT(FVector2D,Z_Param_LeanAmount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GroundedLeanInterpSpeed);
	P_GET_PROPERTY(FNameProperty,Z_Param_WeightCurveName);
	P_GET_PROPERTY(FNameProperty,Z_Param_BasePoseCurveName);
	P_GET_STRUCT_REF(FVelocityBlendCpp,Z_Param_Out_ReturnVelocityBlend);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnDiagonalScale);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnRelativeAcc);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ReturnLeanAmount);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnWalkRunBlend);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnStrideBlend);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnStandingPlayRate);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnCrouchPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::UpdateMovementValues(Z_Param_WorldContextObject,Z_Param_CharMove,Z_Param_ActorRot,Z_Param_VelocityBlend,Z_Param_DeltaX,Z_Param_VelocityBlendInterpSpeed,Z_Param_AnimatedWalkSpeed,Z_Param_AnimatedRunSpeed,Z_Param_AnimatedSprintSpeed,Z_Param_AnimatedCrouchSpeed,Z_Param_Speed,Z_Param_DiagonalScaleAmountCurve,Z_Param_StrideBlend_N_Walk,Z_Param_StrideBlend_N_Run,Z_Param_StrideBlend_C_Walk,Z_Param_Velocity,Z_Param_Acceleration,Z_Param_LeanAmount,Z_Param_GroundedLeanInterpSpeed,Z_Param_WeightCurveName,Z_Param_BasePoseCurveName,Z_Param_Out_ReturnVelocityBlend,Z_Param_Out_ReturnDiagonalScale,Z_Param_Out_ReturnRelativeAcc,Z_Param_Out_ReturnLeanAmount,Z_Param_Out_ReturnWalkRunBlend,Z_Param_Out_ReturnStrideBlend,Z_Param_Out_ReturnStandingPlayRate,Z_Param_Out_ReturnCrouchPlayRate);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function UpdateMovementValues

// Begin Class UHelpfulFunctionsBPLibrary Function UpdateMovementValuesLod
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics
{
	struct HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms
	{
		const UObject* WorldContextObject;
		FVector MovementLowDetail;
		FVector ReturnMovementLowDetail;
		float ReturnStandingPlayRate;
		float ReturnCrouchingPlayRate;
		float Speed;
		float DeltaX;
		float AnimatedWalkSpeed;
		float AnimatedRunSpeed;
		float AnimatedSprintSpeed;
		float AnimatedCrouchSpeed;
		FName WeightCurveName;
		bool ReturnOnlyDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AnimatedWalkSpeed,AnimatedRunSpeed,AnimatedSprintSpeed,AnimatedCrouchSpeed,WeightCurveName" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "CPP_Default_AnimatedCrouchSpeed", "150.000000" },
		{ "CPP_Default_AnimatedRunSpeed", "350.000000" },
		{ "CPP_Default_AnimatedSprintSpeed", "600.000000" },
		{ "CPP_Default_AnimatedWalkSpeed", "150.000000" },
		{ "CPP_Default_ReturnOnlyDirection", "false" },
		{ "CPP_Default_WeightCurveName", "Weight_Gait" },
		{ "DisplayName", "Update Movement Values LOD (AnimBP)" },
		{ "Keywords", "Character Anim Graph" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedWalkSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedRunSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedSprintSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedCrouchSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementLowDetail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnMovementLowDetail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnStandingPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnCrouchingPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedRunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedSprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedCrouchSpeed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightCurveName;
	static void NewProp_ReturnOnlyDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnOnlyDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_MovementLowDetail = { "MovementLowDetail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, MovementLowDetail), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnMovementLowDetail = { "ReturnMovementLowDetail", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, ReturnMovementLowDetail), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnStandingPlayRate = { "ReturnStandingPlayRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, ReturnStandingPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnCrouchingPlayRate = { "ReturnCrouchingPlayRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, ReturnCrouchingPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, DeltaX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedWalkSpeed = { "AnimatedWalkSpeed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, AnimatedWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedWalkSpeed_MetaData), NewProp_AnimatedWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedRunSpeed = { "AnimatedRunSpeed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, AnimatedRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedRunSpeed_MetaData), NewProp_AnimatedRunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedSprintSpeed = { "AnimatedSprintSpeed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, AnimatedSprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedSprintSpeed_MetaData), NewProp_AnimatedSprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedCrouchSpeed = { "AnimatedCrouchSpeed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, AnimatedCrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedCrouchSpeed_MetaData), NewProp_AnimatedCrouchSpeed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_WeightCurveName = { "WeightCurveName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms, WeightCurveName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnOnlyDirection_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms*)Obj)->ReturnOnlyDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnOnlyDirection = { "ReturnOnlyDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnOnlyDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_MovementLowDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnMovementLowDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnStandingPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnCrouchingPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedRunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedSprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_AnimatedCrouchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_WeightCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::NewProp_ReturnOnlyDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "UpdateMovementValuesLod", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::HelpfulFunctionsBPLibrary_eventUpdateMovementValuesLod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execUpdateMovementValuesLod)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_MovementLowDetail);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnMovementLowDetail);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnStandingPlayRate);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnCrouchingPlayRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedWalkSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedRunSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedSprintSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimatedCrouchSpeed);
	P_GET_PROPERTY(FNameProperty,Z_Param_WeightCurveName);
	P_GET_UBOOL(Z_Param_ReturnOnlyDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::UpdateMovementValuesLod(Z_Param_WorldContextObject,Z_Param_MovementLowDetail,Z_Param_Out_ReturnMovementLowDetail,Z_Param_Out_ReturnStandingPlayRate,Z_Param_Out_ReturnCrouchingPlayRate,Z_Param_Speed,Z_Param_DeltaX,Z_Param_AnimatedWalkSpeed,Z_Param_AnimatedRunSpeed,Z_Param_AnimatedSprintSpeed,Z_Param_AnimatedCrouchSpeed,Z_Param_WeightCurveName,Z_Param_ReturnOnlyDirection);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function UpdateMovementValuesLod

// Begin Class UHelpfulFunctionsBPLibrary Function UpdateRotationValues
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics
{
	struct HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms
	{
		const UObject* WorldContextObject;
		int32 ReturnDirection;
		float FYaw;
		float BYaw;
		float LYaw;
		float RYaw;
		int32 Gait;
		int32 RotationMode;
		int32 MovementDirection;
		FRotator AimingRotation;
		FVector Velocity;
		UCurveVector* YawOffset_FB;
		UCurveVector* YawOffset_LR;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "YawOffset_LR,YawOffset_FB" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Character" },
		{ "DisplayName", "Update Rotation Values (AnimBP)" },
		{ "Keywords", "Character Anim Graph" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RYaw;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gait;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YawOffset_FB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YawOffset_LR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_ReturnDirection = { "ReturnDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, ReturnDirection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_FYaw = { "FYaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, FYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_BYaw = { "BYaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, BYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_LYaw = { "LYaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, LYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_RYaw = { "RYaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, RYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, Gait), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, RotationMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, MovementDirection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_AimingRotation = { "AimingRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, AimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_YawOffset_FB = { "YawOffset_FB", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, YawOffset_FB), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_YawOffset_LR = { "YawOffset_LR", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms, YawOffset_LR), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_ReturnDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_FYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_BYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_LYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_RYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_Gait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_MovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_AimingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_YawOffset_FB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::NewProp_YawOffset_LR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "UpdateRotationValues", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::HelpfulFunctionsBPLibrary_eventUpdateRotationValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execUpdateRotationValues)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ReturnDirection);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FYaw);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BYaw);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LYaw);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RYaw);
	P_GET_PROPERTY(FIntProperty,Z_Param_Gait);
	P_GET_PROPERTY(FIntProperty,Z_Param_RotationMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_MovementDirection);
	P_GET_STRUCT(FRotator,Z_Param_AimingRotation);
	P_GET_STRUCT(FVector,Z_Param_Velocity);
	P_GET_OBJECT(UCurveVector,Z_Param_YawOffset_FB);
	P_GET_OBJECT(UCurveVector,Z_Param_YawOffset_LR);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelpfulFunctionsBPLibrary::UpdateRotationValues(Z_Param_WorldContextObject,Z_Param_Out_ReturnDirection,Z_Param_Out_FYaw,Z_Param_Out_BYaw,Z_Param_Out_LYaw,Z_Param_Out_RYaw,Z_Param_Gait,Z_Param_RotationMode,Z_Param_MovementDirection,Z_Param_AimingRotation,Z_Param_Velocity,Z_Param_YawOffset_FB,Z_Param_YawOffset_LR);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function UpdateRotationValues

// Begin Class UHelpfulFunctionsBPLibrary Function VInterpToWithDelay
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics
{
	struct HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms
	{
		FVector Current;
		FVector Target;
		float DeltaTime;
		float InterpSpeed;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "JakubW_FunctionsLibrary| Interpolation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interpolation value by using Sigmoid curve\n" },
#endif
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolation value by using Sigmoid curve" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "VInterpToWithDelay", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::HelpfulFunctionsBPLibrary_eventVInterpToWithDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execVInterpToWithDelay)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Current);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UHelpfulFunctionsBPLibrary::VInterpToWithDelay(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function VInterpToWithDelay

// Begin Class UHelpfulFunctionsBPLibrary Function WalkableLineTrace
struct Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics
{
	struct HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms
	{
		const UObject* WorldContextObject;
		FVector Start;
		FVector End;
		TEnumAsByte<ETraceTypeQuery> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		int32 DebugIndex;
		FHitResult OutHit;
		bool bIgnoreSelf;
		FLinearColor TraceColor;
		FLinearColor TraceHitColor;
		float DrawTime;
		int32 MaxIteracion;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceColor,TraceHitColor,DrawTime,MaxIteracion" },
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "Category", "JakubW_FunctionsLibrary| Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple Line Trace Function With Loop\n" },
#endif
		{ "CPP_Default_DrawTime", "0.500000" },
		{ "CPP_Default_MaxIteracion", "6" },
		{ "CPP_Default_TraceColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TraceHitColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "DisplayName", "Find Gap By Line Trace" },
		{ "Keywords", "Trace Collision" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Line Trace Function With Loop" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIteracion;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, DrawTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_MaxIteracion = { "MaxIteracion", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms, MaxIteracion), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms), &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_TraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_TraceHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_DrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_MaxIteracion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelpfulFunctionsBPLibrary, nullptr, "WalkableLineTrace", nullptr, nullptr, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::HelpfulFunctionsBPLibrary_eventWalkableLineTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelpfulFunctionsBPLibrary::execWalkableLineTrace)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxIteracion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHelpfulFunctionsBPLibrary::WalkableLineTrace(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_DebugIndex,Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime,Z_Param_MaxIteracion);
	P_NATIVE_END;
}
// End Class UHelpfulFunctionsBPLibrary Function WalkableLineTrace

// Begin Class UHelpfulFunctionsBPLibrary
void UHelpfulFunctionsBPLibrary::StaticRegisterNativesUHelpfulFunctionsBPLibrary()
{
	UClass* Class = UHelpfulFunctionsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AngleInRange", &UHelpfulFunctionsBPLibrary::execAngleInRange },
		{ "AnimSlotIsActivated", &UHelpfulFunctionsBPLibrary::execAnimSlotIsActivated },
		{ "AnimSlotIsActivatedByTaget", &UHelpfulFunctionsBPLibrary::execAnimSlotIsActivatedByTaget },
		{ "Autocorrelation", &UHelpfulFunctionsBPLibrary::execAutocorrelation },
		{ "BouceOutInterpFast", &UHelpfulFunctionsBPLibrary::execBouceOutInterpFast },
		{ "BounceOutTimeFunction", &UHelpfulFunctionsBPLibrary::execBounceOutTimeFunction },
		{ "CalcFootsOffset", &UHelpfulFunctionsBPLibrary::execCalcFootsOffset },
		{ "CalculateDiagonalScale", &UHelpfulFunctionsBPLibrary::execCalculateDiagonalScale },
		{ "CalculateQuadrant", &UHelpfulFunctionsBPLibrary::execCalculateQuadrant },
		{ "CalculateRelativeAcceleration", &UHelpfulFunctionsBPLibrary::execCalculateRelativeAcceleration },
		{ "CalcVelocityBlendFast", &UHelpfulFunctionsBPLibrary::execCalcVelocityBlendFast },
		{ "CapsuleHaveRoomWithIgnore", &UHelpfulFunctionsBPLibrary::execCapsuleHaveRoomWithIgnore },
		{ "CapsuleHaveRoomWithIgnoreTransform", &UHelpfulFunctionsBPLibrary::execCapsuleHaveRoomWithIgnoreTransform },
		{ "CheckFloorTypeC", &UHelpfulFunctionsBPLibrary::execCheckFloorTypeC },
		{ "ClassToActorsArray", &UHelpfulFunctionsBPLibrary::execClassToActorsArray },
		{ "ClassToIgnore", &UHelpfulFunctionsBPLibrary::execClassToIgnore },
		{ "ClimbingFootIK", &UHelpfulFunctionsBPLibrary::execClimbingFootIK },
		{ "ClimbingLedgeValidP1", &UHelpfulFunctionsBPLibrary::execClimbingLedgeValidP1 },
		{ "ConvertLocalToWorldFastMatrix", &UHelpfulFunctionsBPLibrary::execConvertLocalToWorldFastMatrix },
		{ "ConvertWorldToLocalFastMatrix", &UHelpfulFunctionsBPLibrary::execConvertWorldToLocalFastMatrix },
		{ "CreateComponentAndAddToActor", &UHelpfulFunctionsBPLibrary::execCreateComponentAndAddToActor },
		{ "DistancePointToLine", &UHelpfulFunctionsBPLibrary::execDistancePointToLine },
		{ "ElasticOutInterpFast", &UHelpfulFunctionsBPLibrary::execElasticOutInterpFast },
		{ "ExecuteInterfaceInput", &UHelpfulFunctionsBPLibrary::execExecuteInterfaceInput },
		{ "FFT", &UHelpfulFunctionsBPLibrary::execFFT },
		{ "FindBaseJumpAwayPosition", &UHelpfulFunctionsBPLibrary::execFindBaseJumpAwayPosition },
		{ "FindGapBySphereTrace", &UHelpfulFunctionsBPLibrary::execFindGapBySphereTrace },
		{ "FindLedgePoint", &UHelpfulFunctionsBPLibrary::execFindLedgePoint },
		{ "FindLedgePointStructure", &UHelpfulFunctionsBPLibrary::execFindLedgePointStructure },
		{ "FindNearestCollisionByCylinder", &UHelpfulFunctionsBPLibrary::execFindNearestCollisionByCylinder },
		{ "FindNearPointToWallSurface", &UHelpfulFunctionsBPLibrary::execFindNearPointToWallSurface },
		{ "FixMovePointWhenIs", &UHelpfulFunctionsBPLibrary::execFixMovePointWhenIs },
		{ "ForceDestroyComponent", &UHelpfulFunctionsBPLibrary::execForceDestroyComponent },
		{ "GetAngleBetween", &UHelpfulFunctionsBPLibrary::execGetAngleBetween },
		{ "GetAnimSequenceFromMontage", &UHelpfulFunctionsBPLibrary::execGetAnimSequenceFromMontage },
		{ "GetBonePositionAtTimeFromSeq", &UHelpfulFunctionsBPLibrary::execGetBonePositionAtTimeFromSeq },
		{ "GetClampedCurveValue", &UHelpfulFunctionsBPLibrary::execGetClampedCurveValue },
		{ "GetCurveValueAtTime", &UHelpfulFunctionsBPLibrary::execGetCurveValueAtTime },
		{ "GetIsEnemyState", &UHelpfulFunctionsBPLibrary::execGetIsEnemyState },
		{ "GetNearFromActorsArray", &UHelpfulFunctionsBPLibrary::execGetNearFromActorsArray },
		{ "GetPlayerCapsuleStartLocation", &UHelpfulFunctionsBPLibrary::execGetPlayerCapsuleStartLocation },
		{ "GetRootMotionValueAtTime", &UHelpfulFunctionsBPLibrary::execGetRootMotionValueAtTime },
		{ "GetSafeFloatValue", &UHelpfulFunctionsBPLibrary::execGetSafeFloatValue },
		{ "HelpfulFunctionsSampleFunction", &UHelpfulFunctionsBPLibrary::execHelpfulFunctionsSampleFunction },
		{ "InterpolateBetweenPoints", &UHelpfulFunctionsBPLibrary::execInterpolateBetweenPoints },
		{ "IsNotHidingInFoliage", &UHelpfulFunctionsBPLibrary::execIsNotHidingInFoliage },
		{ "NormalToVector", &UHelpfulFunctionsBPLibrary::execNormalToVector },
		{ "RayCastSphereComplexRoomCheckFast", &UHelpfulFunctionsBPLibrary::execRayCastSphereComplexRoomCheckFast },
		{ "RayCastSphereRoomCheckFast", &UHelpfulFunctionsBPLibrary::execRayCastSphereRoomCheckFast },
		{ "RotatedCapsuleTraceSingle", &UHelpfulFunctionsBPLibrary::execRotatedCapsuleTraceSingle },
		{ "SlerpFast", &UHelpfulFunctionsBPLibrary::execSlerpFast },
		{ "SlerpToFast", &UHelpfulFunctionsBPLibrary::execSlerpToFast },
		{ "SmoothCharacterRotation", &UHelpfulFunctionsBPLibrary::execSmoothCharacterRotation },
		{ "SplineLerpOnPathPoints", &UHelpfulFunctionsBPLibrary::execSplineLerpOnPathPoints },
		{ "TryFindLedgeLine", &UHelpfulFunctionsBPLibrary::execTryFindLedgeLine },
		{ "TryMarkPackageDirty", &UHelpfulFunctionsBPLibrary::execTryMarkPackageDirty },
		{ "UpdateAimingValues", &UHelpfulFunctionsBPLibrary::execUpdateAimingValues },
		{ "UpdateMovementValues", &UHelpfulFunctionsBPLibrary::execUpdateMovementValues },
		{ "UpdateMovementValuesLod", &UHelpfulFunctionsBPLibrary::execUpdateMovementValuesLod },
		{ "UpdateRotationValues", &UHelpfulFunctionsBPLibrary::execUpdateRotationValues },
		{ "VInterpToWithDelay", &UHelpfulFunctionsBPLibrary::execVInterpToWithDelay },
		{ "WalkableLineTrace", &UHelpfulFunctionsBPLibrary::execWalkableLineTrace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHelpfulFunctionsBPLibrary);
UClass* Z_Construct_UClass_UHelpfulFunctionsBPLibrary_NoRegister()
{
	return UHelpfulFunctionsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HelpfulFunctionsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/HelpfulFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AngleInRange, "AngleInRange" }, // 2737358166
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivated, "AnimSlotIsActivated" }, // 3308385693
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_AnimSlotIsActivatedByTaget, "AnimSlotIsActivatedByTaget" }, // 3543603988
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_Autocorrelation, "Autocorrelation" }, // 2563746566
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BouceOutInterpFast, "BouceOutInterpFast" }, // 2029898592
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_BounceOutTimeFunction, "BounceOutTimeFunction" }, // 1991702708
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcFootsOffset, "CalcFootsOffset" }, // 3513955745
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateDiagonalScale, "CalculateDiagonalScale" }, // 3884875406
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateQuadrant, "CalculateQuadrant" }, // 816199227
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalculateRelativeAcceleration, "CalculateRelativeAcceleration" }, // 2821739502
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CalcVelocityBlendFast, "CalcVelocityBlendFast" }, // 3460453065
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnore, "CapsuleHaveRoomWithIgnore" }, // 3830430065
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CapsuleHaveRoomWithIgnoreTransform, "CapsuleHaveRoomWithIgnoreTransform" }, // 667406552
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CheckFloorTypeC, "CheckFloorTypeC" }, // 2620328653
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToActorsArray, "ClassToActorsArray" }, // 1409414607
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClassToIgnore, "ClassToIgnore" }, // 276053307
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingFootIK, "ClimbingFootIK" }, // 103988253
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ClimbingLedgeValidP1, "ClimbingLedgeValidP1" }, // 2907821783
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertLocalToWorldFastMatrix, "ConvertLocalToWorldFastMatrix" }, // 1702822467
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ConvertWorldToLocalFastMatrix, "ConvertWorldToLocalFastMatrix" }, // 3806778927
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_CreateComponentAndAddToActor, "CreateComponentAndAddToActor" }, // 1445501213
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_DistancePointToLine, "DistancePointToLine" }, // 466774162
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ElasticOutInterpFast, "ElasticOutInterpFast" }, // 971458206
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ExecuteInterfaceInput, "ExecuteInterfaceInput" }, // 1518001634
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FFT, "FFT" }, // 194697660
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindBaseJumpAwayPosition, "FindBaseJumpAwayPosition" }, // 1500057058
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindGapBySphereTrace, "FindGapBySphereTrace" }, // 1443936066
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePoint, "FindLedgePoint" }, // 977504671
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindLedgePointStructure, "FindLedgePointStructure" }, // 2790343573
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearestCollisionByCylinder, "FindNearestCollisionByCylinder" }, // 2116600914
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FindNearPointToWallSurface, "FindNearPointToWallSurface" }, // 256155102
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_FixMovePointWhenIs, "FixMovePointWhenIs" }, // 3619593302
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_ForceDestroyComponent, "ForceDestroyComponent" }, // 1833541303
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAngleBetween, "GetAngleBetween" }, // 1418057286
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetAnimSequenceFromMontage, "GetAnimSequenceFromMontage" }, // 3550097264
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetBonePositionAtTimeFromSeq, "GetBonePositionAtTimeFromSeq" }, // 1285058995
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetClampedCurveValue, "GetClampedCurveValue" }, // 1745566486
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetCurveValueAtTime, "GetCurveValueAtTime" }, // 1162335369
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetIsEnemyState, "GetIsEnemyState" }, // 949340702
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetNearFromActorsArray, "GetNearFromActorsArray" }, // 3039188183
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetPlayerCapsuleStartLocation, "GetPlayerCapsuleStartLocation" }, // 442944544
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetRootMotionValueAtTime, "GetRootMotionValueAtTime" }, // 2513427731
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_GetSafeFloatValue, "GetSafeFloatValue" }, // 3921870517
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_HelpfulFunctionsSampleFunction, "HelpfulFunctionsSampleFunction" }, // 3228104825
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_InterpolateBetweenPoints, "InterpolateBetweenPoints" }, // 3926941538
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_IsNotHidingInFoliage, "IsNotHidingInFoliage" }, // 3386736467
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_NormalToVector, "NormalToVector" }, // 4168179614
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereComplexRoomCheckFast, "RayCastSphereComplexRoomCheckFast" }, // 1929783206
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RayCastSphereRoomCheckFast, "RayCastSphereRoomCheckFast" }, // 52971588
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_RotatedCapsuleTraceSingle, "RotatedCapsuleTraceSingle" }, // 2555991439
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpFast, "SlerpFast" }, // 63020623
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SlerpToFast, "SlerpToFast" }, // 4082557732
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SmoothCharacterRotation, "SmoothCharacterRotation" }, // 353690538
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_SplineLerpOnPathPoints, "SplineLerpOnPathPoints" }, // 1779045096
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryFindLedgeLine, "TryFindLedgeLine" }, // 3714173719
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_TryMarkPackageDirty, "TryMarkPackageDirty" }, // 1610045413
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateAimingValues, "UpdateAimingValues" }, // 2891855188
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValues, "UpdateMovementValues" }, // 2485924631
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateMovementValuesLod, "UpdateMovementValuesLod" }, // 3024559021
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_UpdateRotationValues, "UpdateRotationValues" }, // 2983940909
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_VInterpToWithDelay, "VInterpToWithDelay" }, // 3880025086
		{ &Z_Construct_UFunction_UHelpfulFunctionsBPLibrary_WalkableLineTrace, "WalkableLineTrace" }, // 566896284
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHelpfulFunctionsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics::ClassParams = {
	&UHelpfulFunctionsBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHelpfulFunctionsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UHelpfulFunctionsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHelpfulFunctionsBPLibrary.OuterSingleton, Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHelpfulFunctionsBPLibrary.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UHelpfulFunctionsBPLibrary>()
{
	return UHelpfulFunctionsBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHelpfulFunctionsBPLibrary);
UHelpfulFunctionsBPLibrary::~UHelpfulFunctionsBPLibrary() {}
// End Class UHelpfulFunctionsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimBaseEvalType_StaticEnum, TEXT("EAnimBaseEvalType"), &Z_Registration_Info_UEnum_EAnimBaseEvalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3269369114U) },
		{ CALS_IntputType_StaticEnum, TEXT("CALS_IntputType"), &Z_Registration_Info_UEnum_CALS_IntputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 580085830U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSingleClimbPoint::StaticStruct, Z_Construct_UScriptStruct_FSingleClimbPoint_Statics::NewStructOps, TEXT("SingleClimbPoint"), &Z_Registration_Info_UScriptStruct_SingleClimbPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSingleClimbPoint), 2771375807U) },
		{ FVelocityBlendCpp::StaticStruct, Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics::NewStructOps, TEXT("VelocityBlendCpp"), &Z_Registration_Info_UScriptStruct_VelocityBlendCpp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVelocityBlendCpp), 2177867100U) },
		{ FAnimPoseEvaluationConfig::StaticStruct, Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics::NewStructOps, TEXT("AnimPoseEvaluationConfig"), &Z_Registration_Info_UScriptStruct_AnimPoseEvaluationConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPoseEvaluationConfig), 2355769719U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHelpfulFunctionsBPLibrary, UHelpfulFunctionsBPLibrary::StaticClass, TEXT("UHelpfulFunctionsBPLibrary"), &Z_Registration_Info_UClass_UHelpfulFunctionsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHelpfulFunctionsBPLibrary), 3974311574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_2120533780(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

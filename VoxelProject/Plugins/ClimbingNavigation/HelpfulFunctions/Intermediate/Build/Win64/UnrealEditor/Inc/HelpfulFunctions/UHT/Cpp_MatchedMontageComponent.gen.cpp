// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_MatchedMontageComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_MatchedMontageComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageManyPoints();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageTwoPoints();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FMMEndingEvent();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin ScriptStruct FMatchedMontageTwoPoints
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints;
class UScriptStruct* FMatchedMontageTwoPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("MatchedMontageTwoPoints"));
	}
	return Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FMatchedMontageTwoPoints>()
{
	return FMatchedMontageTwoPoints::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageAsset_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeTimeToAnimLength_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMontageAt_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAllMontages_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvertTransformsToWorld_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTransform_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseMotionCurvesFromAnimation_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapCurves_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTimelineAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineAlphaEndConfig_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishWhenAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseInterFor180Rot_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection180_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationInterpType_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAsset;
	static void NewProp_NormalizeTimeToAnimLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizeTimeToAnimLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMontageAt;
	static void NewProp_StopAllMontages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopAllMontages;
	static void NewProp_ConvertTransformsToWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConvertTransformsToWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndTransform;
	static void NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMotionCurvesFromAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
	static void NewProp_RemapCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemapCurves;
	static void NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyTimelineAlphaAtEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimelineAlphaEndConfig;
	static void NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FinishWhenAlphaAtEnd;
	static void NewProp_UseInterFor180Rot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInterFor180Rot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDirection180;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomRotationInterpType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchedMontageTwoPoints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageAsset_MetaData), NewProp_MontageAsset_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->NormalizeTimeToAnimLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength = { "NormalizeTimeToAnimLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizeTimeToAnimLength_MetaData), NewProp_NormalizeTimeToAnimLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, TimelineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineLength_MetaData), NewProp_TimelineLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartMontageAt = { "StartMontageAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, StartMontageAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMontageAt_MetaData), NewProp_StartMontageAt_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->StopAllMontages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages = { "StopAllMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAllMontages_MetaData), NewProp_StopAllMontages_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->ConvertTransformsToWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld = { "ConvertTransformsToWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvertTransformsToWorld_MetaData), NewProp_ConvertTransformsToWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, StartTransform), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTransform_MetaData), NewProp_StartTransform_MetaData) }; // 954340455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_EndTransform = { "EndTransform", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, EndTransform), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTransform_MetaData), NewProp_EndTransform_MetaData) }; // 954340455
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->UseMotionCurvesFromAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation = { "UseMotionCurvesFromAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseMotionCurvesFromAnimation_MetaData), NewProp_UseMotionCurvesFromAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationCurve_MetaData), NewProp_LocationCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, RotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCurve_MetaData), NewProp_RotationCurve_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->RemapCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves = { "RemapCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapCurves_MetaData), NewProp_RemapCurves_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->ApplyTimelineAlphaAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd = { "ApplyTimelineAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyTimelineAlphaAtEnd_MetaData), NewProp_ApplyTimelineAlphaAtEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineAlphaEndConfig = { "TimelineAlphaEndConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, TimelineAlphaEndConfig), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineAlphaEndConfig_MetaData), NewProp_TimelineAlphaEndConfig_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->FinishWhenAlphaAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd = { "FinishWhenAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishWhenAlphaAtEnd_MetaData), NewProp_FinishWhenAlphaAtEnd_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot_SetBit(void* Obj)
{
	((FMatchedMontageTwoPoints*)Obj)->UseInterFor180Rot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot = { "UseInterFor180Rot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseInterFor180Rot_MetaData), NewProp_UseInterFor180Rot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationDirection180 = { "RotationDirection180", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, RotationDirection180), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationDirection180_MetaData), NewProp_RotationDirection180_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_CustomRotationInterpType = { "CustomRotationInterpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageTwoPoints, CustomRotationInterpType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRotationInterpType_MetaData), NewProp_CustomRotationInterpType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_MontageAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartMontageAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_EndTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_LocationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineAlphaEndConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationDirection180,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_CustomRotationInterpType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"MatchedMontageTwoPoints",
	Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::PropPointers),
	sizeof(FMatchedMontageTwoPoints),
	alignof(FMatchedMontageTwoPoints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageTwoPoints()
{
	if (!Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.InnerSingleton, Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.InnerSingleton;
}
// End ScriptStruct FMatchedMontageTwoPoints

// Begin ScriptStruct FMatchedMontageManyPoints
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints;
class UScriptStruct* FMatchedMontageManyPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchedMontageManyPoints, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("MatchedMontageManyPoints"));
	}
	return Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FMatchedMontageManyPoints>()
{
	return FMatchedMontageManyPoints::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMontageAt_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAllMontages_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvertTransformsToWorld_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseMotionCurvesFromAnimation_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapCurves_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTimelineAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutBlendingDuration_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishWhenAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseInterFor180Rot_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection180_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationInterpType_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMontageAt;
	static void NewProp_StopAllMontages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopAllMontages;
	static void NewProp_ConvertTransformsToWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConvertTransformsToWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
	static void NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMotionCurvesFromAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
	static void NewProp_RemapCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemapCurves;
	static void NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyTimelineAlphaAtEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBlendingDuration;
	static void NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FinishWhenAlphaAtEnd;
	static void NewProp_UseInterFor180Rot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInterFor180Rot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDirection180;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomRotationInterpType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchedMontageManyPoints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, TimelineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineLength_MetaData), NewProp_TimelineLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StartMontageAt = { "StartMontageAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, StartMontageAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMontageAt_MetaData), NewProp_StartMontageAt_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages_SetBit(void* Obj)
{
	((FMatchedMontageManyPoints*)Obj)->StopAllMontages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages = { "StopAllMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAllMontages_MetaData), NewProp_StopAllMontages_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit(void* Obj)
{
	((FMatchedMontageManyPoints*)Obj)->ConvertTransformsToWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld = { "ConvertTransformsToWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvertTransformsToWorld_MetaData), NewProp_ConvertTransformsToWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 954340455
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoints_MetaData), NewProp_TargetPoints_MetaData) }; // 954340455
void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj)
{
	((FMatchedMontageManyPoints*)Obj)->UseMotionCurvesFromAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation = { "UseMotionCurvesFromAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseMotionCurvesFromAnimation_MetaData), NewProp_UseMotionCurvesFromAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationCurve_MetaData), NewProp_LocationCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, RotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCurve_MetaData), NewProp_RotationCurve_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves_SetBit(void* Obj)
{
	((FMatchedMontageManyPoints*)Obj)->RemapCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves = { "RemapCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapCurves_MetaData), NewProp_RemapCurves_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj)
{
	((FMatchedMontageManyPoints*)Obj)->ApplyTimelineAlphaAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd = { "ApplyTimelineAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyTimelineAlphaAtEnd_MetaData), NewProp_ApplyTimelineAlphaAtEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_OutBlendingDuration = { "OutBlendingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, OutBlendingDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutBlendingDuration_MetaData), NewProp_OutBlendingDuration_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj)
{
	((FMatchedMontageManyPoints*)Obj)->FinishWhenAlphaAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd = { "FinishWhenAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishWhenAlphaAtEnd_MetaData), NewProp_FinishWhenAlphaAtEnd_MetaData) };
void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot_SetBit(void* Obj)
{
	((FMatchedMontageManyPoints*)Obj)->UseInterFor180Rot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot = { "UseInterFor180Rot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseInterFor180Rot_MetaData), NewProp_UseInterFor180Rot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationDirection180 = { "RotationDirection180", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, RotationDirection180), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationDirection180_MetaData), NewProp_RotationDirection180_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_CustomRotationInterpType = { "CustomRotationInterpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatchedMontageManyPoints, CustomRotationInterpType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRotationInterpType_MetaData), NewProp_CustomRotationInterpType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TimelineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StartMontageAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_LocationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_OutBlendingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationDirection180,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_CustomRotationInterpType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"MatchedMontageManyPoints",
	Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::PropPointers),
	sizeof(FMatchedMontageManyPoints),
	alignof(FMatchedMontageManyPoints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageManyPoints()
{
	if (!Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.InnerSingleton, Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.InnerSingleton;
}
// End ScriptStruct FMatchedMontageManyPoints

// Begin ScriptStruct FMMEndingEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMEndingEvent;
class UScriptStruct* FMMEndingEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMEndingEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMEndingEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMEndingEvent, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("MMEndingEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MMEndingEvent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FMMEndingEvent>()
{
	return FMMEndingEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMEndingEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetObject_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMEndingEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMEndingEvent, TargetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetObject_MetaData), NewProp_TargetObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMEndingEvent, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMEndingEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_TargetObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_EventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMEndingEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"MMEndingEvent",
	Z_Construct_UScriptStruct_FMMEndingEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::PropPointers),
	sizeof(FMMEndingEvent),
	alignof(FMMEndingEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMEndingEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMEndingEvent()
{
	if (!Z_Registration_Info_UScriptStruct_MMEndingEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMEndingEvent.InnerSingleton, Z_Construct_UScriptStruct_FMMEndingEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMEndingEvent.InnerSingleton;
}
// End ScriptStruct FMMEndingEvent

// Begin Class UCpp_MatchedMontageComponent Function ExtractedInterpolationC
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics
{
	struct Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms
	{
		FTransform A;
		FTransform B;
		float VX;
		float VY;
		float VZ;
		float ROT;
		float Alpha;
		float Direction180;
		bool UseInterpFor180Rot;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Construction" },
		{ "CPP_Default_Alpha", "0.000000" },
		{ "CPP_Default_Direction180", "-90.000000" },
		{ "CPP_Default_ROT", "0.000000" },
		{ "CPP_Default_UseInterpFor180Rot", "false" },
		{ "CPP_Default_VX", "0.000000" },
		{ "CPP_Default_VY", "0.000000" },
		{ "CPP_Default_VZ", "0.000000" },
		{ "DisplayName", "Extracted Transfororm Interpolation" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ROT;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction180;
	static void NewProp_UseInterpFor180Rot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInterpFor180Rot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VX = { "VX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, VX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VY = { "VY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, VY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VZ = { "VZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, VZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ROT = { "ROT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, ROT), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Direction180 = { "Direction180", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, Direction180), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot_SetBit(void* Obj)
{
	((Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms*)Obj)->UseInterpFor180Rot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot = { "UseInterpFor180Rot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms), &Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ROT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Direction180,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "ExtractedInterpolationC", nullptr, nullptr, Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execExtractedInterpolationC)
{
	P_GET_STRUCT(FTransform,Z_Param_A);
	P_GET_STRUCT(FTransform,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VZ);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ROT);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Direction180);
	P_GET_UBOOL(Z_Param_UseInterpFor180Rot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->ExtractedInterpolationC(Z_Param_A,Z_Param_B,Z_Param_VX,Z_Param_VY,Z_Param_VZ,Z_Param_ROT,Z_Param_Alpha,Z_Param_Direction180,Z_Param_UseInterpFor180Rot);
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function ExtractedInterpolationC

// Begin Class UCpp_MatchedMontageComponent Function FinishMatchedMontageC
static const FName NAME_UCpp_MatchedMontageComponent_FinishMatchedMontageC = FName(TEXT("FinishMatchedMontageC"));
void UCpp_MatchedMontageComponent::FinishMatchedMontageC()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_MatchedMontageComponent_FinishMatchedMontageC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		FinishMatchedMontageC_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|End" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Can Override In Blueprint\n" },
#endif
		{ "DisplayName", "Finish Timeline And Seq" },
		{ "Keywords", "Matched Finish" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can Override In Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "FinishMatchedMontageC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execFinishMatchedMontageC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishMatchedMontageC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function FinishMatchedMontageC

// Begin Class UCpp_MatchedMontageComponent Function GetAnimCurveC
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics
{
	struct Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms
	{
		float Value;
		FName CurveName;
		bool WithLock;
		float LockVariable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Construction" },
		{ "DisplayName", "Get Anim Curve" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static void NewProp_WithLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WithLock;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockVariable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock_SetBit(void* Obj)
{
	((Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms*)Obj)->WithLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock = { "WithLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms), &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_LockVariable = { "LockVariable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms, LockVariable), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms), &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_LockVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "GetAnimCurveC", nullptr, nullptr, Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execGetAnimCurveC)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
	P_GET_UBOOL(Z_Param_WithLock);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LockVariable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAnimCurveC(Z_Param_Out_Value,Z_Param_CurveName,Z_Param_WithLock,Z_Param_LockVariable);
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function GetAnimCurveC

// Begin Class UCpp_MatchedMontageComponent Function GetCustomCurveValueC
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics
{
	struct Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms
	{
		float InTime;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Construction" },
		{ "CPP_Default_InTime", "0.000000" },
		{ "DisplayName", "Get Custom Curve Value" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "GetCustomCurveValueC", nullptr, nullptr, Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execGetCustomCurveValueC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCustomCurveValueC(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function GetCustomCurveValueC

// Begin Class UCpp_MatchedMontageComponent Function MatchingMotionNormalized
struct Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms
{
	float CurrentTime;
};
static const FName NAME_UCpp_MatchedMontageComponent_MatchingMotionNormalized = FName(TEXT("MatchingMotionNormalized"));
void UCpp_MatchedMontageComponent::MatchingMotionNormalized(float CurrentTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_MatchedMontageComponent_MatchingMotionNormalized);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms Parms;
		Parms.CurrentTime=CurrentTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		MatchingMotionNormalized_Implementation(CurrentTime);
	}
}
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Update" },
		{ "DisplayName", "Matching Motion Normalized" },
		{ "Keywords", "Matched Update" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::NewProp_CurrentTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "MatchingMotionNormalized", nullptr, nullptr, Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::PropPointers), sizeof(Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execMatchingMotionNormalized)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MatchingMotionNormalized_Implementation(Z_Param_CurrentTime);
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function MatchingMotionNormalized

// Begin Class UCpp_MatchedMontageComponent Function MatchingMultiplePointsC
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Update" },
		{ "DisplayName", "Matching Multiple Points" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "MatchingMultiplePointsC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execMatchingMultiplePointsC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MatchingMultiplePointsC();
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function MatchingMultiplePointsC

// Begin Class UCpp_MatchedMontageComponent Function MatchingSinglePointsC
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Update" },
		{ "DisplayName", "Matching Single Points" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "MatchingSinglePointsC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execMatchingSinglePointsC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MatchingSinglePointsC();
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function MatchingSinglePointsC

// Begin Class UCpp_MatchedMontageComponent Function PlayMatchedMontageManyPointsC
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics
{
	struct Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms
	{
		UAnimMontage* MontageAsset;
		FMatchedMontageManyPoints ConfigStruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Prepare" },
		{ "DisplayName", "Play Matched Montage (ManyPoints)" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_ConfigStruct = { "ConfigStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms, ConfigStruct), Z_Construct_UScriptStruct_FMatchedMontageManyPoints, METADATA_PARAMS(0, nullptr) }; // 191558790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_MontageAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_ConfigStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "PlayMatchedMontageManyPointsC", nullptr, nullptr, Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execPlayMatchedMontageManyPointsC)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageAsset);
	P_GET_STRUCT(FMatchedMontageManyPoints,Z_Param_ConfigStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayMatchedMontageManyPointsC(Z_Param_MontageAsset,Z_Param_ConfigStruct);
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function PlayMatchedMontageManyPointsC

// Begin Class UCpp_MatchedMontageComponent Function PlayMatchedMontageTwoPointsC
struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics
{
	struct Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms
	{
		UAnimMontage* MontageAsset;
		FMatchedMontageTwoPoints ConfigStruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Matched|Prepare" },
		{ "DisplayName", "Play Matched Montage (TwoPoints)" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_ConfigStruct = { "ConfigStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms, ConfigStruct), Z_Construct_UScriptStruct_FMatchedMontageTwoPoints, METADATA_PARAMS(0, nullptr) }; // 2407701925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_MontageAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_ConfigStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "PlayMatchedMontageTwoPointsC", nullptr, nullptr, Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execPlayMatchedMontageTwoPointsC)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageAsset);
	P_GET_STRUCT(FMatchedMontageTwoPoints,Z_Param_ConfigStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayMatchedMontageTwoPointsC(Z_Param_MontageAsset,Z_Param_ConfigStruct);
	P_NATIVE_END;
}
// End Class UCpp_MatchedMontageComponent Function PlayMatchedMontageTwoPointsC

// Begin Class UCpp_MatchedMontageComponent
void UCpp_MatchedMontageComponent::StaticRegisterNativesUCpp_MatchedMontageComponent()
{
	UClass* Class = UCpp_MatchedMontageComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExtractedInterpolationC", &UCpp_MatchedMontageComponent::execExtractedInterpolationC },
		{ "FinishMatchedMontageC", &UCpp_MatchedMontageComponent::execFinishMatchedMontageC },
		{ "GetAnimCurveC", &UCpp_MatchedMontageComponent::execGetAnimCurveC },
		{ "GetCustomCurveValueC", &UCpp_MatchedMontageComponent::execGetCustomCurveValueC },
		{ "MatchingMotionNormalized", &UCpp_MatchedMontageComponent::execMatchingMotionNormalized },
		{ "MatchingMultiplePointsC", &UCpp_MatchedMontageComponent::execMatchingMultiplePointsC },
		{ "MatchingSinglePointsC", &UCpp_MatchedMontageComponent::execMatchingSinglePointsC },
		{ "PlayMatchedMontageManyPointsC", &UCpp_MatchedMontageComponent::execPlayMatchedMontageManyPointsC },
		{ "PlayMatchedMontageTwoPointsC", &UCpp_MatchedMontageComponent::execPlayMatchedMontageTwoPointsC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_MatchedMontageComponent);
UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent_NoRegister()
{
	return UCpp_MatchedMontageComponent::StaticClass();
}
struct Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_MatchedMontageComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionCurvesNameC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "MatchedMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Exposed Variables (Visible In Blueprint)\n" },
#endif
		{ "DisplayName", "MotionCurvesName" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposed Variables (Visible In Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetZeroToVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "MatchedMontage" },
		{ "DisplayName", "SetZeroToVelocity" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimAlphaCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "MatchedMontage" },
		{ "DisplayName", "AnimAlphaCurveName" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MotionCurvesNameC_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MotionCurvesNameC;
	static void NewProp_SetZeroToVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetZeroToVelocity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimAlphaCurveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC, "ExtractedInterpolationC" }, // 4153242005
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC, "FinishMatchedMontageC" }, // 2754705939
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC, "GetAnimCurveC" }, // 1162506247
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC, "GetCustomCurveValueC" }, // 3507225437
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized, "MatchingMotionNormalized" }, // 3296785810
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC, "MatchingMultiplePointsC" }, // 887426734
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC, "MatchingSinglePointsC" }, // 3404461243
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC, "PlayMatchedMontageManyPointsC" }, // 3166927322
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC, "PlayMatchedMontageTwoPointsC" }, // 509760077
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_MatchedMontageComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC_Inner = { "MotionCurvesNameC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC = { "MotionCurvesNameC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_MatchedMontageComponent, MotionCurvesNameC), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionCurvesNameC_MetaData), NewProp_MotionCurvesNameC_MetaData) };
void Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity_SetBit(void* Obj)
{
	((UCpp_MatchedMontageComponent*)Obj)->SetZeroToVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity = { "SetZeroToVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_MatchedMontageComponent), &Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetZeroToVelocity_MetaData), NewProp_SetZeroToVelocity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_AnimAlphaCurveName = { "AnimAlphaCurveName", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_MatchedMontageComponent, AnimAlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimAlphaCurveName_MetaData), NewProp_AnimAlphaCurveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_AnimAlphaCurveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::ClassParams = {
	&UCpp_MatchedMontageComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent()
{
	if (!Z_Registration_Info_UClass_UCpp_MatchedMontageComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_MatchedMontageComponent.OuterSingleton, Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCpp_MatchedMontageComponent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_MatchedMontageComponent>()
{
	return UCpp_MatchedMontageComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_MatchedMontageComponent);
UCpp_MatchedMontageComponent::~UCpp_MatchedMontageComponent() {}
// End Class UCpp_MatchedMontageComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMatchedMontageTwoPoints::StaticStruct, Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewStructOps, TEXT("MatchedMontageTwoPoints"), &Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchedMontageTwoPoints), 2407701925U) },
		{ FMatchedMontageManyPoints::StaticStruct, Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewStructOps, TEXT("MatchedMontageManyPoints"), &Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchedMontageManyPoints), 191558790U) },
		{ FMMEndingEvent::StaticStruct, Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewStructOps, TEXT("MMEndingEvent"), &Z_Registration_Info_UScriptStruct_MMEndingEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMEndingEvent), 2334244518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_MatchedMontageComponent, UCpp_MatchedMontageComponent::StaticClass, TEXT("UCpp_MatchedMontageComponent"), &Z_Registration_Info_UClass_UCpp_MatchedMontageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_MatchedMontageComponent), 2799788398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_3169885791(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

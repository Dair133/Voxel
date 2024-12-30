// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/NavQuery_HidingLocSearchParams.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavQuery_HidingLocSearchParams() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_HidingLocSearchParams();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FWeightFunction();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Enum EDistributionFunctionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistributionFunctionType;
static UEnum* EDistributionFunctionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDistributionFunctionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDistributionFunctionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("EDistributionFunctionType"));
	}
	return Z_Registration_Info_UEnum_EDistributionFunctionType.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EDistributionFunctionType>()
{
	return EDistributionFunctionType_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cos.Name", "EDistributionFunctionType::Cos" },
		{ "Exp.Name", "EDistributionFunctionType::Exp" },
		{ "Exp2.Name", "EDistributionFunctionType::Exp2" },
		{ "Linear.Name", "EDistributionFunctionType::Linear" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
		{ "Power.Name", "EDistributionFunctionType::Power" },
		{ "Sin.Name", "EDistributionFunctionType::Sin" },
		{ "Sinh.Name", "EDistributionFunctionType::Sinh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDistributionFunctionType::Linear", (int64)EDistributionFunctionType::Linear },
		{ "EDistributionFunctionType::Exp", (int64)EDistributionFunctionType::Exp },
		{ "EDistributionFunctionType::Exp2", (int64)EDistributionFunctionType::Exp2 },
		{ "EDistributionFunctionType::Power", (int64)EDistributionFunctionType::Power },
		{ "EDistributionFunctionType::Sin", (int64)EDistributionFunctionType::Sin },
		{ "EDistributionFunctionType::Cos", (int64)EDistributionFunctionType::Cos },
		{ "EDistributionFunctionType::Sinh", (int64)EDistributionFunctionType::Sinh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"EDistributionFunctionType",
	"EDistributionFunctionType",
	Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType()
{
	if (!Z_Registration_Info_UEnum_EDistributionFunctionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistributionFunctionType.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDistributionFunctionType.InnerSingleton;
}
// End Enum EDistributionFunctionType

// Begin ScriptStruct FWeightFunction
static_assert(std::is_polymorphic<FWeightFunction>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeightFunction cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightFunction;
class UScriptStruct* FWeightFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightFunction, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("WeightFunction"));
	}
	return Z_Registration_Info_UScriptStruct_WeightFunction.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FWeightFunction>()
{
	return FWeightFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeightFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Weight" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionFunction_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerExponent_MetaData[] = {
		{ "Category", "Weight" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightBias_MetaData[] = {
		{ "Category", "Weight" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionCurve_MetaData[] = {
		{ "Category", "Read Only" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistributionFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistributionFunction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistributionCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightFunction, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_DistributionFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_DistributionFunction = { "DistributionFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightFunction, DistributionFunction), Z_Construct_UEnum_ClimbingNavigation_EDistributionFunctionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionFunction_MetaData), NewProp_DistributionFunction_MetaData) }; // 1152924506
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_PowerExponent = { "PowerExponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightFunction, PowerExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerExponent_MetaData), NewProp_PowerExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_WeightBias = { "WeightBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightFunction, WeightBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightBias_MetaData), NewProp_WeightBias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_DistributionCurve = { "DistributionCurve", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightFunction, DistributionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionCurve_MetaData), NewProp_DistributionCurve_MetaData) }; // 1495033350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_DistributionFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_DistributionFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_PowerExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_WeightBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightFunction_Statics::NewProp_DistributionCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WeightFunction",
	Z_Construct_UScriptStruct_FWeightFunction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightFunction_Statics::PropPointers),
	sizeof(FWeightFunction),
	alignof(FWeightFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeightFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeightFunction()
{
	if (!Z_Registration_Info_UScriptStruct_WeightFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightFunction.InnerSingleton, Z_Construct_UScriptStruct_FWeightFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeightFunction.InnerSingleton;
}
// End ScriptStruct FWeightFunction

// Begin Class UNavQuery_HidingLocSearchParams
void UNavQuery_HidingLocSearchParams::StaticRegisterNativesUNavQuery_HidingLocSearchParams()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavQuery_HidingLocSearchParams);
UClass* Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister()
{
	return UNavQuery_HidingLocSearchParams::StaticClass();
}
struct Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NavQuery_HidingLocSearchParams.h" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindingPointsRadius_MetaData[] = {
		{ "Category", "Query Config|Search Radius" },
		{ "ClampMax", "6000" },
		{ "ClampMin", "100.000000" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySearchRadius_MetaData[] = {
		{ "Category", "Query Config|Search Radius" },
		{ "ClampMax", "6000" },
		{ "ClampMin", "100.000000" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathLenghtToPointWeight_MetaData[] = {
		{ "Category", "Query Config|Weights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Query Config|Weights\", meta = (ClampMin = 0.0, ClampMax = 1.0))\n//float PointAngleWeight = 1.0;\n" },
#endif
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Query Config|Weights\", meta = (ClampMin = 0.0, ClampMax = 1.0))\nfloat PointAngleWeight = 1.0;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToNearestEnemyWeight_MetaData[] = {
		{ "Category", "Query Config|Weights" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachOriginWeight_MetaData[] = {
		{ "Category", "Query Config|Weights" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAngleWeight_MetaData[] = {
		{ "Category", "Query Config|Weights" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizePathWeights_MetaData[] = {
		{ "Category", "Query Config|Other" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsCorrectPathWeightMin_MetaData[] = {
		{ "Category", "Query Config|Other" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValidPointDistToEnemy_MetaData[] = {
		{ "Category", "Query Config|Other" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysIgnorePlayerAsEnemy_MetaData[] = {
		{ "Category", "Query Config|Other" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleCalculationMapRangeMin_MetaData[] = {
		{ "Category", "Query Config|Angle Map" },
		{ "ClampMax", "0.990000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyAbsToAngleCalculationMap_MetaData[] = {
		{ "Category", "Query Config|Angle Map" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstPathSubdividor_MetaData[] = {
		{ "Category", "Query Config|Path Checker" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDynamicSubdividion_MetaData[] = {
		{ "Category", "Query Config|Path Checker" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSubSegmentLenght_MetaData[] = {
		{ "Category", "Query Config|Path Checker" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPotencialPathsCreation_MetaData[] = {
		{ "Category", "Query Config|Accuracy" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverPointHeightOffset_MetaData[] = {
		{ "Category", "Query Config|Tracing" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightCylinderHeightScale_MetaData[] = {
		{ "Category", "Query Config|Tracing" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallCheckTraceRadius_MetaData[] = {
		{ "Category", "Query Config|Tracing" },
		{ "ClampMax", "20.000000" },
		{ "ClampMin", "0.200000" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsFindingChannel_MetaData[] = {
		{ "Category", "Query Config|Tracing" },
		{ "ModuleRelativePath", "Public/NavQuery_HidingLocSearchParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FindingPointsRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemySearchRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathLenghtToPointWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceToNearestEnemyWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReachOriginWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointAngleWeight;
	static void NewProp_NormalizePathWeights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizePathWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AsCorrectPathWeightMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValidPointDistToEnemy;
	static void NewProp_AlwaysIgnorePlayerAsEnemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlwaysIgnorePlayerAsEnemy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleCalculationMapRangeMin;
	static void NewProp_ApplyAbsToAngleCalculationMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyAbsToAngleCalculationMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstPathSubdividor;
	static void NewProp_UseDynamicSubdividion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDynamicSubdividion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicSubSegmentLenght;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPotencialPathsCreation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoverPointHeightOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightCylinderHeightScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallCheckTraceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PointsFindingChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavQuery_HidingLocSearchParams>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_FindingPointsRadius = { "FindingPointsRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, FindingPointsRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindingPointsRadius_MetaData), NewProp_FindingPointsRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_EnemySearchRadius = { "EnemySearchRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, EnemySearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySearchRadius_MetaData), NewProp_EnemySearchRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_PathLenghtToPointWeight = { "PathLenghtToPointWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, PathLenghtToPointWeight), Z_Construct_UScriptStruct_FWeightFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathLenghtToPointWeight_MetaData), NewProp_PathLenghtToPointWeight_MetaData) }; // 2088028801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_DistanceToNearestEnemyWeight = { "DistanceToNearestEnemyWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, DistanceToNearestEnemyWeight), Z_Construct_UScriptStruct_FWeightFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToNearestEnemyWeight_MetaData), NewProp_DistanceToNearestEnemyWeight_MetaData) }; // 2088028801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ReachOriginWeight = { "ReachOriginWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, ReachOriginWeight), Z_Construct_UScriptStruct_FWeightFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachOriginWeight_MetaData), NewProp_ReachOriginWeight_MetaData) }; // 2088028801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_PointAngleWeight = { "PointAngleWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, PointAngleWeight), Z_Construct_UScriptStruct_FWeightFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAngleWeight_MetaData), NewProp_PointAngleWeight_MetaData) }; // 2088028801
void Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_NormalizePathWeights_SetBit(void* Obj)
{
	((UNavQuery_HidingLocSearchParams*)Obj)->NormalizePathWeights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_NormalizePathWeights = { "NormalizePathWeights", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavQuery_HidingLocSearchParams), &Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_NormalizePathWeights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizePathWeights_MetaData), NewProp_NormalizePathWeights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AsCorrectPathWeightMin = { "AsCorrectPathWeightMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, AsCorrectPathWeightMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsCorrectPathWeightMin_MetaData), NewProp_AsCorrectPathWeightMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_MinValidPointDistToEnemy = { "MinValidPointDistToEnemy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, MinValidPointDistToEnemy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValidPointDistToEnemy_MetaData), NewProp_MinValidPointDistToEnemy_MetaData) };
void Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AlwaysIgnorePlayerAsEnemy_SetBit(void* Obj)
{
	((UNavQuery_HidingLocSearchParams*)Obj)->AlwaysIgnorePlayerAsEnemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AlwaysIgnorePlayerAsEnemy = { "AlwaysIgnorePlayerAsEnemy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavQuery_HidingLocSearchParams), &Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AlwaysIgnorePlayerAsEnemy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysIgnorePlayerAsEnemy_MetaData), NewProp_AlwaysIgnorePlayerAsEnemy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AngleCalculationMapRangeMin = { "AngleCalculationMapRangeMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, AngleCalculationMapRangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleCalculationMapRangeMin_MetaData), NewProp_AngleCalculationMapRangeMin_MetaData) };
void Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ApplyAbsToAngleCalculationMap_SetBit(void* Obj)
{
	((UNavQuery_HidingLocSearchParams*)Obj)->ApplyAbsToAngleCalculationMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ApplyAbsToAngleCalculationMap = { "ApplyAbsToAngleCalculationMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavQuery_HidingLocSearchParams), &Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ApplyAbsToAngleCalculationMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyAbsToAngleCalculationMap_MetaData), NewProp_ApplyAbsToAngleCalculationMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ConstPathSubdividor = { "ConstPathSubdividor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, ConstPathSubdividor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstPathSubdividor_MetaData), NewProp_ConstPathSubdividor_MetaData) };
void Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_UseDynamicSubdividion_SetBit(void* Obj)
{
	((UNavQuery_HidingLocSearchParams*)Obj)->UseDynamicSubdividion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_UseDynamicSubdividion = { "UseDynamicSubdividion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavQuery_HidingLocSearchParams), &Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_UseDynamicSubdividion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDynamicSubdividion_MetaData), NewProp_UseDynamicSubdividion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_DynamicSubSegmentLenght = { "DynamicSubSegmentLenght", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, DynamicSubSegmentLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSubSegmentLenght_MetaData), NewProp_DynamicSubSegmentLenght_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_MaxPotencialPathsCreation = { "MaxPotencialPathsCreation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, MaxPotencialPathsCreation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPotencialPathsCreation_MetaData), NewProp_MaxPotencialPathsCreation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_CoverPointHeightOffset = { "CoverPointHeightOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, CoverPointHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverPointHeightOffset_MetaData), NewProp_CoverPointHeightOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_SightCylinderHeightScale = { "SightCylinderHeightScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, SightCylinderHeightScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightCylinderHeightScale_MetaData), NewProp_SightCylinderHeightScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_WallCheckTraceRadius = { "WallCheckTraceRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, WallCheckTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallCheckTraceRadius_MetaData), NewProp_WallCheckTraceRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_PointsFindingChannel = { "PointsFindingChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_HidingLocSearchParams, PointsFindingChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsFindingChannel_MetaData), NewProp_PointsFindingChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_FindingPointsRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_EnemySearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_PathLenghtToPointWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_DistanceToNearestEnemyWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ReachOriginWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_PointAngleWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_NormalizePathWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AsCorrectPathWeightMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_MinValidPointDistToEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AlwaysIgnorePlayerAsEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_AngleCalculationMapRangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ApplyAbsToAngleCalculationMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_ConstPathSubdividor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_UseDynamicSubdividion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_DynamicSubSegmentLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_MaxPotencialPathsCreation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_CoverPointHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_SightCylinderHeightScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_WallCheckTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::NewProp_PointsFindingChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::ClassParams = {
	&UNavQuery_HidingLocSearchParams::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavQuery_HidingLocSearchParams()
{
	if (!Z_Registration_Info_UClass_UNavQuery_HidingLocSearchParams.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavQuery_HidingLocSearchParams.OuterSingleton, Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavQuery_HidingLocSearchParams.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UNavQuery_HidingLocSearchParams>()
{
	return UNavQuery_HidingLocSearchParams::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavQuery_HidingLocSearchParams);
UNavQuery_HidingLocSearchParams::~UNavQuery_HidingLocSearchParams() {}
// End Class UNavQuery_HidingLocSearchParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDistributionFunctionType_StaticEnum, TEXT("EDistributionFunctionType"), &Z_Registration_Info_UEnum_EDistributionFunctionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1152924506U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeightFunction::StaticStruct, Z_Construct_UScriptStruct_FWeightFunction_Statics::NewStructOps, TEXT("WeightFunction"), &Z_Registration_Info_UScriptStruct_WeightFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightFunction), 2088028801U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavQuery_HidingLocSearchParams, UNavQuery_HidingLocSearchParams::StaticClass, TEXT("UNavQuery_HidingLocSearchParams"), &Z_Registration_Info_UClass_UNavQuery_HidingLocSearchParams, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavQuery_HidingLocSearchParams), 4116533695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_736681483(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

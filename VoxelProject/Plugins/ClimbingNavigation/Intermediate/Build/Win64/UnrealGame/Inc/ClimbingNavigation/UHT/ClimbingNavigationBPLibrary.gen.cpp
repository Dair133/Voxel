// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/ClimbingNavigationBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbingNavigationBPLibrary() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UClimbingNavigationBPLibrary();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UClimbingNavigationBPLibrary_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_FullPathData();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_OtherPointParams();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FNavEdgeParams();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin ScriptStruct FClimbNav_OtherPointParams
static_assert(std::is_polymorphic<FClimbNav_OtherPointParams>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClimbNav_OtherPointParams cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams;
class UScriptStruct* FClimbNav_OtherPointParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimbNav_OtherPointParams, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("ClimbNav_OtherPointParams"));
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FClimbNav_OtherPointParams>()
{
	return FClimbNav_OtherPointParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeID_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArrayIndex_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointName_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceXY_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleBetween_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LedgeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceXY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleBetween;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimbNav_OtherPointParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_LedgeID = { "LedgeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_OtherPointParams, LedgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeID_MetaData), NewProp_LedgeID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_OtherPointParams, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointID_MetaData), NewProp_PointID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_OtherPointParams, InArrayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArrayIndex_MetaData), NewProp_InArrayIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_PointName = { "PointName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_OtherPointParams, PointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointName_MetaData), NewProp_PointName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_OtherPointParams, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_DistanceXY = { "DistanceXY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_OtherPointParams, DistanceXY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceXY_MetaData), NewProp_DistanceXY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_AngleBetween = { "AngleBetween", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_OtherPointParams, AngleBetween), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleBetween_MetaData), NewProp_AngleBetween_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_LedgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_PointID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_PointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_DistanceXY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewProp_AngleBetween,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ClimbNav_OtherPointParams",
	Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::PropPointers),
	sizeof(FClimbNav_OtherPointParams),
	alignof(FClimbNav_OtherPointParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_OtherPointParams()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams.InnerSingleton, Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams.InnerSingleton;
}
// End ScriptStruct FClimbNav_OtherPointParams

// Begin ScriptStruct FClimbNav_SingleClimbPoint
static_assert(std::is_polymorphic<FClimbNav_SingleClimbPoint>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClimbNav_SingleClimbPoint cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint;
class UScriptStruct* FClimbNav_SingleClimbPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("ClimbNav_SingleClimbPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FClimbNav_SingleClimbPoint>()
{
	return FClimbNav_SingleClimbPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeCenter_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeLeft_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeRight_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeID_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointName_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossibleNextPoints_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeRight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LedgeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PossibleNextPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PossibleNextPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimbNav_SingleClimbPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeCenter = { "LedgeCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, LedgeCenter), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeCenter_MetaData), NewProp_LedgeCenter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeLeft = { "LedgeLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, LedgeLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeLeft_MetaData), NewProp_LedgeLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeRight = { "LedgeRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, LedgeRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeRight_MetaData), NewProp_LedgeRight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeID = { "LedgeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, LedgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeID_MetaData), NewProp_LedgeID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointID_MetaData), NewProp_PointID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PointName = { "PointName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, PointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointName_MetaData), NewProp_PointName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PossibleNextPoints_Inner = { "PossibleNextPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_OtherPointParams, METADATA_PARAMS(0, nullptr) }; // 891286352
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PossibleNextPoints = { "PossibleNextPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SingleClimbPoint, PossibleNextPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossibleNextPoints_MetaData), NewProp_PossibleNextPoints_MetaData) }; // 891286352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_LedgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PointID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PossibleNextPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewProp_PossibleNextPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ClimbNav_SingleClimbPoint",
	Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::PropPointers),
	sizeof(FClimbNav_SingleClimbPoint),
	alignof(FClimbNav_SingleClimbPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint.InnerSingleton, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint.InnerSingleton;
}
// End ScriptStruct FClimbNav_SingleClimbPoint

// Begin ScriptStruct FClimbNav_InitialLedgeParams
static_assert(std::is_polymorphic<FClimbNav_InitialLedgeParams>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClimbNav_InitialLedgeParams cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams;
class UScriptStruct* FClimbNav_InitialLedgeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("ClimbNav_InitialLedgeParams"));
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FClimbNav_InitialLedgeParams>()
{
	return FClimbNav_InitialLedgeParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLedgeBegin_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeLenght_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtivePoints_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftLedgeBegin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeLenght;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddtivePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddtivePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimbNav_InitialLedgeParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_LeftLedgeBegin = { "LeftLedgeBegin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_InitialLedgeParams, LeftLedgeBegin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLedgeBegin_MetaData), NewProp_LeftLedgeBegin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_LedgeLenght = { "LedgeLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_InitialLedgeParams, LedgeLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeLenght_MetaData), NewProp_LedgeLenght_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_AddtivePoints_Inner = { "AddtivePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_AddtivePoints = { "AddtivePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_InitialLedgeParams, AddtivePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtivePoints_MetaData), NewProp_AddtivePoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_LeftLedgeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_LedgeLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_AddtivePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewProp_AddtivePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ClimbNav_InitialLedgeParams",
	Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::PropPointers),
	sizeof(FClimbNav_InitialLedgeParams),
	alignof(FClimbNav_InitialLedgeParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams.InnerSingleton, Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams.InnerSingleton;
}
// End ScriptStruct FClimbNav_InitialLedgeParams

// Begin ScriptStruct FClimbNav_SplineLedgeParams
static_assert(std::is_polymorphic<FClimbNav_SplineLedgeParams>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClimbNav_SplineLedgeParams cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams;
class UScriptStruct* FClimbNav_SplineLedgeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("ClimbNav_SplineLedgeParams"));
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FClimbNav_SplineLedgeParams>()
{
	return FClimbNav_SplineLedgeParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLedgeTransform_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLedgeTransform_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTransforms_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLedgeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLedgeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimbNav_SplineLedgeParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_StartLedgeTransform = { "StartLedgeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SplineLedgeParams, StartLedgeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLedgeTransform_MetaData), NewProp_StartLedgeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_EndLedgeTransform = { "EndLedgeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SplineLedgeParams, EndLedgeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLedgeTransform_MetaData), NewProp_EndLedgeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_AllTransforms_Inner = { "AllTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_AllTransforms = { "AllTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_SplineLedgeParams, AllTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTransforms_MetaData), NewProp_AllTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_StartLedgeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_EndLedgeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_AllTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewProp_AllTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ClimbNav_SplineLedgeParams",
	Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::PropPointers),
	sizeof(FClimbNav_SplineLedgeParams),
	alignof(FClimbNav_SplineLedgeParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams.InnerSingleton, Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams.InnerSingleton;
}
// End ScriptStruct FClimbNav_SplineLedgeParams

// Begin ScriptStruct FNavEdgeParams
static_assert(std::is_polymorphic<FNavEdgeParams>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNavEdgeParams cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavEdgeParams;
class UScriptStruct* FNavEdgeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavEdgeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavEdgeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavEdgeParams, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("NavEdgeParams"));
	}
	return Z_Registration_Info_UScriptStruct_NavEdgeParams.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FNavEdgeParams>()
{
	return FNavEdgeParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavEdgeParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPosition_MetaData[] = {
		{ "Category", "PolyEdge" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPosition_MetaData[] = {
		{ "Category", "PolyEdge" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lenght_MetaData[] = {
		{ "Category", "PolyEdge" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[] = {
		{ "Category", "PolyEdge" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lenght;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavEdgeParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_LeftPosition = { "LeftPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavEdgeParams, LeftPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPosition_MetaData), NewProp_LeftPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_RightPosition = { "RightPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavEdgeParams, RightPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPosition_MetaData), NewProp_RightPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_Lenght = { "Lenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavEdgeParams, Lenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lenght_MetaData), NewProp_Lenght_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavEdgeParams, EdgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeID_MetaData), NewProp_EdgeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavEdgeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_LeftPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_RightPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_Lenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewProp_EdgeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavEdgeParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavEdgeParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"NavEdgeParams",
	Z_Construct_UScriptStruct_FNavEdgeParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavEdgeParams_Statics::PropPointers),
	sizeof(FNavEdgeParams),
	alignof(FNavEdgeParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavEdgeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavEdgeParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavEdgeParams()
{
	if (!Z_Registration_Info_UScriptStruct_NavEdgeParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavEdgeParams.InnerSingleton, Z_Construct_UScriptStruct_FNavEdgeParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavEdgeParams.InnerSingleton;
}
// End ScriptStruct FNavEdgeParams

// Begin Enum EClimbMovementDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClimbMovementDirection;
static UEnum* EClimbMovementDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClimbMovementDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClimbMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("EClimbMovementDirection"));
	}
	return Z_Registration_Info_UEnum_EClimbMovementDirection.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EClimbMovementDirection>()
{
	return EClimbMovementDirection_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "EClimbMovementDirection::Down" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EClimbMovementDirection::Left" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EClimbMovementDirection::Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EClimbMovementDirection::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClimbMovementDirection::Up", (int64)EClimbMovementDirection::Up },
		{ "EClimbMovementDirection::Right", (int64)EClimbMovementDirection::Right },
		{ "EClimbMovementDirection::Left", (int64)EClimbMovementDirection::Left },
		{ "EClimbMovementDirection::Down", (int64)EClimbMovementDirection::Down },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"EClimbMovementDirection",
	"EClimbMovementDirection",
	Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection()
{
	if (!Z_Registration_Info_UEnum_EClimbMovementDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClimbMovementDirection.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_EClimbMovementDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClimbMovementDirection.InnerSingleton;
}
// End Enum EClimbMovementDirection

// Begin Enum ENavClimbActionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavClimbActionState;
static UEnum* ENavClimbActionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavClimbActionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavClimbActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("ENavClimbActionState"));
	}
	return Z_Registration_Info_UEnum_ENavClimbActionState.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<ENavClimbActionState>()
{
	return ENavClimbActionState_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "JumpBack.Name", "ENavClimbActionState::JumpBack" },
		{ "LongJump.Name", "ENavClimbActionState::LongJump" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "None.Name", "ENavClimbActionState::None" },
		{ "ShortJump.Name", "ENavClimbActionState::ShortJump" },
		{ "StartClimb.Name", "ENavClimbActionState::StartClimb" },
		{ "WalkCycle.Name", "ENavClimbActionState::WalkCycle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavClimbActionState::None", (int64)ENavClimbActionState::None },
		{ "ENavClimbActionState::WalkCycle", (int64)ENavClimbActionState::WalkCycle },
		{ "ENavClimbActionState::ShortJump", (int64)ENavClimbActionState::ShortJump },
		{ "ENavClimbActionState::LongJump", (int64)ENavClimbActionState::LongJump },
		{ "ENavClimbActionState::StartClimb", (int64)ENavClimbActionState::StartClimb },
		{ "ENavClimbActionState::JumpBack", (int64)ENavClimbActionState::JumpBack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"ENavClimbActionState",
	"ENavClimbActionState",
	Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState()
{
	if (!Z_Registration_Info_UEnum_ENavClimbActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavClimbActionState.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_ENavClimbActionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavClimbActionState.InnerSingleton;
}
// End Enum ENavClimbActionState

// Begin ScriptStruct FClimbNav_FullPathData
static_assert(std::is_polymorphic<FClimbNav_FullPathData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClimbNav_FullPathData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData;
class UScriptStruct* FClimbNav_FullPathData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimbNav_FullPathData, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("ClimbNav_FullPathData"));
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FClimbNav_FullPathData>()
{
	return FClimbNav_FullPathData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveClimbProjection_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartClimbProjection_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveLedgePosition_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachLedgePosition_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundedPathPoints_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToLeaveClimbPath_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToReachTargetClimbPath_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPathLenght_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundedPathLenghtSegment_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPathCost_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentClimbPathValid_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundedPathValid_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextClimbPathValid_MetaData[] = {
		{ "Category", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaveClimbProjection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartClimbProjection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaveLedgePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReachLedgePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundedPathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundedPathPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToLeaveClimbPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToLeaveClimbPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToReachTargetClimbPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToReachTargetClimbPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalPathLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundedPathLenghtSegment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalPathCost;
	static void NewProp_CurrentClimbPathValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CurrentClimbPathValid;
	static void NewProp_GroundedPathValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GroundedPathValid;
	static void NewProp_NextClimbPathValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NextClimbPathValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimbNav_FullPathData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_LeaveClimbProjection = { "LeaveClimbProjection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, LeaveClimbProjection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveClimbProjection_MetaData), NewProp_LeaveClimbProjection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_StartClimbProjection = { "StartClimbProjection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, StartClimbProjection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartClimbProjection_MetaData), NewProp_StartClimbProjection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_LeaveLedgePosition = { "LeaveLedgePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, LeaveLedgePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveLedgePosition_MetaData), NewProp_LeaveLedgePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ReachLedgePosition = { "ReachLedgePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, ReachLedgePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachLedgePosition_MetaData), NewProp_ReachLedgePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathPoints_Inner = { "GroundedPathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathPoints = { "GroundedPathPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, GroundedPathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundedPathPoints_MetaData), NewProp_GroundedPathPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToLeaveClimbPath_Inner = { "ToLeaveClimbPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToLeaveClimbPath = { "ToLeaveClimbPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, ToLeaveClimbPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToLeaveClimbPath_MetaData), NewProp_ToLeaveClimbPath_MetaData) }; // 3422689466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToReachTargetClimbPath_Inner = { "ToReachTargetClimbPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToReachTargetClimbPath = { "ToReachTargetClimbPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, ToReachTargetClimbPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToReachTargetClimbPath_MetaData), NewProp_ToReachTargetClimbPath_MetaData) }; // 3422689466
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_TotalPathLenght = { "TotalPathLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, TotalPathLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPathLenght_MetaData), NewProp_TotalPathLenght_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathLenghtSegment = { "GroundedPathLenghtSegment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, GroundedPathLenghtSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundedPathLenghtSegment_MetaData), NewProp_GroundedPathLenghtSegment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_TotalPathCost = { "TotalPathCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimbNav_FullPathData, TotalPathCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPathCost_MetaData), NewProp_TotalPathCost_MetaData) };
void Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_CurrentClimbPathValid_SetBit(void* Obj)
{
	((FClimbNav_FullPathData*)Obj)->CurrentClimbPathValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_CurrentClimbPathValid = { "CurrentClimbPathValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClimbNav_FullPathData), &Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_CurrentClimbPathValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentClimbPathValid_MetaData), NewProp_CurrentClimbPathValid_MetaData) };
void Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathValid_SetBit(void* Obj)
{
	((FClimbNav_FullPathData*)Obj)->GroundedPathValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathValid = { "GroundedPathValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClimbNav_FullPathData), &Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundedPathValid_MetaData), NewProp_GroundedPathValid_MetaData) };
void Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_NextClimbPathValid_SetBit(void* Obj)
{
	((FClimbNav_FullPathData*)Obj)->NextClimbPathValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_NextClimbPathValid = { "NextClimbPathValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClimbNav_FullPathData), &Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_NextClimbPathValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextClimbPathValid_MetaData), NewProp_NextClimbPathValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_LeaveClimbProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_StartClimbProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_LeaveLedgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ReachLedgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToLeaveClimbPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToLeaveClimbPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToReachTargetClimbPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_ToReachTargetClimbPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_TotalPathLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathLenghtSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_TotalPathCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_CurrentClimbPathValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_GroundedPathValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewProp_NextClimbPathValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ClimbNav_FullPathData",
	Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::PropPointers),
	sizeof(FClimbNav_FullPathData),
	alignof(FClimbNav_FullPathData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClimbNav_FullPathData()
{
	if (!Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData.InnerSingleton, Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData.InnerSingleton;
}
// End ScriptStruct FClimbNav_FullPathData

// Begin Class UClimbingNavigationBPLibrary Function DrawDebugArc
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics
{
	struct ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms
	{
		const UObject* WorldContextObject;
		FVector Center;
		float Radius;
		FVector Direction;
		float AngleWidth;
		int32 Segments;
		FLinearColor Color;
		float LifeTime;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Segments,Color,LifeTime,Thickness" },
		{ "Category", "Rendering|Debug" },
		{ "CPP_Default_LifeTime", "0.500000" },
		{ "CPP_Default_Thickness", "0.500000" },
		{ "DisplayName", "Draw Debug Arc" },
		{ "Keywords", "Cylinder,Debug,Draw" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_AngleWidth = { "AngleWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, AngleWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, Segments), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_AngleWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "DrawDebugArc", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::ClimbingNavigationBPLibrary_eventDrawDebugArc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execDrawDebugArc)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngleWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UClimbingNavigationBPLibrary::DrawDebugArc(Z_Param_WorldContextObject,Z_Param_Out_Center,Z_Param_Radius,Z_Param_Out_Direction,Z_Param_AngleWidth,Z_Param_Segments,Z_Param_Color,Z_Param_LifeTime,Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function DrawDebugArc

// Begin Class UClimbingNavigationBPLibrary Function DrawDebugPartCylinder
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics
{
	struct ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms
	{
		const UObject* WorldContextObject;
		FRotator CenterAngle;
		FVector StartPosition;
		float HalfAngle;
		float Radius;
		float Height;
		FLinearColor Color;
		float LifeTime;
		float Thickness;
		int32 Segments;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Color,LifeTime,Thickness,Segments" },
		{ "Category", "Rendering|Debug" },
		{ "CPP_Default_LifeTime", "0.500000" },
		{ "CPP_Default_Segments", "12" },
		{ "CPP_Default_Thickness", "0.500000" },
		{ "DisplayName", "Draw Debug Cylinder Part" },
		{ "Keywords", "Cylinder,Debug,Draw" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_CenterAngle = { "CenterAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, CenterAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterAngle_MetaData), NewProp_CenterAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, HalfAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms, Segments), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_CenterAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_HalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::NewProp_Segments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "DrawDebugPartCylinder", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::ClimbingNavigationBPLibrary_eventDrawDebugPartCylinder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execDrawDebugPartCylinder)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FRotator,Z_Param_CenterAngle);
	P_GET_STRUCT(FVector,Z_Param_StartPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
	P_FINISH;
	P_NATIVE_BEGIN;
	UClimbingNavigationBPLibrary::DrawDebugPartCylinder(Z_Param_WorldContextObject,Z_Param_CenterAngle,Z_Param_StartPosition,Z_Param_HalfAngle,Z_Param_Radius,Z_Param_Height,Z_Param_Color,Z_Param_LifeTime,Z_Param_Thickness,Z_Param_Segments);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function DrawDebugPartCylinder

// Begin Class UClimbingNavigationBPLibrary Function FindClosestEdgeOnNavMesh
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics
{
	struct ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms
	{
		const UObject* WorldContextObject;
		FVector BasePoint;
		FVector OutClosestEdgePoint;
		float Radius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Radius" },
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_Radius", "1000.000000" },
		{ "DisplayName", "Find Closest Point On Nav Mesh Edge" },
		{ "Keywords", "Point,Navigation,Edge,Line" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutClosestEdgePoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_BasePoint = { "BasePoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms, BasePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoint_MetaData), NewProp_BasePoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_OutClosestEdgePoint = { "OutClosestEdgePoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms, OutClosestEdgePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms), &Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_BasePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_OutClosestEdgePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "FindClosestEdgeOnNavMesh", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::ClimbingNavigationBPLibrary_eventFindClosestEdgeOnNavMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execFindClosestEdgeOnNavMesh)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BasePoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClosestEdgePoint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UClimbingNavigationBPLibrary::FindClosestEdgeOnNavMesh(Z_Param_WorldContextObject,Z_Param_Out_BasePoint,Z_Param_Out_OutClosestEdgePoint,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function FindClosestEdgeOnNavMesh

// Begin Class UClimbingNavigationBPLibrary Function FindClosestNavMeshEdge
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics
{
	struct ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms
	{
		UObject* WorldContextObject;
		FVector BasePoint;
		FVector EdgePointLeft;
		FVector EdgePointRight;
		float Radius;
		bool TryToIgnoreNavLinks;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Radius" },
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_Radius", "1000.000000" },
		{ "CPP_Default_TryToIgnoreNavLinks", "true" },
		{ "DisplayName", "Find Closest Nav Mesh Edge" },
		{ "Keywords", "Point,Navigation,Edge,Line" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgePointLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgePointRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_TryToIgnoreNavLinks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TryToIgnoreNavLinks;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_BasePoint = { "BasePoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms, BasePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoint_MetaData), NewProp_BasePoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_EdgePointLeft = { "EdgePointLeft", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms, EdgePointLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_EdgePointRight = { "EdgePointRight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms, EdgePointRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_TryToIgnoreNavLinks_SetBit(void* Obj)
{
	((ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms*)Obj)->TryToIgnoreNavLinks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_TryToIgnoreNavLinks = { "TryToIgnoreNavLinks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms), &Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_TryToIgnoreNavLinks_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms), &Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_BasePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_EdgePointLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_EdgePointRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_TryToIgnoreNavLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "FindClosestNavMeshEdge", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::ClimbingNavigationBPLibrary_eventFindClosestNavMeshEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execFindClosestNavMeshEdge)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BasePoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EdgePointLeft);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EdgePointRight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_TryToIgnoreNavLinks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UClimbingNavigationBPLibrary::FindClosestNavMeshEdge(Z_Param_WorldContextObject,Z_Param_Out_BasePoint,Z_Param_Out_EdgePointLeft,Z_Param_Out_EdgePointRight,Z_Param_Radius,Z_Param_TryToIgnoreNavLinks);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function FindClosestNavMeshEdge

// Begin Class UClimbingNavigationBPLibrary Function FindExternalEdgesInBox
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics
{
	struct ClimbingNavigationBPLibrary_eventFindExternalEdgesInBox_Parms
	{
		UObject* WorldContextObject;
		FBox SearchBox;
		TArray<FNavEdgeParams> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "DisplayName", "Find External Edges In Box" },
		{ "Keywords", "Point,Navigation,Edge,Line" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindExternalEdgesInBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_SearchBox = { "SearchBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindExternalEdgesInBox_Parms, SearchBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchBox_MetaData), NewProp_SearchBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavEdgeParams, METADATA_PARAMS(0, nullptr) }; // 2013490466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventFindExternalEdgesInBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2013490466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_SearchBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "FindExternalEdgesInBox", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::ClimbingNavigationBPLibrary_eventFindExternalEdgesInBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::ClimbingNavigationBPLibrary_eventFindExternalEdgesInBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execFindExternalEdgesInBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FBox,Z_Param_Out_SearchBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNavEdgeParams>*)Z_Param__Result=UClimbingNavigationBPLibrary::FindExternalEdgesInBox(Z_Param_WorldContextObject,Z_Param_Out_SearchBox);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function FindExternalEdgesInBox

// Begin Class UClimbingNavigationBPLibrary Function IsPointInsideCylinderSegment
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics
{
	struct ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms
	{
		FRotator CenterAngle;
		FVector StartPosition;
		const UObject* WorldContextObject;
		FVector PointToCheck;
		float HalfAngle;
		float Radius;
		float Height;
		float DrawDebug;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DrawDebug" },
		{ "Category", "Math|Geometry" },
		{ "CPP_Default_DrawDebug", "-1.000000" },
		{ "CPP_Default_HalfAngle", "25.000000" },
		{ "CPP_Default_Height", "50.000000" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "DisplayName", "Point Inside Cylinder Segment" },
		{ "Keywords", "Cylinder,Inside,Geometry" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointToCheck;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDebug;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_CenterAngle = { "CenterAngle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, CenterAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterAngle_MetaData), NewProp_CenterAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_PointToCheck = { "PointToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, PointToCheck), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointToCheck_MetaData), NewProp_PointToCheck_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, HalfAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms, DrawDebug), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms), &Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_CenterAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_PointToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_HalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "IsPointInsideCylinderSegment", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::ClimbingNavigationBPLibrary_eventIsPointInsideCylinderSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execIsPointInsideCylinderSegment)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_CenterAngle);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartPosition);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PointToCheck);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DrawDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UClimbingNavigationBPLibrary::IsPointInsideCylinderSegment(Z_Param_Out_CenterAngle,Z_Param_Out_StartPosition,Z_Param_WorldContextObject,Z_Param_Out_PointToCheck,Z_Param_HalfAngle,Z_Param_Radius,Z_Param_Height,Z_Param_DrawDebug);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function IsPointInsideCylinderSegment

// Begin Class UClimbingNavigationBPLibrary Function IsPointOnSegment
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics
{
	struct ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms
	{
		FVector SegmentStart;
		FVector SegmentEnd;
		FVector Point;
		float Tolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Tolerance" },
		{ "Category", "Math|Geometry" },
		{ "CPP_Default_Tolerance", "0.020000" },
		{ "DisplayName", "Is Point On Segment" },
		{ "Keywords", "Point,Segment,Line,Math" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentStart_MetaData), NewProp_SegmentStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentEnd_MetaData), NewProp_SegmentEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms), &Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_SegmentStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_SegmentEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "IsPointOnSegment", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::ClimbingNavigationBPLibrary_eventIsPointOnSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execIsPointOnSegment)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SegmentStart);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SegmentEnd);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UClimbingNavigationBPLibrary::IsPointOnSegment(Z_Param_Out_SegmentStart,Z_Param_Out_SegmentEnd,Z_Param_Out_Point,Z_Param_Tolerance);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function IsPointOnSegment

// Begin Class UClimbingNavigationBPLibrary Function TryFindPathForClimbNav
struct Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics
{
	struct ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms
	{
		const UObject* WorldContextObject;
		bool Succesful;
		float TotalLenght;
		TArray<FClimbNav_SingleClimbPoint> PathPoints;
		FVector StartLocation;
		FVector EndLocation;
		AClimbNavigationStorageActor* NavMeshInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climbing Navigation System" },
		{ "DisplayName", "Try Find Path For Climb Nav" },
		{ "Keywords", "Climbing Navigation" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_Succesful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succesful;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalLenght;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavMeshInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_Succesful_SetBit(void* Obj)
{
	((ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms*)Obj)->Succesful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_Succesful = { "Succesful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms), &Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_Succesful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_TotalLenght = { "TotalLenght", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms, TotalLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3422689466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_NavMeshInstance = { "NavMeshInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms, NavMeshInstance), Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_Succesful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_TotalLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::NewProp_NavMeshInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbingNavigationBPLibrary, nullptr, "TryFindPathForClimbNav", nullptr, nullptr, Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::ClimbingNavigationBPLibrary_eventTryFindPathForClimbNav_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClimbingNavigationBPLibrary::execTryFindPathForClimbNav)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL_REF(Z_Param_Out_Succesful);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TotalLenght);
	P_GET_TARRAY_REF(FClimbNav_SingleClimbPoint,Z_Param_Out_PathPoints);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_EndLocation);
	P_GET_OBJECT(AClimbNavigationStorageActor,Z_Param_NavMeshInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	UClimbingNavigationBPLibrary::TryFindPathForClimbNav(Z_Param_WorldContextObject,Z_Param_Out_Succesful,Z_Param_Out_TotalLenght,Z_Param_Out_PathPoints,Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_NavMeshInstance);
	P_NATIVE_END;
}
// End Class UClimbingNavigationBPLibrary Function TryFindPathForClimbNav

// Begin Class UClimbingNavigationBPLibrary
void UClimbingNavigationBPLibrary::StaticRegisterNativesUClimbingNavigationBPLibrary()
{
	UClass* Class = UClimbingNavigationBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawDebugArc", &UClimbingNavigationBPLibrary::execDrawDebugArc },
		{ "DrawDebugPartCylinder", &UClimbingNavigationBPLibrary::execDrawDebugPartCylinder },
		{ "FindClosestEdgeOnNavMesh", &UClimbingNavigationBPLibrary::execFindClosestEdgeOnNavMesh },
		{ "FindClosestNavMeshEdge", &UClimbingNavigationBPLibrary::execFindClosestNavMeshEdge },
		{ "FindExternalEdgesInBox", &UClimbingNavigationBPLibrary::execFindExternalEdgesInBox },
		{ "IsPointInsideCylinderSegment", &UClimbingNavigationBPLibrary::execIsPointInsideCylinderSegment },
		{ "IsPointOnSegment", &UClimbingNavigationBPLibrary::execIsPointOnSegment },
		{ "TryFindPathForClimbNav", &UClimbingNavigationBPLibrary::execTryFindPathForClimbNav },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClimbingNavigationBPLibrary);
UClass* Z_Construct_UClass_UClimbingNavigationBPLibrary_NoRegister()
{
	return UClimbingNavigationBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ClimbingNavigationBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ClimbingNavigationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugArc, "DrawDebugArc" }, // 1936793888
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_DrawDebugPartCylinder, "DrawDebugPartCylinder" }, // 1411454625
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestEdgeOnNavMesh, "FindClosestEdgeOnNavMesh" }, // 354691458
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindClosestNavMeshEdge, "FindClosestNavMeshEdge" }, // 1809453421
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_FindExternalEdgesInBox, "FindExternalEdgesInBox" }, // 171878931
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointInsideCylinderSegment, "IsPointInsideCylinderSegment" }, // 3100599189
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_IsPointOnSegment, "IsPointOnSegment" }, // 2026569472
		{ &Z_Construct_UFunction_UClimbingNavigationBPLibrary_TryFindPathForClimbNav, "TryFindPathForClimbNav" }, // 43048797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbingNavigationBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics::ClassParams = {
	&UClimbingNavigationBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClimbingNavigationBPLibrary()
{
	if (!Z_Registration_Info_UClass_UClimbingNavigationBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClimbingNavigationBPLibrary.OuterSingleton, Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClimbingNavigationBPLibrary.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UClimbingNavigationBPLibrary>()
{
	return UClimbingNavigationBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbingNavigationBPLibrary);
UClimbingNavigationBPLibrary::~UClimbingNavigationBPLibrary() {}
// End Class UClimbingNavigationBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClimbMovementDirection_StaticEnum, TEXT("EClimbMovementDirection"), &Z_Registration_Info_UEnum_EClimbMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 26629476U) },
		{ ENavClimbActionState_StaticEnum, TEXT("ENavClimbActionState"), &Z_Registration_Info_UEnum_ENavClimbActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3103417325U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClimbNav_OtherPointParams::StaticStruct, Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics::NewStructOps, TEXT("ClimbNav_OtherPointParams"), &Z_Registration_Info_UScriptStruct_ClimbNav_OtherPointParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClimbNav_OtherPointParams), 891286352U) },
		{ FClimbNav_SingleClimbPoint::StaticStruct, Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics::NewStructOps, TEXT("ClimbNav_SingleClimbPoint"), &Z_Registration_Info_UScriptStruct_ClimbNav_SingleClimbPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClimbNav_SingleClimbPoint), 3422689466U) },
		{ FClimbNav_InitialLedgeParams::StaticStruct, Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics::NewStructOps, TEXT("ClimbNav_InitialLedgeParams"), &Z_Registration_Info_UScriptStruct_ClimbNav_InitialLedgeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClimbNav_InitialLedgeParams), 2896808555U) },
		{ FClimbNav_SplineLedgeParams::StaticStruct, Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics::NewStructOps, TEXT("ClimbNav_SplineLedgeParams"), &Z_Registration_Info_UScriptStruct_ClimbNav_SplineLedgeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClimbNav_SplineLedgeParams), 1822033932U) },
		{ FNavEdgeParams::StaticStruct, Z_Construct_UScriptStruct_FNavEdgeParams_Statics::NewStructOps, TEXT("NavEdgeParams"), &Z_Registration_Info_UScriptStruct_NavEdgeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavEdgeParams), 2013490466U) },
		{ FClimbNav_FullPathData::StaticStruct, Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics::NewStructOps, TEXT("ClimbNav_FullPathData"), &Z_Registration_Info_UScriptStruct_ClimbNav_FullPathData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClimbNav_FullPathData), 2644152116U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClimbingNavigationBPLibrary, UClimbingNavigationBPLibrary::StaticClass, TEXT("UClimbingNavigationBPLibrary"), &Z_Registration_Info_UClass_UClimbingNavigationBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClimbingNavigationBPLibrary), 923884627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_2611157196(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

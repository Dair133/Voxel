// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_CoverSystemV2.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_CoverSystemV2() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_CoverSystemV2();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_CoverSystemV2_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCoverSystemMoveConfig();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCoverTraceStartConfig();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin ScriptStruct FCoverTraceStartConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoverTraceStartConfig;
class UScriptStruct* FCoverTraceStartConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoverTraceStartConfig, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CoverTraceStartConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCoverTraceStartConfig>()
{
	return FCoverTraceStartConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightOffset_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftOffset_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetToRadius_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffsetScale_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagNameToIgnore_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityOffsetScale_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetToRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffsetScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagNameToIgnore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityOffsetScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoverTraceStartConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_RightOffset = { "RightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverTraceStartConfig, RightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightOffset_MetaData), NewProp_RightOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_LeftOffset = { "LeftOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverTraceStartConfig, LeftOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftOffset_MetaData), NewProp_LeftOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_OffsetToRadius = { "OffsetToRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverTraceStartConfig, OffsetToRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetToRadius_MetaData), NewProp_OffsetToRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_ForwardOffsetScale = { "ForwardOffsetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverTraceStartConfig, ForwardOffsetScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffsetScale_MetaData), NewProp_ForwardOffsetScale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_TagNameToIgnore = { "TagNameToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverTraceStartConfig, TagNameToIgnore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagNameToIgnore_MetaData), NewProp_TagNameToIgnore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_VelocityOffsetScale = { "VelocityOffsetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverTraceStartConfig, VelocityOffsetScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityOffsetScale_MetaData), NewProp_VelocityOffsetScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_RightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_LeftOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_OffsetToRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_ForwardOffsetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_TagNameToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_VelocityOffsetScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"CoverTraceStartConfig",
	Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::PropPointers),
	sizeof(FCoverTraceStartConfig),
	alignof(FCoverTraceStartConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoverTraceStartConfig()
{
	if (!Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.InnerSingleton;
}
// End ScriptStruct FCoverTraceStartConfig

// Begin ScriptStruct FCoverSystemMoveConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig;
class UScriptStruct* FCoverSystemMoveConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoverSystemMoveConfig, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CoverSystemMoveConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCoverSystemMoveConfig>()
{
	return FCoverSystemMoveConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstRightOffset_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyOffsetRight_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpWithInputWall_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TOffsetForward_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TOffsetBackward_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleTollerance_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstRightOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplyOffsetRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpWithInputWall;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TOffsetForward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TOffsetBackward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTollerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoverSystemMoveConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_FirstRightOffset = { "FirstRightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, FirstRightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstRightOffset_MetaData), NewProp_FirstRightOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_MultiplyOffsetRight = { "MultiplyOffsetRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, MultiplyOffsetRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplyOffsetRight_MetaData), NewProp_MultiplyOffsetRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LerpWithInputWall = { "LerpWithInputWall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, LerpWithInputWall), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpWithInputWall_MetaData), NewProp_LerpWithInputWall_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetForward = { "TOffsetForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, TOffsetForward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TOffsetForward_MetaData), NewProp_TOffsetForward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetBackward = { "TOffsetBackward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, TOffsetBackward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TOffsetBackward_MetaData), NewProp_TOffsetBackward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_AngleTollerance = { "AngleTollerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, AngleTollerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleTollerance_MetaData), NewProp_AngleTollerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, LoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCount_MetaData), NewProp_LoopCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoverSystemMoveConfig, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_FirstRightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_MultiplyOffsetRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LerpWithInputWall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetBackward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_AngleTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"CoverSystemMoveConfig",
	Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::PropPointers),
	sizeof(FCoverSystemMoveConfig),
	alignof(FCoverSystemMoveConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoverSystemMoveConfig()
{
	if (!Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.InnerSingleton;
}
// End ScriptStruct FCoverSystemMoveConfig

// Begin Class UCpp_CoverSystemV2 Function CheckCanStartMoveC
struct Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics
{
	struct Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms
	{
		float DesiredWalkAxis;
		bool WallValid;
		FHitResult WallHit;
		FCoverSystemMoveConfig Config;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Check Can Start Move" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWalkAxis;
	static void NewProp_WallValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WallValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_DesiredWalkAxis = { "DesiredWalkAxis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms, DesiredWalkAxis), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid_SetBit(void* Obj)
{
	((Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms*)Obj)->WallValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid = { "WallValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallHit = { "WallHit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms, WallHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms, Config), Z_Construct_UScriptStruct_FCoverSystemMoveConfig, METADATA_PARAMS(0, nullptr) }; // 2680672888
void Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_DesiredWalkAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "CheckCanStartMoveC", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execCheckCanStartMoveC)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DesiredWalkAxis);
	P_GET_UBOOL(Z_Param_WallValid);
	P_GET_STRUCT(FHitResult,Z_Param_WallHit);
	P_GET_STRUCT(FCoverSystemMoveConfig,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanStartMoveC(Z_Param_Out_DesiredWalkAxis,Z_Param_WallValid,Z_Param_WallHit,Z_Param_Config);
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function CheckCanStartMoveC

// Begin Class UCpp_CoverSystemV2 Function ConvertWallToCapPositionC
struct Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics
{
	struct Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms
	{
		FVector WallLocation;
		FVector WallNormal;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Wall To Cap" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallLocation = { "WallLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms, WallLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallNormal = { "WallNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms, WallNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "ConvertWallToCapPositionC", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execConvertWallToCapPositionC)
{
	P_GET_STRUCT(FVector,Z_Param_WallLocation);
	P_GET_STRUCT(FVector,Z_Param_WallNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ConvertWallToCapPositionC(Z_Param_WallLocation,Z_Param_WallNormal);
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function ConvertWallToCapPositionC

// Begin Class UCpp_CoverSystemV2 Function FinishCoverModeC
static const FName NAME_UCpp_CoverSystemV2_FinishCoverModeC = FName(TEXT("FinishCoverModeC"));
void UCpp_CoverSystemV2::FinishCoverModeC()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_CoverSystemV2_FinishCoverModeC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		FinishCoverModeC_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Finish Cover Mode Call" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "FinishCoverModeC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execFinishCoverModeC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishCoverModeC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function FinishCoverModeC

// Begin Class UCpp_CoverSystemV2 Function MoveCharToWallC
struct Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics
{
	struct Cpp_CoverSystemV2_eventMoveCharToWallC_Parms
	{
		bool WallValid;
		FHitResult ReturnWall;
		float MoveToWallSpeed;
		int32 DebugIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_MoveToWallSpeed", "1.000000" },
		{ "DisplayName", "Move Char To Wall" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_WallValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WallValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnWall;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveToWallSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid_SetBit(void* Obj)
{
	((Cpp_CoverSystemV2_eventMoveCharToWallC_Parms*)Obj)->WallValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid = { "WallValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_ReturnWall = { "ReturnWall", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms, ReturnWall), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_MoveToWallSpeed = { "MoveToWallSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms, MoveToWallSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_ReturnWall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_MoveToWallSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_DebugIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "MoveCharToWallC", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Cpp_CoverSystemV2_eventMoveCharToWallC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Cpp_CoverSystemV2_eventMoveCharToWallC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execMoveCharToWallC)
{
	P_GET_UBOOL_REF(Z_Param_Out_WallValid);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ReturnWall);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MoveToWallSpeed);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveCharToWallC(Z_Param_Out_WallValid,Z_Param_Out_ReturnWall,Z_Param_MoveToWallSpeed,Z_Param_DebugIndex);
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function MoveCharToWallC

// Begin Class UCpp_CoverSystemV2 Function SetAxisValuesForCpp
struct Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms
{
	FVector2D ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UCpp_CoverSystemV2_SetAxisValuesForCpp = FName(TEXT("SetAxisValuesForCpp"));
FVector2D UCpp_CoverSystemV2::SetAxisValuesForCpp()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_CoverSystemV2_SetAxisValuesForCpp);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return SetAxisValuesForCpp_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Set Axis Values For Cpp" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "SetAxisValuesForCpp", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::PropPointers), sizeof(Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execSetAxisValuesForCpp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->SetAxisValuesForCpp_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function SetAxisValuesForCpp

// Begin Class UCpp_CoverSystemV2 Function SetCurrentActorRotation
struct Cpp_CoverSystemV2_eventSetCurrentActorRotation_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_CoverSystemV2_eventSetCurrentActorRotation_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UCpp_CoverSystemV2_SetCurrentActorRotation = FName(TEXT("SetCurrentActorRotation"));
bool UCpp_CoverSystemV2::SetCurrentActorRotation()
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_CoverSystemV2_SetCurrentActorRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_CoverSystemV2_eventSetCurrentActorRotation_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return SetCurrentActorRotation_Implementation();
	}
}
struct Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Set Current Actor Rotation" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_CoverSystemV2_eventSetCurrentActorRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventSetCurrentActorRotation_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "SetCurrentActorRotation", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::PropPointers), sizeof(Cpp_CoverSystemV2_eventSetCurrentActorRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_CoverSystemV2_eventSetCurrentActorRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execSetCurrentActorRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurrentActorRotation_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function SetCurrentActorRotation

// Begin Class UCpp_CoverSystemV2 Function SmoothWallNormalC
struct Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics
{
	struct Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms
	{
		FVector TraceLocation;
		FVector Normal;
		float DirectionAxis;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Smoothing Wall Normal" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_TraceLocation = { "TraceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, TraceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_DirectionAxis = { "DirectionAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, DirectionAxis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_TraceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_DirectionAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "SmoothWallNormalC", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execSmoothWallNormalC)
{
	P_GET_STRUCT(FVector,Z_Param_TraceLocation);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->SmoothWallNormalC(Z_Param_TraceLocation,Z_Param_Normal,Z_Param_DirectionAxis);
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function SmoothWallNormalC

// Begin Class UCpp_CoverSystemV2 Function StartCoverModeC
struct Cpp_CoverSystemV2_eventStartCoverModeC_Parms
{
	bool StartedCover;
};
static const FName NAME_UCpp_CoverSystemV2_StartCoverModeC = FName(TEXT("StartCoverModeC"));
void UCpp_CoverSystemV2::StartCoverModeC(bool& StartedCover)
{
	UFunction* Func = FindFunctionChecked(NAME_UCpp_CoverSystemV2_StartCoverModeC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Cpp_CoverSystemV2_eventStartCoverModeC_Parms Parms;
		Parms.StartedCover=StartedCover ? true : false;
	ProcessEvent(Func,&Parms);
		StartedCover=Parms.StartedCover;
	}
	else
	{
		StartCoverModeC_Implementation(StartedCover);
	}
}
struct Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Start Cover Mode Call" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartedCover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedCover;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover_SetBit(void* Obj)
{
	((Cpp_CoverSystemV2_eventStartCoverModeC_Parms*)Obj)->StartedCover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover = { "StartedCover", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventStartCoverModeC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "StartCoverModeC", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::PropPointers), sizeof(Cpp_CoverSystemV2_eventStartCoverModeC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_CoverSystemV2_eventStartCoverModeC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execStartCoverModeC)
{
	P_GET_UBOOL_REF(Z_Param_Out_StartedCover);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCoverModeC_Implementation(Z_Param_Out_StartedCover);
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function StartCoverModeC

// Begin Class UCpp_CoverSystemV2 Function TryStartCoverSystemC
struct Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics
{
	struct Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms
	{
		FHitResult ReturnWall;
		int32 DebugIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "DisplayName", "Try Start Cover System" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnWall;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnWall = { "ReturnWall", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms, ReturnWall), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnWall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "TryStartCoverSystemC", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execTryStartCoverSystemC)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ReturnWall);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryStartCoverSystemC(Z_Param_Out_ReturnWall,Z_Param_DebugIndex);
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function TryStartCoverSystemC

// Begin Class UCpp_CoverSystemV2 Function UpdateDirectionValuesC
struct Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics
{
	struct Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms
	{
		bool IsCrouch;
		int32 DirectionState;
		float PerDirectionInterpSpeed;
		float MovementInterpSpeed;
		float SmoothAxisInterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "PerDirectionInterpSpeed, MovementInterpSpeed, SmoothAxisInterpSpeed" },
		{ "Category", "CoverSystem" },
		{ "CPP_Default_DirectionState", "0" },
		{ "CPP_Default_IsCrouch", "false" },
		{ "CPP_Default_MovementInterpSpeed", "10.000000" },
		{ "CPP_Default_PerDirectionInterpSpeed", "10.000000" },
		{ "CPP_Default_SmoothAxisInterpSpeed", "8.000000" },
		{ "DisplayName", "Update Direction Values" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_IsCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCrouch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerDirectionInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothAxisInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch_SetBit(void* Obj)
{
	((Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms*)Obj)->IsCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch = { "IsCrouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_DirectionState = { "DirectionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, DirectionState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_PerDirectionInterpSpeed = { "PerDirectionInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, PerDirectionInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_MovementInterpSpeed = { "MovementInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, MovementInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_SmoothAxisInterpSpeed = { "SmoothAxisInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, SmoothAxisInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_DirectionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_PerDirectionInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_MovementInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_SmoothAxisInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "UpdateDirectionValuesC", nullptr, nullptr, Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_CoverSystemV2::execUpdateDirectionValuesC)
{
	P_GET_UBOOL(Z_Param_IsCrouch);
	P_GET_PROPERTY(FIntProperty,Z_Param_DirectionState);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PerDirectionInterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MovementInterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SmoothAxisInterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDirectionValuesC(Z_Param_IsCrouch,Z_Param_DirectionState,Z_Param_PerDirectionInterpSpeed,Z_Param_MovementInterpSpeed,Z_Param_SmoothAxisInterpSpeed);
	P_NATIVE_END;
}
// End Class UCpp_CoverSystemV2 Function UpdateDirectionValuesC

// Begin Class UCpp_CoverSystemV2
void UCpp_CoverSystemV2::StaticRegisterNativesUCpp_CoverSystemV2()
{
	UClass* Class = UCpp_CoverSystemV2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCanStartMoveC", &UCpp_CoverSystemV2::execCheckCanStartMoveC },
		{ "ConvertWallToCapPositionC", &UCpp_CoverSystemV2::execConvertWallToCapPositionC },
		{ "FinishCoverModeC", &UCpp_CoverSystemV2::execFinishCoverModeC },
		{ "MoveCharToWallC", &UCpp_CoverSystemV2::execMoveCharToWallC },
		{ "SetAxisValuesForCpp", &UCpp_CoverSystemV2::execSetAxisValuesForCpp },
		{ "SetCurrentActorRotation", &UCpp_CoverSystemV2::execSetCurrentActorRotation },
		{ "SmoothWallNormalC", &UCpp_CoverSystemV2::execSmoothWallNormalC },
		{ "StartCoverModeC", &UCpp_CoverSystemV2::execStartCoverModeC },
		{ "TryStartCoverSystemC", &UCpp_CoverSystemV2::execTryStartCoverSystemC },
		{ "UpdateDirectionValuesC", &UCpp_CoverSystemV2::execUpdateDirectionValuesC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_CoverSystemV2);
UClass* Z_Construct_UClass_UCpp_CoverSystemV2_NoRegister()
{
	return UCpp_CoverSystemV2::StaticClass();
}
struct Z_Construct_UClass_UCpp_CoverSystemV2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_CoverSystemV2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//References Variables\n" },
#endif
		{ "DisplayName", "CharC" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "DefCapSize" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCoverC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//System Variables\n" },
#endif
		{ "DisplayName", "StartCover" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanMoveLeftRightC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "CanMoveLeftRight" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaPerDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "AlphaPerDirection" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionSmoothC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "MoveDirectionSmooth" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionAxisC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "MoveDirectionAxis" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSmoothC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "DirectionAxisSmooth" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWallNormalC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "CachedWallNormal" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActorRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "CurrentActorRotation" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothOffsetToWallC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "SmoothOffsetToWall" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TConfigS_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Config Variables\n" },
#endif
		{ "DisplayName", "TraceConfigWhenNotCover" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallPullingStrengthC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "WallPullingStrength" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapRadiusDurningCoverC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "CapRadiusDurningCover" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSmoothingNormalsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "UseSmoothingNormals" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDebugIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "TraceDebugIndex" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapSizeC;
	static void NewProp_StartCoverC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartCoverC;
	static void NewProp_CanMoveLeftRightC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanMoveLeftRightC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaPerDirectionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirectionSmoothC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDirectionAxisC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisSmoothC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWallNormalC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActorRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothOffsetToWallC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TConfigS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallPullingStrengthC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapRadiusDurningCoverC;
	static void NewProp_UseSmoothingNormalsC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSmoothingNormalsC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceDebugIndexC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC, "CheckCanStartMoveC" }, // 1941445878
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC, "ConvertWallToCapPositionC" }, // 2189757686
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC, "FinishCoverModeC" }, // 206956173
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC, "MoveCharToWallC" }, // 2231348166
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp, "SetAxisValuesForCpp" }, // 513932715
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_SetCurrentActorRotation, "SetCurrentActorRotation" }, // 1441703175
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC, "SmoothWallNormalC" }, // 1880031382
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC, "StartCoverModeC" }, // 2914875131
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC, "TryStartCoverSystemC" }, // 1446613554
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC, "UpdateDirectionValuesC" }, // 647166326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_CoverSystemV2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CharC = { "CharC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, CharC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharC_MetaData), NewProp_CharC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_DefCapSizeC = { "DefCapSizeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, DefCapSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapSizeC_MetaData), NewProp_DefCapSizeC_MetaData) };
void Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC_SetBit(void* Obj)
{
	((UCpp_CoverSystemV2*)Obj)->StartCoverC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC = { "StartCoverC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_CoverSystemV2), &Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCoverC_MetaData), NewProp_StartCoverC_MetaData) };
void Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC_SetBit(void* Obj)
{
	((UCpp_CoverSystemV2*)Obj)->CanMoveLeftRightC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC = { "CanMoveLeftRightC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_CoverSystemV2), &Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanMoveLeftRightC_MetaData), NewProp_CanMoveLeftRightC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AlphaPerDirectionC = { "AlphaPerDirectionC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, AlphaPerDirectionC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaPerDirectionC_MetaData), NewProp_AlphaPerDirectionC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionSmoothC = { "MoveDirectionSmoothC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, MoveDirectionSmoothC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirectionSmoothC_MetaData), NewProp_MoveDirectionSmoothC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionAxisC = { "MoveDirectionAxisC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, MoveDirectionAxisC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirectionAxisC_MetaData), NewProp_MoveDirectionAxisC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AxisSmoothC = { "AxisSmoothC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, AxisSmoothC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSmoothC_MetaData), NewProp_AxisSmoothC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CachedWallNormalC = { "CachedWallNormalC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, CachedWallNormalC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWallNormalC_MetaData), NewProp_CachedWallNormalC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CurrentActorRotationC = { "CurrentActorRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, CurrentActorRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActorRotationC_MetaData), NewProp_CurrentActorRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_SmoothOffsetToWallC = { "SmoothOffsetToWallC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, SmoothOffsetToWallC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothOffsetToWallC_MetaData), NewProp_SmoothOffsetToWallC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TConfigS = { "TConfigS", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, TConfigS), Z_Construct_UScriptStruct_FCoverTraceStartConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TConfigS_MetaData), NewProp_TConfigS_MetaData) }; // 2266681004
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_WallPullingStrengthC = { "WallPullingStrengthC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, WallPullingStrengthC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallPullingStrengthC_MetaData), NewProp_WallPullingStrengthC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CapRadiusDurningCoverC = { "CapRadiusDurningCoverC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, CapRadiusDurningCoverC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapRadiusDurningCoverC_MetaData), NewProp_CapRadiusDurningCoverC_MetaData) };
void Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC_SetBit(void* Obj)
{
	((UCpp_CoverSystemV2*)Obj)->UseSmoothingNormalsC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC = { "UseSmoothingNormalsC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_CoverSystemV2), &Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSmoothingNormalsC_MetaData), NewProp_UseSmoothingNormalsC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TraceDebugIndexC = { "TraceDebugIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_CoverSystemV2, TraceDebugIndexC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDebugIndexC_MetaData), NewProp_TraceDebugIndexC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_CoverSystemV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CharC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_DefCapSizeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AlphaPerDirectionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionSmoothC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionAxisC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AxisSmoothC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CachedWallNormalC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CurrentActorRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_SmoothOffsetToWallC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TConfigS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_WallPullingStrengthC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CapRadiusDurningCoverC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TraceDebugIndexC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCpp_CoverSystemV2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::ClassParams = {
	&UCpp_CoverSystemV2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCpp_CoverSystemV2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::Class_MetaDataParams), Z_Construct_UClass_UCpp_CoverSystemV2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCpp_CoverSystemV2()
{
	if (!Z_Registration_Info_UClass_UCpp_CoverSystemV2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_CoverSystemV2.OuterSingleton, Z_Construct_UClass_UCpp_CoverSystemV2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCpp_CoverSystemV2.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_CoverSystemV2>()
{
	return UCpp_CoverSystemV2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_CoverSystemV2);
UCpp_CoverSystemV2::~UCpp_CoverSystemV2() {}
// End Class UCpp_CoverSystemV2

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoverTraceStartConfig::StaticStruct, Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewStructOps, TEXT("CoverTraceStartConfig"), &Z_Registration_Info_UScriptStruct_CoverTraceStartConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoverTraceStartConfig), 2266681004U) },
		{ FCoverSystemMoveConfig::StaticStruct, Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewStructOps, TEXT("CoverSystemMoveConfig"), &Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoverSystemMoveConfig), 2680672888U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_CoverSystemV2, UCpp_CoverSystemV2::StaticClass, TEXT("UCpp_CoverSystemV2"), &Z_Registration_Info_UClass_UCpp_CoverSystemV2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_CoverSystemV2), 2134051723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_2217889084(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/JWAN_CurveSmootherLogic.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_CurveSmootherLogic() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSmoother();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCurveSmootherSetting();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
// End Cross Module References

// Begin ScriptStruct FCurveSmootherSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveSmootherSetting;
class UScriptStruct* FCurveSmootherSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveSmootherSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveSmootherSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveSmootherSetting, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("CurveSmootherSetting"));
	}
	return Z_Registration_Info_UScriptStruct_CurveSmootherSetting.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FCurveSmootherSetting>()
{
	return FCurveSmootherSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCurveName_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseConstantInterp_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReducePeakChange_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakSpeedThreshold_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakInterpSpeed_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpingTime_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetCurveName;
	static void NewProp_UseConstantInterp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseConstantInterp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static void NewProp_ReducePeakChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReducePeakChange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveSmootherSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_TargetCurveName = { "TargetCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, TargetCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCurveName_MetaData), NewProp_TargetCurveName_MetaData) };
void Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_UseConstantInterp_SetBit(void* Obj)
{
	((FCurveSmootherSetting*)Obj)->UseConstantInterp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_UseConstantInterp = { "UseConstantInterp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCurveSmootherSetting), &Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_UseConstantInterp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseConstantInterp_MetaData), NewProp_UseConstantInterp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
void Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_ReducePeakChange_SetBit(void* Obj)
{
	((FCurveSmootherSetting*)Obj)->ReducePeakChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_ReducePeakChange = { "ReducePeakChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCurveSmootherSetting), &Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_ReducePeakChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReducePeakChange_MetaData), NewProp_ReducePeakChange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_PeakSpeedThreshold = { "PeakSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, PeakSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakSpeedThreshold_MetaData), NewProp_PeakSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_PeakInterpSpeed = { "PeakInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, PeakInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakInterpSpeed_MetaData), NewProp_PeakInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_InterpingTime = { "InterpingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, InterpingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpingTime_MetaData), NewProp_InterpingTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_TargetCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_UseConstantInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_ReducePeakChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_PeakSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_PeakInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewProp_InterpingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"CurveSmootherSetting",
	Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::PropPointers),
	sizeof(FCurveSmootherSetting),
	alignof(FCurveSmootherSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveSmootherSetting()
{
	if (!Z_Registration_Info_UScriptStruct_CurveSmootherSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveSmootherSetting.InnerSingleton, Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveSmootherSetting.InnerSingleton;
}
// End ScriptStruct FCurveSmootherSetting

// Begin ScriptStruct FAnimNode_CurveSmoother
static_assert(std::is_polymorphic<FAnimNode_CurveSmoother>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CurveSmoother cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother;
class UScriptStruct* FAnimNode_CurveSmoother::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CurveSmoother, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("AnimNode_CurveSmoother"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FAnimNode_CurveSmoother>()
{
	return FAnimNode_CurveSmoother::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingData_MetaData[] = {
		{ "Category", "SmoothingSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Configure Smoothing */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure Smoothing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SmoothingData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CurveSmoother>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_SmoothingData_Inner = { "SmoothingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveSmootherSetting, METADATA_PARAMS(0, nullptr) }; // 2102658969
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_SmoothingData = { "SmoothingData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, SmoothingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingData_MetaData), NewProp_SmoothingData_MetaData) }; // 2102658969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInputType_MetaData), NewProp_AlphaInputType_MetaData) }; // 3333507802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurveName_MetaData), NewProp_AlphaCurveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBiasClamp_MetaData), NewProp_AlphaScaleBiasClamp_MetaData) }; // 1905782755
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_SmoothingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_SmoothingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewProp_AlphaScaleBiasClamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_CurveSmoother",
	Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::PropPointers),
	sizeof(FAnimNode_CurveSmoother),
	alignof(FAnimNode_CurveSmoother),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSmoother()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother.InnerSingleton;
}
// End ScriptStruct FAnimNode_CurveSmoother

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_CurveSmootherLogic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCurveSmootherSetting::StaticStruct, Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewStructOps, TEXT("CurveSmootherSetting"), &Z_Registration_Info_UScriptStruct_CurveSmootherSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveSmootherSetting), 2102658969U) },
		{ FAnimNode_CurveSmoother::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewStructOps, TEXT("AnimNode_CurveSmoother"), &Z_Registration_Info_UScriptStruct_AnimNode_CurveSmoother, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CurveSmoother), 4034460044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_CurveSmootherLogic_h_3465819948(TEXT("/Script/JakubAnimNodesTool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_CurveSmootherLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_CurveSmootherLogic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

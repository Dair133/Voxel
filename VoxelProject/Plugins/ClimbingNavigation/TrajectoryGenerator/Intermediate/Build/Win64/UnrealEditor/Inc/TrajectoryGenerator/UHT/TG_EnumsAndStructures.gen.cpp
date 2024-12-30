// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrajectoryGenerator/Public/TG_EnumsAndStructures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTG_EnumsAndStructures() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TRAJECTORYGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue();
TRAJECTORYGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FTG_TimeAndVectorValue();
UPackage* Z_Construct_UPackage__Script_TrajectoryGenerator();
// End Cross Module References

// Begin ScriptStruct FTG_TimeAndVectorValue
static_assert(std::is_polymorphic<FTG_TimeAndVectorValue>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTG_TimeAndVectorValue cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue;
class UScriptStruct* FTG_TimeAndVectorValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTG_TimeAndVectorValue, (UObject*)Z_Construct_UPackage__Script_TrajectoryGenerator(), TEXT("TG_TimeAndVectorValue"));
	}
	return Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue.OuterSingleton;
}
template<> TRAJECTORYGENERATOR_API UScriptStruct* StaticStruct<FTG_TimeAndVectorValue>()
{
	return FTG_TimeAndVectorValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "TG_TimeAndVectorValue" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "TG_TimeAndVectorValue" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "TG_TimeAndVectorValue" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTG_TimeAndVectorValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTG_TimeAndVectorValue, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTG_TimeAndVectorValue, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTG_TimeAndVectorValue, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::NewProp_Frame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TrajectoryGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TG_TimeAndVectorValue",
	Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::PropPointers),
	sizeof(FTG_TimeAndVectorValue),
	alignof(FTG_TimeAndVectorValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTG_TimeAndVectorValue()
{
	if (!Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue.InnerSingleton, Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue.InnerSingleton;
}
// End ScriptStruct FTG_TimeAndVectorValue

// Begin ScriptStruct FTG_TimeAndRotatorValue
static_assert(std::is_polymorphic<FTG_TimeAndRotatorValue>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTG_TimeAndRotatorValue cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue;
class UScriptStruct* FTG_TimeAndRotatorValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue, (UObject*)Z_Construct_UPackage__Script_TrajectoryGenerator(), TEXT("TG_TimeAndRotatorValue"));
	}
	return Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue.OuterSingleton;
}
template<> TRAJECTORYGENERATOR_API UScriptStruct* StaticStruct<FTG_TimeAndRotatorValue>()
{
	return FTG_TimeAndRotatorValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "TG_TimeAndRotatorValue" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "TG_TimeAndRotatorValue" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "TG_TimeAndRotatorValue" },
		{ "ModuleRelativePath", "Public/TG_EnumsAndStructures.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTG_TimeAndRotatorValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTG_TimeAndRotatorValue, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTG_TimeAndRotatorValue, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTG_TimeAndRotatorValue, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::NewProp_Frame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TrajectoryGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TG_TimeAndRotatorValue",
	Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::PropPointers),
	sizeof(FTG_TimeAndRotatorValue),
	alignof(FTG_TimeAndRotatorValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue()
{
	if (!Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue.InnerSingleton, Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue.InnerSingleton;
}
// End ScriptStruct FTG_TimeAndRotatorValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TG_EnumsAndStructures_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTG_TimeAndVectorValue::StaticStruct, Z_Construct_UScriptStruct_FTG_TimeAndVectorValue_Statics::NewStructOps, TEXT("TG_TimeAndVectorValue"), &Z_Registration_Info_UScriptStruct_TG_TimeAndVectorValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTG_TimeAndVectorValue), 1991596099U) },
		{ FTG_TimeAndRotatorValue::StaticStruct, Z_Construct_UScriptStruct_FTG_TimeAndRotatorValue_Statics::NewStructOps, TEXT("TG_TimeAndRotatorValue"), &Z_Registration_Info_UScriptStruct_TG_TimeAndRotatorValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTG_TimeAndRotatorValue), 3430958896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TG_EnumsAndStructures_h_2380896460(TEXT("/Script/TrajectoryGenerator"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TG_EnumsAndStructures_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TG_EnumsAndStructures_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphDebbuger/Public/GraphDebuggerCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphDebuggerCore() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
GRAPHDEBBUGER_API UScriptStruct* Z_Construct_UScriptStruct_FGraphData();
UPackage* Z_Construct_UPackage__Script_GraphDebbuger();
// End Cross Module References

// Begin ScriptStruct FGraphData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphData;
class UScriptStruct* FGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphData, (UObject*)Z_Construct_UPackage__Script_GraphDebbuger(), TEXT("GraphData"));
	}
	return Z_Registration_Info_UScriptStruct_GraphData.OuterSingleton;
}
template<> GRAPHDEBBUGER_API UScriptStruct* StaticStruct<FGraphData>()
{
	return FGraphData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGraphData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struktura przechowuj\xef\xbf\xbd""ca dane dla ka\xef\xbf\xbd""dego wykresu\n" },
#endif
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struktura przechowuj\xef\xbf\xbd""ca dane dla ka\xef\xbf\xbd""dego wykresu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisRange_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoNormalizeYAxis_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YAxisRange;
	static void NewProp_bAutoNormalizeYAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoNormalizeYAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_YAxisRange = { "YAxisRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, YAxisRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisRange_MetaData), NewProp_YAxisRange_MetaData) };
void Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_bAutoNormalizeYAxis_SetBit(void* Obj)
{
	((FGraphData*)Obj)->bAutoNormalizeYAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_bAutoNormalizeYAxis = { "bAutoNormalizeYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGraphData), &Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_bAutoNormalizeYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoNormalizeYAxis_MetaData), NewProp_bAutoNormalizeYAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_YAxisRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphData_Statics::NewProp_bAutoNormalizeYAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GraphDebbuger,
	nullptr,
	&NewStructOps,
	"GraphData",
	Z_Construct_UScriptStruct_FGraphData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphData_Statics::PropPointers),
	sizeof(FGraphData),
	alignof(FGraphData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGraphData()
{
	if (!Z_Registration_Info_UScriptStruct_GraphData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphData.InnerSingleton, Z_Construct_UScriptStruct_FGraphData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GraphData.InnerSingleton;
}
// End ScriptStruct FGraphData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebuggerCore_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGraphData::StaticStruct, Z_Construct_UScriptStruct_FGraphData_Statics::NewStructOps, TEXT("GraphData"), &Z_Registration_Info_UScriptStruct_GraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphData), 3470470133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebuggerCore_h_1023523276(TEXT("/Script/GraphDebbuger"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebuggerCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebuggerCore_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

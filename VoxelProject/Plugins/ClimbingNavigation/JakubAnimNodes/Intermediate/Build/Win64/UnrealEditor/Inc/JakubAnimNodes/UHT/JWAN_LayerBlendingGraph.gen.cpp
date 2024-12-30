// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodes/Public/JWAN_LayerBlendingGraph.h"
#include "JakubAnimNodesTool/Public/JWAN_LayerBlendingLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_LayerBlendingGraph() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph();
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph_NoRegister();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodes();
// End Cross Module References

// Begin Class UJWAN_LayerBlendingGraph
void UJWAN_LayerBlendingGraph::StaticRegisterNativesUJWAN_LayerBlendingGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJWAN_LayerBlendingGraph);
UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph_NoRegister()
{
	return UJWAN_LayerBlendingGraph::StaticClass();
}
struct Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "JWAN_LayerBlendingGraph.h" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJWAN_LayerBlendingGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJWAN_LayerBlendingGraph, Node), Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 797385779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::ClassParams = {
	&UJWAN_LayerBlendingGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph()
{
	if (!Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph.OuterSingleton, Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph.OuterSingleton;
}
template<> JAKUBANIMNODES_API UClass* StaticClass<UJWAN_LayerBlendingGraph>()
{
	return UJWAN_LayerBlendingGraph::StaticClass();
}
UJWAN_LayerBlendingGraph::UJWAN_LayerBlendingGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJWAN_LayerBlendingGraph);
UJWAN_LayerBlendingGraph::~UJWAN_LayerBlendingGraph() {}
// End Class UJWAN_LayerBlendingGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJWAN_LayerBlendingGraph, UJWAN_LayerBlendingGraph::StaticClass, TEXT("UJWAN_LayerBlendingGraph"), &Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJWAN_LayerBlendingGraph), 2158116618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_1644303026(TEXT("/Script/JakubAnimNodes"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

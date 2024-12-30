// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodes/Public/MyAnimGraphNode.h"
#include "JakubAnimNodesTool/Public/MyAnimNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimGraphNode() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListBase();
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone();
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone_NoRegister();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBone();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodes();
// End Cross Module References

// Begin Class UAnimGraphNode_LayeredBone
void UAnimGraphNode_LayeredBone::StaticRegisterNativesUAnimGraphNode_LayeredBone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_LayeredBone);
UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone_NoRegister()
{
	return UAnimGraphNode_LayeredBone::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyAnimGraphNode.h" },
		{ "ModuleRelativePath", "Public/MyAnimGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MyAnimGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LayeredBone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_LayeredBone, Node), Z_Construct_UScriptStruct_FAnimNode_LayeredBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1289831
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_BlendListBase,
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::ClassParams = {
	&UAnimGraphNode_LayeredBone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone.OuterSingleton;
}
template<> JAKUBANIMNODES_API UClass* StaticClass<UAnimGraphNode_LayeredBone>()
{
	return UAnimGraphNode_LayeredBone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LayeredBone);
UAnimGraphNode_LayeredBone::~UAnimGraphNode_LayeredBone() {}
// End Class UAnimGraphNode_LayeredBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_LayeredBone, UAnimGraphNode_LayeredBone::StaticClass, TEXT("UAnimGraphNode_LayeredBone"), &Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_LayeredBone), 3880133208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_4020788252(TEXT("/Script/JakubAnimNodes"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

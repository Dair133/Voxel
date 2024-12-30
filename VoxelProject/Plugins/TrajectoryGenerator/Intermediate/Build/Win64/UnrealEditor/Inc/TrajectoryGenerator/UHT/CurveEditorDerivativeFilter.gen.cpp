// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrajectoryGenerator/Public/CurveEditorDerivativeFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorDerivativeFilter() {}

// Begin Cross Module References
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_UCurveEditorDerivativeFilter();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_UCurveEditorDerivativeFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TrajectoryGenerator();
// End Cross Module References

// Begin Class UCurveEditorDerivativeFilter
void UCurveEditorDerivativeFilter::StaticRegisterNativesUCurveEditorDerivativeFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorDerivativeFilter);
UClass* Z_Construct_UClass_UCurveEditorDerivativeFilter_NoRegister()
{
	return UCurveEditorDerivativeFilter::StaticClass();
}
struct Z_Construct_UClass_UCurveEditorDerivativeFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Simple Approximate Derivative" },
		{ "IncludePath", "CurveEditorDerivativeFilter.h" },
		{ "ModuleRelativePath", "Public/CurveEditorDerivativeFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorDerivativeFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCurveEditorDerivativeFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TrajectoryGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorDerivativeFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorDerivativeFilter_Statics::ClassParams = {
	&UCurveEditorDerivativeFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorDerivativeFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveEditorDerivativeFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveEditorDerivativeFilter()
{
	if (!Z_Registration_Info_UClass_UCurveEditorDerivativeFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorDerivativeFilter.OuterSingleton, Z_Construct_UClass_UCurveEditorDerivativeFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveEditorDerivativeFilter.OuterSingleton;
}
template<> TRAJECTORYGENERATOR_API UClass* StaticClass<UCurveEditorDerivativeFilter>()
{
	return UCurveEditorDerivativeFilter::StaticClass();
}
UCurveEditorDerivativeFilter::UCurveEditorDerivativeFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorDerivativeFilter);
UCurveEditorDerivativeFilter::~UCurveEditorDerivativeFilter() {}
// End Class UCurveEditorDerivativeFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_CurveEditorDerivativeFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorDerivativeFilter, UCurveEditorDerivativeFilter::StaticClass, TEXT("UCurveEditorDerivativeFilter"), &Z_Registration_Info_UClass_UCurveEditorDerivativeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorDerivativeFilter), 116911058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_CurveEditorDerivativeFilter_h_1026878129(TEXT("/Script/TrajectoryGenerator"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_CurveEditorDerivativeFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_CurveEditorDerivativeFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

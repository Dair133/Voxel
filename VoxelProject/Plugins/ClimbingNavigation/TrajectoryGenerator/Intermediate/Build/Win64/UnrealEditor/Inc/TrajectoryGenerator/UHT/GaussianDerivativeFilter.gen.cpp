// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrajectoryGenerator/Public/GaussianDerivativeFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianDerivativeFilter() {}

// Begin Cross Module References
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_UGaussianDerivativeFilter();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_UGaussianDerivativeFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TrajectoryGenerator();
// End Cross Module References

// Begin Class UGaussianDerivativeFilter
void UGaussianDerivativeFilter::StaticRegisterNativesUGaussianDerivativeFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaussianDerivativeFilter);
UClass* Z_Construct_UClass_UGaussianDerivativeFilter_NoRegister()
{
	return UGaussianDerivativeFilter::StaticClass();
}
struct Z_Construct_UClass_UGaussianDerivativeFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GaussianDerivativeFilter.h" },
		{ "ModuleRelativePath", "Public/GaussianDerivativeFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurSigma_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GaussianDerivativeFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GaussianDerivativeFilter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurSigma;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianDerivativeFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGaussianDerivativeFilter_Statics::NewProp_BlurSigma = { "BlurSigma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianDerivativeFilter, BlurSigma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurSigma_MetaData), NewProp_BlurSigma_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGaussianDerivativeFilter_Statics::NewProp_BlurRadius = { "BlurRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianDerivativeFilter, BlurRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurRadius_MetaData), NewProp_BlurRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaussianDerivativeFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianDerivativeFilter_Statics::NewProp_BlurSigma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianDerivativeFilter_Statics::NewProp_BlurRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianDerivativeFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGaussianDerivativeFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TrajectoryGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianDerivativeFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianDerivativeFilter_Statics::ClassParams = {
	&UGaussianDerivativeFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGaussianDerivativeFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianDerivativeFilter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianDerivativeFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianDerivativeFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianDerivativeFilter()
{
	if (!Z_Registration_Info_UClass_UGaussianDerivativeFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianDerivativeFilter.OuterSingleton, Z_Construct_UClass_UGaussianDerivativeFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianDerivativeFilter.OuterSingleton;
}
template<> TRAJECTORYGENERATOR_API UClass* StaticClass<UGaussianDerivativeFilter>()
{
	return UGaussianDerivativeFilter::StaticClass();
}
UGaussianDerivativeFilter::UGaussianDerivativeFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianDerivativeFilter);
UGaussianDerivativeFilter::~UGaussianDerivativeFilter() {}
// End Class UGaussianDerivativeFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_GaussianDerivativeFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianDerivativeFilter, UGaussianDerivativeFilter::StaticClass, TEXT("UGaussianDerivativeFilter"), &Z_Registration_Info_UClass_UGaussianDerivativeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianDerivativeFilter), 2494367907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_GaussianDerivativeFilter_h_2996048190(TEXT("/Script/TrajectoryGenerator"),
	Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_GaussianDerivativeFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_GaussianDerivativeFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

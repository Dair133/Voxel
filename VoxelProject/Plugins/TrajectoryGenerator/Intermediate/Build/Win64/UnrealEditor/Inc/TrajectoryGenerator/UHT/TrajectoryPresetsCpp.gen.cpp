// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrajectoryGenerator/Public/TrajectoryPresetsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrajectoryPresetsCpp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_ATrajectoryPresetsCpp();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_ATrajectoryPresetsCpp_NoRegister();
UPackage* Z_Construct_UPackage__Script_TrajectoryGenerator();
// End Cross Module References

// Begin Class ATrajectoryPresetsCpp
void ATrajectoryPresetsCpp::StaticRegisterNativesATrajectoryPresetsCpp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrajectoryPresetsCpp);
UClass* Z_Construct_UClass_ATrajectoryPresetsCpp_NoRegister()
{
	return ATrajectoryPresetsCpp::StaticClass();
}
struct Z_Construct_UClass_ATrajectoryPresetsCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TrajectoryPresetsCpp.h" },
		{ "ModuleRelativePath", "Public/TrajectoryPresetsCpp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrajectoryPresetsCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATrajectoryPresetsCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TrajectoryGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrajectoryPresetsCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrajectoryPresetsCpp_Statics::ClassParams = {
	&ATrajectoryPresetsCpp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrajectoryPresetsCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrajectoryPresetsCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrajectoryPresetsCpp()
{
	if (!Z_Registration_Info_UClass_ATrajectoryPresetsCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrajectoryPresetsCpp.OuterSingleton, Z_Construct_UClass_ATrajectoryPresetsCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrajectoryPresetsCpp.OuterSingleton;
}
template<> TRAJECTORYGENERATOR_API UClass* StaticClass<ATrajectoryPresetsCpp>()
{
	return ATrajectoryPresetsCpp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrajectoryPresetsCpp);
ATrajectoryPresetsCpp::~ATrajectoryPresetsCpp() {}
// End Class ATrajectoryPresetsCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryPresetsCpp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrajectoryPresetsCpp, ATrajectoryPresetsCpp::StaticClass, TEXT("ATrajectoryPresetsCpp"), &Z_Registration_Info_UClass_ATrajectoryPresetsCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrajectoryPresetsCpp), 1188644755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryPresetsCpp_h_1349783631(TEXT("/Script/TrajectoryGenerator"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryPresetsCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryPresetsCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

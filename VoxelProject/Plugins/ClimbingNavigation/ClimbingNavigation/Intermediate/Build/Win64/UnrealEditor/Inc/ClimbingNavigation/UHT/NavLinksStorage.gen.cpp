// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/NavLinksStorage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinksStorage() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksStorage();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksStorage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class ANavLinksStorage
void ANavLinksStorage::StaticRegisterNativesANavLinksStorage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavLinksStorage);
UClass* Z_Construct_UClass_ANavLinksStorage_NoRegister()
{
	return ANavLinksStorage::StaticClass();
}
struct Z_Construct_UClass_ANavLinksStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nAn empty actor whose purpose is to store data generated from NavLiksAutoGenerator. \n\nNOTE: You should not place an actor manually on the scene, and there should only be one instance on the selected level\n*/" },
#endif
		{ "HideCategories", "LevelInstance WorldPartition DataLayers Physics HLOD Replication Networking Input Mobile RayTracing Cooking Rendering Collision Navigation" },
		{ "IncludePath", "NavLinksStorage.h" },
		{ "ModuleRelativePath", "Public/NavLinksStorage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An empty actor whose purpose is to store data generated from NavLiksAutoGenerator.\n\nNOTE: You should not place an actor manually on the scene, and there should only be one instance on the selected level" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinksStorage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANavLinksStorage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinksStorage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavLinksStorage_Statics::ClassParams = {
	&ANavLinksStorage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinksStorage_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavLinksStorage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavLinksStorage()
{
	if (!Z_Registration_Info_UClass_ANavLinksStorage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavLinksStorage.OuterSingleton, Z_Construct_UClass_ANavLinksStorage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavLinksStorage.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<ANavLinksStorage>()
{
	return ANavLinksStorage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinksStorage);
ANavLinksStorage::~ANavLinksStorage() {}
// End Class ANavLinksStorage

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavLinksStorage, ANavLinksStorage::StaticClass, TEXT("ANavLinksStorage"), &Z_Registration_Info_UClass_ANavLinksStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavLinksStorage), 2216239218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_3636610780(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

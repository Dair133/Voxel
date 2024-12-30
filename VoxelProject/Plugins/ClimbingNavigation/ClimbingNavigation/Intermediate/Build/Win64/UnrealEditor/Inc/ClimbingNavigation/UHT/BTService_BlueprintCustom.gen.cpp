// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/BTService_BlueprintCustom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_BlueprintCustom() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UBTService_BlueprintCustom();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UBTService_BlueprintCustom_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UBTService_BlueprintCustom
void UBTService_BlueprintCustom::StaticRegisterNativesUBTService_BlueprintCustom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_BlueprintCustom);
UClass* Z_Construct_UClass_UBTService_BlueprintCustom_NoRegister()
{
	return UBTService_BlueprintCustom::StaticClass();
}
struct Z_Construct_UClass_UBTService_BlueprintCustom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_BlueprintCustom.h" },
		{ "ModuleRelativePath", "Public/BTService_BlueprintCustom.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_BlueprintCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_BlueprintCustom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintCustom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_BlueprintCustom_Statics::ClassParams = {
	&UBTService_BlueprintCustom::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintCustom_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_BlueprintCustom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_BlueprintCustom()
{
	if (!Z_Registration_Info_UClass_UBTService_BlueprintCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_BlueprintCustom.OuterSingleton, Z_Construct_UClass_UBTService_BlueprintCustom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_BlueprintCustom.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UBTService_BlueprintCustom>()
{
	return UBTService_BlueprintCustom::StaticClass();
}
UBTService_BlueprintCustom::UBTService_BlueprintCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_BlueprintCustom);
UBTService_BlueprintCustom::~UBTService_BlueprintCustom() {}
// End Class UBTService_BlueprintCustom

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_BlueprintCustom, UBTService_BlueprintCustom::StaticClass, TEXT("UBTService_BlueprintCustom"), &Z_Registration_Info_UClass_UBTService_BlueprintCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_BlueprintCustom), 677639595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h_827331413(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

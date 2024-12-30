// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphDebbuger/Public/AGLS_EditorCommands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_EditorCommands() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UAGLS_EditorCommands();
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UAGLS_EditorCommands_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraphDebbuger();
// End Cross Module References

// Begin Class UAGLS_EditorCommands
void UAGLS_EditorCommands::StaticRegisterNativesUAGLS_EditorCommands()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_EditorCommands);
UClass* Z_Construct_UClass_UAGLS_EditorCommands_NoRegister()
{
	return UAGLS_EditorCommands::StaticClass();
}
struct Z_Construct_UClass_UAGLS_EditorCommands_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AGLS_EditorCommands.h" },
		{ "ModuleRelativePath", "Public/AGLS_EditorCommands.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_EditorCommands>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAGLS_EditorCommands_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphDebbuger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_EditorCommands_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_EditorCommands_Statics::ClassParams = {
	&UAGLS_EditorCommands::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_EditorCommands_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_EditorCommands_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_EditorCommands()
{
	if (!Z_Registration_Info_UClass_UAGLS_EditorCommands.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_EditorCommands.OuterSingleton, Z_Construct_UClass_UAGLS_EditorCommands_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_EditorCommands.OuterSingleton;
}
template<> GRAPHDEBBUGER_API UClass* StaticClass<UAGLS_EditorCommands>()
{
	return UAGLS_EditorCommands::StaticClass();
}
UAGLS_EditorCommands::UAGLS_EditorCommands(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_EditorCommands);
UAGLS_EditorCommands::~UAGLS_EditorCommands() {}
// End Class UAGLS_EditorCommands

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_AGLS_EditorCommands_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_EditorCommands, UAGLS_EditorCommands::StaticClass, TEXT("UAGLS_EditorCommands"), &Z_Registration_Info_UClass_UAGLS_EditorCommands, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_EditorCommands), 3852189569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_AGLS_EditorCommands_h_2075114883(TEXT("/Script/GraphDebbuger"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_AGLS_EditorCommands_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_AGLS_EditorCommands_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

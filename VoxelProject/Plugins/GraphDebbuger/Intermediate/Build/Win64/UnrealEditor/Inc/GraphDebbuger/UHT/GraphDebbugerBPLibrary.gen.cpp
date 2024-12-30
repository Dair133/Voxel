// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphDebbuger/Public/GraphDebbugerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphDebbugerBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary();
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraphDebbuger();
// End Cross Module References

// Begin Class UGraphDebbugerBPLibrary
void UGraphDebbugerBPLibrary::StaticRegisterNativesUGraphDebbugerBPLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphDebbugerBPLibrary);
UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary_NoRegister()
{
	return UGraphDebbugerBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "GraphDebbugerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/GraphDebbugerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphDebbugerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphDebbuger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics::ClassParams = {
	&UGraphDebbugerBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary()
{
	if (!Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.OuterSingleton, Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.OuterSingleton;
}
template<> GRAPHDEBBUGER_API UClass* StaticClass<UGraphDebbugerBPLibrary>()
{
	return UGraphDebbugerBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphDebbugerBPLibrary);
UGraphDebbugerBPLibrary::~UGraphDebbugerBPLibrary() {}
// End Class UGraphDebbugerBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphDebbugerBPLibrary, UGraphDebbugerBPLibrary::StaticClass, TEXT("UGraphDebbugerBPLibrary"), &Z_Registration_Info_UClass_UGraphDebbugerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphDebbugerBPLibrary), 2697649621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_920859448(TEXT("/Script/GraphDebbuger"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

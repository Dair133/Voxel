// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AI_MeleeFightSequencesData.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_MeleeFightSequencesData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAI_MeleeFightSequencesData();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAI_MeleeFightSequencesData_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UAI_MeleeFightSequencesData
void UAI_MeleeFightSequencesData::StaticRegisterNativesUAI_MeleeFightSequencesData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAI_MeleeFightSequencesData);
UClass* Z_Construct_UClass_UAI_MeleeFightSequencesData_NoRegister()
{
	return UAI_MeleeFightSequencesData::StaticClass();
}
struct Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI_MeleeFightSequencesData.h" },
		{ "ModuleRelativePath", "Public/AI_MeleeFightSequencesData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequences_MetaData[] = {
		{ "Category", "Sequences" },
		{ "ModuleRelativePath", "Public/AI_MeleeFightSequencesData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequences_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimSequences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimSequences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_MeleeFightSequencesData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::NewProp_AnimSequences_ValueProp = { "AnimSequences", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI, METADATA_PARAMS(0, nullptr) }; // 2706352487
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::NewProp_AnimSequences_Key_KeyProp = { "AnimSequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::NewProp_AnimSequences = { "AnimSequences", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAI_MeleeFightSequencesData, AnimSequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequences_MetaData), NewProp_AnimSequences_MetaData) }; // 2706352487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::NewProp_AnimSequences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::NewProp_AnimSequences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::NewProp_AnimSequences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::ClassParams = {
	&UAI_MeleeFightSequencesData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAI_MeleeFightSequencesData()
{
	if (!Z_Registration_Info_UClass_UAI_MeleeFightSequencesData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAI_MeleeFightSequencesData.OuterSingleton, Z_Construct_UClass_UAI_MeleeFightSequencesData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAI_MeleeFightSequencesData.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAI_MeleeFightSequencesData>()
{
	return UAI_MeleeFightSequencesData::StaticClass();
}
UAI_MeleeFightSequencesData::UAI_MeleeFightSequencesData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_MeleeFightSequencesData);
UAI_MeleeFightSequencesData::~UAI_MeleeFightSequencesData() {}
// End Class UAI_MeleeFightSequencesData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AI_MeleeFightSequencesData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAI_MeleeFightSequencesData, UAI_MeleeFightSequencesData::StaticClass, TEXT("UAI_MeleeFightSequencesData"), &Z_Registration_Info_UClass_UAI_MeleeFightSequencesData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAI_MeleeFightSequencesData), 2296786736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AI_MeleeFightSequencesData_h_1317763877(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AI_MeleeFightSequencesData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AI_MeleeFightSequencesData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

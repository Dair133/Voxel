// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/AISense_BetterSight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_BetterSight() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAISense_BetterSight();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAISense_BetterSight_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Enum AISense_SightTracingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AISense_SightTracingMode;
static UEnum* AISense_SightTracingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AISense_SightTracingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AISense_SightTracingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("AISense_SightTracingMode"));
	}
	return Z_Registration_Info_UEnum_AISense_SightTracingMode.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<AISense_SightTracingMode>()
{
	return AISense_SightTracingMode_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllBodyParts.Name", "AISense_SightTracingMode::AllBodyParts" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AISense_BetterSight.h" },
		{ "OnlyPelvis.Name", "AISense_SightTracingMode::OnlyPelvis" },
		{ "PelvisAndHead.Name", "AISense_SightTracingMode::PelvisAndHead" },
		{ "PelvisHeadArms.Name", "AISense_SightTracingMode::PelvisHeadArms" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AISense_SightTracingMode::OnlyPelvis", (int64)AISense_SightTracingMode::OnlyPelvis },
		{ "AISense_SightTracingMode::PelvisAndHead", (int64)AISense_SightTracingMode::PelvisAndHead },
		{ "AISense_SightTracingMode::PelvisHeadArms", (int64)AISense_SightTracingMode::PelvisHeadArms },
		{ "AISense_SightTracingMode::AllBodyParts", (int64)AISense_SightTracingMode::AllBodyParts },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"AISense_SightTracingMode",
	"AISense_SightTracingMode",
	Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode()
{
	if (!Z_Registration_Info_UEnum_AISense_SightTracingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AISense_SightTracingMode.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AISense_SightTracingMode.InnerSingleton;
}
// End Enum AISense_SightTracingMode

// Begin Class UAISense_BetterSight
void UAISense_BetterSight::StaticRegisterNativesUAISense_BetterSight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_BetterSight);
UClass* Z_Construct_UClass_UAISense_BetterSight_NoRegister()
{
	return UAISense_BetterSight::StaticClass();
}
struct Z_Construct_UClass_UAISense_BetterSight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class UAISense_BetterSight;\n" },
#endif
		{ "IncludePath", "AISense_BetterSight.h" },
		{ "ModuleRelativePath", "Public/AISense_BetterSight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UAISense_BetterSight;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingType_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Nav Generation Config" },
		{ "ModuleRelativePath", "Public/AISense_BetterSight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_BetterSight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISense_BetterSight_Statics::NewProp_TrackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISense_BetterSight_Statics::NewProp_TrackingType = { "TrackingType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_BetterSight, TrackingType), Z_Construct_UEnum_ClimbingNavigation_AISense_SightTracingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingType_MetaData), NewProp_TrackingType_MetaData) }; // 3684869684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_BetterSight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_BetterSight_Statics::NewProp_TrackingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_BetterSight_Statics::NewProp_TrackingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_BetterSight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_BetterSight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense_Sight,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_BetterSight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_BetterSight_Statics::ClassParams = {
	&UAISense_BetterSight::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISense_BetterSight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_BetterSight_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_BetterSight_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_BetterSight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_BetterSight()
{
	if (!Z_Registration_Info_UClass_UAISense_BetterSight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_BetterSight.OuterSingleton, Z_Construct_UClass_UAISense_BetterSight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_BetterSight.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UAISense_BetterSight>()
{
	return UAISense_BetterSight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_BetterSight);
UAISense_BetterSight::~UAISense_BetterSight() {}
// End Class UAISense_BetterSight

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AISense_SightTracingMode_StaticEnum, TEXT("AISense_SightTracingMode"), &Z_Registration_Info_UEnum_AISense_SightTracingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3684869684U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_BetterSight, UAISense_BetterSight::StaticClass, TEXT("UAISense_BetterSight"), &Z_Registration_Info_UClass_UAISense_BetterSight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_BetterSight), 1064467135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_2684883977(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AISense_BetterSight_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

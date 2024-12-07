// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelProject/Enums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VoxelProject();
VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_EBiome();
VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_EBlock();
VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_ECompass();
VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_EGenerationType();
// End Cross Module References

// Begin Enum EBlock
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlock;
static UEnum* EBlock_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlock.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlock.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelProject_EBlock, (UObject*)Z_Construct_UPackage__Script_VoxelProject(), TEXT("EBlock"));
	}
	return Z_Registration_Info_UEnum_EBlock.OuterSingleton;
}
template<> VOXELPROJECT_API UEnum* StaticEnum<EBlock>()
{
	return EBlock_StaticEnum();
}
struct Z_Construct_UEnum_VoxelProject_EBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Air.Name", "EBlock::Air" },
		{ "BlueprintType", "true" },
		{ "DarkGrass.Name", "EBlock::DarkGrass" },
		{ "Dirt.Name", "EBlock::Dirt" },
		{ "Grass.Name", "EBlock::Grass" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "Null.Name", "EBlock::Null" },
		{ "OutOfBounds.Name", "EBlock::OutOfBounds" },
		{ "Sand.Name", "EBlock::Sand" },
		{ "SnowGrass.Name", "EBlock::SnowGrass" },
		{ "Stone.Name", "EBlock::Stone" },
		{ "Water.Name", "EBlock::Water" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlock::Null", (int64)EBlock::Null },
		{ "EBlock::Air", (int64)EBlock::Air },
		{ "EBlock::Stone", (int64)EBlock::Stone },
		{ "EBlock::Dirt", (int64)EBlock::Dirt },
		{ "EBlock::Grass", (int64)EBlock::Grass },
		{ "EBlock::Sand", (int64)EBlock::Sand },
		{ "EBlock::Water", (int64)EBlock::Water },
		{ "EBlock::SnowGrass", (int64)EBlock::SnowGrass },
		{ "EBlock::DarkGrass", (int64)EBlock::DarkGrass },
		{ "EBlock::OutOfBounds", (int64)EBlock::OutOfBounds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelProject_EBlock_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelProject,
	nullptr,
	"EBlock",
	"EBlock",
	Z_Construct_UEnum_VoxelProject_EBlock_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_EBlock_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_EBlock_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelProject_EBlock_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelProject_EBlock()
{
	if (!Z_Registration_Info_UEnum_EBlock.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlock.InnerSingleton, Z_Construct_UEnum_VoxelProject_EBlock_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlock.InnerSingleton;
}
// End Enum EBlock

// Begin Enum EBiome
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBiome;
static UEnum* EBiome_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBiome.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBiome.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelProject_EBiome, (UObject*)Z_Construct_UPackage__Script_VoxelProject(), TEXT("EBiome"));
	}
	return Z_Registration_Info_UEnum_EBiome.OuterSingleton;
}
template<> VOXELPROJECT_API UEnum* StaticEnum<EBiome>()
{
	return EBiome_StaticEnum();
}
struct Z_Construct_UEnum_VoxelProject_EBiome_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "lowMountain_Plains.Name", "EBiome::lowMountain_Plains" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "Mountain.Name", "EBiome::Mountain" },
		{ "Mountain_Plains.Name", "EBiome::Mountain_Plains" },
		{ "Plains.Name", "EBiome::Plains" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBiome::Mountain", (int64)EBiome::Mountain },
		{ "EBiome::Plains", (int64)EBiome::Plains },
		{ "EBiome::Mountain_Plains", (int64)EBiome::Mountain_Plains },
		{ "EBiome::lowMountain_Plains", (int64)EBiome::lowMountain_Plains },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelProject_EBiome_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelProject,
	nullptr,
	"EBiome",
	"EBiome",
	Z_Construct_UEnum_VoxelProject_EBiome_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_EBiome_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_EBiome_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelProject_EBiome_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelProject_EBiome()
{
	if (!Z_Registration_Info_UEnum_EBiome.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBiome.InnerSingleton, Z_Construct_UEnum_VoxelProject_EBiome_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBiome.InnerSingleton;
}
// End Enum EBiome

// Begin Enum ECompass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompass;
static UEnum* ECompass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECompass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECompass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelProject_ECompass, (UObject*)Z_Construct_UPackage__Script_VoxelProject(), TEXT("ECompass"));
	}
	return Z_Registration_Info_UEnum_ECompass.OuterSingleton;
}
template<> VOXELPROJECT_API UEnum* StaticEnum<ECompass>()
{
	return ECompass_StaticEnum();
}
struct Z_Construct_UEnum_VoxelProject_ECompass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Biome = Axis which are generated for this biome\n// i.e. Plains biome below has all 3 axis generated for it\n// Plains biome = 1,2,3\n// Mountain = 1,2\n" },
#endif
		{ "East.Name", "ECompass::East" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "None.Name", "ECompass::None" },
		{ "North.Name", "ECompass::North" },
		{ "Other.Name", "ECompass::Other" },
		{ "South.Name", "ECompass::South" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome = Axis which are generated for this biome\ni.e. Plains biome below has all 3 axis generated for it\nPlains biome = 1,2,3\nMountain = 1,2" },
#endif
		{ "West.Name", "ECompass::West" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECompass::North", (int64)ECompass::North },
		{ "ECompass::South", (int64)ECompass::South },
		{ "ECompass::East", (int64)ECompass::East },
		{ "ECompass::West", (int64)ECompass::West },
		{ "ECompass::Other", (int64)ECompass::Other },
		{ "ECompass::None", (int64)ECompass::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelProject_ECompass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelProject,
	nullptr,
	"ECompass",
	"ECompass",
	Z_Construct_UEnum_VoxelProject_ECompass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_ECompass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_ECompass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelProject_ECompass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelProject_ECompass()
{
	if (!Z_Registration_Info_UEnum_ECompass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompass.InnerSingleton, Z_Construct_UEnum_VoxelProject_ECompass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECompass.InnerSingleton;
}
// End Enum ECompass

// Begin Enum EGenerationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationType;
static UEnum* EGenerationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenerationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelProject_EGenerationType, (UObject*)Z_Construct_UPackage__Script_VoxelProject(), TEXT("EGenerationType"));
	}
	return Z_Registration_Info_UEnum_EGenerationType.OuterSingleton;
}
template<> VOXELPROJECT_API UEnum* StaticEnum<EGenerationType>()
{
	return EGenerationType_StaticEnum();
}
struct Z_Construct_UEnum_VoxelProject_EGenerationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GT_2D.DisplayName", "2D" },
		{ "GT_2D.Name", "EGenerationType::GT_2D" },
		{ "GT_3D.DisplayName", "3D" },
		{ "GT_3D.Name", "EGenerationType::GT_3D" },
		{ "ModuleRelativePath", "Enums.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenerationType::GT_3D", (int64)EGenerationType::GT_3D },
		{ "EGenerationType::GT_2D", (int64)EGenerationType::GT_2D },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelProject,
	nullptr,
	"EGenerationType",
	"EGenerationType",
	Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelProject_EGenerationType()
{
	if (!Z_Registration_Info_UEnum_EGenerationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationType.InnerSingleton, Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenerationType.InnerSingleton;
}
// End Enum EGenerationType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlock_StaticEnum, TEXT("EBlock"), &Z_Registration_Info_UEnum_EBlock, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1931104217U) },
		{ EBiome_StaticEnum, TEXT("EBiome"), &Z_Registration_Info_UEnum_EBiome, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2434338522U) },
		{ ECompass_StaticEnum, TEXT("ECompass"), &Z_Registration_Info_UEnum_ECompass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2082746426U) },
		{ EGenerationType_StaticEnum, TEXT("EGenerationType"), &Z_Registration_Info_UEnum_EGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3880999770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_3926966632(TEXT("/Script/VoxelProject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

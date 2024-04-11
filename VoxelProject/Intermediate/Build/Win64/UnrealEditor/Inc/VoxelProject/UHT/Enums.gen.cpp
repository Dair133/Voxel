// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE5Projects/Voxel/VoxelProject/Source/VoxelProject/Enums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VoxelProject();
	VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_EBiome();
	VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_EBlock();
	VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_EGenerationType();
// End Cross Module References
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelProject_EBlock_Statics::Enumerators[] = {
		{ "EBlock::Null", (int64)EBlock::Null },
		{ "EBlock::Air", (int64)EBlock::Air },
		{ "EBlock::Stone", (int64)EBlock::Stone },
		{ "EBlock::Dirt", (int64)EBlock::Dirt },
		{ "EBlock::Grass", (int64)EBlock::Grass },
		{ "EBlock::Sand", (int64)EBlock::Sand },
		{ "EBlock::Water", (int64)EBlock::Water },
		{ "EBlock::SnowGrass", (int64)EBlock::SnowGrass },
		{ "EBlock::OutOfBounds", (int64)EBlock::OutOfBounds },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelProject_EBlock_Statics::Enum_MetaDataParams[] = {
		{ "Air.Name", "EBlock::Air" },
		{ "BlueprintType", "true" },
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
#endif
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelProject_EBiome_Statics::Enumerators[] = {
		{ "EBiome::Mountain", (int64)EBiome::Mountain },
		{ "EBiome::Plains", (int64)EBiome::Plains },
		{ "EBiome::Mountain_Plains", (int64)EBiome::Mountain_Plains },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelProject_EBiome_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "Mountain.Name", "EBiome::Mountain" },
		{ "Mountain_Plains.Name", "EBiome::Mountain_Plains" },
		{ "Plains.Name", "EBiome::Plains" },
	};
#endif
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::Enumerators[] = {
		{ "EGenerationType::GT_3D", (int64)EGenerationType::GT_3D },
		{ "EGenerationType::GT_2D", (int64)EGenerationType::GT_2D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VoxelProject_EGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Biome = Axis which are generated for this biome\n// i.e. Plains biome below has all 3 axis generated for it\n// Plains biome = 1,2,3\n// Mountain = 1,2\n" },
#endif
		{ "GT_2D.DisplayName", "2D" },
		{ "GT_2D.Name", "EGenerationType::GT_2D" },
		{ "GT_3D.DisplayName", "3D" },
		{ "GT_3D.Name", "EGenerationType::GT_3D" },
		{ "ModuleRelativePath", "Enums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome = Axis which are generated for this biome\ni.e. Plains biome below has all 3 axis generated for it\nPlains biome = 1,2,3\nMountain = 1,2" },
#endif
	};
#endif
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
	struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_Statics::EnumInfo[] = {
		{ EBlock_StaticEnum, TEXT("EBlock"), &Z_Registration_Info_UEnum_EBlock, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3447369902U) },
		{ EBiome_StaticEnum, TEXT("EBiome"), &Z_Registration_Info_UEnum_EBiome, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3560856830U) },
		{ EGenerationType_StaticEnum, TEXT("EGenerationType"), &Z_Registration_Info_UEnum_EGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2628036741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_2780905475(TEXT("/Script/VoxelProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

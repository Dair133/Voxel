// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELPROJECT_Enums_generated_h
#error "Enums.generated.h already included, missing '#pragma once' in Enums.h"
#endif
#define VOXELPROJECT_Enums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Enums_h


#define FOREACH_ENUM_EBLOCK(op) \
	op(EBlock::Null) \
	op(EBlock::Air) \
	op(EBlock::Stone) \
	op(EBlock::Dirt) \
	op(EBlock::Grass) \
	op(EBlock::Sand) \
	op(EBlock::Water) \
	op(EBlock::SnowGrass) \
	op(EBlock::DarkGrass) \
	op(EBlock::OutOfBounds) 

enum class EBlock : uint8;
template<> struct TIsUEnumClass<EBlock> { enum { Value = true }; };
template<> VOXELPROJECT_API UEnum* StaticEnum<EBlock>();

#define FOREACH_ENUM_EBIOME(op) \
	op(EBiome::Mountain) \
	op(EBiome::Plains) \
	op(EBiome::Mountain_Plains) \
	op(EBiome::lowMountain_Plains) 

enum class EBiome : uint8;
template<> struct TIsUEnumClass<EBiome> { enum { Value = true }; };
template<> VOXELPROJECT_API UEnum* StaticEnum<EBiome>();

#define FOREACH_ENUM_ECOMPASS(op) \
	op(ECompass::North) \
	op(ECompass::South) \
	op(ECompass::East) \
	op(ECompass::West) \
	op(ECompass::Other) \
	op(ECompass::None) 

enum class ECompass : uint8;
template<> struct TIsUEnumClass<ECompass> { enum { Value = true }; };
template<> VOXELPROJECT_API UEnum* StaticEnum<ECompass>();

#define FOREACH_ENUM_EGENERATIONTYPE(op) \
	op(EGenerationType::GT_3D) \
	op(EGenerationType::GT_2D) 

enum class EGenerationType : uint8;
template<> struct TIsUEnumClass<EGenerationType> { enum { Value = true }; };
template<> VOXELPROJECT_API UEnum* StaticEnum<EGenerationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

#pragma once
#include "string"

enum class EDirection
{
	Forward, Right, Back, Left, Up, Down
};

UENUM(BlueprintType)
enum class EBlock : uint8
{
	Null, Air, Stone, Dirt, Grass, Sand, Water, SnowGrass,OutOfBounds
};

UENUM(BlueprintType)
enum class EBiome : uint8
{
	Mountain,Plains,Mountain_Plains
};
// Biome = Axis which are generated for this biome
// i.e. Plains biome below has all 3 axis generated for it
// Plains biome = 1,2,3
// Mountain = 1,2



UENUM(BlueprintType)
enum class EGenerationType : uint8
{
	GT_3D UMETA(DisplayName = "3D"),
	GT_2D UMETA(DisplayName = "2D"),
};




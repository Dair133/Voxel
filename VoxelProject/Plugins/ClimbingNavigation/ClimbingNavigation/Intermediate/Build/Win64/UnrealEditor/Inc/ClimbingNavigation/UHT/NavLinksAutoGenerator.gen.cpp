// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/NavLinksAutoGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinksAutoGenerator() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksAutoGenerator();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksAutoGenerator_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinks_FloorEdges();
CLIMBINGNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinks_SingleLine();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin ScriptStruct FNavLinks_SingleLine
static_assert(std::is_polymorphic<FNavLinks_SingleLine>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNavLinks_SingleLine cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavLinks_SingleLine;
class UScriptStruct* FNavLinks_SingleLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinks_SingleLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavLinks_SingleLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavLinks_SingleLine, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("NavLinks_SingleLine"));
	}
	return Z_Registration_Info_UScriptStruct_NavLinks_SingleLine.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FNavLinks_SingleLine>()
{
	return FNavLinks_SingleLine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPoints_MetaData[] = {
		{ "Category", "Nav Poly Edge Info" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Nav Poly Edge Info" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Nav Poly Edge Info" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalLength_MetaData[] = {
		{ "Category", "Nav Poly Edge Info" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavLinks_SingleLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_AllPoints_Inner = { "AllPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_AllPoints = { "AllPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinks_SingleLine, AllPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPoints_MetaData), NewProp_AllPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinks_SingleLine, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinks_SingleLine, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_TotalLength = { "TotalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinks_SingleLine, TotalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalLength_MetaData), NewProp_TotalLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_AllPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_AllPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewProp_TotalLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"NavLinks_SingleLine",
	Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::PropPointers),
	sizeof(FNavLinks_SingleLine),
	alignof(FNavLinks_SingleLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavLinks_SingleLine()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinks_SingleLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavLinks_SingleLine.InnerSingleton, Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavLinks_SingleLine.InnerSingleton;
}
// End ScriptStruct FNavLinks_SingleLine

// Begin ScriptStruct FNavLinks_FloorEdges
static_assert(std::is_polymorphic<FNavLinks_FloorEdges>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNavLinks_FloorEdges cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges;
class UScriptStruct* FNavLinks_FloorEdges::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavLinks_FloorEdges, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("NavLinks_FloorEdges"));
	}
	return Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UScriptStruct* StaticStruct<FNavLinks_FloorEdges>()
{
	return FNavLinks_FloorEdges::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavEdges_MetaData[] = {
		{ "Category", "Nav Poly Edges" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorID_MetaData[] = {
		{ "Category", "Nav Poly Edges" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NavEdges;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavLinks_FloorEdges>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::NewProp_NavEdges_Inner = { "NavEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavLinks_SingleLine, METADATA_PARAMS(0, nullptr) }; // 1658437307
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::NewProp_NavEdges = { "NavEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinks_FloorEdges, NavEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavEdges_MetaData), NewProp_NavEdges_MetaData) }; // 1658437307
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::NewProp_FloorID = { "FloorID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinks_FloorEdges, FloorID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorID_MetaData), NewProp_FloorID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::NewProp_NavEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::NewProp_NavEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::NewProp_FloorID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"NavLinks_FloorEdges",
	Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::PropPointers),
	sizeof(FNavLinks_FloorEdges),
	alignof(FNavLinks_FloorEdges),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavLinks_FloorEdges()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges.InnerSingleton, Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges.InnerSingleton;
}
// End ScriptStruct FNavLinks_FloorEdges

// Begin Class ANavLinksAutoGenerator Function GenerateNavLinks
struct Z_Construct_UFunction_ANavLinksAutoGenerator_GenerateNavLinks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "0) Generator" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinksAutoGenerator_GenerateNavLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinksAutoGenerator, nullptr, "GenerateNavLinks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinksAutoGenerator_GenerateNavLinks_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavLinksAutoGenerator_GenerateNavLinks_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANavLinksAutoGenerator_GenerateNavLinks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinksAutoGenerator_GenerateNavLinks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavLinksAutoGenerator::execGenerateNavLinks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateNavLinks();
	P_NATIVE_END;
}
// End Class ANavLinksAutoGenerator Function GenerateNavLinks

// Begin Class ANavLinksAutoGenerator
void ANavLinksAutoGenerator::StaticRegisterNativesANavLinksAutoGenerator()
{
	UClass* Class = ANavLinksAutoGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateNavLinks", &ANavLinksAutoGenerator::execGenerateNavLinks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavLinksAutoGenerator);
UClass* Z_Construct_UClass_ANavLinksAutoGenerator_NoRegister()
{
	return ANavLinksAutoGenerator::StaticClass();
}
struct Z_Construct_UClass_ANavLinksAutoGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nA class that allows the generation of Nav Links (Dynamic Nav Link Component) within a specified area.\n\nThe algorithm works by finding all navigation mesh edges within the FBox, comparing them with each other, and checking the required conditions based on the input parameters. The results are stored in a separate actor.\n\n*/" },
#endif
		{ "HideCategories", "LevelInstance WorldPartition DataLayers Physics HLOD Replication Networking Input Mobile RayTracing Cooking Rendering Collision Navigation AssetUserData" },
		{ "IncludePath", "NavLinksAutoGenerator.h" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A class that allows the generation of Nav Links (Dynamic Nav Link Component) within a specified area.\n\nThe algorithm works by finding all navigation mesh edges within the FBox, comparing them with each other, and checking the required conditions based on the input parameters. The results are stored in a separate actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Komponent root (BoxCollision)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Komponent root (BoxCollision)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleTolerance_MetaData[] = {
		{ "Category", "Config|Approximation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Angle Tollerance Between Two Segments. Tolerance determining how far lines can deviate from parallelism. A value of 1.0 means that the segments must be parallel to each other.\n" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "1.0" },
		{ "SliderMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angle Tollerance Between Two Segments. Tolerance determining how far lines can deviate from parallelism. A value of 1.0 means that the segments must be parallel to each other." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToleranceScale_MetaData[] = {
		{ "Category", "Config|Approximation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// It has no major effect on function.The value should not be changed\n" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "45" },
		{ "SliderMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It has no major effect on function.The value should not be changed" },
#endif
		{ "UIMax", "45" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentDivisor_MetaData[] = {
		{ "Category", "Config|Approximation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    ENG:\n    Specifies at what distance the section should be divided into smaller fragments. If, for example, NavPolyEdge is 400 cm long and SegmentDivisor is 100 cm, we will finally \n    get 4 points from the segment lying on one straight line (400/100 = 4). In this case, an attempt to create NavLinks will be made for 4 points. These points can be displayed \n    by checking 'bDrawDebugSegmetsPoints' as true.\n\n    PL:\n    Okresla co jaka odleglosc odcinek powinien byc podzielony na mniejsze fragmenty. Je\xef\xbf\xbd""eli przykladowo NavPolyEdge ma dlugosc 400cm a SegmentDivisor wynosi 100cm to finalnie \n    otrzymamy z odcinka 4 punkty lezace na jednej prostej (400/100 = 4). W takim przypadku proba utworzenia NavLinks nastapi dla 4 punkow. Punkty te mozna wyswietlic zaznaczajac \n    'bDrawDebugSegmetsPoints' jako true.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nSpecifies at what distance the section should be divided into smaller fragments. If, for example, NavPolyEdge is 400 cm long and SegmentDivisor is 100 cm, we will finally\nget 4 points from the segment lying on one straight line (400/100 = 4). In this case, an attempt to create NavLinks will be made for 4 points. These points can be displayed\nby checking 'bDrawDebugSegmetsPoints' as true.\n\nPL:\nOkresla co jaka odleglosc odcinek powinien byc podzielony na mniejsze fragmenty. Je\xef\xbf\xbd""eli przykladowo NavPolyEdge ma dlugosc 400cm a SegmentDivisor wynosi 100cm to finalnie\notrzymamy z odcinka 4 punkty lezace na jednej prostej (400/100 = 4). W takim przypadku proba utworzenia NavLinks nastapi dla 4 punkow. Punkty te mozna wyswietlic zaznaczajac\n'bDrawDebugSegmetsPoints' jako true." },
#endif
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstDistBetweenFloors_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Specifies the height of a single FBox when dividing the entire area into smaller ones.It has a large impact on the generation accuracy.These segments can be displayed by setting 'bDrawBoxVolumes' to true.\n" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "500" },
		{ "SliderMin", "10" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the height of a single FBox when dividing the entire area into smaller ones.It has a large impact on the generation accuracy.These segments can be displayed by setting 'bDrawBoxVolumes' to true." },
#endif
		{ "UIMax", "500" },
		{ "UIMin", "10" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinStepHeightBetweenFloors_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// It affects what the minimum height difference between two adjacent NavPolyEdges can be.If the vertical distance is smaller than this parameter, NavLink will not be generated\n" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "500" },
		{ "SliderMin", "10" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It affects what the minimum height difference between two adjacent NavPolyEdges can be.If the vertical distance is smaller than this parameter, NavLink will not be generated" },
#endif
		{ "UIMax", "500" },
		{ "UIMin", "10" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepHeightBetweenFloors_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// It has the same properties as 'MinStepHeightBetweenFloors' but concerns the maximum height difference.\n" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "500" },
		{ "SliderMin", "10" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It has the same properties as 'MinStepHeightBetweenFloors' but concerns the maximum height difference." },
#endif
		{ "UIMax", "1000" },
		{ "UIMin", "10" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDist2D_ToNextLine_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "500" },
		{ "SliderMin", "10" },
		{ "UIMax", "400" },
		{ "UIMin", "20" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowPiorityStepHeightTollerance_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyOneDirectionHeightTollerance_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavLinkBottomOffsetFromEdge_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "50" },
		{ "SliderMin", "0" },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavLinkTopOffsetFromEdge_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "0" },
		{ "SliderMin", "-50" },
		{ "UIMax", "0" },
		{ "UIMin", "-50" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavEdgeLedgthOffset_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shifts the beginning and end of the segment towards its center by a constant amount\n" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
		{ "SliderMax", "0" },
		{ "SliderMin", "-50" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shifts the beginning and end of the segment towards its center by a constant amount" },
#endif
		{ "UIMax", "0" },
		{ "UIMin", "-50" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyEdgeOffsetPostNavAnalyze_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applly navigation edge offset (NavEdgeLedgthOffset) pre or post navigation analyze\n" },
#endif
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applly navigation edge offset (NavEdgeLedgthOffset) pre or post navigation analyze" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowPiorityNavLinkMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckCapsuleHaveRoom_MetaData[] = {
		{ "Category", "Config|Trace" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceCapsuleRadius_MetaData[] = {
		{ "Category", "Config|Trace" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracingChannel_MetaData[] = {
		{ "Category", "Config|Trace" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBoxVolumes_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugNavEdges_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugSegmetsPoints_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracesDebugType_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavLinksAutoGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToleranceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentDivisor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDistBetweenFloors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStepHeightBetweenFloors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeightBetweenFloors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist2D_ToNextLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPiorityStepHeightTollerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OnlyOneDirectionHeightTollerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavLinkBottomOffsetFromEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavLinkTopOffsetFromEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavEdgeLedgthOffset;
	static void NewProp_bApplyEdgeOffsetPostNavAnalyze_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyEdgeOffsetPostNavAnalyze;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LowPiorityNavLinkMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LowPiorityNavLinkMode;
	static void NewProp_bCheckCapsuleHaveRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCapsuleHaveRoom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceCapsuleRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TracingChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawTime;
	static void NewProp_bDrawBoxVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBoxVolumes;
	static void NewProp_bDrawDebugNavEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugNavEdges;
	static void NewProp_bDrawDebugSegmetsPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugSegmetsPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TracesDebugType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavLinksAutoGenerator_GenerateNavLinks, "GenerateNavLinks" }, // 1429630231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinksAutoGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_AngleTolerance = { "AngleTolerance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, AngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleTolerance_MetaData), NewProp_AngleTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_DistanceToleranceScale = { "DistanceToleranceScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, DistanceToleranceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToleranceScale_MetaData), NewProp_DistanceToleranceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_SegmentDivisor = { "SegmentDivisor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, SegmentDivisor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentDivisor_MetaData), NewProp_SegmentDivisor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_ConstDistBetweenFloors = { "ConstDistBetweenFloors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, ConstDistBetweenFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstDistBetweenFloors_MetaData), NewProp_ConstDistBetweenFloors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_MinStepHeightBetweenFloors = { "MinStepHeightBetweenFloors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, MinStepHeightBetweenFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinStepHeightBetweenFloors_MetaData), NewProp_MinStepHeightBetweenFloors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_MaxStepHeightBetweenFloors = { "MaxStepHeightBetweenFloors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, MaxStepHeightBetweenFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStepHeightBetweenFloors_MetaData), NewProp_MaxStepHeightBetweenFloors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_MaxDist2D_ToNextLine = { "MaxDist2D_ToNextLine", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, MaxDist2D_ToNextLine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDist2D_ToNextLine_MetaData), NewProp_MaxDist2D_ToNextLine_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_LowPiorityStepHeightTollerance = { "LowPiorityStepHeightTollerance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, LowPiorityStepHeightTollerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowPiorityStepHeightTollerance_MetaData), NewProp_LowPiorityStepHeightTollerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_OnlyOneDirectionHeightTollerance = { "OnlyOneDirectionHeightTollerance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, OnlyOneDirectionHeightTollerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyOneDirectionHeightTollerance_MetaData), NewProp_OnlyOneDirectionHeightTollerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_NavLinkBottomOffsetFromEdge = { "NavLinkBottomOffsetFromEdge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, NavLinkBottomOffsetFromEdge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavLinkBottomOffsetFromEdge_MetaData), NewProp_NavLinkBottomOffsetFromEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_NavLinkTopOffsetFromEdge = { "NavLinkTopOffsetFromEdge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, NavLinkTopOffsetFromEdge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavLinkTopOffsetFromEdge_MetaData), NewProp_NavLinkTopOffsetFromEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_NavEdgeLedgthOffset = { "NavEdgeLedgthOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, NavEdgeLedgthOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavEdgeLedgthOffset_MetaData), NewProp_NavEdgeLedgthOffset_MetaData) };
void Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bApplyEdgeOffsetPostNavAnalyze_SetBit(void* Obj)
{
	((ANavLinksAutoGenerator*)Obj)->bApplyEdgeOffsetPostNavAnalyze = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bApplyEdgeOffsetPostNavAnalyze = { "bApplyEdgeOffsetPostNavAnalyze", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavLinksAutoGenerator), &Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bApplyEdgeOffsetPostNavAnalyze_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyEdgeOffsetPostNavAnalyze_MetaData), NewProp_bApplyEdgeOffsetPostNavAnalyze_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_LowPiorityNavLinkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_LowPiorityNavLinkMode = { "LowPiorityNavLinkMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, LowPiorityNavLinkMode), Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowPiorityNavLinkMode_MetaData), NewProp_LowPiorityNavLinkMode_MetaData) }; // 3706622743
void Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bCheckCapsuleHaveRoom_SetBit(void* Obj)
{
	((ANavLinksAutoGenerator*)Obj)->bCheckCapsuleHaveRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bCheckCapsuleHaveRoom = { "bCheckCapsuleHaveRoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavLinksAutoGenerator), &Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bCheckCapsuleHaveRoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckCapsuleHaveRoom_MetaData), NewProp_bCheckCapsuleHaveRoom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_TraceCapsuleRadius = { "TraceCapsuleRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, TraceCapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceCapsuleRadius_MetaData), NewProp_TraceCapsuleRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_TracingChannel = { "TracingChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, TracingChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracingChannel_MetaData), NewProp_TracingChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_DebugDrawTime = { "DebugDrawTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, DebugDrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawTime_MetaData), NewProp_DebugDrawTime_MetaData) };
void Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawBoxVolumes_SetBit(void* Obj)
{
	((ANavLinksAutoGenerator*)Obj)->bDrawBoxVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawBoxVolumes = { "bDrawBoxVolumes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavLinksAutoGenerator), &Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawBoxVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawBoxVolumes_MetaData), NewProp_bDrawBoxVolumes_MetaData) };
void Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugNavEdges_SetBit(void* Obj)
{
	((ANavLinksAutoGenerator*)Obj)->bDrawDebugNavEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugNavEdges = { "bDrawDebugNavEdges", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavLinksAutoGenerator), &Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugNavEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugNavEdges_MetaData), NewProp_bDrawDebugNavEdges_MetaData) };
void Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugSegmetsPoints_SetBit(void* Obj)
{
	((ANavLinksAutoGenerator*)Obj)->bDrawDebugSegmetsPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugSegmetsPoints = { "bDrawDebugSegmetsPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavLinksAutoGenerator), &Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugSegmetsPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugSegmetsPoints_MetaData), NewProp_bDrawDebugSegmetsPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_TracesDebugType = { "TracesDebugType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinksAutoGenerator, TracesDebugType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracesDebugType_MetaData), NewProp_TracesDebugType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavLinksAutoGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_AngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_DistanceToleranceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_SegmentDivisor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_ConstDistBetweenFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_MinStepHeightBetweenFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_MaxStepHeightBetweenFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_MaxDist2D_ToNextLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_LowPiorityStepHeightTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_OnlyOneDirectionHeightTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_NavLinkBottomOffsetFromEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_NavLinkTopOffsetFromEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_NavEdgeLedgthOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bApplyEdgeOffsetPostNavAnalyze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_LowPiorityNavLinkMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_LowPiorityNavLinkMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bCheckCapsuleHaveRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_TraceCapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_TracingChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_DebugDrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawBoxVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugNavEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_bDrawDebugSegmetsPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinksAutoGenerator_Statics::NewProp_TracesDebugType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinksAutoGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavLinksAutoGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinksAutoGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavLinksAutoGenerator_Statics::ClassParams = {
	&ANavLinksAutoGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANavLinksAutoGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinksAutoGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinksAutoGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavLinksAutoGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavLinksAutoGenerator()
{
	if (!Z_Registration_Info_UClass_ANavLinksAutoGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavLinksAutoGenerator.OuterSingleton, Z_Construct_UClass_ANavLinksAutoGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavLinksAutoGenerator.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<ANavLinksAutoGenerator>()
{
	return ANavLinksAutoGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinksAutoGenerator);
ANavLinksAutoGenerator::~ANavLinksAutoGenerator() {}
// End Class ANavLinksAutoGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavLinks_SingleLine::StaticStruct, Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics::NewStructOps, TEXT("NavLinks_SingleLine"), &Z_Registration_Info_UScriptStruct_NavLinks_SingleLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavLinks_SingleLine), 1658437307U) },
		{ FNavLinks_FloorEdges::StaticStruct, Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics::NewStructOps, TEXT("NavLinks_FloorEdges"), &Z_Registration_Info_UScriptStruct_NavLinks_FloorEdges, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavLinks_FloorEdges), 445298146U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavLinksAutoGenerator, ANavLinksAutoGenerator::StaticClass, TEXT("ANavLinksAutoGenerator"), &Z_Registration_Info_UClass_ANavLinksAutoGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavLinksAutoGenerator), 1334871968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_1932564859(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

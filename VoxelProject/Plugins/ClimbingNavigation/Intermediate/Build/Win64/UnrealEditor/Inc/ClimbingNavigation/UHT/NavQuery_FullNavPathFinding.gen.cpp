// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/NavQuery_FullNavPathFinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavQuery_FullNavPathFinding() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_FullNavPathFinding();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_FullNavPathFinding_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UNavQuery_FullNavPathFinding
void UNavQuery_FullNavPathFinding::StaticRegisterNativesUNavQuery_FullNavPathFinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavQuery_FullNavPathFinding);
UClass* Z_Construct_UClass_UNavQuery_FullNavPathFinding_NoRegister()
{
	return UNavQuery_FullNavPathFinding::StaticClass();
}
struct Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NavQuery_FullNavPathFinding.h" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchBoxExtendUp_MetaData[] = {
		{ "Category", "Query Config|Projection To Navigation" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchBoxExtendDown_MetaData[] = {
		{ "Category", "Query Config|Projection To Navigation" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterationsPerSide_MetaData[] = {
		{ "Category", "Query Config|Projection To Navigation" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffsets_MetaData[] = {
		{ "Category", "Query Config|Projection To Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//X = offset for searching upper , Y = searching below SearchOring position\n" },
#endif
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X = offset for searching upper , Y = searching below SearchOring position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindingNavActorRadius_MetaData[] = {
		{ "Category", "Query Config|Nav Climb Actor" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Query Config|Nav Climb Actor" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValidPathLenght_MetaData[] = {
		{ "Category", "Query Config|Other" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValidPathLenght_MetaData[] = {
		{ "Category", "Query Config|Other" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistBetweenLedgeToTarget_MetaData[] = {
		{ "Category", "Query Config|Other" },
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistBetweenProjectToLedge_MetaData[] = {
		{ "Category", "Query Config|Other" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Maximum accetable distance between projected point on NavigationMesh to first nearest NavClimbing Ledge point\n" },
#endif
		{ "ModuleRelativePath", "Public/NavQuery_FullNavPathFinding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum accetable distance between projected point on NavigationMesh to first nearest NavClimbing Ledge point" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchBoxExtendUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchBoxExtendDown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterationsPerSide;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardOffsets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FindingNavActorRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValidPathLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValidPathLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistBetweenLedgeToTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistBetweenProjectToLedge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavQuery_FullNavPathFinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_SearchBoxExtendUp = { "SearchBoxExtendUp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, SearchBoxExtendUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchBoxExtendUp_MetaData), NewProp_SearchBoxExtendUp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_SearchBoxExtendDown = { "SearchBoxExtendDown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, SearchBoxExtendDown), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchBoxExtendDown_MetaData), NewProp_SearchBoxExtendDown_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxIterationsPerSide = { "MaxIterationsPerSide", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, MaxIterationsPerSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterationsPerSide_MetaData), NewProp_MaxIterationsPerSide_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_ForwardOffsets = { "ForwardOffsets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, ForwardOffsets), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffsets_MetaData), NewProp_ForwardOffsets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_FindingNavActorRadius = { "FindingNavActorRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, FindingNavActorRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindingNavActorRadius_MetaData), NewProp_FindingNavActorRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, CollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfileName_MetaData), NewProp_CollisionProfileName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxValidPathLenght = { "MaxValidPathLenght", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, MaxValidPathLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValidPathLenght_MetaData), NewProp_MaxValidPathLenght_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MinValidPathLenght = { "MinValidPathLenght", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, MinValidPathLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValidPathLenght_MetaData), NewProp_MinValidPathLenght_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxDistBetweenLedgeToTarget = { "MaxDistBetweenLedgeToTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, MaxDistBetweenLedgeToTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistBetweenLedgeToTarget_MetaData), NewProp_MaxDistBetweenLedgeToTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxDistBetweenProjectToLedge = { "MaxDistBetweenProjectToLedge", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavQuery_FullNavPathFinding, MaxDistBetweenProjectToLedge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistBetweenProjectToLedge_MetaData), NewProp_MaxDistBetweenProjectToLedge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_SearchBoxExtendUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_SearchBoxExtendDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxIterationsPerSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_ForwardOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_FindingNavActorRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxValidPathLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MinValidPathLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxDistBetweenLedgeToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::NewProp_MaxDistBetweenProjectToLedge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::ClassParams = {
	&UNavQuery_FullNavPathFinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavQuery_FullNavPathFinding()
{
	if (!Z_Registration_Info_UClass_UNavQuery_FullNavPathFinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavQuery_FullNavPathFinding.OuterSingleton, Z_Construct_UClass_UNavQuery_FullNavPathFinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavQuery_FullNavPathFinding.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UNavQuery_FullNavPathFinding>()
{
	return UNavQuery_FullNavPathFinding::StaticClass();
}
UNavQuery_FullNavPathFinding::UNavQuery_FullNavPathFinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavQuery_FullNavPathFinding);
UNavQuery_FullNavPathFinding::~UNavQuery_FullNavPathFinding() {}
// End Class UNavQuery_FullNavPathFinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_FullNavPathFinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavQuery_FullNavPathFinding, UNavQuery_FullNavPathFinding::StaticClass, TEXT("UNavQuery_FullNavPathFinding"), &Z_Registration_Info_UClass_UNavQuery_FullNavPathFinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavQuery_FullNavPathFinding), 2931289871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_FullNavPathFinding_h_1564446492(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_FullNavPathFinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_FullNavPathFinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

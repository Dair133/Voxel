// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelProject/VoxelGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGameModeBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VoxelProject();
VOXELPROJECT_API UClass* Z_Construct_UClass_AVoxelGameModeBase();
VOXELPROJECT_API UClass* Z_Construct_UClass_AVoxelGameModeBase_NoRegister();
// End Cross Module References

// Begin Class AVoxelGameModeBase Function OnCheckUpdateChunks
struct Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelGameModeBase, nullptr, "OnCheckUpdateChunks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelGameModeBase::execOnCheckUpdateChunks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCheckUpdateChunks();
	P_NATIVE_END;
}
// End Class AVoxelGameModeBase Function OnCheckUpdateChunks

// Begin Class AVoxelGameModeBase
void AVoxelGameModeBase::StaticRegisterNativesAVoxelGameModeBase()
{
	UClass* Class = AVoxelGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCheckUpdateChunks", &AVoxelGameModeBase::execOnCheckUpdateChunks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelGameModeBase);
UClass* Z_Construct_UClass_AVoxelGameModeBase_NoRegister()
{
	return AVoxelGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AVoxelGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VoxelGameModeBase.h" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxViewDst_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UProperties\n" },
#endif
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UProperties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkUpdateTickSpeed_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxViewDst;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlockSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_chunkUpdateTickSpeed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChunkToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks, "OnCheckUpdateChunks" }, // 172650127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_maxViewDst = { "maxViewDst", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, maxViewDst), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxViewDst_MetaData), NewProp_maxViewDst_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, ChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_MetaData), NewProp_ChunkSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, BlockSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockSize_MetaData), NewProp_BlockSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_chunkUpdateTickSpeed = { "chunkUpdateTickSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, chunkUpdateTickSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkUpdateTickSpeed_MetaData), NewProp_chunkUpdateTickSpeed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkToSpawn = { "ChunkToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, ChunkToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkToSpawn_MetaData), NewProp_ChunkToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_maxViewDst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_BlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_chunkUpdateTickSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelGameModeBase_Statics::ClassParams = {
	&AVoxelGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVoxelGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::PropPointers),
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelGameModeBase()
{
	if (!Z_Registration_Info_UClass_AVoxelGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelGameModeBase.OuterSingleton, Z_Construct_UClass_AVoxelGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelGameModeBase.OuterSingleton;
}
template<> VOXELPROJECT_API UClass* StaticClass<AVoxelGameModeBase>()
{
	return AVoxelGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelGameModeBase);
AVoxelGameModeBase::~AVoxelGameModeBase() {}
// End Class AVoxelGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelGameModeBase, AVoxelGameModeBase::StaticClass, TEXT("AVoxelGameModeBase"), &Z_Registration_Info_UClass_AVoxelGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelGameModeBase), 2691753695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_3554595949(TEXT("/Script/VoxelProject"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

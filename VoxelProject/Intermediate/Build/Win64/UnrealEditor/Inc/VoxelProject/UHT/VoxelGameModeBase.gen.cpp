// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelProject/VoxelGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VoxelProject();
	VOXELPROJECT_API UClass* Z_Construct_UClass_AVoxelGameModeBase();
	VOXELPROJECT_API UClass* Z_Construct_UClass_AVoxelGameModeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVoxelGameModeBase::execOnCheckUpdateChunks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCheckUpdateChunks();
		P_NATIVE_END;
	}
	void AVoxelGameModeBase::StaticRegisterNativesAVoxelGameModeBase()
	{
		UClass* Class = AVoxelGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCheckUpdateChunks", &AVoxelGameModeBase::execOnCheckUpdateChunks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelGameModeBase);
	UClass* Z_Construct_UClass_AVoxelGameModeBase_NoRegister()
	{
		return AVoxelGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxViewDst_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxViewDst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkUpdateTickSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_chunkUpdateTickSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChunkToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTreeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTreeMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelGameModeBase_OnCheckUpdateChunks, "OnCheckUpdateChunks" }, // 741134342
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VoxelGameModeBase.h" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_maxViewDst_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UProperties\n" },
#endif
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UProperties" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_maxViewDst = { "maxViewDst", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, maxViewDst), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_maxViewDst_MetaData), Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_maxViewDst_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, ChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkSize_MetaData), Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_BlockSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, BlockSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_BlockSize_MetaData), Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_BlockSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_chunkUpdateTickSpeed_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_chunkUpdateTickSpeed = { "chunkUpdateTickSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, chunkUpdateTickSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_chunkUpdateTickSpeed_MetaData), Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_chunkUpdateTickSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkToSpawn = { "ChunkToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, ChunkToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkToSpawn_MetaData), Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_MyTreeMesh_MetaData[] = {
		{ "ModuleRelativePath", "VoxelGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_MyTreeMesh = { "MyTreeMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelGameModeBase, MyTreeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_MyTreeMesh_MetaData), Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_MyTreeMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_maxViewDst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_BlockSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_chunkUpdateTickSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_ChunkToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelGameModeBase_Statics::NewProp_MyTreeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelGameModeBase>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelGameModeBase_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelGameModeBase, AVoxelGameModeBase::StaticClass, TEXT("AVoxelGameModeBase"), &Z_Registration_Info_UClass_AVoxelGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelGameModeBase), 1096474162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_704761196(TEXT("/Script/VoxelProject"),
		Z_CompiledInDeferFile_FID_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoxelProject_Source_VoxelProject_VoxelGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

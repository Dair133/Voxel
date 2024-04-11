// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE5Projects/Voxel/VoxelProject/Source/VoxelProject/Chunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunk() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VoxelProject();
	VOXELPROJECT_API UClass* Z_Construct_UClass_AChunk();
	VOXELPROJECT_API UClass* Z_Construct_UClass_AChunk_NoRegister();
	VOXELPROJECT_API UEnum* Z_Construct_UEnum_VoxelProject_EBlock();
// End Cross Module References
	DEFINE_FUNCTION(AChunk::execModifyVoxel)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldPosition);
		P_GET_ENUM(EBlock,Z_Param_Block);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyVoxel(Z_Param_WorldPosition,EBlock(Z_Param_Block));
		P_NATIVE_END;
	}
	void AChunk::StaticRegisterNativesAChunk()
	{
		UClass* Class = AChunk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyVoxel", &AChunk::execModifyVoxel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChunk_ModifyVoxel_Statics
	{
		struct Chunk_eventModifyVoxel_Parms
		{
			FVector WorldPosition;
			EBlock Block;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Block_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Block;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Chunk_eventModifyVoxel_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::NewProp_Block_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Chunk_eventModifyVoxel_Parms, Block), Z_Construct_UEnum_VoxelProject_EBlock, METADATA_PARAMS(0, nullptr) }; // 3447369902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::NewProp_Block_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::NewProp_Block,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChunkFunction" },
		{ "ModuleRelativePath", "Chunk.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunk, nullptr, "ModifyVoxel", nullptr, nullptr, Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::Chunk_eventModifyVoxel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::Chunk_eventModifyVoxel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AChunk_ModifyVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunk_ModifyVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunk);
	UClass* Z_Construct_UClass_AChunk_NoRegister()
	{
		return AChunk::StaticClass();
	}
	struct Z_Construct_UClass_AChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTreeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTreeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmtBlocksVertically_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmtBlocksVertically;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AChunk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChunk_ModifyVoxel, "ModifyVoxel" }, // 2446128418
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chunk.h" },
		{ "ModuleRelativePath", "Chunk.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Chunk.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunk, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_Size_MetaData), Z_Construct_UClass_AChunk_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Chunk.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunk, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_AChunk_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Chunk.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunk, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_BaseMaterial_MetaData), Z_Construct_UClass_AChunk_Statics::NewProp_BaseMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_MyTreeMesh_MetaData[] = {
		{ "ModuleRelativePath", "Chunk.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_MyTreeMesh = { "MyTreeMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunk, MyTreeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_MyTreeMesh_MetaData), Z_Construct_UClass_AChunk_Statics::NewProp_MyTreeMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_AmtBlocksVertically_MetaData[] = {
		{ "Category", "Chunk" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = \"Chunk\")\n//     void ModifyVoxel(const FIntVector Position, const EBlock Block);\n" },
#endif
		{ "ModuleRelativePath", "Chunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Chunk\")\n    void ModifyVoxel(const FIntVector Position, const EBlock Block);" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_AmtBlocksVertically = { "AmtBlocksVertically", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunk, AmtBlocksVertically), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_AmtBlocksVertically_MetaData), Z_Construct_UClass_AChunk_Statics::NewProp_AmtBlocksVertically_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_BaseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_MyTreeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_AmtBlocksVertically,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunk_Statics::ClassParams = {
		&AChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChunk()
	{
		if (!Z_Registration_Info_UClass_AChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunk.OuterSingleton, Z_Construct_UClass_AChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChunk.OuterSingleton;
	}
	template<> VOXELPROJECT_API UClass* StaticClass<AChunk>()
	{
		return AChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunk);
	AChunk::~AChunk() {}
	struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChunk, AChunk::StaticClass, TEXT("AChunk"), &Z_Registration_Info_UClass_AChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunk), 879084576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_2029649991(TEXT("/Script/VoxelProject"),
		Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

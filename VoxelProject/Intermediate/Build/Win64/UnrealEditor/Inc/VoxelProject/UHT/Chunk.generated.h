// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chunk.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlock : uint8;
#ifdef VOXELPROJECT_Chunk_generated_h
#error "Chunk.generated.h already included, missing '#pragma once' in Chunk.h"
#endif
#define VOXELPROJECT_Chunk_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execModifyVoxel);


#define FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChunk(); \
	friend struct Z_Construct_UClass_AChunk_Statics; \
public: \
	DECLARE_CLASS(AChunk, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoxelProject"), NO_API) \
	DECLARE_SERIALIZER(AChunk)


#define FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChunk(AChunk&&); \
	AChunk(const AChunk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChunk) \
	NO_API virtual ~AChunk();


#define FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_24_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELPROJECT_API UClass* StaticClass<class AChunk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Source_VoxelProject_Chunk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

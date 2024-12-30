// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAnimGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAKUBANIMNODES_MyAnimGraphNode_generated_h
#error "MyAnimGraphNode.generated.h already included, missing '#pragma once' in MyAnimGraphNode.h"
#endif
#define JAKUBANIMNODES_MyAnimGraphNode_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LayeredBone(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_LayeredBone, UAnimGraphNode_BlendListBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JakubAnimNodes"), JAKUBANIMNODES_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_LayeredBone)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	JAKUBANIMNODES_API UAnimGraphNode_LayeredBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LayeredBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(JAKUBANIMNODES_API, UAnimGraphNode_LayeredBone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LayeredBone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_LayeredBone(UAnimGraphNode_LayeredBone&&); \
	UAnimGraphNode_LayeredBone(const UAnimGraphNode_LayeredBone&); \
public: \
	JAKUBANIMNODES_API virtual ~UAnimGraphNode_LayeredBone();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_10_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_13_INCLASS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAKUBANIMNODES_API UClass* StaticClass<class UAnimGraphNode_LayeredBone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

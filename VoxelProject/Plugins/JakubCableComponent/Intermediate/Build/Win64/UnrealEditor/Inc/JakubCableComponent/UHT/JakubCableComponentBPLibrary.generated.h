// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubCableComponentBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef JAKUBCABLECOMPONENT_JakubCableComponentBPLibrary_generated_h
#error "JakubCableComponentBPLibrary.generated.h already included, missing '#pragma once' in JakubCableComponentBPLibrary.h"
#endif
#define JAKUBCABLECOMPONENT_JakubCableComponentBPLibrary_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_RPC_WRAPPERS \
	DECLARE_FUNCTION(execPerformPIDControl); \
	DECLARE_FUNCTION(execGetCollisionTraceFlag);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUJakubCableComponentBPLibrary(); \
	friend struct Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UJakubCableComponentBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), NO_API) \
	DECLARE_SERIALIZER(UJakubCableComponentBPLibrary)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubCableComponentBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubCableComponentBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubCableComponentBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubCableComponentBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJakubCableComponentBPLibrary(UJakubCableComponentBPLibrary&&); \
	UJakubCableComponentBPLibrary(const UJakubCableComponentBPLibrary&); \
public: \
	NO_API virtual ~UJakubCableComponentBPLibrary();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_8_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_RPC_WRAPPERS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_INCLASS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<class UJakubCableComponentBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

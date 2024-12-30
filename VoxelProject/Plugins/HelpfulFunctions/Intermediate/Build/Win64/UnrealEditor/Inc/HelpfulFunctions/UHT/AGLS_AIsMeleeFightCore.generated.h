// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_AIsMeleeFightCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FAGLS_FinishersDataForAI;
class ACharacter;
struct FAGLS_FinishersDataForAI;
struct FLinearColor;
#ifdef HELPFULFUNCTIONS_AGLS_AIsMeleeFightCore_generated_h
#error "AGLS_AIsMeleeFightCore.generated.h already included, missing '#pragma once' in AGLS_AIsMeleeFightCore.h"
#endif
#define HELPFULFUNCTIONS_AGLS_AIsMeleeFightCore_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugPath); \
	DECLARE_FUNCTION(execDebugPoint); \
	DECLARE_FUNCTION(execDebugLine); \
	DECLARE_FUNCTION(execDebugSphere); \
	DECLARE_FUNCTION(execGetAllSequencesData); \
	DECLARE_FUNCTION(execChooseBestAnimSeq); \
	DECLARE_FUNCTION(execGetFinisherTimeElapsed); \
	DECLARE_FUNCTION(execTryInterruptFinisherAction); \
	DECLARE_FUNCTION(execDoWhenFinisherAction); \
	DECLARE_FUNCTION(execTryStartFinisherAction); \
	DECLARE_FUNCTION(execCheckCanStartFinisher);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_CALLBACK_WRAPPERS
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGLS_AIsMeleeFightCore(); \
	friend struct Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics; \
public: \
	DECLARE_CLASS(UAGLS_AIsMeleeFightCore, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UAGLS_AIsMeleeFightCore)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAGLS_AIsMeleeFightCore(UAGLS_AIsMeleeFightCore&&); \
	UAGLS_AIsMeleeFightCore(const UAGLS_AIsMeleeFightCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGLS_AIsMeleeFightCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_AIsMeleeFightCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGLS_AIsMeleeFightCore) \
	NO_API virtual ~UAGLS_AIsMeleeFightCore();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_12_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_CALLBACK_WRAPPERS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UAGLS_AIsMeleeFightCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

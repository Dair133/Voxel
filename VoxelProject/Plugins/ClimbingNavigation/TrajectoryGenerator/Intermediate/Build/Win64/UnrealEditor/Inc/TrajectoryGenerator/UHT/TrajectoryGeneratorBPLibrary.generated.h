// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrajectoryGeneratorBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UCurveVector;
class UObject;
enum class ECurveVectorAxis : uint8;
#ifdef TRAJECTORYGENERATOR_TrajectoryGeneratorBPLibrary_generated_h
#error "TrajectoryGeneratorBPLibrary.generated.h already included, missing '#pragma once' in TrajectoryGeneratorBPLibrary.h"
#endif
#define TRAJECTORYGENERATOR_TrajectoryGeneratorBPLibrary_generated_h

#define FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveKeyFrameFromCurveVector); \
	DECLARE_FUNCTION(execRemoveKeyFrameFromCurveFloat); \
	DECLARE_FUNCTION(execGetVectorValueAtKeyFrame); \
	DECLARE_FUNCTION(execGetFloatValueAtKeyFrame); \
	DECLARE_FUNCTION(execGetNumKeyFramesCurveVector); \
	DECLARE_FUNCTION(execGetNumKeyFramesCurveFloat); \
	DECLARE_FUNCTION(execLoadAssetsFromPath); \
	DECLARE_FUNCTION(execCreateCurveFloatAsset); \
	DECLARE_FUNCTION(execCreateCurveVectorAsset); \
	DECLARE_FUNCTION(execClearAllKeysFromCurveVector); \
	DECLARE_FUNCTION(execClearAllKeysFromCurveFloat); \
	DECLARE_FUNCTION(execAddKeyToCurveFloat); \
	DECLARE_FUNCTION(execAddKeyToCurveVector); \
	DECLARE_FUNCTION(execTrajectoryGeneratorSampleFunction);


#define FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUTrajectoryGeneratorBPLibrary(); \
	friend struct Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTrajectoryGeneratorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrajectoryGenerator"), NO_API) \
	DECLARE_SERIALIZER(UTrajectoryGeneratorBPLibrary)


#define FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrajectoryGeneratorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrajectoryGeneratorBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrajectoryGeneratorBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrajectoryGeneratorBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTrajectoryGeneratorBPLibrary(UTrajectoryGeneratorBPLibrary&&); \
	UTrajectoryGeneratorBPLibrary(const UTrajectoryGeneratorBPLibrary&); \
public: \
	NO_API virtual ~UTrajectoryGeneratorBPLibrary();


#define FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_25_PROLOG
#define FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_28_RPC_WRAPPERS \
	FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_28_INCLASS \
	FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRAJECTORYGENERATOR_API UClass* StaticClass<class UTrajectoryGeneratorBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_AGLS_v1_2_1_AGLS_v1_2_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h


#define FOREACH_ENUM_ECURVEVECTORAXIS(op) \
	op(ECurveVectorAxis::X) \
	op(ECurveVectorAxis::Y) \
	op(ECurveVectorAxis::Z) 

enum class ECurveVectorAxis : uint8;
template<> struct TIsUEnumClass<ECurveVectorAxis> { enum { Value = true }; };
template<> TRAJECTORYGENERATOR_API UEnum* StaticEnum<ECurveVectorAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubCablePhysic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
struct FCableAttachPoint;
struct FExposedCableParticle;
#ifdef JAKUBCABLECOMPONENT_JakubCablePhysic_generated_h
#error "JakubCablePhysic.generated.h already included, missing '#pragma once' in JakubCablePhysic.h"
#endif
#define JAKUBCABLECOMPONENT_JakubCablePhysic_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCableAttachPoint_Statics; \
	JAKUBCABLECOMPONENT_API static class UScriptStruct* StaticStruct();


template<> JAKUBCABLECOMPONENT_API UScriptStruct* StaticStruct<struct FCableAttachPoint>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedCableParticle_Statics; \
	JAKUBCABLECOMPONENT_API static class UScriptStruct* StaticStruct();


template<> JAKUBCABLECOMPONENT_API UScriptStruct* StaticStruct<struct FExposedCableParticle>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReduceForceForParticles); \
	DECLARE_FUNCTION(execUseForceToTightenTheRope); \
	DECLARE_FUNCTION(execGetAnyPointIsColliding); \
	DECLARE_FUNCTION(execBreakAttachIfSegmentIsStretched); \
	DECLARE_FUNCTION(execGetStretchTolleranceValuePerSegment); \
	DECLARE_FUNCTION(execUpdateCableLength); \
	DECLARE_FUNCTION(execSetParticleLocation); \
	DECLARE_FUNCTION(execGetCableSpaceLenghtForSwinging); \
	DECLARE_FUNCTION(execApplyConstForceToParticle); \
	DECLARE_FUNCTION(execAddImpulseToParticle); \
	DECLARE_FUNCTION(execUpdateSubstepTime); \
	DECLARE_FUNCTION(execGetIndicesOfAttachedPoints); \
	DECLARE_FUNCTION(execGetCableCurrentSegmentsLength); \
	DECLARE_FUNCTION(execGetCableInitSegmentsLength); \
	DECLARE_FUNCTION(execGetCableParticlesStructure); \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execDetachParticleFrom); \
	DECLARE_FUNCTION(execGetAttachStructure); \
	DECLARE_FUNCTION(execGetAttachedActors); \
	DECLARE_FUNCTION(execSetAttachIndexToActor); \
	DECLARE_FUNCTION(execSetAttachIndexToComponent);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUJakubCablePhysic(); \
	friend struct Z_Construct_UClass_UJakubCablePhysic_Statics; \
public: \
	DECLARE_CLASS(UJakubCablePhysic, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), NO_API) \
	DECLARE_SERIALIZER(UJakubCablePhysic)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubCablePhysic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubCablePhysic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubCablePhysic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubCablePhysic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJakubCablePhysic(UJakubCablePhysic&&); \
	UJakubCablePhysic(const UJakubCablePhysic&); \
public: \
	NO_API virtual ~UJakubCablePhysic();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_62_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_RPC_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_INCLASS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<class UJakubCablePhysic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

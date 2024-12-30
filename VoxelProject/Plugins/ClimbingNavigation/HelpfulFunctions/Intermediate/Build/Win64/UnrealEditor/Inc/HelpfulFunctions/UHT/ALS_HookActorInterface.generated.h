// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_HookActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef HELPFULFUNCTIONS_ALS_HookActorInterface_generated_h
#error "ALS_HookActorInterface.generated.h already included, missing '#pragma once' in ALS_HookActorInterface.h"
#endif
#define HELPFULFUNCTIONS_ALS_HookActorInterface_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HAFSI_Get_ParticleNormalValidation_Implementation(float& Angle) {}; \
	virtual void HAFSI_DetachRopeAndRollUp_Implementation() {}; \
	virtual void HAFSI_Get_HookTargetComp_Implementation(UPrimitiveComponent*& ForwardComponent, UPrimitiveComponent*& BackwardComponent) {}; \
	virtual void HAFSI_Play_AnimOut_Implementation() {}; \
	virtual void HAFSI_Play_AnimIn_Implementation() {}; \
	virtual void HAFSI_Set_IsUsed_Implementation(bool& Updated, bool Using) {}; \
	virtual void HAFSI_Get_ItsCurrentUsed_Implementation(bool& ItsUsed) {}; \
	virtual void HAFSI_Get_IsHookActor_Implementation(bool& IsActorForHook) {}; \
	virtual void HAFSI_Get_HookTargetMeshPosition_Implementation(FVector& Position) {}; \
	DECLARE_FUNCTION(execHAFSI_Get_ParticleNormalValidation); \
	DECLARE_FUNCTION(execHAFSI_DetachRopeAndRollUp); \
	DECLARE_FUNCTION(execHAFSI_Get_HookTargetComp); \
	DECLARE_FUNCTION(execHAFSI_Play_AnimOut); \
	DECLARE_FUNCTION(execHAFSI_Play_AnimIn); \
	DECLARE_FUNCTION(execHAFSI_Set_IsUsed); \
	DECLARE_FUNCTION(execHAFSI_Get_ItsCurrentUsed); \
	DECLARE_FUNCTION(execHAFSI_Get_IsHookActor); \
	DECLARE_FUNCTION(execHAFSI_Get_HookTargetMeshPosition);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UALS_HookActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UALS_HookActorInterface(UALS_HookActorInterface&&); \
	UALS_HookActorInterface(const UALS_HookActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UALS_HookActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALS_HookActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UALS_HookActorInterface) \
	HELPFULFUNCTIONS_API virtual ~UALS_HookActorInterface();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUALS_HookActorInterface(); \
	friend struct Z_Construct_UClass_UALS_HookActorInterface_Statics; \
public: \
	DECLARE_CLASS(UALS_HookActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), HELPFULFUNCTIONS_API) \
	DECLARE_SERIALIZER(UALS_HookActorInterface)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IALS_HookActorInterface() {} \
public: \
	typedef UALS_HookActorInterface UClassType; \
	typedef IALS_HookActorInterface ThisClass; \
	static void Execute_HAFSI_DetachRopeAndRollUp(UObject* O); \
	static void Execute_HAFSI_Get_HookTargetComp(UObject* O, UPrimitiveComponent*& ForwardComponent, UPrimitiveComponent*& BackwardComponent); \
	static void Execute_HAFSI_Get_HookTargetMeshPosition(UObject* O, FVector& Position); \
	static void Execute_HAFSI_Get_IsHookActor(UObject* O, bool& IsActorForHook); \
	static void Execute_HAFSI_Get_ItsCurrentUsed(UObject* O, bool& ItsUsed); \
	static void Execute_HAFSI_Get_ParticleNormalValidation(UObject* O, float& Angle); \
	static void Execute_HAFSI_Play_AnimIn(UObject* O); \
	static void Execute_HAFSI_Play_AnimOut(UObject* O); \
	static void Execute_HAFSI_Set_IsUsed(UObject* O, bool& Updated, bool Using); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_10_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UALS_HookActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

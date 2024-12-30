// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_HumanAI_InterfaceCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef HELPFULFUNCTIONS_ALS_HumanAI_InterfaceCpp_generated_h
#error "ALS_HumanAI_InterfaceCpp.generated.h already included, missing '#pragma once' in ALS_HumanAI_InterfaceCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_HumanAI_InterfaceCpp_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HAI_DrawDebugTraces_Implementation(bool& DrawDebug) {}; \
	virtual void HAI_GetDetectedEnemy_Implementation(bool& DetectedEnemy, bool& IsSelfEnemy) {}; \
	virtual void HAI_GetHumanAIValues_Implementation(bool& HavePistol, bool& HaveRifle, bool& IsSiting, bool& IsHostage) {}; \
	virtual void HAI_GetCharacterType_Implementation(bool& IsSolider, bool& IsZombie) {}; \
	virtual void HAI_GetEnemyState_Implementation(bool& IsEnemy) {}; \
	virtual void HAI_GetDeathState_Implementation(bool& IsDeath) {}; \
	DECLARE_FUNCTION(execHAI_DrawDebugTraces); \
	DECLARE_FUNCTION(execHAI_GetDetectedEnemy); \
	DECLARE_FUNCTION(execHAI_GetHumanAIValues); \
	DECLARE_FUNCTION(execHAI_GetCharacterType); \
	DECLARE_FUNCTION(execHAI_GetEnemyState); \
	DECLARE_FUNCTION(execHAI_GetDeathState);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_CALLBACK_WRAPPERS
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UALS_HumanAI_InterfaceCpp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UALS_HumanAI_InterfaceCpp(UALS_HumanAI_InterfaceCpp&&); \
	UALS_HumanAI_InterfaceCpp(const UALS_HumanAI_InterfaceCpp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UALS_HumanAI_InterfaceCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALS_HumanAI_InterfaceCpp); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UALS_HumanAI_InterfaceCpp) \
	HELPFULFUNCTIONS_API virtual ~UALS_HumanAI_InterfaceCpp();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUALS_HumanAI_InterfaceCpp(); \
	friend struct Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics; \
public: \
	DECLARE_CLASS(UALS_HumanAI_InterfaceCpp, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), HELPFULFUNCTIONS_API) \
	DECLARE_SERIALIZER(UALS_HumanAI_InterfaceCpp)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_GENERATED_UINTERFACE_BODY() \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IALS_HumanAI_InterfaceCpp() {} \
public: \
	typedef UALS_HumanAI_InterfaceCpp UClassType; \
	typedef IALS_HumanAI_InterfaceCpp ThisClass; \
	static void Execute_HAI_DrawDebugTraces(UObject* O, bool& DrawDebug); \
	static void Execute_HAI_GetCharacterType(UObject* O, bool& IsSolider, bool& IsZombie); \
	static void Execute_HAI_GetControllerSmallValues(UObject* O, bool& DetectedEnemy, float& DetectedEnemyTime, ACharacter*& EnemyActor); \
	static void Execute_HAI_GetDeathState(UObject* O, bool& IsDeath); \
	static void Execute_HAI_GetDetectedEnemy(UObject* O, bool& DetectedEnemy, bool& IsSelfEnemy); \
	static void Execute_HAI_GetEnemyState(UObject* O, bool& IsEnemy); \
	static void Execute_HAI_GetHumanAIValues(UObject* O, bool& HavePistol, bool& HaveRifle, bool& IsSiting, bool& IsHostage); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_11_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_CALLBACK_WRAPPERS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UALS_HumanAI_InterfaceCpp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

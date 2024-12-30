// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_AI_HumanCharInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UMaterialInstanceDynamic;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
enum class CALS_GroundedMoveMode : uint8;
enum class CALS_OverlayState : uint8;
struct FColor;
struct FHitResult;
#ifdef HELPFULFUNCTIONS_AGLS_AI_HumanCharInterface_generated_h
#error "AGLS_AI_HumanCharInterface.generated.h already included, missing '#pragma once' in AGLS_AI_HumanCharInterface.h"
#endif
#define HELPFULFUNCTIONS_AGLS_AI_HumanCharInterface_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPI_HCAI_Get_IsClimbing_Implementation(bool& IsClimbing) {}; \
	virtual void BPI_HCAI_Set_IsClimbing_Implementation(bool StartClimbing) {}; \
	virtual void BPI_HCAI_Set_InitializationData_Implementation(bool& Updated, AActor* PathActor, CALS_OverlayState PatrolingOverlay, CALS_GroundedMoveMode GroundedWalkType, bool HaveRifle, bool HavePistol, uint8 RifleModelIndex, uint8 PistolModelIndex, bool UseSolid, bool HaveGolves, int32 ShirtType, int32 PantsType, FColor SolidColor, FColor SkinColor, FColor ShirtColor, FColor PantsColor, FColor ShoesColor, FColor GlovesColor) {}; \
	virtual void BPI_AI_Get_PistolAssetProperties_Implementation(FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& ShootingInterval, bool& WithSilencer, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim) const {}; \
	virtual void BPI_AI_Get_RifleAssetProperties_Implementation(FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& AutoShootTime, bool& IsSniperRifle, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim) const {}; \
	virtual void BPI_HCAI_Get_PatrolingOverlayState_Implementation(CALS_OverlayState& PatrolingOverlay) const {}; \
	virtual void BPI_HCAI_Get_GetHumanCharacterValues_Implementation(bool& HavePistol, bool& HaveRifle, bool& IsSitting, bool& IsHostage, AActor*& IsHostageOf, USkeletalMeshComponent*& RifleComponent, USkeletalMeshComponent*& PistolComponent) {}; \
	virtual void BPI_HCAI_Get_AI_StatusMesh_Implementation(UStaticMeshComponent*& MeshComp, UMaterialInstanceDynamic*& MaterialInst) {}; \
	virtual void BPI_HCAI_Get_IsHittedByKnifeOrHand_Implementation(bool& ISHitted, bool& ByKnife) {}; \
	virtual void BPI_HCAI_PushCharacter_Implementation(AActor* HitteBy, FVector HitNormal, FHitResult HitResult) {}; \
	virtual void BPI_HCAI_Get_StartedCoverMode_Implementation(bool& StartedCover) {}; \
	virtual void BPI_HCAI_Set_CoverPostureStrenght_Implementation(float Alpha) {}; \
	virtual void BPI_HCAI_StartSitOrStand_Implementation(bool StartSitting) {}; \
	virtual void BPI_HCAI_IsVicForStealthFinisher_Implementation(bool StartSF) {}; \
	virtual void BPI_HCAI_StartHostageMovement_Implementation(bool Start, AActor* IsHostageOf) {}; \
	virtual void BPI_HCAI_ReloadingAction_Implementation() {}; \
	virtual void BPI_HCAI_ShootAction_Implementation() {}; \
	virtual void BPI_HCAI_MarkCharacter_Implementation(bool Mark) {}; \
	virtual void BPI_HCAI_AttackedByKnifeOrHand_Implementation(bool Start, bool IgnoreCapsuleUpdate) {}; \
	virtual void BPI_HCAI_HitByThrowableObject_Implementation(AActor* Actor, FVector Normal, FHitResult HitResult) {}; \
	virtual void BPI_HCAI_DeathSectionByMeleeCombat_Implementation() {}; \
	DECLARE_FUNCTION(execBPI_HCAI_Get_IsClimbing); \
	DECLARE_FUNCTION(execBPI_HCAI_Set_IsClimbing); \
	DECLARE_FUNCTION(execBPI_HCAI_Set_InitializationData); \
	DECLARE_FUNCTION(execBPI_AI_Get_PistolAssetProperties); \
	DECLARE_FUNCTION(execBPI_AI_Get_RifleAssetProperties); \
	DECLARE_FUNCTION(execBPI_HCAI_Get_PatrolingOverlayState); \
	DECLARE_FUNCTION(execBPI_HCAI_Get_GetHumanCharacterValues); \
	DECLARE_FUNCTION(execBPI_HCAI_Get_AI_StatusMesh); \
	DECLARE_FUNCTION(execBPI_HCAI_Get_IsHittedByKnifeOrHand); \
	DECLARE_FUNCTION(execBPI_HCAI_PushCharacter); \
	DECLARE_FUNCTION(execBPI_HCAI_Get_StartedCoverMode); \
	DECLARE_FUNCTION(execBPI_HCAI_Set_CoverPostureStrenght); \
	DECLARE_FUNCTION(execBPI_HCAI_StartSitOrStand); \
	DECLARE_FUNCTION(execBPI_HCAI_IsVicForStealthFinisher); \
	DECLARE_FUNCTION(execBPI_HCAI_StartHostageMovement); \
	DECLARE_FUNCTION(execBPI_HCAI_ReloadingAction); \
	DECLARE_FUNCTION(execBPI_HCAI_ShootAction); \
	DECLARE_FUNCTION(execBPI_HCAI_MarkCharacter); \
	DECLARE_FUNCTION(execBPI_HCAI_AttackedByKnifeOrHand); \
	DECLARE_FUNCTION(execBPI_HCAI_HitByThrowableObject); \
	DECLARE_FUNCTION(execBPI_HCAI_DeathSectionByMeleeCombat);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UAGLS_AI_HumanCharInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAGLS_AI_HumanCharInterface(UAGLS_AI_HumanCharInterface&&); \
	UAGLS_AI_HumanCharInterface(const UAGLS_AI_HumanCharInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UAGLS_AI_HumanCharInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_AI_HumanCharInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGLS_AI_HumanCharInterface) \
	HELPFULFUNCTIONS_API virtual ~UAGLS_AI_HumanCharInterface();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAGLS_AI_HumanCharInterface(); \
	friend struct Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics; \
public: \
	DECLARE_CLASS(UAGLS_AI_HumanCharInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), HELPFULFUNCTIONS_API) \
	DECLARE_SERIALIZER(UAGLS_AI_HumanCharInterface)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAGLS_AI_HumanCharInterface() {} \
public: \
	typedef UAGLS_AI_HumanCharInterface UClassType; \
	typedef IAGLS_AI_HumanCharInterface ThisClass; \
	static void Execute_BPI_AI_Get_PistolAssetProperties(const UObject* O, FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& ShootingInterval, bool& WithSilencer, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim); \
	static void Execute_BPI_AI_Get_RifleAssetProperties(const UObject* O, FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& AutoShootTime, bool& IsSniperRifle, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim); \
	static void Execute_BPI_HCAI_AttackedByKnifeOrHand(UObject* O, bool Start, bool IgnoreCapsuleUpdate); \
	static void Execute_BPI_HCAI_DeathSectionByMeleeCombat(UObject* O); \
	static void Execute_BPI_HCAI_Get_AI_StatusMesh(UObject* O, UStaticMeshComponent*& MeshComp, UMaterialInstanceDynamic*& MaterialInst); \
	static void Execute_BPI_HCAI_Get_GetHumanCharacterValues(UObject* O, bool& HavePistol, bool& HaveRifle, bool& IsSitting, bool& IsHostage, AActor*& IsHostageOf, USkeletalMeshComponent*& RifleComponent, USkeletalMeshComponent*& PistolComponent); \
	static void Execute_BPI_HCAI_Get_IsClimbing(UObject* O, bool& IsClimbing); \
	static void Execute_BPI_HCAI_Get_IsHittedByKnifeOrHand(UObject* O, bool& ISHitted, bool& ByKnife); \
	static void Execute_BPI_HCAI_Get_PatrolingOverlayState(const UObject* O, CALS_OverlayState& PatrolingOverlay); \
	static void Execute_BPI_HCAI_Get_StartedCoverMode(UObject* O, bool& StartedCover); \
	static void Execute_BPI_HCAI_HitByThrowableObject(UObject* O, AActor* Actor, FVector Normal, FHitResult HitResult); \
	static void Execute_BPI_HCAI_IsVicForStealthFinisher(UObject* O, bool StartSF); \
	static void Execute_BPI_HCAI_MarkCharacter(UObject* O, bool Mark); \
	static void Execute_BPI_HCAI_PushCharacter(UObject* O, AActor* HitteBy, FVector HitNormal, FHitResult HitResult); \
	static void Execute_BPI_HCAI_ReloadingAction(UObject* O); \
	static void Execute_BPI_HCAI_Set_CoverPostureStrenght(UObject* O, float Alpha); \
	static void Execute_BPI_HCAI_Set_InitializationData(UObject* O, bool& Updated, AActor* PathActor, CALS_OverlayState PatrolingOverlay, CALS_GroundedMoveMode GroundedWalkType, bool HaveRifle, bool HavePistol, uint8 RifleModelIndex, uint8 PistolModelIndex, bool UseSolid, bool HaveGolves, int32 ShirtType, int32 PantsType, FColor SolidColor, FColor SkinColor, FColor ShirtColor, FColor PantsColor, FColor ShoesColor, FColor GlovesColor); \
	static void Execute_BPI_HCAI_Set_IsClimbing(UObject* O, bool StartClimbing); \
	static void Execute_BPI_HCAI_ShootAction(UObject* O); \
	static void Execute_BPI_HCAI_StartHostageMovement(UObject* O, bool Start, AActor* IsHostageOf); \
	static void Execute_BPI_HCAI_StartSitOrStand(UObject* O, bool StartSitting); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_10_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UAGLS_AI_HumanCharInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

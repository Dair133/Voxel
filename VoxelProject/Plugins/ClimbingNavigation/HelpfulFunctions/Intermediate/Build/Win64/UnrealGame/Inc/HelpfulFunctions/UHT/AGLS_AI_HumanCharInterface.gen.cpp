// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_AI_HumanCharInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_AI_HumanCharInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_HumanCharInterface();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_HumanCharInterface_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_AI_Get_PistolAssetProperties
struct AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms
{
	FName Name;
	int32 EnumIndex;
	USkeletalMesh* MainMesh;
	UStaticMesh* MagazineMesh;
	FName MagSocketName;
	bool HeadshotInstantDead;
	float DamageStrength;
	float ShootingInterval;
	bool WithSilencer;
	int32 MaxAmmoPerMag;
	UAnimMontage* ReloadAnim;
};
void IAGLS_AI_HumanCharInterface::BPI_AI_Get_PistolAssetProperties(FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& ShootingInterval, bool& WithSilencer, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_PistolAssetProperties instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties = FName(TEXT("BPI_AI_Get_PistolAssetProperties"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_AI_Get_PistolAssetProperties(const UObject* O, FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& ShootingInterval, bool& WithSilencer, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties);
	if (Func)
	{
		Parms.Name=Name;
		Parms.EnumIndex=EnumIndex;
		Parms.MainMesh=MainMesh;
		Parms.MagazineMesh=MagazineMesh;
		Parms.MagSocketName=MagSocketName;
		Parms.HeadshotInstantDead=HeadshotInstantDead;
		Parms.DamageStrength=DamageStrength;
		Parms.ShootingInterval=ShootingInterval;
		Parms.WithSilencer=WithSilencer;
		Parms.MaxAmmoPerMag=MaxAmmoPerMag;
		Parms.ReloadAnim=ReloadAnim;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		Name=Parms.Name;
		EnumIndex=Parms.EnumIndex;
		MainMesh=Parms.MainMesh;
		MagazineMesh=Parms.MagazineMesh;
		MagSocketName=Parms.MagSocketName;
		HeadshotInstantDead=Parms.HeadshotInstantDead;
		DamageStrength=Parms.DamageStrength;
		ShootingInterval=Parms.ShootingInterval;
		WithSilencer=Parms.WithSilencer;
		MaxAmmoPerMag=Parms.MaxAmmoPerMag;
		ReloadAnim=Parms.ReloadAnim;
	}
	else if (auto I = (const IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_AI_Get_PistolAssetProperties_Implementation(Name,EnumIndex,MainMesh,MagazineMesh,MagSocketName,HeadshotInstantDead,DamageStrength,ShootingInterval,WithSilencer,MaxAmmoPerMag,ReloadAnim);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "BPI Human Character AI|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI: Return mainly values about current pistol (this values is taken from pistol structure)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI: Return mainly values about current pistol (this values is taken from pistol structure)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnumIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagazineMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MagSocketName;
	static void NewProp_HeadshotInstantDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HeadshotInstantDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootingInterval;
	static void NewProp_WithSilencer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WithSilencer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoPerMag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_EnumIndex = { "EnumIndex", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, EnumIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MainMesh = { "MainMesh", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, MainMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MagazineMesh = { "MagazineMesh", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, MagazineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MagSocketName = { "MagSocketName", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, MagSocketName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_HeadshotInstantDead_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms*)Obj)->HeadshotInstantDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_HeadshotInstantDead = { "HeadshotInstantDead", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_HeadshotInstantDead_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_DamageStrength = { "DamageStrength", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, DamageStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_ShootingInterval = { "ShootingInterval", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, ShootingInterval), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_WithSilencer_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms*)Obj)->WithSilencer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_WithSilencer = { "WithSilencer", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_WithSilencer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MaxAmmoPerMag = { "MaxAmmoPerMag", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, MaxAmmoPerMag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_ReloadAnim = { "ReloadAnim", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms, ReloadAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_EnumIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MainMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MagazineMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MagSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_HeadshotInstantDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_DamageStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_ShootingInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_WithSilencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_MaxAmmoPerMag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::NewProp_ReloadAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_AI_Get_PistolAssetProperties", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_PistolAssetProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_AI_Get_PistolAssetProperties)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EnumIndex);
	P_GET_OBJECT_REF(USkeletalMesh,Z_Param_Out_MainMesh);
	P_GET_OBJECT_REF(UStaticMesh,Z_Param_Out_MagazineMesh);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MagSocketName);
	P_GET_UBOOL_REF(Z_Param_Out_HeadshotInstantDead);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DamageStrength);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ShootingInterval);
	P_GET_UBOOL_REF(Z_Param_Out_WithSilencer);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxAmmoPerMag);
	P_GET_OBJECT_REF(UAnimMontage,Z_Param_Out_ReloadAnim);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_PistolAssetProperties_Implementation(Z_Param_Out_Name,Z_Param_Out_EnumIndex,P_ARG_GC_BARRIER(Z_Param_Out_MainMesh),P_ARG_GC_BARRIER(Z_Param_Out_MagazineMesh),Z_Param_Out_MagSocketName,Z_Param_Out_HeadshotInstantDead,Z_Param_Out_DamageStrength,Z_Param_Out_ShootingInterval,Z_Param_Out_WithSilencer,Z_Param_Out_MaxAmmoPerMag,P_ARG_GC_BARRIER(Z_Param_Out_ReloadAnim));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_AI_Get_PistolAssetProperties

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_AI_Get_RifleAssetProperties
struct AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms
{
	FName Name;
	int32 EnumIndex;
	USkeletalMesh* MainMesh;
	UStaticMesh* MagazineMesh;
	FName MagSocketName;
	bool HeadshotInstantDead;
	float DamageStrength;
	float AutoShootTime;
	bool IsSniperRifle;
	int32 MaxAmmoPerMag;
	UAnimMontage* ReloadAnim;
};
void IAGLS_AI_HumanCharInterface::BPI_AI_Get_RifleAssetProperties(FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& AutoShootTime, bool& IsSniperRifle, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_RifleAssetProperties instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties = FName(TEXT("BPI_AI_Get_RifleAssetProperties"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_AI_Get_RifleAssetProperties(const UObject* O, FName& Name, int32& EnumIndex, USkeletalMesh*& MainMesh, UStaticMesh*& MagazineMesh, FName& MagSocketName, bool& HeadshotInstantDead, float& DamageStrength, float& AutoShootTime, bool& IsSniperRifle, int32& MaxAmmoPerMag, UAnimMontage*& ReloadAnim)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties);
	if (Func)
	{
		Parms.Name=Name;
		Parms.EnumIndex=EnumIndex;
		Parms.MainMesh=MainMesh;
		Parms.MagazineMesh=MagazineMesh;
		Parms.MagSocketName=MagSocketName;
		Parms.HeadshotInstantDead=HeadshotInstantDead;
		Parms.DamageStrength=DamageStrength;
		Parms.AutoShootTime=AutoShootTime;
		Parms.IsSniperRifle=IsSniperRifle;
		Parms.MaxAmmoPerMag=MaxAmmoPerMag;
		Parms.ReloadAnim=ReloadAnim;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		Name=Parms.Name;
		EnumIndex=Parms.EnumIndex;
		MainMesh=Parms.MainMesh;
		MagazineMesh=Parms.MagazineMesh;
		MagSocketName=Parms.MagSocketName;
		HeadshotInstantDead=Parms.HeadshotInstantDead;
		DamageStrength=Parms.DamageStrength;
		AutoShootTime=Parms.AutoShootTime;
		IsSniperRifle=Parms.IsSniperRifle;
		MaxAmmoPerMag=Parms.MaxAmmoPerMag;
		ReloadAnim=Parms.ReloadAnim;
	}
	else if (auto I = (const IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_AI_Get_RifleAssetProperties_Implementation(Name,EnumIndex,MainMesh,MagazineMesh,MagSocketName,HeadshotInstantDead,DamageStrength,AutoShootTime,IsSniperRifle,MaxAmmoPerMag,ReloadAnim);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "BPI Human Character AI|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI: Return mainly values about current rifle (this values is taken from rifle structure)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI: Return mainly values about current rifle (this values is taken from rifle structure)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnumIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagazineMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MagSocketName;
	static void NewProp_HeadshotInstantDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HeadshotInstantDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoShootTime;
	static void NewProp_IsSniperRifle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSniperRifle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoPerMag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_EnumIndex = { "EnumIndex", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, EnumIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MainMesh = { "MainMesh", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, MainMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MagazineMesh = { "MagazineMesh", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, MagazineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MagSocketName = { "MagSocketName", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, MagSocketName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_HeadshotInstantDead_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms*)Obj)->HeadshotInstantDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_HeadshotInstantDead = { "HeadshotInstantDead", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_HeadshotInstantDead_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_DamageStrength = { "DamageStrength", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, DamageStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_AutoShootTime = { "AutoShootTime", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, AutoShootTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_IsSniperRifle_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms*)Obj)->IsSniperRifle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_IsSniperRifle = { "IsSniperRifle", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_IsSniperRifle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MaxAmmoPerMag = { "MaxAmmoPerMag", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, MaxAmmoPerMag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_ReloadAnim = { "ReloadAnim", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms, ReloadAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_EnumIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MainMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MagazineMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MagSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_HeadshotInstantDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_DamageStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_AutoShootTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_IsSniperRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_MaxAmmoPerMag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::NewProp_ReloadAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_AI_Get_RifleAssetProperties", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_AI_Get_RifleAssetProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_AI_Get_RifleAssetProperties)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EnumIndex);
	P_GET_OBJECT_REF(USkeletalMesh,Z_Param_Out_MainMesh);
	P_GET_OBJECT_REF(UStaticMesh,Z_Param_Out_MagazineMesh);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MagSocketName);
	P_GET_UBOOL_REF(Z_Param_Out_HeadshotInstantDead);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DamageStrength);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AutoShootTime);
	P_GET_UBOOL_REF(Z_Param_Out_IsSniperRifle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxAmmoPerMag);
	P_GET_OBJECT_REF(UAnimMontage,Z_Param_Out_ReloadAnim);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_RifleAssetProperties_Implementation(Z_Param_Out_Name,Z_Param_Out_EnumIndex,P_ARG_GC_BARRIER(Z_Param_Out_MainMesh),P_ARG_GC_BARRIER(Z_Param_Out_MagazineMesh),Z_Param_Out_MagSocketName,Z_Param_Out_HeadshotInstantDead,Z_Param_Out_DamageStrength,Z_Param_Out_AutoShootTime,Z_Param_Out_IsSniperRifle,Z_Param_Out_MaxAmmoPerMag,P_ARG_GC_BARRIER(Z_Param_Out_ReloadAnim));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_AI_Get_RifleAssetProperties

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_AttackedByKnifeOrHand
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms
{
	bool Start;
	bool IgnoreCapsuleUpdate;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_AttackedByKnifeOrHand(bool Start, bool IgnoreCapsuleUpdate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_AttackedByKnifeOrHand instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand = FName(TEXT("BPI_HCAI_AttackedByKnifeOrHand"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_AttackedByKnifeOrHand(UObject* O, bool Start, bool IgnoreCapsuleUpdate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand);
	if (Func)
	{
		Parms.Start=Start;
		Parms.IgnoreCapsuleUpdate=IgnoreCapsuleUpdate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_AttackedByKnifeOrHand_Implementation(Start,IgnoreCapsuleUpdate);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static void NewProp_IgnoreCapsuleUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreCapsuleUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_Start_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_IgnoreCapsuleUpdate_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms*)Obj)->IgnoreCapsuleUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_IgnoreCapsuleUpdate = { "IgnoreCapsuleUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_IgnoreCapsuleUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::NewProp_IgnoreCapsuleUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_AttackedByKnifeOrHand", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_AttackedByKnifeOrHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_AttackedByKnifeOrHand)
{
	P_GET_UBOOL(Z_Param_Start);
	P_GET_UBOOL(Z_Param_IgnoreCapsuleUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_AttackedByKnifeOrHand_Implementation(Z_Param_Start,Z_Param_IgnoreCapsuleUpdate);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_AttackedByKnifeOrHand

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_DeathSectionByMeleeCombat
void IAGLS_AI_HumanCharInterface::BPI_HCAI_DeathSectionByMeleeCombat()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_DeathSectionByMeleeCombat instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat = FName(TEXT("BPI_HCAI_DeathSectionByMeleeCombat"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_DeathSectionByMeleeCombat(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_DeathSectionByMeleeCombat_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_DeathSectionByMeleeCombat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_DeathSectionByMeleeCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_DeathSectionByMeleeCombat_Implementation();
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_DeathSectionByMeleeCombat

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_AI_StatusMesh
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_AI_StatusMesh_Parms
{
	UStaticMeshComponent* MeshComp;
	UMaterialInstanceDynamic* MaterialInst;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Get_AI_StatusMesh(UStaticMeshComponent*& MeshComp, UMaterialInstanceDynamic*& MaterialInst)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Get_AI_StatusMesh instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh = FName(TEXT("BPI_HCAI_Get_AI_StatusMesh"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Get_AI_StatusMesh(UObject* O, UStaticMeshComponent*& MeshComp, UMaterialInstanceDynamic*& MaterialInst)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_AI_StatusMesh_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh);
	if (Func)
	{
		Parms.MeshComp=MeshComp;
		Parms.MaterialInst=MaterialInst;
		O->ProcessEvent(Func, &Parms);
		MeshComp=Parms.MeshComp;
		MaterialInst=Parms.MaterialInst;
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Get_AI_StatusMesh_Implementation(MeshComp,MaterialInst);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI: Return static mesh that informing about current AI status (by default mesh have a diamond shape and it is placed above character head)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI: Return static mesh that informing about current AI status (by default mesh have a diamond shape and it is placed above character head)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_AI_StatusMesh_Parms, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::NewProp_MaterialInst = { "MaterialInst", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_AI_StatusMesh_Parms, MaterialInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::NewProp_MaterialInst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Get_AI_StatusMesh", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_AI_StatusMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_AI_StatusMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_AI_StatusMesh)
{
	P_GET_OBJECT_REF(UStaticMeshComponent,Z_Param_Out_MeshComp);
	P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_MaterialInst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Get_AI_StatusMesh_Implementation(P_ARG_GC_BARRIER(Z_Param_Out_MeshComp),P_ARG_GC_BARRIER(Z_Param_Out_MaterialInst));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_AI_StatusMesh

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_GetHumanCharacterValues
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms
{
	bool HavePistol;
	bool HaveRifle;
	bool IsSitting;
	bool IsHostage;
	AActor* IsHostageOf;
	USkeletalMeshComponent* RifleComponent;
	USkeletalMeshComponent* PistolComponent;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Get_GetHumanCharacterValues(bool& HavePistol, bool& HaveRifle, bool& IsSitting, bool& IsHostage, AActor*& IsHostageOf, USkeletalMeshComponent*& RifleComponent, USkeletalMeshComponent*& PistolComponent)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Get_GetHumanCharacterValues instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues = FName(TEXT("BPI_HCAI_Get_GetHumanCharacterValues"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Get_GetHumanCharacterValues(UObject* O, bool& HavePistol, bool& HaveRifle, bool& IsSitting, bool& IsHostage, AActor*& IsHostageOf, USkeletalMeshComponent*& RifleComponent, USkeletalMeshComponent*& PistolComponent)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues);
	if (Func)
	{
		Parms.HavePistol=HavePistol;
		Parms.HaveRifle=HaveRifle;
		Parms.IsSitting=IsSitting;
		Parms.IsHostage=IsHostage;
		Parms.IsHostageOf=IsHostageOf;
		Parms.RifleComponent=RifleComponent;
		Parms.PistolComponent=PistolComponent;
		O->ProcessEvent(Func, &Parms);
		HavePistol=Parms.HavePistol;
		HaveRifle=Parms.HaveRifle;
		IsSitting=Parms.IsSitting;
		IsHostage=Parms.IsHostage;
		IsHostageOf=Parms.IsHostageOf;
		RifleComponent=Parms.RifleComponent;
		PistolComponent=Parms.PistolComponent;
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Get_GetHumanCharacterValues_Implementation(HavePistol,HaveRifle,IsSitting,IsHostage,IsHostageOf,RifleComponent,PistolComponent);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "BPI Human Character AI|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI: Returns basic informations about character like does he have a rifle or pistol. Also return visual skeletal mesh of weapons\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI: Returns basic informations about character like does he have a rifle or pistol. Also return visual skeletal mesh of weapons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifleComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PistolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_HavePistol_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HavePistol;
	static void NewProp_HaveRifle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRifle;
	static void NewProp_IsSitting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSitting;
	static void NewProp_IsHostage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHostage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsHostageOf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RifleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PistolComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HavePistol_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms*)Obj)->HavePistol = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HavePistol = { "HavePistol", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HavePistol_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HaveRifle_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms*)Obj)->HaveRifle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HaveRifle = { "HaveRifle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HaveRifle_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsSitting_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms*)Obj)->IsSitting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsSitting = { "IsSitting", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsSitting_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsHostage_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms*)Obj)->IsHostage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsHostage = { "IsHostage", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsHostage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsHostageOf = { "IsHostageOf", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms, IsHostageOf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_RifleComponent = { "RifleComponent", nullptr, (EPropertyFlags)0x0010040000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms, RifleComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleComponent_MetaData), NewProp_RifleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_PistolComponent = { "PistolComponent", nullptr, (EPropertyFlags)0x0010040000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms, PistolComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PistolComponent_MetaData), NewProp_PistolComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HavePistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_HaveRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsSitting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsHostage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_IsHostageOf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_RifleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::NewProp_PistolComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Get_GetHumanCharacterValues", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_GetHumanCharacterValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_GetHumanCharacterValues)
{
	P_GET_UBOOL_REF(Z_Param_Out_HavePistol);
	P_GET_UBOOL_REF(Z_Param_Out_HaveRifle);
	P_GET_UBOOL_REF(Z_Param_Out_IsSitting);
	P_GET_UBOOL_REF(Z_Param_Out_IsHostage);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_IsHostageOf);
	P_GET_OBJECT_REF(USkeletalMeshComponent,Z_Param_Out_RifleComponent);
	P_GET_OBJECT_REF(USkeletalMeshComponent,Z_Param_Out_PistolComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Get_GetHumanCharacterValues_Implementation(Z_Param_Out_HavePistol,Z_Param_Out_HaveRifle,Z_Param_Out_IsSitting,Z_Param_Out_IsHostage,P_ARG_GC_BARRIER(Z_Param_Out_IsHostageOf),P_ARG_GC_BARRIER(Z_Param_Out_RifleComponent),P_ARG_GC_BARRIER(Z_Param_Out_PistolComponent));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_GetHumanCharacterValues

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_IsClimbing
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsClimbing_Parms
{
	bool IsClimbing;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Get_IsClimbing(bool& IsClimbing)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Get_IsClimbing instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing = FName(TEXT("BPI_HCAI_Get_IsClimbing"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Get_IsClimbing(UObject* O, bool& IsClimbing)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsClimbing_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing);
	if (Func)
	{
		Parms.IsClimbing=IsClimbing;
		O->ProcessEvent(Func, &Parms);
		IsClimbing=Parms.IsClimbing;
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Get_IsClimbing_Implementation(IsClimbing);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////Blueprint Interface - Human Character AI\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/Blueprint Interface - Human Character AI" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsClimbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsClimbing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::NewProp_IsClimbing_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsClimbing_Parms*)Obj)->IsClimbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::NewProp_IsClimbing = { "IsClimbing", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsClimbing_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::NewProp_IsClimbing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::NewProp_IsClimbing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Get_IsClimbing", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsClimbing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsClimbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_IsClimbing)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsClimbing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Get_IsClimbing_Implementation(Z_Param_Out_IsClimbing);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_IsClimbing

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_IsHittedByKnifeOrHand
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms
{
	bool ISHitted;
	bool ByKnife;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Get_IsHittedByKnifeOrHand(bool& ISHitted, bool& ByKnife)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Get_IsHittedByKnifeOrHand instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand = FName(TEXT("BPI_HCAI_Get_IsHittedByKnifeOrHand"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Get_IsHittedByKnifeOrHand(UObject* O, bool& ISHitted, bool& ByKnife)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand);
	if (Func)
	{
		Parms.ISHitted=ISHitted;
		Parms.ByKnife=ByKnife;
		O->ProcessEvent(Func, &Parms);
		ISHitted=Parms.ISHitted;
		ByKnife=Parms.ByKnife;
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Get_IsHittedByKnifeOrHand_Implementation(ISHitted,ByKnife);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ISHitted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ISHitted;
	static void NewProp_ByKnife_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ByKnife;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ISHitted_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms*)Obj)->ISHitted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ISHitted = { "ISHitted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ISHitted_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ByKnife_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms*)Obj)->ByKnife = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ByKnife = { "ByKnife", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ByKnife_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ISHitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::NewProp_ByKnife,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Get_IsHittedByKnifeOrHand", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_IsHittedByKnifeOrHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_IsHittedByKnifeOrHand)
{
	P_GET_UBOOL_REF(Z_Param_Out_ISHitted);
	P_GET_UBOOL_REF(Z_Param_Out_ByKnife);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Get_IsHittedByKnifeOrHand_Implementation(Z_Param_Out_ISHitted,Z_Param_Out_ByKnife);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_IsHittedByKnifeOrHand

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_PatrolingOverlayState
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_PatrolingOverlayState_Parms
{
	CALS_OverlayState PatrolingOverlay;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Get_PatrolingOverlayState(CALS_OverlayState& PatrolingOverlay) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Get_PatrolingOverlayState instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState = FName(TEXT("BPI_HCAI_Get_PatrolingOverlayState"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Get_PatrolingOverlayState(const UObject* O, CALS_OverlayState& PatrolingOverlay)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_PatrolingOverlayState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState);
	if (Func)
	{
		Parms.PatrolingOverlay=PatrolingOverlay;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		PatrolingOverlay=Parms.PatrolingOverlay;
	}
	else if (auto I = (const IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Get_PatrolingOverlayState_Implementation(PatrolingOverlay);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI: Return Overlay that AI use when is in patroling state (when character dont have controller then this overlay will by set as default)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI: Return Overlay that AI use when is in patroling state (when character dont have controller then this overlay will by set as default)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatrolingOverlay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PatrolingOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::NewProp_PatrolingOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::NewProp_PatrolingOverlay = { "PatrolingOverlay", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_PatrolingOverlayState_Parms, PatrolingOverlay), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::NewProp_PatrolingOverlay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::NewProp_PatrolingOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Get_PatrolingOverlayState", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_PatrolingOverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_PatrolingOverlayState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_PatrolingOverlayState)
{
	P_GET_ENUM_REF(CALS_OverlayState,Z_Param_Out_PatrolingOverlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Get_PatrolingOverlayState_Implementation((CALS_OverlayState&)(Z_Param_Out_PatrolingOverlay));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_PatrolingOverlayState

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_StartedCoverMode
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_StartedCoverMode_Parms
{
	bool StartedCover;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Get_StartedCoverMode(bool& StartedCover)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Get_StartedCoverMode instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode = FName(TEXT("BPI_HCAI_Get_StartedCoverMode"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Get_StartedCoverMode(UObject* O, bool& StartedCover)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_StartedCoverMode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode);
	if (Func)
	{
		Parms.StartedCover=StartedCover;
		O->ProcessEvent(Func, &Parms);
		StartedCover=Parms.StartedCover;
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Get_StartedCoverMode_Implementation(StartedCover);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_StartedCover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedCover;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::NewProp_StartedCover_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_StartedCoverMode_Parms*)Obj)->StartedCover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::NewProp_StartedCover = { "StartedCover", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_StartedCoverMode_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::NewProp_StartedCover_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::NewProp_StartedCover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Get_StartedCoverMode", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_StartedCoverMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Get_StartedCoverMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_StartedCoverMode)
{
	P_GET_UBOOL_REF(Z_Param_Out_StartedCover);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Get_StartedCoverMode_Implementation(Z_Param_Out_StartedCover);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Get_StartedCoverMode

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_HitByThrowableObject
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_HitByThrowableObject_Parms
{
	AActor* Actor;
	FVector Normal;
	FHitResult HitResult;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_HitByThrowableObject(AActor* Actor, FVector Normal, FHitResult HitResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_HitByThrowableObject instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject = FName(TEXT("BPI_HCAI_HitByThrowableObject"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_HitByThrowableObject(UObject* O, AActor* Actor, FVector Normal, FHitResult HitResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_HitByThrowableObject_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject);
	if (Func)
	{
		Parms.Actor=Actor;
		Parms.Normal=Normal;
		Parms.HitResult=HitResult;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_HitByThrowableObject_Implementation(Actor,Normal,HitResult);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_HitByThrowableObject_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_HitByThrowableObject_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_HitByThrowableObject_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_HitByThrowableObject", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_HitByThrowableObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_HitByThrowableObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_HitByThrowableObject)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_HitByThrowableObject_Implementation(Z_Param_Actor,Z_Param_Normal,Z_Param_HitResult);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_HitByThrowableObject

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_IsVicForStealthFinisher
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_IsVicForStealthFinisher_Parms
{
	bool StartSF;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_IsVicForStealthFinisher(bool StartSF)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_IsVicForStealthFinisher instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher = FName(TEXT("BPI_HCAI_IsVicForStealthFinisher"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_IsVicForStealthFinisher(UObject* O, bool StartSF)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_IsVicForStealthFinisher_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher);
	if (Func)
	{
		Parms.StartSF=StartSF;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_IsVicForStealthFinisher_Implementation(StartSF);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_StartSF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartSF;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::NewProp_StartSF_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_IsVicForStealthFinisher_Parms*)Obj)->StartSF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::NewProp_StartSF = { "StartSF", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_IsVicForStealthFinisher_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::NewProp_StartSF_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::NewProp_StartSF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_IsVicForStealthFinisher", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_IsVicForStealthFinisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_IsVicForStealthFinisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_IsVicForStealthFinisher)
{
	P_GET_UBOOL(Z_Param_StartSF);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_IsVicForStealthFinisher_Implementation(Z_Param_StartSF);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_IsVicForStealthFinisher

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_MarkCharacter
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_MarkCharacter_Parms
{
	bool Mark;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_MarkCharacter(bool Mark)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_MarkCharacter instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter = FName(TEXT("BPI_HCAI_MarkCharacter"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_MarkCharacter(UObject* O, bool Mark)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_MarkCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter);
	if (Func)
	{
		Parms.Mark=Mark;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_MarkCharacter_Implementation(Mark);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Mark_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Mark;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::NewProp_Mark_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_MarkCharacter_Parms*)Obj)->Mark = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::NewProp_Mark = { "Mark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_MarkCharacter_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::NewProp_Mark_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::NewProp_Mark,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_MarkCharacter", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_MarkCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_MarkCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_MarkCharacter)
{
	P_GET_UBOOL(Z_Param_Mark);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_MarkCharacter_Implementation(Z_Param_Mark);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_MarkCharacter

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_PushCharacter
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_PushCharacter_Parms
{
	AActor* HitteBy;
	FVector HitNormal;
	FHitResult HitResult;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_PushCharacter(AActor* HitteBy, FVector HitNormal, FHitResult HitResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_PushCharacter instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter = FName(TEXT("BPI_HCAI_PushCharacter"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_PushCharacter(UObject* O, AActor* HitteBy, FVector HitNormal, FHitResult HitResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_PushCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter);
	if (Func)
	{
		Parms.HitteBy=HitteBy;
		Parms.HitNormal=HitNormal;
		Parms.HitResult=HitResult;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_PushCharacter_Implementation(HitteBy,HitNormal,HitResult);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitteBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::NewProp_HitteBy = { "HitteBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_PushCharacter_Parms, HitteBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_PushCharacter_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_PushCharacter_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::NewProp_HitteBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_PushCharacter", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_PushCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_PushCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_PushCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_HitteBy);
	P_GET_STRUCT(FVector,Z_Param_HitNormal);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_PushCharacter_Implementation(Z_Param_HitteBy,Z_Param_HitNormal,Z_Param_HitResult);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_PushCharacter

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_ReloadingAction
void IAGLS_AI_HumanCharInterface::BPI_HCAI_ReloadingAction()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_ReloadingAction instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction = FName(TEXT("BPI_HCAI_ReloadingAction"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_ReloadingAction(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_ReloadingAction_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////Blueprint Interface - Human Character AI: By using this you can start reloading action for Human Character\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/Blueprint Interface - Human Character AI: By using this you can start reloading action for Human Character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_ReloadingAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_ReloadingAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_ReloadingAction_Implementation();
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_ReloadingAction

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Set_CoverPostureStrenght
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_CoverPostureStrenght_Parms
{
	float Alpha;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Set_CoverPostureStrenght(float Alpha)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Set_CoverPostureStrenght instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght = FName(TEXT("BPI_HCAI_Set_CoverPostureStrenght"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Set_CoverPostureStrenght(UObject* O, float Alpha)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_CoverPostureStrenght_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght);
	if (Func)
	{
		Parms.Alpha=Alpha;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Set_CoverPostureStrenght_Implementation(Alpha);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_CoverPostureStrenght_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Set_CoverPostureStrenght", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_CoverPostureStrenght_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_CoverPostureStrenght_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Set_CoverPostureStrenght)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Set_CoverPostureStrenght_Implementation(Z_Param_Alpha);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Set_CoverPostureStrenght

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Set_InitializationData
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms
{
	bool Updated;
	AActor* PathActor;
	CALS_OverlayState PatrolingOverlay;
	CALS_GroundedMoveMode GroundedWalkType;
	bool HaveRifle;
	bool HavePistol;
	uint8 RifleModelIndex;
	uint8 PistolModelIndex;
	bool UseSolid;
	bool HaveGolves;
	int32 ShirtType;
	int32 PantsType;
	FColor SolidColor;
	FColor SkinColor;
	FColor ShirtColor;
	FColor PantsColor;
	FColor ShoesColor;
	FColor GlovesColor;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Set_InitializationData(bool& Updated, AActor* PathActor, CALS_OverlayState PatrolingOverlay, CALS_GroundedMoveMode GroundedWalkType, bool HaveRifle, bool HavePistol, uint8 RifleModelIndex, uint8 PistolModelIndex, bool UseSolid, bool HaveGolves, int32 ShirtType, int32 PantsType, FColor SolidColor, FColor SkinColor, FColor ShirtColor, FColor PantsColor, FColor ShoesColor, FColor GlovesColor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Set_InitializationData instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData = FName(TEXT("BPI_HCAI_Set_InitializationData"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Set_InitializationData(UObject* O, bool& Updated, AActor* PathActor, CALS_OverlayState PatrolingOverlay, CALS_GroundedMoveMode GroundedWalkType, bool HaveRifle, bool HavePistol, uint8 RifleModelIndex, uint8 PistolModelIndex, bool UseSolid, bool HaveGolves, int32 ShirtType, int32 PantsType, FColor SolidColor, FColor SkinColor, FColor ShirtColor, FColor PantsColor, FColor ShoesColor, FColor GlovesColor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData);
	if (Func)
	{
		Parms.Updated=Updated;
		Parms.PathActor=PathActor;
		Parms.PatrolingOverlay=PatrolingOverlay;
		Parms.GroundedWalkType=GroundedWalkType;
		Parms.HaveRifle=HaveRifle;
		Parms.HavePistol=HavePistol;
		Parms.RifleModelIndex=RifleModelIndex;
		Parms.PistolModelIndex=PistolModelIndex;
		Parms.UseSolid=UseSolid;
		Parms.HaveGolves=HaveGolves;
		Parms.ShirtType=ShirtType;
		Parms.PantsType=PantsType;
		Parms.SolidColor=SolidColor;
		Parms.SkinColor=SkinColor;
		Parms.ShirtColor=ShirtColor;
		Parms.PantsColor=PantsColor;
		Parms.ShoesColor=ShoesColor;
		Parms.GlovesColor=GlovesColor;
		O->ProcessEvent(Func, &Parms);
		Updated=Parms.Updated;
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Set_InitializationData_Implementation(Updated,PathActor,PatrolingOverlay,GroundedWalkType,HaveRifle,HavePistol,RifleModelIndex,PistolModelIndex,UseSolid,HaveGolves,ShirtType,PantsType,SolidColor,SkinColor,ShirtColor,PantsColor,ShoesColor,GlovesColor);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "BPI Human Character AI|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI: Needed to properly initialize configuration parameters for the asynchronously loaded class 'Human AI Character' and controller.\n" },
#endif
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI: Needed to properly initialize configuration parameters for the asynchronously loaded class 'Human AI Character' and controller." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Updated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Updated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatrolingOverlay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PatrolingOverlay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedWalkType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedWalkType;
	static void NewProp_HaveRifle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRifle;
	static void NewProp_HavePistol_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HavePistol;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RifleModelIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PistolModelIndex;
	static void NewProp_UseSolid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSolid;
	static void NewProp_HaveGolves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveGolves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShirtType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PantsType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolidColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkinColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShirtColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PantsColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShoesColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlovesColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_Updated_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms*)Obj)->Updated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_Updated = { "Updated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_Updated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PathActor = { "PathActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, PathActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PatrolingOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PatrolingOverlay = { "PatrolingOverlay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, PatrolingOverlay), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_GroundedWalkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_GroundedWalkType = { "GroundedWalkType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, GroundedWalkType), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(0, nullptr) }; // 1562728553
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveRifle_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms*)Obj)->HaveRifle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveRifle = { "HaveRifle", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveRifle_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HavePistol_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms*)Obj)->HavePistol = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HavePistol = { "HavePistol", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HavePistol_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_RifleModelIndex = { "RifleModelIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, RifleModelIndex), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PistolModelIndex = { "PistolModelIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, PistolModelIndex), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_UseSolid_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms*)Obj)->UseSolid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_UseSolid = { "UseSolid", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_UseSolid_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveGolves_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms*)Obj)->HaveGolves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveGolves = { "HaveGolves", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveGolves_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_ShirtType = { "ShirtType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, ShirtType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PantsType = { "PantsType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, PantsType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_SolidColor = { "SolidColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, SolidColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_SkinColor = { "SkinColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, SkinColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_ShirtColor = { "ShirtColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, ShirtColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PantsColor = { "PantsColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, PantsColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_ShoesColor = { "ShoesColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, ShoesColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_GlovesColor = { "GlovesColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms, GlovesColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_Updated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PathActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PatrolingOverlay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PatrolingOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_GroundedWalkType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_GroundedWalkType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HavePistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_RifleModelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PistolModelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_UseSolid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_HaveGolves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_ShirtType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PantsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_SolidColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_SkinColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_ShirtColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_PantsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_ShoesColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::NewProp_GlovesColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Set_InitializationData", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_InitializationData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Set_InitializationData)
{
	P_GET_UBOOL_REF(Z_Param_Out_Updated);
	P_GET_OBJECT(AActor,Z_Param_PathActor);
	P_GET_ENUM(CALS_OverlayState,Z_Param_PatrolingOverlay);
	P_GET_ENUM(CALS_GroundedMoveMode,Z_Param_GroundedWalkType);
	P_GET_UBOOL(Z_Param_HaveRifle);
	P_GET_UBOOL(Z_Param_HavePistol);
	P_GET_PROPERTY(FByteProperty,Z_Param_RifleModelIndex);
	P_GET_PROPERTY(FByteProperty,Z_Param_PistolModelIndex);
	P_GET_UBOOL(Z_Param_UseSolid);
	P_GET_UBOOL(Z_Param_HaveGolves);
	P_GET_PROPERTY(FIntProperty,Z_Param_ShirtType);
	P_GET_PROPERTY(FIntProperty,Z_Param_PantsType);
	P_GET_STRUCT(FColor,Z_Param_SolidColor);
	P_GET_STRUCT(FColor,Z_Param_SkinColor);
	P_GET_STRUCT(FColor,Z_Param_ShirtColor);
	P_GET_STRUCT(FColor,Z_Param_PantsColor);
	P_GET_STRUCT(FColor,Z_Param_ShoesColor);
	P_GET_STRUCT(FColor,Z_Param_GlovesColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Set_InitializationData_Implementation(Z_Param_Out_Updated,Z_Param_PathActor,CALS_OverlayState(Z_Param_PatrolingOverlay),CALS_GroundedMoveMode(Z_Param_GroundedWalkType),Z_Param_HaveRifle,Z_Param_HavePistol,Z_Param_RifleModelIndex,Z_Param_PistolModelIndex,Z_Param_UseSolid,Z_Param_HaveGolves,Z_Param_ShirtType,Z_Param_PantsType,Z_Param_SolidColor,Z_Param_SkinColor,Z_Param_ShirtColor,Z_Param_PantsColor,Z_Param_ShoesColor,Z_Param_GlovesColor);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Set_InitializationData

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Set_IsClimbing
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_IsClimbing_Parms
{
	bool StartClimbing;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_Set_IsClimbing(bool StartClimbing)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_Set_IsClimbing instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing = FName(TEXT("BPI_HCAI_Set_IsClimbing"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_Set_IsClimbing(UObject* O, bool StartClimbing)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_IsClimbing_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing);
	if (Func)
	{
		Parms.StartClimbing=StartClimbing;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_Set_IsClimbing_Implementation(StartClimbing);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////Blueprint Interface - Human Character AI\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/Blueprint Interface - Human Character AI" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_StartClimbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartClimbing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::NewProp_StartClimbing_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_IsClimbing_Parms*)Obj)->StartClimbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::NewProp_StartClimbing = { "StartClimbing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_IsClimbing_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::NewProp_StartClimbing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::NewProp_StartClimbing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_Set_IsClimbing", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_IsClimbing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_Set_IsClimbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_Set_IsClimbing)
{
	P_GET_UBOOL(Z_Param_StartClimbing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_Set_IsClimbing_Implementation(Z_Param_StartClimbing);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_Set_IsClimbing

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_ShootAction
void IAGLS_AI_HumanCharInterface::BPI_HCAI_ShootAction()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_ShootAction instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction = FName(TEXT("BPI_HCAI_ShootAction"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_ShootAction(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_ShootAction_Implementation();
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////Blueprint Interface - Human Character AI: By using this call you can execute shoot action for Human Character\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/Blueprint Interface - Human Character AI: By using this call you can execute shoot action for Human Character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_ShootAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_ShootAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_ShootAction_Implementation();
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_ShootAction

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_StartHostageMovement
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartHostageMovement_Parms
{
	bool Start;
	AActor* IsHostageOf;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_StartHostageMovement(bool Start, AActor* IsHostageOf)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_StartHostageMovement instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement = FName(TEXT("BPI_HCAI_StartHostageMovement"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_StartHostageMovement(UObject* O, bool Start, AActor* IsHostageOf)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartHostageMovement_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement);
	if (Func)
	{
		Parms.Start=Start;
		Parms.IsHostageOf=IsHostageOf;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_StartHostageMovement_Implementation(Start,IsHostageOf);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsHostageOf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::NewProp_Start_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartHostageMovement_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartHostageMovement_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::NewProp_IsHostageOf = { "IsHostageOf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartHostageMovement_Parms, IsHostageOf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::NewProp_IsHostageOf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_StartHostageMovement", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartHostageMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartHostageMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_StartHostageMovement)
{
	P_GET_UBOOL(Z_Param_Start);
	P_GET_OBJECT(AActor,Z_Param_IsHostageOf);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_StartHostageMovement_Implementation(Z_Param_Start,Z_Param_IsHostageOf);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_StartHostageMovement

// Begin Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_StartSitOrStand
struct AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartSitOrStand_Parms
{
	bool StartSitting;
};
void IAGLS_AI_HumanCharInterface::BPI_HCAI_StartSitOrStand(bool StartSitting)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_HCAI_StartSitOrStand instead.");
}
static FName NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand = FName(TEXT("BPI_HCAI_StartSitOrStand"));
void IAGLS_AI_HumanCharInterface::Execute_BPI_HCAI_StartSitOrStand(UObject* O, bool StartSitting)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_HumanCharInterface::StaticClass()));
	AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartSitOrStand_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand);
	if (Func)
	{
		Parms.StartSitting=StartSitting;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_HumanCharInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_HumanCharInterface::StaticClass())))
	{
		I->BPI_HCAI_StartSitOrStand_Implementation(StartSitting);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI Human Character AI|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Interface - Human Character AI (Implemented for Human Character Class)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Human Character AI (Implemented for Human Character Class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_StartSitting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartSitting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::NewProp_StartSitting_SetBit(void* Obj)
{
	((AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartSitOrStand_Parms*)Obj)->StartSitting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::NewProp_StartSitting = { "StartSitting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartSitOrStand_Parms), &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::NewProp_StartSitting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::NewProp_StartSitting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_HumanCharInterface, nullptr, "BPI_HCAI_StartSitOrStand", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::PropPointers), sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartSitOrStand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_HumanCharInterface_eventBPI_HCAI_StartSitOrStand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_HumanCharInterface::execBPI_HCAI_StartSitOrStand)
{
	P_GET_UBOOL(Z_Param_StartSitting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_HCAI_StartSitOrStand_Implementation(Z_Param_StartSitting);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_HumanCharInterface Function BPI_HCAI_StartSitOrStand

// Begin Interface UAGLS_AI_HumanCharInterface
void UAGLS_AI_HumanCharInterface::StaticRegisterNativesUAGLS_AI_HumanCharInterface()
{
	UClass* Class = UAGLS_AI_HumanCharInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_AI_Get_PistolAssetProperties", &IAGLS_AI_HumanCharInterface::execBPI_AI_Get_PistolAssetProperties },
		{ "BPI_AI_Get_RifleAssetProperties", &IAGLS_AI_HumanCharInterface::execBPI_AI_Get_RifleAssetProperties },
		{ "BPI_HCAI_AttackedByKnifeOrHand", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_AttackedByKnifeOrHand },
		{ "BPI_HCAI_DeathSectionByMeleeCombat", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_DeathSectionByMeleeCombat },
		{ "BPI_HCAI_Get_AI_StatusMesh", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_AI_StatusMesh },
		{ "BPI_HCAI_Get_GetHumanCharacterValues", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_GetHumanCharacterValues },
		{ "BPI_HCAI_Get_IsClimbing", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_IsClimbing },
		{ "BPI_HCAI_Get_IsHittedByKnifeOrHand", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_IsHittedByKnifeOrHand },
		{ "BPI_HCAI_Get_PatrolingOverlayState", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_PatrolingOverlayState },
		{ "BPI_HCAI_Get_StartedCoverMode", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Get_StartedCoverMode },
		{ "BPI_HCAI_HitByThrowableObject", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_HitByThrowableObject },
		{ "BPI_HCAI_IsVicForStealthFinisher", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_IsVicForStealthFinisher },
		{ "BPI_HCAI_MarkCharacter", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_MarkCharacter },
		{ "BPI_HCAI_PushCharacter", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_PushCharacter },
		{ "BPI_HCAI_ReloadingAction", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_ReloadingAction },
		{ "BPI_HCAI_Set_CoverPostureStrenght", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Set_CoverPostureStrenght },
		{ "BPI_HCAI_Set_InitializationData", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Set_InitializationData },
		{ "BPI_HCAI_Set_IsClimbing", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_Set_IsClimbing },
		{ "BPI_HCAI_ShootAction", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_ShootAction },
		{ "BPI_HCAI_StartHostageMovement", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_StartHostageMovement },
		{ "BPI_HCAI_StartSitOrStand", &IAGLS_AI_HumanCharInterface::execBPI_HCAI_StartSitOrStand },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_AI_HumanCharInterface);
UClass* Z_Construct_UClass_UAGLS_AI_HumanCharInterface_NoRegister()
{
	return UAGLS_AI_HumanCharInterface::StaticClass();
}
struct Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AGLS_AI_HumanCharInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_PistolAssetProperties, "BPI_AI_Get_PistolAssetProperties" }, // 2165124487
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_AI_Get_RifleAssetProperties, "BPI_AI_Get_RifleAssetProperties" }, // 2579959210
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_AttackedByKnifeOrHand, "BPI_HCAI_AttackedByKnifeOrHand" }, // 745847470
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_DeathSectionByMeleeCombat, "BPI_HCAI_DeathSectionByMeleeCombat" }, // 1042110064
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_AI_StatusMesh, "BPI_HCAI_Get_AI_StatusMesh" }, // 2295717829
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_GetHumanCharacterValues, "BPI_HCAI_Get_GetHumanCharacterValues" }, // 1778628469
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsClimbing, "BPI_HCAI_Get_IsClimbing" }, // 3243459941
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_IsHittedByKnifeOrHand, "BPI_HCAI_Get_IsHittedByKnifeOrHand" }, // 91610808
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_PatrolingOverlayState, "BPI_HCAI_Get_PatrolingOverlayState" }, // 1715067862
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Get_StartedCoverMode, "BPI_HCAI_Get_StartedCoverMode" }, // 3570067271
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_HitByThrowableObject, "BPI_HCAI_HitByThrowableObject" }, // 2826480307
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_IsVicForStealthFinisher, "BPI_HCAI_IsVicForStealthFinisher" }, // 2423223261
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_MarkCharacter, "BPI_HCAI_MarkCharacter" }, // 2592828285
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_PushCharacter, "BPI_HCAI_PushCharacter" }, // 668110386
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ReloadingAction, "BPI_HCAI_ReloadingAction" }, // 1086591593
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_CoverPostureStrenght, "BPI_HCAI_Set_CoverPostureStrenght" }, // 3096099148
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_InitializationData, "BPI_HCAI_Set_InitializationData" }, // 1039203697
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_Set_IsClimbing, "BPI_HCAI_Set_IsClimbing" }, // 717981409
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_ShootAction, "BPI_HCAI_ShootAction" }, // 3054222266
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartHostageMovement, "BPI_HCAI_StartHostageMovement" }, // 4076741134
		{ &Z_Construct_UFunction_UAGLS_AI_HumanCharInterface_BPI_HCAI_StartSitOrStand, "BPI_HCAI_StartSitOrStand" }, // 222346543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAGLS_AI_HumanCharInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics::ClassParams = {
	&UAGLS_AI_HumanCharInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_AI_HumanCharInterface()
{
	if (!Z_Registration_Info_UClass_UAGLS_AI_HumanCharInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_AI_HumanCharInterface.OuterSingleton, Z_Construct_UClass_UAGLS_AI_HumanCharInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_AI_HumanCharInterface.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAGLS_AI_HumanCharInterface>()
{
	return UAGLS_AI_HumanCharInterface::StaticClass();
}
UAGLS_AI_HumanCharInterface::UAGLS_AI_HumanCharInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_AI_HumanCharInterface);
UAGLS_AI_HumanCharInterface::~UAGLS_AI_HumanCharInterface() {}
// End Interface UAGLS_AI_HumanCharInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_AI_HumanCharInterface, UAGLS_AI_HumanCharInterface::StaticClass, TEXT("UAGLS_AI_HumanCharInterface"), &Z_Registration_Info_UClass_UAGLS_AI_HumanCharInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_AI_HumanCharInterface), 3641697735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_2945548118(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_HumanCharInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

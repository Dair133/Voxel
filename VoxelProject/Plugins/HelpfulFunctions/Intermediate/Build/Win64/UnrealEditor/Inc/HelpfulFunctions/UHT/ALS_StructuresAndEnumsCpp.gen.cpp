// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_StructuresAndEnumsCpp() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_PropsAttachValues();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCMC_LedgeC();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalSingeAnimAsset();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalStateEvaluation();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Enum AGLS_LOD_State
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AGLS_LOD_State;
static UEnum* AGLS_LOD_State_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AGLS_LOD_State.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AGLS_LOD_State.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("AGLS_LOD_State"));
	}
	return Z_Registration_Info_UEnum_AGLS_LOD_State.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<AGLS_LOD_State>()
{
	return AGLS_LOD_State_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "LOD0.Comment", "/**\n * \n */" },
		{ "LOD0.Name", "AGLS_LOD_State::LOD0" },
		{ "LOD1.Comment", "/**\n * \n */" },
		{ "LOD1.Name", "AGLS_LOD_State::LOD1" },
		{ "LOD2.Comment", "/**\n * \n */" },
		{ "LOD2.Name", "AGLS_LOD_State::LOD2" },
		{ "LOD3.Comment", "/**\n * \n */" },
		{ "LOD3.Name", "AGLS_LOD_State::LOD3" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AGLS_LOD_State::LOD0", (int64)AGLS_LOD_State::LOD0 },
		{ "AGLS_LOD_State::LOD1", (int64)AGLS_LOD_State::LOD1 },
		{ "AGLS_LOD_State::LOD2", (int64)AGLS_LOD_State::LOD2 },
		{ "AGLS_LOD_State::LOD3", (int64)AGLS_LOD_State::LOD3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"AGLS_LOD_State",
	"AGLS_LOD_State",
	Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State()
{
	if (!Z_Registration_Info_UEnum_AGLS_LOD_State.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AGLS_LOD_State.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AGLS_LOD_State.InnerSingleton;
}
// End Enum AGLS_LOD_State

// Begin Enum CALS_Gait
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_Gait;
static UEnum* CALS_Gait_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_Gait.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_Gait.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_Gait"));
	}
	return Z_Registration_Info_UEnum_CALS_Gait.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Gait>()
{
	return CALS_Gait_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "CALS_Gait::Running" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "CALS_Gait::Sprinting" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "CALS_Gait::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_Gait::Walking", (int64)CALS_Gait::Walking },
		{ "CALS_Gait::Running", (int64)CALS_Gait::Running },
		{ "CALS_Gait::Sprinting", (int64)CALS_Gait::Sprinting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_Gait",
	"CALS_Gait",
	Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait()
{
	if (!Z_Registration_Info_UEnum_CALS_Gait.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_Gait.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_Gait.InnerSingleton;
}
// End Enum CALS_Gait

// Begin Enum CALS_MovementState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_MovementState;
static UEnum* CALS_MovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_MovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_MovementState"));
	}
	return Z_Registration_Info_UEnum_CALS_MovementState.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementState>()
{
	return CALS_MovementState_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crawl.DisplayName", "Crawl" },
		{ "Crawl.Name", "CALS_MovementState::Crawl" },
		{ "Grounded.DisplayName", "Grounded" },
		{ "Grounded.Name", "CALS_MovementState::Grounded" },
		{ "InAir.DisplayName", "In Air" },
		{ "InAir.Name", "CALS_MovementState::InAir" },
		{ "Mantling.DisplayName", "Mantling" },
		{ "Mantling.Name", "CALS_MovementState::Mantling" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "CALS_MovementState::None" },
		{ "Prone.DisplayName", "Prone" },
		{ "Prone.Name", "CALS_MovementState::Prone" },
		{ "Ragdoll.DisplayName", "Ragdoll" },
		{ "Ragdoll.Name", "CALS_MovementState::Ragdoll" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_MovementState::None", (int64)CALS_MovementState::None },
		{ "CALS_MovementState::Grounded", (int64)CALS_MovementState::Grounded },
		{ "CALS_MovementState::InAir", (int64)CALS_MovementState::InAir },
		{ "CALS_MovementState::Mantling", (int64)CALS_MovementState::Mantling },
		{ "CALS_MovementState::Ragdoll", (int64)CALS_MovementState::Ragdoll },
		{ "CALS_MovementState::Crawl", (int64)CALS_MovementState::Crawl },
		{ "CALS_MovementState::Prone", (int64)CALS_MovementState::Prone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_MovementState",
	"CALS_MovementState",
	Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_MovementState.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_MovementState.InnerSingleton;
}
// End Enum CALS_MovementState

// Begin Enum CALS_OverlayState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_OverlayState;
static UEnum* CALS_OverlayState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_OverlayState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_OverlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_OverlayState"));
	}
	return Z_Registration_Info_UEnum_CALS_OverlayState.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayState>()
{
	return CALS_OverlayState_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axe.Name", "CALS_OverlayState::Axe" },
		{ "Barrel.Name", "CALS_OverlayState::Barrel" },
		{ "Binoculars.Name", "CALS_OverlayState::Binoculars" },
		{ "BlueprintType", "true" },
		{ "Bow.Name", "CALS_OverlayState::Bow" },
		{ "Box.Name", "CALS_OverlayState::Box" },
		{ "Default.Name", "CALS_OverlayState::Default" },
		{ "Feminine.Name", "CALS_OverlayState::Feminine" },
		{ "HandsTied.Name", "CALS_OverlayState::HandsTied" },
		{ "Injured.Name", "CALS_OverlayState::Injured" },
		{ "Knife.Name", "CALS_OverlayState::Knife" },
		{ "Masculine.Name", "CALS_OverlayState::Masculine" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "Pistol1H.Name", "CALS_OverlayState::Pistol1H" },
		{ "Pistol2H.Name", "CALS_OverlayState::Pistol2H" },
		{ "Rifle.Name", "CALS_OverlayState::Rifle" },
		{ "Rope.Name", "CALS_OverlayState::Rope" },
		{ "Torch.Name", "CALS_OverlayState::Torch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_OverlayState::Default", (int64)CALS_OverlayState::Default },
		{ "CALS_OverlayState::Masculine", (int64)CALS_OverlayState::Masculine },
		{ "CALS_OverlayState::Feminine", (int64)CALS_OverlayState::Feminine },
		{ "CALS_OverlayState::Injured", (int64)CALS_OverlayState::Injured },
		{ "CALS_OverlayState::HandsTied", (int64)CALS_OverlayState::HandsTied },
		{ "CALS_OverlayState::Rifle", (int64)CALS_OverlayState::Rifle },
		{ "CALS_OverlayState::Pistol1H", (int64)CALS_OverlayState::Pistol1H },
		{ "CALS_OverlayState::Pistol2H", (int64)CALS_OverlayState::Pistol2H },
		{ "CALS_OverlayState::Bow", (int64)CALS_OverlayState::Bow },
		{ "CALS_OverlayState::Torch", (int64)CALS_OverlayState::Torch },
		{ "CALS_OverlayState::Binoculars", (int64)CALS_OverlayState::Binoculars },
		{ "CALS_OverlayState::Box", (int64)CALS_OverlayState::Box },
		{ "CALS_OverlayState::Barrel", (int64)CALS_OverlayState::Barrel },
		{ "CALS_OverlayState::Rope", (int64)CALS_OverlayState::Rope },
		{ "CALS_OverlayState::Axe", (int64)CALS_OverlayState::Axe },
		{ "CALS_OverlayState::Knife", (int64)CALS_OverlayState::Knife },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_OverlayState",
	"CALS_OverlayState",
	Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState()
{
	if (!Z_Registration_Info_UEnum_CALS_OverlayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_OverlayState.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_OverlayState.InnerSingleton;
}
// End Enum CALS_OverlayState

// Begin Enum CALS_RotationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_RotationMode;
static UEnum* CALS_RotationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_RotationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_RotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_RotationMode"));
	}
	return Z_Registration_Info_UEnum_CALS_RotationMode.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_RotationMode>()
{
	return CALS_RotationMode_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aiming.Name", "CALS_RotationMode::Aiming" },
		{ "BlueprintType", "true" },
		{ "LookingDirection.Name", "CALS_RotationMode::LookingDirection" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "VelocityDirection.Name", "CALS_RotationMode::VelocityDirection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_RotationMode::VelocityDirection", (int64)CALS_RotationMode::VelocityDirection },
		{ "CALS_RotationMode::LookingDirection", (int64)CALS_RotationMode::LookingDirection },
		{ "CALS_RotationMode::Aiming", (int64)CALS_RotationMode::Aiming },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_RotationMode",
	"CALS_RotationMode",
	Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode()
{
	if (!Z_Registration_Info_UEnum_CALS_RotationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_RotationMode.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_RotationMode.InnerSingleton;
}
// End Enum CALS_RotationMode

// Begin Enum CALS_GroundedMoveMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_GroundedMoveMode;
static UEnum* CALS_GroundedMoveMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_GroundedMoveMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_GroundedMoveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_GroundedMoveMode"));
	}
	return Z_Registration_Info_UEnum_CALS_GroundedMoveMode.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_GroundedMoveMode>()
{
	return CALS_GroundedMoveMode_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Injured.Name", "CALS_GroundedMoveMode::Injured" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "Normal.Name", "CALS_GroundedMoveMode::Normal" },
		{ "SlowWalk.Name", "CALS_GroundedMoveMode::SlowWalk" },
		{ "Stealth.Name", "CALS_GroundedMoveMode::Stealth" },
		{ "Tired.Name", "CALS_GroundedMoveMode::Tired" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_GroundedMoveMode::Normal", (int64)CALS_GroundedMoveMode::Normal },
		{ "CALS_GroundedMoveMode::SlowWalk", (int64)CALS_GroundedMoveMode::SlowWalk },
		{ "CALS_GroundedMoveMode::Injured", (int64)CALS_GroundedMoveMode::Injured },
		{ "CALS_GroundedMoveMode::Tired", (int64)CALS_GroundedMoveMode::Tired },
		{ "CALS_GroundedMoveMode::Stealth", (int64)CALS_GroundedMoveMode::Stealth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_GroundedMoveMode",
	"CALS_GroundedMoveMode",
	Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode()
{
	if (!Z_Registration_Info_UEnum_CALS_GroundedMoveMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_GroundedMoveMode.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_GroundedMoveMode.InnerSingleton;
}
// End Enum CALS_GroundedMoveMode

// Begin Enum CALS_Stance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_Stance;
static UEnum* CALS_Stance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_Stance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_Stance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_Stance"));
	}
	return Z_Registration_Info_UEnum_CALS_Stance.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Stance>()
{
	return CALS_Stance_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.Name", "CALS_Stance::Crouching" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "Standing.Name", "CALS_Stance::Standing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_Stance::Standing", (int64)CALS_Stance::Standing },
		{ "CALS_Stance::Crouching", (int64)CALS_Stance::Crouching },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_Stance",
	"CALS_Stance",
	Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance()
{
	if (!Z_Registration_Info_UEnum_CALS_Stance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_Stance.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_Stance.InnerSingleton;
}
// End Enum CALS_Stance

// Begin Enum CALS_MovementAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_MovementAction;
static UEnum* CALS_MovementAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_MovementAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_MovementAction"));
	}
	return Z_Registration_Info_UEnum_CALS_MovementAction.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementAction>()
{
	return CALS_MovementAction_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GettingUp.Name", "CALS_MovementAction::GettingUp" },
		{ "HighMantle.Name", "CALS_MovementAction::HighMantle" },
		{ "LowMantle.Name", "CALS_MovementAction::LowMantle" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "None.Name", "CALS_MovementAction::None" },
		{ "Rolling.Name", "CALS_MovementAction::Rolling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_MovementAction::None", (int64)CALS_MovementAction::None },
		{ "CALS_MovementAction::LowMantle", (int64)CALS_MovementAction::LowMantle },
		{ "CALS_MovementAction::HighMantle", (int64)CALS_MovementAction::HighMantle },
		{ "CALS_MovementAction::Rolling", (int64)CALS_MovementAction::Rolling },
		{ "CALS_MovementAction::GettingUp", (int64)CALS_MovementAction::GettingUp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_MovementAction",
	"CALS_MovementAction",
	Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_MovementAction.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_MovementAction.InnerSingleton;
}
// End Enum CALS_MovementAction

// Begin Enum CALS_OverlayPosesType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_OverlayPosesType;
static UEnum* CALS_OverlayPosesType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_OverlayPosesType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_OverlayPosesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_OverlayPosesType"));
	}
	return Z_Registration_Info_UEnum_CALS_OverlayPosesType.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayPosesType>()
{
	return CALS_OverlayPosesType_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aiming.Name", "CALS_OverlayPosesType::Aiming" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "Ready.Name", "CALS_OverlayPosesType::Ready" },
		{ "Relaxed.Name", "CALS_OverlayPosesType::Relaxed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_OverlayPosesType::Relaxed", (int64)CALS_OverlayPosesType::Relaxed },
		{ "CALS_OverlayPosesType::Ready", (int64)CALS_OverlayPosesType::Ready },
		{ "CALS_OverlayPosesType::Aiming", (int64)CALS_OverlayPosesType::Aiming },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_OverlayPosesType",
	"CALS_OverlayPosesType",
	Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType()
{
	if (!Z_Registration_Info_UEnum_CALS_OverlayPosesType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_OverlayPosesType.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayPosesType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_OverlayPosesType.InnerSingleton;
}
// End Enum CALS_OverlayPosesType

// Begin Enum CMC_ActionTypeC
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CMC_ActionTypeC;
static UEnum* CMC_ActionTypeC_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CMC_ActionTypeC.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CMC_ActionTypeC.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CMC_ActionTypeC"));
	}
	return Z_Registration_Info_UEnum_CMC_ActionTypeC.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CMC_ActionTypeC>()
{
	return CMC_ActionTypeC_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CornerInner.Name", "CMC_ActionTypeC::CornerInner" },
		{ "CornerOuter.Name", "CMC_ActionTypeC::CornerOuter" },
		{ "DropFromNarrowFloor.Name", "CMC_ActionTypeC::DropFromNarrowFloor" },
		{ "DropToNarrowFloor.Name", "CMC_ActionTypeC::DropToNarrowFloor" },
		{ "ForwardMove.Name", "CMC_ActionTypeC::ForwardMove" },
		{ "JumpBackToNextLedge.Name", "CMC_ActionTypeC::JumpBackToNextLedge" },
		{ "JumpForwardToBeam.Name", "CMC_ActionTypeC::JumpForwardToBeam" },
		{ "JumpNextLedge.Name", "CMC_ActionTypeC::JumpNextLedge" },
		{ "JumpToBeamSwinging.Name", "CMC_ActionTypeC::JumpToBeamSwinging" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "None.Name", "CMC_ActionTypeC::None" },
		{ "PullUpToNarrowFloor.Name", "CMC_ActionTypeC::PullUpToNarrowFloor" },
		{ "ShortMove.Name", "CMC_ActionTypeC::ShortMove" },
		{ "StartHoldingLedge.Name", "CMC_ActionTypeC::StartHoldingLedge" },
		{ "Turn180.Name", "CMC_ActionTypeC::Turn180" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CMC_ActionTypeC::None", (int64)CMC_ActionTypeC::None },
		{ "CMC_ActionTypeC::ShortMove", (int64)CMC_ActionTypeC::ShortMove },
		{ "CMC_ActionTypeC::CornerOuter", (int64)CMC_ActionTypeC::CornerOuter },
		{ "CMC_ActionTypeC::CornerInner", (int64)CMC_ActionTypeC::CornerInner },
		{ "CMC_ActionTypeC::Turn180", (int64)CMC_ActionTypeC::Turn180 },
		{ "CMC_ActionTypeC::JumpNextLedge", (int64)CMC_ActionTypeC::JumpNextLedge },
		{ "CMC_ActionTypeC::JumpBackToNextLedge", (int64)CMC_ActionTypeC::JumpBackToNextLedge },
		{ "CMC_ActionTypeC::ForwardMove", (int64)CMC_ActionTypeC::ForwardMove },
		{ "CMC_ActionTypeC::PullUpToNarrowFloor", (int64)CMC_ActionTypeC::PullUpToNarrowFloor },
		{ "CMC_ActionTypeC::DropToNarrowFloor", (int64)CMC_ActionTypeC::DropToNarrowFloor },
		{ "CMC_ActionTypeC::DropFromNarrowFloor", (int64)CMC_ActionTypeC::DropFromNarrowFloor },
		{ "CMC_ActionTypeC::JumpToBeamSwinging", (int64)CMC_ActionTypeC::JumpToBeamSwinging },
		{ "CMC_ActionTypeC::JumpForwardToBeam", (int64)CMC_ActionTypeC::JumpForwardToBeam },
		{ "CMC_ActionTypeC::StartHoldingLedge", (int64)CMC_ActionTypeC::StartHoldingLedge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CMC_ActionTypeC",
	"CMC_ActionTypeC",
	Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC()
{
	if (!Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton;
}
// End Enum CMC_ActionTypeC

// Begin Enum CALS_DeathType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_DeathType;
static UEnum* CALS_DeathType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_DeathType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_DeathType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_DeathType"));
	}
	return Z_Registration_Info_UEnum_CALS_DeathType.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_DeathType>()
{
	return CALS_DeathType_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BiteByZombie.Name", "CALS_DeathType::BiteByZombie" },
		{ "BlueprintType", "true" },
		{ "Explosion.Name", "CALS_DeathType::Explosion" },
		{ "FallFromHeight.Name", "CALS_DeathType::FallFromHeight" },
		{ "HitByCar.Name", "CALS_DeathType::HitByCar" },
		{ "KilledByGun.Name", "CALS_DeathType::KilledByGun" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "SilenthDeath.Name", "CALS_DeathType::SilenthDeath" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_DeathType::KilledByGun", (int64)CALS_DeathType::KilledByGun },
		{ "CALS_DeathType::FallFromHeight", (int64)CALS_DeathType::FallFromHeight },
		{ "CALS_DeathType::HitByCar", (int64)CALS_DeathType::HitByCar },
		{ "CALS_DeathType::Explosion", (int64)CALS_DeathType::Explosion },
		{ "CALS_DeathType::SilenthDeath", (int64)CALS_DeathType::SilenthDeath },
		{ "CALS_DeathType::BiteByZombie", (int64)CALS_DeathType::BiteByZombie },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_DeathType",
	"CALS_DeathType",
	Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType()
{
	if (!Z_Registration_Info_UEnum_CALS_DeathType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_DeathType.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_DeathType.InnerSingleton;
}
// End Enum CALS_DeathType

// Begin ScriptStruct FCALS_ComponentAndTransform
static_assert(std::is_polymorphic<FCALS_ComponentAndTransform>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCALS_ComponentAndTransform cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform;
class UScriptStruct* FCALS_ComponentAndTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_ComponentAndTransform"));
	}
	return Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCALS_ComponentAndTransform>()
{
	return FCALS_ComponentAndTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Transformation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCALS_ComponentAndTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_ComponentAndTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_ComponentAndTransform, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CALS_ComponentAndTransform",
	Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers),
	sizeof(FCALS_ComponentAndTransform),
	alignof(FCALS_ComponentAndTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton;
}
// End ScriptStruct FCALS_ComponentAndTransform

// Begin ScriptStruct FCMC_SingleClimbPointC
static_assert(std::is_polymorphic<FCMC_SingleClimbPointC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCMC_SingleClimbPointC cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC;
class UScriptStruct* FCMC_SingleClimbPointC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CMC_SingleClimbPointC"));
	}
	return Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCMC_SingleClimbPointC>()
{
	return FCMC_SingleClimbPointC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ValidPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCMC_SingleClimbPointC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_SetBit(void* Obj)
{
	((FCMC_SingleClimbPointC*)Obj)->ValidPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint = { "ValidPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCMC_SingleClimbPointC), &Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidPoint_MetaData), NewProp_ValidPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CMC_SingleClimbPointC",
	Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers),
	sizeof(FCMC_SingleClimbPointC),
	alignof(FCMC_SingleClimbPointC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton, Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton;
}
// End ScriptStruct FCMC_SingleClimbPointC

// Begin ScriptStruct FCMC_LedgeC
static_assert(std::is_polymorphic<FCMC_LedgeC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCMC_LedgeC cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CMC_LedgeC;
class UScriptStruct* FCMC_LedgeC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_LedgeC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CMC_LedgeC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCMC_LedgeC, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CMC_LedgeC"));
	}
	return Z_Registration_Info_UScriptStruct_CMC_LedgeC.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCMC_LedgeC>()
{
	return FCMC_LedgeC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCMC_LedgeC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCMC_LedgeC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint = { "LeftPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, LeftPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPoint_MetaData), NewProp_LeftPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint = { "RightPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, RightPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPoint_MetaData), NewProp_RightPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CMC_LedgeC",
	Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers),
	sizeof(FCMC_LedgeC),
	alignof(FCMC_LedgeC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCMC_LedgeC()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton, Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton;
}
// End ScriptStruct FCMC_LedgeC

// Begin ScriptStruct FTraversalStateEvaluation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraversalStateEvaluation;
class UScriptStruct* FTraversalStateEvaluation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalStateEvaluation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraversalStateEvaluation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraversalStateEvaluation, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("TraversalStateEvaluation"));
	}
	return Z_Registration_Info_UScriptStruct_TraversalStateEvaluation.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FTraversalStateEvaluation>()
{
	return FTraversalStateEvaluation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Traversal state evaluation\n" },
#endif
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traversal state evaluation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasFrontLedge_MetaData[] = {
		{ "Category", "CollisionState" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasBackLedge_MetaData[] = {
		{ "Category", "CollisionState" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasBackFloor_MetaData[] = {
		{ "Category", "CollisionState" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleHeightRange_MetaData[] = {
		{ "Category", "Ranges" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDepthRange_MetaData[] = {
		{ "Category", "Ranges" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackLedgeHeightRange_MetaData[] = {
		{ "Category", "Ranges" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionToIgnore_MetaData[] = {
		{ "Category", "ConditionIgnore" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_HasFrontLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasFrontLedge;
	static void NewProp_HasBackLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBackLedge;
	static void NewProp_HasBackFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBackFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObstacleHeightRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObstacleDepthRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackLedgeHeightRange;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConditionToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionToIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraversalStateEvaluation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasFrontLedge_SetBit(void* Obj)
{
	((FTraversalStateEvaluation*)Obj)->HasFrontLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasFrontLedge = { "HasFrontLedge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraversalStateEvaluation), &Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasFrontLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasFrontLedge_MetaData), NewProp_HasFrontLedge_MetaData) };
void Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackLedge_SetBit(void* Obj)
{
	((FTraversalStateEvaluation*)Obj)->HasBackLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackLedge = { "HasBackLedge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraversalStateEvaluation), &Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasBackLedge_MetaData), NewProp_HasBackLedge_MetaData) };
void Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackFloor_SetBit(void* Obj)
{
	((FTraversalStateEvaluation*)Obj)->HasBackFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackFloor = { "HasBackFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraversalStateEvaluation), &Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasBackFloor_MetaData), NewProp_HasBackFloor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ObstacleHeightRange = { "ObstacleHeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalStateEvaluation, ObstacleHeightRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleHeightRange_MetaData), NewProp_ObstacleHeightRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ObstacleDepthRange = { "ObstacleDepthRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalStateEvaluation, ObstacleDepthRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleDepthRange_MetaData), NewProp_ObstacleDepthRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_BackLedgeHeightRange = { "BackLedgeHeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalStateEvaluation, BackLedgeHeightRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLedgeHeightRange_MetaData), NewProp_BackLedgeHeightRange_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ConditionToIgnore_Inner = { "ConditionToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ConditionToIgnore = { "ConditionToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalStateEvaluation, ConditionToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionToIgnore_MetaData), NewProp_ConditionToIgnore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasFrontLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_HasBackFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ObstacleHeightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ObstacleDepthRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_BackLedgeHeightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ConditionToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewProp_ConditionToIgnore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"TraversalStateEvaluation",
	Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::PropPointers),
	sizeof(FTraversalStateEvaluation),
	alignof(FTraversalStateEvaluation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraversalStateEvaluation()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalStateEvaluation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraversalStateEvaluation.InnerSingleton, Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraversalStateEvaluation.InnerSingleton;
}
// End ScriptStruct FTraversalStateEvaluation

// Begin ScriptStruct FTraversalSingeAnimAsset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset;
class UScriptStruct* FTraversalSingeAnimAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraversalSingeAnimAsset, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("TraversalSingeAnimAsset"));
	}
	return Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FTraversalSingeAnimAsset>()
{
	return FTraversalSingeAnimAsset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingOffset_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHeight_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighHeight_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAnimStartAt_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAnimStartAt_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[] = {
		{ "Category", "Mantle Asset" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimStartAt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimStartAt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraversalSingeAnimAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_StartingOffset = { "StartingOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, StartingOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingOffset_MetaData), NewProp_StartingOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_LowHeight = { "LowHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, LowHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHeight_MetaData), NewProp_LowHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_HighHeight = { "HighHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, HighHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighHeight_MetaData), NewProp_HighHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MinAnimStartAt = { "MinAnimStartAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, MinAnimStartAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAnimStartAt_MetaData), NewProp_MinAnimStartAt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MaxAnimStartAt = { "MaxAnimStartAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, MaxAnimStartAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAnimStartAt_MetaData), NewProp_MaxAnimStartAt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MinPlayRate = { "MinPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, MinPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPlayRate_MetaData), NewProp_MinPlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MaxPlayRate = { "MaxPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraversalSingeAnimAsset, MaxPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayRate_MetaData), NewProp_MaxPlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_StartingOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_LowHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_HighHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MinAnimStartAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MaxAnimStartAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MinPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewProp_MaxPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"TraversalSingeAnimAsset",
	Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::PropPointers),
	sizeof(FTraversalSingeAnimAsset),
	alignof(FTraversalSingeAnimAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraversalSingeAnimAsset()
{
	if (!Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset.InnerSingleton, Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset.InnerSingleton;
}
// End ScriptStruct FTraversalSingeAnimAsset

// Begin ScriptStruct FCALSMovementSettingsStrafe
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe;
class UScriptStruct* FCALSMovementSettingsStrafe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALSMovementSettingsStrafe"));
	}
	return Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCALSMovementSettingsStrafe>()
{
	return FCALSMovementSettingsStrafe::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateCurve_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationRateCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCALSMovementSettingsStrafe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettingsStrafe, WalkSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettingsStrafe, RunSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettingsStrafe, SprintSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettingsStrafe, MovementCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCurve_MetaData), NewProp_MovementCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_RotationRateCurve = { "RotationRateCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettingsStrafe, RotationRateCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateCurve_MetaData), NewProp_RotationRateCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_MovementCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewProp_RotationRateCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"CALSMovementSettingsStrafe",
	Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::PropPointers),
	sizeof(FCALSMovementSettingsStrafe),
	alignof(FCALSMovementSettingsStrafe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe()
{
	if (!Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe.InnerSingleton, Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe.InnerSingleton;
}
// End ScriptStruct FCALSMovementSettingsStrafe

// Begin ScriptStruct FCALS_PropsAttachValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues;
class UScriptStruct* FCALS_PropsAttachValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCALS_PropsAttachValues, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_PropsAttachValues"));
	}
	return Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCALS_PropsAttachValues>()
{
	return FCALS_PropsAttachValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "Category", "Target Prop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponent_MetaData[] = {
		{ "Category", "Prop Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Prop Values" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachOffset_MetaData[] = {
		{ "Category", "Prop Values" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCALS_PropsAttachValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_PropsAttachValues, TargetComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_ParentComponent = { "ParentComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_PropsAttachValues, ParentComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentComponent_MetaData), NewProp_ParentComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_PropsAttachValues, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_AttachOffset = { "AttachOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_PropsAttachValues, AttachOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachOffset_MetaData), NewProp_AttachOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_ParentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewProp_AttachOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"CALS_PropsAttachValues",
	Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::PropPointers),
	sizeof(FCALS_PropsAttachValues),
	alignof(FCALS_PropsAttachValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCALS_PropsAttachValues()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues.InnerSingleton, Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues.InnerSingleton;
}
// End ScriptStruct FCALS_PropsAttachValues

// Begin ScriptStruct FAGLS_FinishersDataForAI
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI;
class UScriptStruct* FAGLS_FinishersDataForAI::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("AGLS_FinishersDataForAI"));
	}
	return Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FAGLS_FinishersDataForAI>()
{
	return FAGLS_FinishersDataForAI::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceDuration_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageAtt_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSeqenceAtt_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageVic_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSeqenceVic_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstCapsuleOffsets_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRotationOffset_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSlotForAtt_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSlotForVic_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpPointName_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightScale_MetaData[] = {
		{ "Category", "AI Finisher Action" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceDuration;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MontageAtt;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimSeqenceAtt;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MontageVic;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimSeqenceVic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstCapsuleOffsets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleRotationOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimSlotForAtt;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimSlotForVic;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpPointName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAGLS_FinishersDataForAI>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_SequenceDuration = { "SequenceDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, SequenceDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceDuration_MetaData), NewProp_SequenceDuration_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_MontageAtt = { "MontageAtt", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, MontageAtt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageAtt_MetaData), NewProp_MontageAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSeqenceAtt = { "AnimSeqenceAtt", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, AnimSeqenceAtt), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSeqenceAtt_MetaData), NewProp_AnimSeqenceAtt_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_MontageVic = { "MontageVic", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, MontageVic), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageVic_MetaData), NewProp_MontageVic_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSeqenceVic = { "AnimSeqenceVic", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, AnimSeqenceVic), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSeqenceVic_MetaData), NewProp_AnimSeqenceVic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_ConstCapsuleOffsets = { "ConstCapsuleOffsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, ConstCapsuleOffsets), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstCapsuleOffsets_MetaData), NewProp_ConstCapsuleOffsets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_CapsuleRotationOffset = { "CapsuleRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, CapsuleRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRotationOffset_MetaData), NewProp_CapsuleRotationOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSlotForAtt = { "AnimSlotForAtt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, AnimSlotForAtt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSlotForAtt_MetaData), NewProp_AnimSlotForAtt_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSlotForVic = { "AnimSlotForVic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, AnimSlotForVic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSlotForVic_MetaData), NewProp_AnimSlotForVic_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_WarpPointName = { "WarpPointName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, WarpPointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpPointName_MetaData), NewProp_WarpPointName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_WeightScale = { "WeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAGLS_FinishersDataForAI, WeightScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightScale_MetaData), NewProp_WeightScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_SequenceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_MontageAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSeqenceAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_MontageVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSeqenceVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_ConstCapsuleOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_CapsuleRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSlotForAtt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_AnimSlotForVic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_WarpPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewProp_WeightScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"AGLS_FinishersDataForAI",
	Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::PropPointers),
	sizeof(FAGLS_FinishersDataForAI),
	alignof(FAGLS_FinishersDataForAI),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI()
{
	if (!Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI.InnerSingleton, Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI.InnerSingleton;
}
// End ScriptStruct FAGLS_FinishersDataForAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AGLS_LOD_State_StaticEnum, TEXT("AGLS_LOD_State"), &Z_Registration_Info_UEnum_AGLS_LOD_State, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4107279616U) },
		{ CALS_Gait_StaticEnum, TEXT("CALS_Gait"), &Z_Registration_Info_UEnum_CALS_Gait, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1732279459U) },
		{ CALS_MovementState_StaticEnum, TEXT("CALS_MovementState"), &Z_Registration_Info_UEnum_CALS_MovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3255268152U) },
		{ CALS_OverlayState_StaticEnum, TEXT("CALS_OverlayState"), &Z_Registration_Info_UEnum_CALS_OverlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3098219672U) },
		{ CALS_RotationMode_StaticEnum, TEXT("CALS_RotationMode"), &Z_Registration_Info_UEnum_CALS_RotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1340769226U) },
		{ CALS_GroundedMoveMode_StaticEnum, TEXT("CALS_GroundedMoveMode"), &Z_Registration_Info_UEnum_CALS_GroundedMoveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1562728553U) },
		{ CALS_Stance_StaticEnum, TEXT("CALS_Stance"), &Z_Registration_Info_UEnum_CALS_Stance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 87690985U) },
		{ CALS_MovementAction_StaticEnum, TEXT("CALS_MovementAction"), &Z_Registration_Info_UEnum_CALS_MovementAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3049088149U) },
		{ CALS_OverlayPosesType_StaticEnum, TEXT("CALS_OverlayPosesType"), &Z_Registration_Info_UEnum_CALS_OverlayPosesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1020122115U) },
		{ CMC_ActionTypeC_StaticEnum, TEXT("CMC_ActionTypeC"), &Z_Registration_Info_UEnum_CMC_ActionTypeC, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3053408074U) },
		{ CALS_DeathType_StaticEnum, TEXT("CALS_DeathType"), &Z_Registration_Info_UEnum_CALS_DeathType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1991249896U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCALS_ComponentAndTransform::StaticStruct, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewStructOps, TEXT("CALS_ComponentAndTransform"), &Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCALS_ComponentAndTransform), 954340455U) },
		{ FCMC_SingleClimbPointC::StaticStruct, Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewStructOps, TEXT("CMC_SingleClimbPointC"), &Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCMC_SingleClimbPointC), 1225395477U) },
		{ FCMC_LedgeC::StaticStruct, Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewStructOps, TEXT("CMC_LedgeC"), &Z_Registration_Info_UScriptStruct_CMC_LedgeC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCMC_LedgeC), 38286648U) },
		{ FTraversalStateEvaluation::StaticStruct, Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics::NewStructOps, TEXT("TraversalStateEvaluation"), &Z_Registration_Info_UScriptStruct_TraversalStateEvaluation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraversalStateEvaluation), 4249654316U) },
		{ FTraversalSingeAnimAsset::StaticStruct, Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics::NewStructOps, TEXT("TraversalSingeAnimAsset"), &Z_Registration_Info_UScriptStruct_TraversalSingeAnimAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraversalSingeAnimAsset), 2809917423U) },
		{ FCALSMovementSettingsStrafe::StaticStruct, Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics::NewStructOps, TEXT("CALSMovementSettingsStrafe"), &Z_Registration_Info_UScriptStruct_CALSMovementSettingsStrafe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCALSMovementSettingsStrafe), 2042637900U) },
		{ FCALS_PropsAttachValues::StaticStruct, Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics::NewStructOps, TEXT("CALS_PropsAttachValues"), &Z_Registration_Info_UScriptStruct_CALS_PropsAttachValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCALS_PropsAttachValues), 2522046275U) },
		{ FAGLS_FinishersDataForAI::StaticStruct, Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics::NewStructOps, TEXT("AGLS_FinishersDataForAI"), &Z_Registration_Info_UScriptStruct_AGLS_FinishersDataForAI, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAGLS_FinishersDataForAI), 2706352487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_424573955(TEXT("/Script/HelpfulFunctions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

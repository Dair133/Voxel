// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_EnumsAndStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_EnumsAndStruct() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
IWALS_ABILITYSYSTEM_API UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLeanAmoutC();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTurnInPlaceAssetC();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendC();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Enum HipsDirectionC
static FEnumRegistrationInfo Z_Registration_Info_UEnum_HipsDirectionC;
static UEnum* HipsDirectionC_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_HipsDirectionC.OuterSingleton)
	{
		Z_Registration_Info_UEnum_HipsDirectionC.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("HipsDirectionC"));
	}
	return Z_Registration_Info_UEnum_HipsDirectionC.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<HipsDirectionC>()
{
	return HipsDirectionC_StaticEnum();
}
struct Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "B.Name", "HipsDirectionC::B" },
		{ "BlueprintType", "true" },
		{ "F.Name", "HipsDirectionC::F" },
		{ "LB.Name", "HipsDirectionC::LB" },
		{ "LF.Name", "HipsDirectionC::LF" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
		{ "RB.Name", "HipsDirectionC::RB" },
		{ "RF.Name", "HipsDirectionC::RF" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "HipsDirectionC::F", (int64)HipsDirectionC::F },
		{ "HipsDirectionC::B", (int64)HipsDirectionC::B },
		{ "HipsDirectionC::RF", (int64)HipsDirectionC::RF },
		{ "HipsDirectionC::RB", (int64)HipsDirectionC::RB },
		{ "HipsDirectionC::LF", (int64)HipsDirectionC::LF },
		{ "HipsDirectionC::LB", (int64)HipsDirectionC::LB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	nullptr,
	"HipsDirectionC",
	"HipsDirectionC",
	Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC()
{
	if (!Z_Registration_Info_UEnum_HipsDirectionC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_HipsDirectionC.InnerSingleton, Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_HipsDirectionC.InnerSingleton;
}
// End Enum HipsDirectionC

// Begin ScriptStruct FLeanAmoutC
static_assert(std::is_polymorphic<FLeanAmoutC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLeanAmoutC cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeanAmoutC;
class UScriptStruct* FLeanAmoutC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeanAmoutC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeanAmoutC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeanAmoutC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("LeanAmoutC"));
	}
	return Z_Registration_Info_UScriptStruct_LeanAmoutC.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<FLeanAmoutC>()
{
	return FLeanAmoutC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeanAmoutC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LR_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FB_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LR;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeanAmoutC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_LR = { "LR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeanAmoutC, LR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LR_MetaData), NewProp_LR_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_FB = { "FB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeanAmoutC, FB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FB_MetaData), NewProp_FB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeanAmoutC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_LR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_FB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeanAmoutC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"LeanAmoutC",
	Z_Construct_UScriptStruct_FLeanAmoutC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::PropPointers),
	sizeof(FLeanAmoutC),
	alignof(FLeanAmoutC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeanAmoutC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeanAmoutC()
{
	if (!Z_Registration_Info_UScriptStruct_LeanAmoutC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeanAmoutC.InnerSingleton, Z_Construct_UScriptStruct_FLeanAmoutC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeanAmoutC.InnerSingleton;
}
// End ScriptStruct FLeanAmoutC

// Begin ScriptStruct FVelocityBlendC
static_assert(std::is_polymorphic<FVelocityBlendC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FVelocityBlendC cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VelocityBlendC;
class UScriptStruct* FVelocityBlendC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityBlendC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VelocityBlendC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVelocityBlendC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("VelocityBlendC"));
	}
	return Z_Registration_Info_UScriptStruct_VelocityBlendC.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<FVelocityBlendC>()
{
	return FVelocityBlendC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVelocityBlendC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[] = {
		{ "Category", "Forward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Backward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[] = {
		{ "Category", "Left" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
		{ "Category", "Right" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVelocityBlendC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendC, F), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_F_MetaData), NewProp_F_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendC, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendC, L), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_MetaData), NewProp_L_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlendC, R), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MetaData), NewProp_R_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVelocityBlendC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_F,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_R,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"VelocityBlendC",
	Z_Construct_UScriptStruct_FVelocityBlendC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::PropPointers),
	sizeof(FVelocityBlendC),
	alignof(FVelocityBlendC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVelocityBlendC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendC()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityBlendC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VelocityBlendC.InnerSingleton, Z_Construct_UScriptStruct_FVelocityBlendC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VelocityBlendC.InnerSingleton;
}
// End ScriptStruct FVelocityBlendC

// Begin ScriptStruct FTurnInPlaceAssetC
static_assert(std::is_polymorphic<FTurnInPlaceAssetC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTurnInPlaceAssetC cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC;
class UScriptStruct* FTurnInPlaceAssetC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTurnInPlaceAssetC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("TurnInPlaceAssetC"));
	}
	return Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<FTurnInPlaceAssetC>()
{
	return FTurnInPlaceAssetC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "Forward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedAngle_MetaData[] = {
		{ "Category", "Backward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Left" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Right" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleTurnAngle_MetaData[] = {
		{ "Category", "Right" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedAngle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_ScaleTurnAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleTurnAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTurnInPlaceAssetC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAssetC, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_AnimatedAngle = { "AnimatedAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAssetC, AnimatedAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedAngle_MetaData), NewProp_AnimatedAngle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAssetC, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAssetC, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle_SetBit(void* Obj)
{
	((FTurnInPlaceAssetC*)Obj)->ScaleTurnAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle = { "ScaleTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTurnInPlaceAssetC), &Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleTurnAngle_MetaData), NewProp_ScaleTurnAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_AnimatedAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TurnInPlaceAssetC",
	Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::PropPointers),
	sizeof(FTurnInPlaceAssetC),
	alignof(FTurnInPlaceAssetC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTurnInPlaceAssetC()
{
	if (!Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.InnerSingleton, Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.InnerSingleton;
}
// End ScriptStruct FTurnInPlaceAssetC

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ HipsDirectionC_StaticEnum, TEXT("HipsDirectionC"), &Z_Registration_Info_UEnum_HipsDirectionC, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 747335142U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLeanAmoutC::StaticStruct, Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewStructOps, TEXT("LeanAmoutC"), &Z_Registration_Info_UScriptStruct_LeanAmoutC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeanAmoutC), 397305209U) },
		{ FVelocityBlendC::StaticStruct, Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewStructOps, TEXT("VelocityBlendC"), &Z_Registration_Info_UScriptStruct_VelocityBlendC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVelocityBlendC), 2729506802U) },
		{ FTurnInPlaceAssetC::StaticStruct, Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewStructOps, TEXT("TurnInPlaceAssetC"), &Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTurnInPlaceAssetC), 1353387925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_1168781904(TEXT("/Script/IWALS_AbilitySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

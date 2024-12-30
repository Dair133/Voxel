// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/GAS_MainCharacterCpp.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_MainCharacterCpp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_MainCharacterCpp();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_MainCharacterCpp_NoRegister();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMovementSettingsStrafe();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin ScriptStruct FMovementSettingsStrafe
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovementSettingsStrafe;
class UScriptStruct* FMovementSettingsStrafe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovementSettingsStrafe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovementSettingsStrafe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementSettingsStrafe, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("MovementSettingsStrafe"));
	}
	return Z_Registration_Info_UScriptStruct_MovementSettingsStrafe.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<FMovementSettingsStrafe>()
{
	return FMovementSettingsStrafe::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementSettingsStrafe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, WalkSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, RunSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, SprintSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, MovementCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCurve_MetaData), NewProp_MovementCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RotationRateCurve = { "RotationRateCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsStrafe, RotationRateCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateCurve_MetaData), NewProp_RotationRateCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_MovementCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewProp_RotationRateCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	nullptr,
	&NewStructOps,
	"MovementSettingsStrafe",
	Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::PropPointers),
	sizeof(FMovementSettingsStrafe),
	alignof(FMovementSettingsStrafe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementSettingsStrafe()
{
	if (!Z_Registration_Info_UScriptStruct_MovementSettingsStrafe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovementSettingsStrafe.InnerSingleton, Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovementSettingsStrafe.InnerSingleton;
}
// End ScriptStruct FMovementSettingsStrafe

// Begin Class AGAS_MainCharacterCpp Function CalculateGroundedRotationSpeedC
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics
{
	struct GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms
	{
		float Scale;
		FVector2D YawScaleRange;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation System" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_YawScaleRange", "(X=1.000,Y=3.000)" },
		{ "DisplayName", "Calculate Grounded Rotation Speed" },
		{ "Keywords", "Rotation" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawScaleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_YawScaleRange = { "YawScaleRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms, YawScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_YawScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "CalculateGroundedRotationSpeedC", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::GAS_MainCharacterCpp_eventCalculateGroundedRotationSpeedC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execCalculateGroundedRotationSpeedC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_STRUCT(FVector2D,Z_Param_YawScaleRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateGroundedRotationSpeedC(Z_Param_Scale,Z_Param_YawScaleRange);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function CalculateGroundedRotationSpeedC

// Begin Class AGAS_MainCharacterCpp Function ConvertLiteralNameToTag
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics
{
	struct GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms
	{
		FName TagName;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay Tag Functions\n// -----------------------------------------------\n" },
#endif
		{ "DisplayName", "Convert Literal Name To Tag" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Tag Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "ConvertLiteralNameToTag", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execConvertLiteralNameToTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->ConvertLiteralNameToTag(Z_Param_TagName);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function ConvertLiteralNameToTag

// Begin Class AGAS_MainCharacterCpp Function DoWhenOverlayLeaving
struct GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms
{
	float DeltaSecond;
};
static const FName NAME_AGAS_MainCharacterCpp_DoWhenOverlayLeaving = FName(TEXT("DoWhenOverlayLeaving"));
void AGAS_MainCharacterCpp::DoWhenOverlayLeaving(float DeltaSecond)
{
	GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms Parms;
	Parms.DeltaSecond=DeltaSecond;
	UFunction* Func = FindFunctionChecked(NAME_AGAS_MainCharacterCpp_DoWhenOverlayLeaving);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For Overlay System\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For Overlay System" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::NewProp_DeltaSecond = { "DeltaSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms, DeltaSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::NewProp_DeltaSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "DoWhenOverlayLeaving", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::PropPointers), sizeof(GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::Function_MetaDataParams) };
static_assert(sizeof(GAS_MainCharacterCpp_eventDoWhenOverlayLeaving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGAS_MainCharacterCpp Function DoWhenOverlayLeaving

// Begin Class AGAS_MainCharacterCpp Function FloorToCapsuleLocationC
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics
{
	struct GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms
	{
		FVector BaseLocation;
		float ZOffset;
		bool ByDefSize;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "DisplayName", "Floor To Capsule Location" },
		{ "Keywords", "Others" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static void NewProp_ByDefSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ByDefSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_BaseLocation = { "BaseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms, BaseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms*)Obj)->ByDefSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize = { "ByDefSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_BaseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ByDefSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "FloorToCapsuleLocationC", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::GAS_MainCharacterCpp_eventFloorToCapsuleLocationC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execFloorToCapsuleLocationC)
{
	P_GET_STRUCT(FVector,Z_Param_BaseLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_GET_UBOOL(Z_Param_ByDefSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->FloorToCapsuleLocationC(Z_Param_BaseLocation,Z_Param_ZOffset,Z_Param_ByDefSize);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function FloorToCapsuleLocationC

// Begin Class AGAS_MainCharacterCpp Function GetCapsuleBaseLocationC
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics
{
	struct GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms
	{
		float ZOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "DisplayName", "Get Capsule Base Location" },
		{ "Keywords", "Others" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetCapsuleBaseLocationC", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::GAS_MainCharacterCpp_eventGetCapsuleBaseLocationC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetCapsuleBaseLocationC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCapsuleBaseLocationC(Z_Param_ZOffset);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function GetCapsuleBaseLocationC

// Begin Class AGAS_MainCharacterCpp Function GetControlVectorsC
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics
{
	struct GAS_MainCharacterCpp_eventGetControlVectorsC_Parms
	{
		FVector ForwardVector;
		FVector RightVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "DisplayName", "Get Control Vectors" },
		{ "Keywords", "Others" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetControlVectorsC_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_RightVector = { "RightVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetControlVectorsC_Parms, RightVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_ForwardVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::NewProp_RightVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetControlVectorsC", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::GAS_MainCharacterCpp_eventGetControlVectorsC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::GAS_MainCharacterCpp_eventGetControlVectorsC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetControlVectorsC)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVector);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RightVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetControlVectorsC(Z_Param_Out_ForwardVector,Z_Param_Out_RightVector);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function GetControlVectorsC

// Begin Class AGAS_MainCharacterCpp Function GetMappedSpeedC
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics
{
	struct GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms
	{
		float SpeedScale;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement System" },
		{ "CPP_Default_SpeedScale", "1.000000" },
		{ "DisplayName", "Get Mapped Speed" },
		{ "Keywords", "Movement" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms, SpeedScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_SpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetMappedSpeedC", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::GAS_MainCharacterCpp_eventGetMappedSpeedC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetMappedSpeedC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMappedSpeedC(Z_Param_SpeedScale);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function GetMappedSpeedC

// Begin Class AGAS_MainCharacterCpp Function GetSubTag
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics
{
	struct GAS_MainCharacterCpp_eventGetSubTag_Parms
	{
		FGameplayTag Tag;
		int32 DesiredDepth;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Get Sub Tag" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredDepth;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_DesiredDepth = { "DesiredDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, DesiredDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_DesiredDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetSubTag", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::GAS_MainCharacterCpp_eventGetSubTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::GAS_MainCharacterCpp_eventGetSubTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetSubTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSubTag(Z_Param_Out_Tag,Z_Param_DesiredDepth);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function GetSubTag

// Begin Class AGAS_MainCharacterCpp Function GetTargetSpeedWithStrafeC
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics
{
	struct GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms
	{
		FVector SpeedVector;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement System" },
		{ "DisplayName", "Get Target Speed With Strafe" },
		{ "Keywords", "Movement" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_SpeedVector = { "SpeedVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms, SpeedVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_SpeedVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetTargetSpeedWithStrafeC", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::GAS_MainCharacterCpp_eventGetTargetSpeedWithStrafeC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetTargetSpeedWithStrafeC)
{
	P_GET_STRUCT(FVector,Z_Param_SpeedVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTargetSpeedWithStrafeC(Z_Param_SpeedVector);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function GetTargetSpeedWithStrafeC

// Begin Class AGAS_MainCharacterCpp Function IsTagLeaf
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics
{
	struct GAS_MainCharacterCpp_eventIsTagLeaf_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Is Tag Leaf" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventIsTagLeaf_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
void Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventIsTagLeaf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventIsTagLeaf_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "IsTagLeaf", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::GAS_MainCharacterCpp_eventIsTagLeaf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::GAS_MainCharacterCpp_eventIsTagLeaf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execIsTagLeaf)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTagLeaf(Z_Param_Out_Tag);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function IsTagLeaf

// Begin Class AGAS_MainCharacterCpp Function OverlayLeavingFinshed
static const FName NAME_AGAS_MainCharacterCpp_OverlayLeavingFinshed = FName(TEXT("OverlayLeavingFinshed"));
void AGAS_MainCharacterCpp::OverlayLeavingFinshed()
{
	UFunction* Func = FindFunctionChecked(NAME_AGAS_MainCharacterCpp_OverlayLeavingFinshed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "OverlayLeavingFinshed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGAS_MainCharacterCpp Function OverlayLeavingFinshed

// Begin Class AGAS_MainCharacterCpp Function SmoothCharacterRotationC
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics
{
	struct GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms
	{
		FRotator TargetRotation;
		float ActorInterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation System" },
		{ "CPP_Default_ActorInterpSpeed", "10.000000" },
		{ "CPP_Default_TargetRotation", "0.000000,0.000000,0.000000" },
		{ "DisplayName", "Smooth Character Rotation" },
		{ "Keywords", "Rotation" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_ActorInterpSpeed = { "ActorInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms, ActorInterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::NewProp_ActorInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SmoothCharacterRotationC", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::GAS_MainCharacterCpp_eventSmoothCharacterRotationC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSmoothCharacterRotationC)
{
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActorInterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothCharacterRotationC(Z_Param_TargetRotation,Z_Param_ActorInterpSpeed);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function SmoothCharacterRotationC

// Begin Class AGAS_MainCharacterCpp Function SwitchOnOwnedTags
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics
{
	struct GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms
	{
		FGameplayTag NewState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Switch On Owned Tags" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 1298103297
void Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SwitchOnOwnedTags", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSwitchOnOwnedTags)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchOnOwnedTags(Z_Param_Out_NewState);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function SwitchOnOwnedTags

// Begin Class AGAS_MainCharacterCpp Function SwitchOnOwnedTagsWithIgnore
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics
{
	struct GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms
	{
		FGameplayTag NewState;
		FGameplayTagContainer DoNotEdit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Switch On Owned Tags With Ignore" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoNotEdit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoNotEdit;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit = { "DoNotEdit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms, DoNotEdit), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoNotEdit_MetaData), NewProp_DoNotEdit_MetaData) }; // 3352185621
void Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SwitchOnOwnedTagsWithIgnore", nullptr, nullptr, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSwitchOnOwnedTagsWithIgnore)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_DoNotEdit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchOnOwnedTagsWithIgnore(Z_Param_Out_NewState,Z_Param_Out_DoNotEdit);
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function SwitchOnOwnedTagsWithIgnore

// Begin Class AGAS_MainCharacterCpp Function TryCreateInputsGAS
struct Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "DisplayName", "Try Create Inputs Binds For GAS" },
		{ "Keywords", "Inputs Player" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "TryCreateInputsGAS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_MainCharacterCpp::execTryCreateInputsGAS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryCreateInputsGAS();
	P_NATIVE_END;
}
// End Class AGAS_MainCharacterCpp Function TryCreateInputsGAS

// Begin Class AGAS_MainCharacterCpp
void AGAS_MainCharacterCpp::StaticRegisterNativesAGAS_MainCharacterCpp()
{
	UClass* Class = AGAS_MainCharacterCpp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateGroundedRotationSpeedC", &AGAS_MainCharacterCpp::execCalculateGroundedRotationSpeedC },
		{ "ConvertLiteralNameToTag", &AGAS_MainCharacterCpp::execConvertLiteralNameToTag },
		{ "FloorToCapsuleLocationC", &AGAS_MainCharacterCpp::execFloorToCapsuleLocationC },
		{ "GetCapsuleBaseLocationC", &AGAS_MainCharacterCpp::execGetCapsuleBaseLocationC },
		{ "GetControlVectorsC", &AGAS_MainCharacterCpp::execGetControlVectorsC },
		{ "GetMappedSpeedC", &AGAS_MainCharacterCpp::execGetMappedSpeedC },
		{ "GetSubTag", &AGAS_MainCharacterCpp::execGetSubTag },
		{ "GetTargetSpeedWithStrafeC", &AGAS_MainCharacterCpp::execGetTargetSpeedWithStrafeC },
		{ "IsTagLeaf", &AGAS_MainCharacterCpp::execIsTagLeaf },
		{ "SmoothCharacterRotationC", &AGAS_MainCharacterCpp::execSmoothCharacterRotationC },
		{ "SwitchOnOwnedTags", &AGAS_MainCharacterCpp::execSwitchOnOwnedTags },
		{ "SwitchOnOwnedTagsWithIgnore", &AGAS_MainCharacterCpp::execSwitchOnOwnedTagsWithIgnore },
		{ "TryCreateInputsGAS", &AGAS_MainCharacterCpp::execTryCreateInputsGAS },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_MainCharacterCpp);
UClass* Z_Construct_UClass_AGAS_MainCharacterCpp_NoRegister()
{
	return AGAS_MainCharacterCpp::StaticClass();
}
struct Z_Construct_UClass_AGAS_MainCharacterCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GAS_MainCharacterCpp.h" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Define Base Variables For ALS Character\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define Base Variables For ALS Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMovingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasMovementInputC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStartedMovementOnTargetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWithPropC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "DisplayName", "Start Interaction With Dynamic Prop C" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLayBackC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwimmingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollOnGroundC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollFaceUpC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAcceleractionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastVelocityRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementInputRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRagdollVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmountC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedDifferenceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousAimYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHandle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSpeedMapCurveC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSettingsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevFloorVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Movement System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStateLeavingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorrectNonInertialFloor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Experimental function. Improves the behavior of the capsule in a non-inertial reference frame (the floor moves relative to the world space) */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Experimental function. Improves the behavior of the capsule in a non-inertial reference frame (the floor moves relative to the world space)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS_MainCharacterCpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesData_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeEffect_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapsuleSizeC;
	static void NewProp_IsMovingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMovingC;
	static void NewProp_HasMovementInputC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInputC;
	static void NewProp_IsStartedMovementOnTargetC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStartedMovementOnTargetC;
	static void NewProp_InteractionWithPropC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InteractionWithPropC;
	static void NewProp_IsLayBackC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLayBackC;
	static void NewProp_IsSwimmingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwimmingC;
	static void NewProp_RagdollOnGroundC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollOnGroundC;
	static void NewProp_RagdollFaceUpC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollFaceUpC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAcceleractionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastVelocityRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastMovementInputRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastRagdollVelocityC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmountC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedDifferenceC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousAimYawC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrafeSpeedMapCurveC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMovementSettingsC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevFloorVelocityC;
	static void NewProp_OverlayStateLeavingStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverlayStateLeavingStarted;
	static void NewProp_CorrectNonInertialFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CorrectNonInertialFloor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitiesData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributeEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_CalculateGroundedRotationSpeedC, "CalculateGroundedRotationSpeedC" }, // 4082651773
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag, "ConvertLiteralNameToTag" }, // 1029407234
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_DoWhenOverlayLeaving, "DoWhenOverlayLeaving" }, // 3512400141
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_FloorToCapsuleLocationC, "FloorToCapsuleLocationC" }, // 1842671143
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetCapsuleBaseLocationC, "GetCapsuleBaseLocationC" }, // 493020110
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetControlVectorsC, "GetControlVectorsC" }, // 3419596952
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetMappedSpeedC, "GetMappedSpeedC" }, // 2371584340
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag, "GetSubTag" }, // 1063573471
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetTargetSpeedWithStrafeC, "GetTargetSpeedWithStrafeC" }, // 1740019714
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf, "IsTagLeaf" }, // 3946698081
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_OverlayLeavingFinshed, "OverlayLeavingFinshed" }, // 3809687633
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SmoothCharacterRotationC, "SmoothCharacterRotationC" }, // 3104168602
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags, "SwitchOnOwnedTags" }, // 2274056098
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore, "SwitchOnOwnedTagsWithIgnore" }, // 1043294260
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS, "TryCreateInputsGAS" }, // 3553203799
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_MainCharacterCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefCapsuleSizeC = { "DefCapsuleSizeC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, DefCapsuleSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapsuleSizeC_MetaData), NewProp_DefCapsuleSizeC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsMovingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC = { "IsMovingC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMovingC_MetaData), NewProp_IsMovingC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->HasMovementInputC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC = { "HasMovementInputC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasMovementInputC_MetaData), NewProp_HasMovementInputC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsStartedMovementOnTargetC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC = { "IsStartedMovementOnTargetC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStartedMovementOnTargetC_MetaData), NewProp_IsStartedMovementOnTargetC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->InteractionWithPropC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC = { "InteractionWithPropC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWithPropC_MetaData), NewProp_InteractionWithPropC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsLayBackC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC = { "IsLayBackC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLayBackC_MetaData), NewProp_IsLayBackC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->IsSwimmingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC = { "IsSwimmingC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwimmingC_MetaData), NewProp_IsSwimmingC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->RagdollOnGroundC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC = { "RagdollOnGroundC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollOnGroundC_MetaData), NewProp_RagdollOnGroundC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->RagdollFaceUpC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC = { "RagdollFaceUpC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollFaceUpC_MetaData), NewProp_RagdollFaceUpC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC = { "AccelerationC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationC_MetaData), NewProp_AccelerationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC = { "RelativeAcceleractionC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, RelativeAcceleractionC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeAcceleractionC_MetaData), NewProp_RelativeAcceleractionC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastVelocityRotationC = { "LastVelocityRotationC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, LastVelocityRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastVelocityRotationC_MetaData), NewProp_LastVelocityRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastMovementInputRotationC = { "LastMovementInputRotationC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, LastMovementInputRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMovementInputRotationC_MetaData), NewProp_LastMovementInputRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC = { "PreviousVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, PreviousVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousVelocityC_MetaData), NewProp_PreviousVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC = { "LastRagdollVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, LastRagdollVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRagdollVelocityC_MetaData), NewProp_LastRagdollVelocityC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, SpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedC_MetaData), NewProp_SpeedC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC = { "MovementInputAmountC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, MovementInputAmountC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInputAmountC_MetaData), NewProp_MovementInputAmountC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC = { "MovementSpeedDifferenceC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, MovementSpeedDifferenceC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedDifferenceC_MetaData), NewProp_MovementSpeedDifferenceC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC = { "AimYawRateC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AimYawRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimYawRateC_MetaData), NewProp_AimYawRateC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC = { "PreviousAimYawC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, PreviousAimYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousAimYawC_MetaData), NewProp_PreviousAimYawC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityHandle_MetaData), NewProp_AbilityHandle_MetaData) }; // 3490030742
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_StrafeSpeedMapCurveC = { "StrafeSpeedMapCurveC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, StrafeSpeedMapCurveC), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSpeedMapCurveC_MetaData), NewProp_StrafeSpeedMapCurveC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CurrentMovementSettingsC = { "CurrentMovementSettingsC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, CurrentMovementSettingsC), Z_Construct_UScriptStruct_FMovementSettingsStrafe, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementSettingsC_MetaData), NewProp_CurrentMovementSettingsC_MetaData) }; // 228571218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_FloorVelocityC = { "FloorVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, FloorVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorVelocityC_MetaData), NewProp_FloorVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PrevFloorVelocityC = { "PrevFloorVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, PrevFloorVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevFloorVelocityC_MetaData), NewProp_PrevFloorVelocityC_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->OverlayStateLeavingStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted = { "OverlayStateLeavingStarted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayStateLeavingStarted_MetaData), NewProp_OverlayStateLeavingStarted_MetaData) };
void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor_SetBit(void* Obj)
{
	((AGAS_MainCharacterCpp*)Obj)->CorrectNonInertialFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor = { "CorrectNonInertialFloor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorrectNonInertialFloor_MetaData), NewProp_CorrectNonInertialFloor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData = { "AbilitiesData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilitiesData), Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesData_MetaData), NewProp_AbilitiesData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect = { "DefaultAttributeEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, DefaultAttributeEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributeEffect_MetaData), NewProp_DefaultAttributeEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_MainCharacterCpp, Attributes), Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefCapsuleSizeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsSwimmingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastVelocityRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastMovementInputRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_StrafeSpeedMapCurveC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CurrentMovementSettingsC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_FloorVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PrevFloorVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_OverlayStateLeavingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_CorrectNonInertialFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGAS_MainCharacterCpp, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::ClassParams = {
	&AGAS_MainCharacterCpp::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_MainCharacterCpp()
{
	if (!Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton, Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<AGAS_MainCharacterCpp>()
{
	return AGAS_MainCharacterCpp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_MainCharacterCpp);
AGAS_MainCharacterCpp::~AGAS_MainCharacterCpp() {}
// End Class AGAS_MainCharacterCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovementSettingsStrafe::StaticStruct, Z_Construct_UScriptStruct_FMovementSettingsStrafe_Statics::NewStructOps, TEXT("MovementSettingsStrafe"), &Z_Registration_Info_UScriptStruct_MovementSettingsStrafe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementSettingsStrafe), 228571218U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_MainCharacterCpp, AGAS_MainCharacterCpp::StaticClass, TEXT("AGAS_MainCharacterCpp"), &Z_Registration_Info_UClass_AGAS_MainCharacterCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_MainCharacterCpp), 2205379129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_4224086613(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

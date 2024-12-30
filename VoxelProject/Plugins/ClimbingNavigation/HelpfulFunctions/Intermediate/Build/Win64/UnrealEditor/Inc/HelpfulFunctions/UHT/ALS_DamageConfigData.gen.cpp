// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_DamageConfigData.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_DamageConfigData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_DamageConfigData();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_DamageConfigData_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAndWeight();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin ScriptStruct FBoneAndWeight
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneAndWeight;
class UScriptStruct* FBoneAndWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneAndWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneAndWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneAndWeight, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("BoneAndWeight"));
	}
	return Z_Registration_Info_UScriptStruct_BoneAndWeight.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FBoneAndWeight>()
{
	return FBoneAndWeight::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneAndWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "BoneAndWeight" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "BoneAndWeight" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneAndWeight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneAndWeight, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneAndWeight, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneAndWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneAndWeight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"BoneAndWeight",
	Z_Construct_UScriptStruct_FBoneAndWeight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::PropPointers),
	sizeof(FBoneAndWeight),
	alignof(FBoneAndWeight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneAndWeight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneAndWeight()
{
	if (!Z_Registration_Info_UScriptStruct_BoneAndWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneAndWeight.InnerSingleton, Z_Construct_UScriptStruct_FBoneAndWeight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneAndWeight.InnerSingleton;
}
// End ScriptStruct FBoneAndWeight

// Begin Enum ECALS_WeaponType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECALS_WeaponType;
static UEnum* ECALS_WeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECALS_WeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECALS_WeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("ECALS_WeaponType"));
	}
	return Z_Registration_Info_UEnum_ECALS_WeaponType.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<ECALS_WeaponType>()
{
	return ECALS_WeaponType_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bow.DisplayName", "Bow" },
		{ "Bow.Name", "ECALS_WeaponType::Bow" },
		{ "Knife.DisplayName", "Knife" },
		{ "Knife.Name", "ECALS_WeaponType::Knife" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECALS_WeaponType::None" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "ECALS_WeaponType::Pistol" },
		{ "Rifle.DisplayName", "Rifle" },
		{ "Rifle.Name", "ECALS_WeaponType::Rifle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECALS_WeaponType::None", (int64)ECALS_WeaponType::None },
		{ "ECALS_WeaponType::Rifle", (int64)ECALS_WeaponType::Rifle },
		{ "ECALS_WeaponType::Pistol", (int64)ECALS_WeaponType::Pistol },
		{ "ECALS_WeaponType::Bow", (int64)ECALS_WeaponType::Bow },
		{ "ECALS_WeaponType::Knife", (int64)ECALS_WeaponType::Knife },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"ECALS_WeaponType",
	"ECALS_WeaponType",
	Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType()
{
	if (!Z_Registration_Info_UEnum_ECALS_WeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECALS_WeaponType.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECALS_WeaponType.InnerSingleton;
}
// End Enum ECALS_WeaponType

// Begin Class UALS_DamageConfigData Function GetScalingCurveValueC
struct Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics
{
	struct ALS_DamageConfigData_eventGetScalingCurveValueC_Parms
	{
		float CurrentHealthPoints;
		float MaxHealthPoints;
		FRuntimeFloatCurve Curve1;
		FRuntimeFloatCurve CurveRef;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage System" },
		{ "DisplayName", "Get Scaling Curve Value" },
		{ "Keywords", "Damage System" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curve1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurrentHealthPoints = { "CurrentHealthPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, CurrentHealthPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_MaxHealthPoints = { "MaxHealthPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, MaxHealthPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_Curve1 = { "Curve1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, Curve1), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(0, nullptr) }; // 1495033350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurveRef = { "CurveRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, CurveRef), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(0, nullptr) }; // 1495033350
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurrentHealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_MaxHealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_Curve1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurveRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_DamageConfigData, nullptr, "GetScalingCurveValueC", nullptr, nullptr, Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::ALS_DamageConfigData_eventGetScalingCurveValueC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::ALS_DamageConfigData_eventGetScalingCurveValueC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UALS_DamageConfigData::execGetScalingCurveValueC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHealthPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealthPoints);
	P_GET_STRUCT(FRuntimeFloatCurve,Z_Param_Curve1);
	P_GET_STRUCT(FRuntimeFloatCurve,Z_Param_CurveRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UALS_DamageConfigData::GetScalingCurveValueC(Z_Param_CurrentHealthPoints,Z_Param_MaxHealthPoints,Z_Param_Curve1,Z_Param_CurveRef);
	P_NATIVE_END;
}
// End Class UALS_DamageConfigData Function GetScalingCurveValueC

// Begin Class UALS_DamageConfigData Function GetWeightPerBoneC
struct Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics
{
	struct ALS_DamageConfigData_eventGetWeightPerBoneC_Parms
	{
		FName BoneName;
		TArray<FBoneAndWeight> Data;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage System" },
		{ "DisplayName", "Get Weight Per Bone" },
		{ "Keywords", "Damage System" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetWeightPerBoneC_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneAndWeight, METADATA_PARAMS(0, nullptr) }; // 216011086
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetWeightPerBoneC_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 216011086
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_DamageConfigData_eventGetWeightPerBoneC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_DamageConfigData, nullptr, "GetWeightPerBoneC", nullptr, nullptr, Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::ALS_DamageConfigData_eventGetWeightPerBoneC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::ALS_DamageConfigData_eventGetWeightPerBoneC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UALS_DamageConfigData::execGetWeightPerBoneC)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_TARRAY(FBoneAndWeight,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UALS_DamageConfigData::GetWeightPerBoneC(Z_Param_BoneName,Z_Param_Data);
	P_NATIVE_END;
}
// End Class UALS_DamageConfigData Function GetWeightPerBoneC

// Begin Class UALS_DamageConfigData
void UALS_DamageConfigData::StaticRegisterNativesUALS_DamageConfigData()
{
	UClass* Class = UALS_DamageConfigData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScalingCurveValueC", &UALS_DamageConfigData::execGetScalingCurveValueC },
		{ "GetWeightPerBoneC", &UALS_DamageConfigData::execGetWeightPerBoneC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALS_DamageConfigData);
UClass* Z_Construct_UClass_UALS_DamageConfigData_NoRegister()
{
	return UALS_DamageConfigData::StaticClass();
}
struct Z_Construct_UClass_UALS_DamageConfigData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ALS_DamageConfigData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default max Health points for character */" },
#endif
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default max Health points for character" },
#endif
		{ "UIMax", "5000.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveDamageScale_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows you to introduce a constant scaling of RECEIVED damage */" },
#endif
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to introduce a constant scaling of RECEIVED damage" },
#endif
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorValue_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** It results in the final damage value being reduced by an amount associated with the armor */" },
#endif
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It results in the final damage value being reduced by an amount associated with the armor" },
#endif
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalingCurve_MetaData[] = {
		{ "Category", "Damage Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  Is used to introduce non-linear scaling of the damage value. The range on the X and Y axis should always be between 0 and 1.\nThe X axis represents the mapped minimum and maximum health values. We set the scaling value on the Y axis.\nNote: a reference curve is used to calculate the final value, which is always a function of Y = X. */" },
#endif
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is used to introduce non-linear scaling of the damage value. The range on the X and Y axis should always be between 0 and 1.\nThe X axis represents the mapped minimum and maximum health values. We set the scaling value on the Y axis.\nNote: a reference curve is used to calculate the final value, which is always a function of Y = X." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightsPerBones_MetaData[] = {
		{ "Category", "Damage Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets the scaling of the 'Input Damage' value depending on the bone hit.*/" },
#endif
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the scaling of the 'Input Damage' value depending on the bone hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightPerWeapon_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceCurve_MetaData[] = {
		{ "Category", "Read Only" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEquation_MetaData[] = {
		{ "Category", "Read Only" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReceiveDamageScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalingCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightsPerBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightsPerBones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightPerWeapon_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightPerWeapon_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightPerWeapon_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeightPerWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceCurve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DamageEquation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC, "GetScalingCurveValueC" }, // 1853644653
		{ &Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC, "GetWeightPerBoneC" }, // 3003006366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALS_DamageConfigData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReceiveDamageScale = { "ReceiveDamageScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, ReceiveDamageScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiveDamageScale_MetaData), NewProp_ReceiveDamageScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ArmorValue = { "ArmorValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, ArmorValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorValue_MetaData), NewProp_ArmorValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ScalingCurve = { "ScalingCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, ScalingCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalingCurve_MetaData), NewProp_ScalingCurve_MetaData) }; // 1495033350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones_Inner = { "WeightsPerBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneAndWeight, METADATA_PARAMS(0, nullptr) }; // 216011086
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones = { "WeightsPerBones", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, WeightsPerBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightsPerBones_MetaData), NewProp_WeightsPerBones_MetaData) }; // 216011086
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_ValueProp = { "WeightPerWeapon", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp = { "WeightPerWeapon_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType, METADATA_PARAMS(0, nullptr) }; // 4247320243
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon = { "WeightPerWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, WeightPerWeapon), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightPerWeapon_MetaData), NewProp_WeightPerWeapon_MetaData) }; // 4247320243
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReferenceCurve = { "ReferenceCurve", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, ReferenceCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceCurve_MetaData), NewProp_ReferenceCurve_MetaData) }; // 1495033350
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_DamageEquation = { "DamageEquation", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_DamageConfigData, DamageEquation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEquation_MetaData), NewProp_DamageEquation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALS_DamageConfigData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReceiveDamageScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ArmorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ScalingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReferenceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_DamageEquation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UALS_DamageConfigData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UALS_DamageConfigData_Statics::ClassParams = {
	&UALS_DamageConfigData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UALS_DamageConfigData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::Class_MetaDataParams), Z_Construct_UClass_UALS_DamageConfigData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UALS_DamageConfigData()
{
	if (!Z_Registration_Info_UClass_UALS_DamageConfigData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALS_DamageConfigData.OuterSingleton, Z_Construct_UClass_UALS_DamageConfigData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UALS_DamageConfigData.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UALS_DamageConfigData>()
{
	return UALS_DamageConfigData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UALS_DamageConfigData);
// End Class UALS_DamageConfigData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECALS_WeaponType_StaticEnum, TEXT("ECALS_WeaponType"), &Z_Registration_Info_UEnum_ECALS_WeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4247320243U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoneAndWeight::StaticStruct, Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewStructOps, TEXT("BoneAndWeight"), &Z_Registration_Info_UScriptStruct_BoneAndWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneAndWeight), 216011086U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UALS_DamageConfigData, UALS_DamageConfigData::StaticClass, TEXT("UALS_DamageConfigData"), &Z_Registration_Info_UClass_UALS_DamageConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALS_DamageConfigData), 3046496928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_2169324546(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

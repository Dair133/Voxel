// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/HidingLocSearch_EnemyProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHidingLocSearch_EnemyProperties() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UHidingLocSearch_EnemyProperties();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UHidingLocSearch_EnemyProperties_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UHidingLocSearch_EnemyProperties Function GetCurrentEnemySightParams
struct HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms
{
	float HalfAngle;
	float SightRadius;
	float SightHeight;
	ACharacter* CurrentEnemy;
	ACharacter* Searcher;
};
static const FName NAME_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams = FName(TEXT("GetCurrentEnemySightParams"));
void UHidingLocSearch_EnemyProperties::GetCurrentEnemySightParams(float& HalfAngle, float& SightRadius, float& SightHeight, ACharacter* CurrentEnemy, ACharacter* Searcher)
{
	UFunction* Func = FindFunctionChecked(NAME_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms Parms;
		Parms.HalfAngle=HalfAngle;
		Parms.SightRadius=SightRadius;
		Parms.SightHeight=SightHeight;
		Parms.CurrentEnemy=CurrentEnemy;
		Parms.Searcher=Searcher;
	ProcessEvent(Func,&Parms);
		HalfAngle=Parms.HalfAngle;
		SightRadius=Parms.SightRadius;
		SightHeight=Parms.SightHeight;
	}
	else
	{
		GetCurrentEnemySightParams_Implementation(HalfAngle, SightRadius, SightHeight, CurrentEnemy, Searcher);
	}
}
struct Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Search For Hide Location|Enemy" },
		{ "DisplayName", "Get Current Enemy Sight Params" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Hiding,Query" },
		{ "ModuleRelativePath", "Public/HidingLocSearch_EnemyProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEnemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Searcher;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms, HalfAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms, SightRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_SightHeight = { "SightHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms, SightHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_CurrentEnemy = { "CurrentEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms, CurrentEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_Searcher = { "Searcher", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms, Searcher), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_HalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_SightHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_CurrentEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::NewProp_Searcher,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingLocSearch_EnemyProperties, nullptr, "GetCurrentEnemySightParams", nullptr, nullptr, Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::PropPointers), sizeof(HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(HidingLocSearch_EnemyProperties_eventGetCurrentEnemySightParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingLocSearch_EnemyProperties::execGetCurrentEnemySightParams)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HalfAngle);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SightRadius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SightHeight);
	P_GET_OBJECT(ACharacter,Z_Param_CurrentEnemy);
	P_GET_OBJECT(ACharacter,Z_Param_Searcher);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentEnemySightParams_Implementation(Z_Param_Out_HalfAngle,Z_Param_Out_SightRadius,Z_Param_Out_SightHeight,Z_Param_CurrentEnemy,Z_Param_Searcher);
	P_NATIVE_END;
}
// End Class UHidingLocSearch_EnemyProperties Function GetCurrentEnemySightParams

// Begin Class UHidingLocSearch_EnemyProperties Function GetPredictedEnemyTransform
struct HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms
{
	FVector ReturnLocation;
	FRotator ReturnRotation;
	ACharacter* CurrentEnemy;
	ACharacter* Searcher;
	int32 IterationIndex;
};
static const FName NAME_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform = FName(TEXT("GetPredictedEnemyTransform"));
void UHidingLocSearch_EnemyProperties::GetPredictedEnemyTransform(FVector& ReturnLocation, FRotator& ReturnRotation, ACharacter* CurrentEnemy, ACharacter* Searcher, int32 IterationIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms Parms;
		Parms.ReturnLocation=ReturnLocation;
		Parms.ReturnRotation=ReturnRotation;
		Parms.CurrentEnemy=CurrentEnemy;
		Parms.Searcher=Searcher;
		Parms.IterationIndex=IterationIndex;
	ProcessEvent(Func,&Parms);
		ReturnLocation=Parms.ReturnLocation;
		ReturnRotation=Parms.ReturnRotation;
	}
	else
	{
		GetPredictedEnemyTransform_Implementation(ReturnLocation, ReturnRotation, CurrentEnemy, Searcher, IterationIndex);
	}
}
struct Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Search For Hide Location|Enemy" },
		{ "DisplayName", "Get Predicted Enemy Transform" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Hiding,Query" },
		{ "ModuleRelativePath", "Public/HidingLocSearch_EnemyProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEnemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Searcher;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IterationIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_ReturnRotation = { "ReturnRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms, ReturnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_CurrentEnemy = { "CurrentEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms, CurrentEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_Searcher = { "Searcher", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms, Searcher), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_IterationIndex = { "IterationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms, IterationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_ReturnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_ReturnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_CurrentEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_Searcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::NewProp_IterationIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingLocSearch_EnemyProperties, nullptr, "GetPredictedEnemyTransform", nullptr, nullptr, Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::PropPointers), sizeof(HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(HidingLocSearch_EnemyProperties_eventGetPredictedEnemyTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingLocSearch_EnemyProperties::execGetPredictedEnemyTransform)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_ReturnRotation);
	P_GET_OBJECT(ACharacter,Z_Param_CurrentEnemy);
	P_GET_OBJECT(ACharacter,Z_Param_Searcher);
	P_GET_PROPERTY(FIntProperty,Z_Param_IterationIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPredictedEnemyTransform_Implementation(Z_Param_Out_ReturnLocation,Z_Param_Out_ReturnRotation,Z_Param_CurrentEnemy,Z_Param_Searcher,Z_Param_IterationIndex);
	P_NATIVE_END;
}
// End Class UHidingLocSearch_EnemyProperties Function GetPredictedEnemyTransform

// Begin Class UHidingLocSearch_EnemyProperties
void UHidingLocSearch_EnemyProperties::StaticRegisterNativesUHidingLocSearch_EnemyProperties()
{
	UClass* Class = UHidingLocSearch_EnemyProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentEnemySightParams", &UHidingLocSearch_EnemyProperties::execGetCurrentEnemySightParams },
		{ "GetPredictedEnemyTransform", &UHidingLocSearch_EnemyProperties::execGetPredictedEnemyTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHidingLocSearch_EnemyProperties);
UClass* Z_Construct_UClass_UHidingLocSearch_EnemyProperties_NoRegister()
{
	return UHidingLocSearch_EnemyProperties::StaticClass();
}
struct Z_Construct_UClass_UHidingLocSearch_EnemyProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HidingLocSearch_EnemyProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HidingLocSearch_EnemyProperties.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetCurrentEnemySightParams, "GetCurrentEnemySightParams" }, // 717635546
		{ &Z_Construct_UFunction_UHidingLocSearch_EnemyProperties_GetPredictedEnemyTransform, "GetPredictedEnemyTransform" }, // 3758635523
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHidingLocSearch_EnemyProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHidingLocSearch_EnemyProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHidingLocSearch_EnemyProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHidingLocSearch_EnemyProperties_Statics::ClassParams = {
	&UHidingLocSearch_EnemyProperties::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHidingLocSearch_EnemyProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UHidingLocSearch_EnemyProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHidingLocSearch_EnemyProperties()
{
	if (!Z_Registration_Info_UClass_UHidingLocSearch_EnemyProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHidingLocSearch_EnemyProperties.OuterSingleton, Z_Construct_UClass_UHidingLocSearch_EnemyProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHidingLocSearch_EnemyProperties.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UHidingLocSearch_EnemyProperties>()
{
	return UHidingLocSearch_EnemyProperties::StaticClass();
}
UHidingLocSearch_EnemyProperties::UHidingLocSearch_EnemyProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHidingLocSearch_EnemyProperties);
UHidingLocSearch_EnemyProperties::~UHidingLocSearch_EnemyProperties() {}
// End Class UHidingLocSearch_EnemyProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_HidingLocSearch_EnemyProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHidingLocSearch_EnemyProperties, UHidingLocSearch_EnemyProperties::StaticClass, TEXT("UHidingLocSearch_EnemyProperties"), &Z_Registration_Info_UClass_UHidingLocSearch_EnemyProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHidingLocSearch_EnemyProperties), 3564406229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_HidingLocSearch_EnemyProperties_h_78457336(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_HidingLocSearch_EnemyProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_HidingLocSearch_EnemyProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

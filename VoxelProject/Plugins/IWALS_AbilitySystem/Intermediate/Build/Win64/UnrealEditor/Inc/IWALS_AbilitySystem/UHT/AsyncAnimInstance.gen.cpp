// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/AsyncAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAsyncAnimInstance();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAsyncAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Class UAsyncAnimInstance Function CustomTick
struct AsyncAnimInstance_eventCustomTick_Parms
{
	float DeltaSecond;
};
static const FName NAME_UAsyncAnimInstance_CustomTick = FName(TEXT("CustomTick"));
void UAsyncAnimInstance::CustomTick(float DeltaSecond)
{
	AsyncAnimInstance_eventCustomTick_Parms Parms;
	Parms.DeltaSecond=DeltaSecond;
	UFunction* Func = FindFunctionChecked(NAME_UAsyncAnimInstance_CustomTick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::NewProp_DeltaSecond = { "DeltaSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAnimInstance_eventCustomTick_Parms, DeltaSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::NewProp_DeltaSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAnimInstance, nullptr, "CustomTick", nullptr, nullptr, Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::PropPointers), sizeof(AsyncAnimInstance_eventCustomTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(AsyncAnimInstance_eventCustomTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAnimInstance_CustomTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAnimInstance_CustomTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAsyncAnimInstance Function CustomTick

// Begin Class UAsyncAnimInstance Function SetNeedsUpdate
struct Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics
{
	struct AsyncAnimInstance_eventSetNeedsUpdate_Parms
	{
		bool Update;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AsyncAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Update_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Update;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::NewProp_Update_SetBit(void* Obj)
{
	((AsyncAnimInstance_eventSetNeedsUpdate_Parms*)Obj)->Update = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAnimInstance_eventSetNeedsUpdate_Parms), &Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::NewProp_Update_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::NewProp_Update,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAnimInstance, nullptr, "SetNeedsUpdate", nullptr, nullptr, Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::AsyncAnimInstance_eventSetNeedsUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::AsyncAnimInstance_eventSetNeedsUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAnimInstance::execSetNeedsUpdate)
{
	P_GET_UBOOL(Z_Param_Update);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNeedsUpdate(Z_Param_Update);
	P_NATIVE_END;
}
// End Class UAsyncAnimInstance Function SetNeedsUpdate

// Begin Class UAsyncAnimInstance Function SetNewCurveValue
struct Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics
{
	struct AsyncAnimInstance_eventSetNewCurveValue_Parms
	{
		FName CurveName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AsyncAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAnimInstance_eventSetNewCurveValue_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAnimInstance_eventSetNewCurveValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAnimInstance, nullptr, "SetNewCurveValue", nullptr, nullptr, Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::AsyncAnimInstance_eventSetNewCurveValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::AsyncAnimInstance_eventSetNewCurveValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAnimInstance::execSetNewCurveValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewCurveValue(Z_Param_CurveName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UAsyncAnimInstance Function SetNewCurveValue

// Begin Class UAsyncAnimInstance
void UAsyncAnimInstance::StaticRegisterNativesUAsyncAnimInstance()
{
	UClass* Class = UAsyncAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetNeedsUpdate", &UAsyncAnimInstance::execSetNeedsUpdate },
		{ "SetNewCurveValue", &UAsyncAnimInstance::execSetNewCurveValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAnimInstance);
UClass* Z_Construct_UClass_UAsyncAnimInstance_NoRegister()
{
	return UAsyncAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UAsyncAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AsyncAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AsyncAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationUpdateInterval_MetaData[] = {
		{ "Category", "Tick Interval" },
		{ "ModuleRelativePath", "Public/AsyncAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationUpdateInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAnimInstance_CustomTick, "CustomTick" }, // 3826335818
		{ &Z_Construct_UFunction_UAsyncAnimInstance_SetNeedsUpdate, "SetNeedsUpdate" }, // 610565656
		{ &Z_Construct_UFunction_UAsyncAnimInstance_SetNewCurveValue, "SetNewCurveValue" }, // 1105573087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncAnimInstance_Statics::NewProp_AnimationUpdateInterval = { "AnimationUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAnimInstance, AnimationUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationUpdateInterval_MetaData), NewProp_AnimationUpdateInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAnimInstance_Statics::NewProp_AnimationUpdateInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAnimInstance_Statics::ClassParams = {
	&UAsyncAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAnimInstance()
{
	if (!Z_Registration_Info_UClass_UAsyncAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAnimInstance.OuterSingleton, Z_Construct_UClass_UAsyncAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAnimInstance.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UAsyncAnimInstance>()
{
	return UAsyncAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAnimInstance);
UAsyncAnimInstance::~UAsyncAnimInstance() {}
// End Class UAsyncAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAnimInstance, UAsyncAnimInstance::StaticClass, TEXT("UAsyncAnimInstance"), &Z_Registration_Info_UClass_UAsyncAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAnimInstance), 1080776728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_1224234009(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

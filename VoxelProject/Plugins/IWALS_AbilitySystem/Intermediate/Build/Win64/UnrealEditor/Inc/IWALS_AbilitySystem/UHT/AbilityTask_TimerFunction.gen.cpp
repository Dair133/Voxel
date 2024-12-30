// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/AbilityTask_TimerFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_TimerFunction() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_TimerFunction();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister();
IWALS_ABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Delegate FExecuteTickDelegate
struct Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem, nullptr, "ExecuteTickDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FExecuteTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExecuteTickDelegate)
{
	ExecuteTickDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FExecuteTickDelegate

// Begin Class UAbilityTask_TimerFunction Function RunTimerTask
struct Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics
{
	struct AbilityTask_TimerFunction_eventRunTimerTask_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		float TimeBetweenTicks;
		UAbilityTask_TimerFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_TimeBetweenTicks", "0.050000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenTicks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TimeBetweenTicks = { "TimeBetweenTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, TimeBetweenTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TimeBetweenTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_TimerFunction, nullptr, "RunTimerTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::AbilityTask_TimerFunction_eventRunTimerTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::AbilityTask_TimerFunction_eventRunTimerTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_TimerFunction::execRunTimerTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeBetweenTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_TimerFunction**)Z_Param__Result=UAbilityTask_TimerFunction::RunTimerTask(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_TimeBetweenTicks);
	P_NATIVE_END;
}
// End Class UAbilityTask_TimerFunction Function RunTimerTask

// Begin Class UAbilityTask_TimerFunction
void UAbilityTask_TimerFunction::StaticRegisterNativesUAbilityTask_TimerFunction()
{
	UClass* Class = UAbilityTask_TimerFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunTimerTask", &UAbilityTask_TimerFunction::execRunTimerTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_TimerFunction);
UClass* Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister()
{
	return UAbilityTask_TimerFunction::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_TimerFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTask_TimerFunction.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask, "RunTimerTask" }, // 17741505
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_TimerFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_TimerFunction, OnTick), Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTick_MetaData), NewProp_OnTick_MetaData) }; // 2591026705
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::NewProp_OnTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::ClassParams = {
	&UAbilityTask_TimerFunction::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_TimerFunction()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_TimerFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_TimerFunction.OuterSingleton, Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_TimerFunction.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UAbilityTask_TimerFunction>()
{
	return UAbilityTask_TimerFunction::StaticClass();
}
UAbilityTask_TimerFunction::UAbilityTask_TimerFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_TimerFunction);
UAbilityTask_TimerFunction::~UAbilityTask_TimerFunction() {}
// End Class UAbilityTask_TimerFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_TimerFunction, UAbilityTask_TimerFunction::StaticClass, TEXT("UAbilityTask_TimerFunction"), &Z_Registration_Info_UClass_UAbilityTask_TimerFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_TimerFunction), 1498138307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_729436204(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

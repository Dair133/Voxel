// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/AbilityTask_TimerFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_TimerFunction() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_TimerFunction();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister();
	IWALS_ABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem, nullptr, "ExecuteTickDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	void UAbilityTask_TimerFunction::StaticRegisterNativesUAbilityTask_TimerFunction()
	{
		UClass* Class = UAbilityTask_TimerFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunTimerTask", &UAbilityTask_TimerFunction::execRunTimerTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics
	{
		struct AbilityTask_TimerFunction_eventRunTimerTask_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			float TimeBetweenTicks;
			UAbilityTask_TimerFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenTicks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TimeBetweenTicks = { "TimeBetweenTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, TimeBetweenTicks), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_TimerFunction_eventRunTimerTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_TimeBetweenTicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_TimeBetweenTicks", "0.050000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_TimerFunction, nullptr, "RunTimerTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::AbilityTask_TimerFunction_eventRunTimerTask_Parms), Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_TimerFunction);
	UClass* Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister()
	{
		return UAbilityTask_TimerFunction::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_TimerFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_TimerFunction_RunTimerTask, "RunTimerTask" }, // 701347843
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTask_TimerFunction.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::NewProp_OnTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_TimerFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_TimerFunction, OnTick), Z_Construct_UDelegateFunction_IWALS_AbilitySystem_ExecuteTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::NewProp_OnTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::NewProp_OnTick_MetaData)) }; // 29195153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::NewProp_OnTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_TimerFunction>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TimerFunction_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_TimerFunction, UAbilityTask_TimerFunction::StaticClass, TEXT("UAbilityTask_TimerFunction"), &Z_Registration_Info_UClass_UAbilityTask_TimerFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_TimerFunction), 2728275907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_2219203820(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

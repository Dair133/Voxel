// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/AbilityTask_DelayWithTick.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_DelayWithTick() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_DelayWithTick();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_DelayWithTick_NoRegister();
	IWALS_ABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature();
	IWALS_ABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics
	{
		struct _Script_IWALS_AbilitySystem_eventOnTick_Parms
		{
			float Time;
			float NormalizedTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_IWALS_AbilitySystem_eventOnTick_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_IWALS_AbilitySystem_eventOnTick_Parms, NormalizedTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::NewProp_NormalizedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem, nullptr, "OnTick__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::_Script_IWALS_AbilitySystem_eventOnTick_Parms), Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTick_DelegateWrapper(const FMulticastScriptDelegate& OnTick, float Time, float NormalizedTime)
{
	struct _Script_IWALS_AbilitySystem_eventOnTick_Parms
	{
		float Time;
		float NormalizedTime;
	};
	_Script_IWALS_AbilitySystem_eventOnTick_Parms Parms;
	Parms.Time=Time;
	Parms.NormalizedTime=NormalizedTime;
	OnTick.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics
	{
		struct _Script_IWALS_AbilitySystem_eventOnTickFinished_Parms
		{
			float Time;
			float NormalizedTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_IWALS_AbilitySystem_eventOnTickFinished_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_IWALS_AbilitySystem_eventOnTickFinished_Parms, NormalizedTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::NewProp_NormalizedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem, nullptr, "OnTickFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::_Script_IWALS_AbilitySystem_eventOnTickFinished_Parms), Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTickFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTickFinished, float Time, float NormalizedTime)
{
	struct _Script_IWALS_AbilitySystem_eventOnTickFinished_Parms
	{
		float Time;
		float NormalizedTime;
	};
	_Script_IWALS_AbilitySystem_eventOnTickFinished_Parms Parms;
	Parms.Time=Time;
	Parms.NormalizedTime=NormalizedTime;
	OnTickFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_DelayWithTick::execDelayTaskWithTick)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_DelayWithTick**)Z_Param__Result=UAbilityTask_DelayWithTick::DelayTaskWithTick(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Duration);
		P_NATIVE_END;
	}
	void UAbilityTask_DelayWithTick::StaticRegisterNativesUAbilityTask_DelayWithTick()
	{
		UClass* Class = UAbilityTask_DelayWithTick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelayTaskWithTick", &UAbilityTask_DelayWithTick::execDelayTaskWithTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics
	{
		struct AbilityTask_DelayWithTick_eventDelayTaskWithTick_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			float Duration;
			UAbilityTask_DelayWithTick* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_DelayWithTick_eventDelayTaskWithTick_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_DelayWithTick_eventDelayTaskWithTick_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_DelayWithTick_eventDelayTaskWithTick_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_DelayWithTick_eventDelayTaskWithTick_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_DelayWithTick_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_DelayWithTick, nullptr, "DelayTaskWithTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::AbilityTask_DelayWithTick_eventDelayTaskWithTick_Parms), Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_DelayWithTick);
	UClass* Z_Construct_UClass_UAbilityTask_DelayWithTick_NoRegister()
	{
		return UAbilityTask_DelayWithTick::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Tick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_DelayWithTick_DelayTaskWithTick, "DelayTaskWithTick" }, // 3062711343
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTask_DelayWithTick.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Tick_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Tick = { "Tick", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_DelayWithTick, Tick), Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Tick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Tick_MetaData)) }; // 62030849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_DelayWithTick, Finished), Z_Construct_UDelegateFunction_IWALS_AbilitySystem_OnTickFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Finished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Finished_MetaData)) }; // 976666885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_DelayWithTick, Duration), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_DelayWithTick.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_DelayWithTick, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_ElapsedTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Tick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Finished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::NewProp_ElapsedTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_DelayWithTick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::ClassParams = {
		&UAbilityTask_DelayWithTick::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_DelayWithTick()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_DelayWithTick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_DelayWithTick.OuterSingleton, Z_Construct_UClass_UAbilityTask_DelayWithTick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_DelayWithTick.OuterSingleton;
	}
	template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UAbilityTask_DelayWithTick>()
	{
		return UAbilityTask_DelayWithTick::StaticClass();
	}
	UAbilityTask_DelayWithTick::UAbilityTask_DelayWithTick(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_DelayWithTick);
	UAbilityTask_DelayWithTick::~UAbilityTask_DelayWithTick() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_DelayWithTick, UAbilityTask_DelayWithTick::StaticClass, TEXT("UAbilityTask_DelayWithTick"), &Z_Registration_Info_UClass_UAbilityTask_DelayWithTick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_DelayWithTick), 762336690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_2715985468(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_DelayWithTick_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

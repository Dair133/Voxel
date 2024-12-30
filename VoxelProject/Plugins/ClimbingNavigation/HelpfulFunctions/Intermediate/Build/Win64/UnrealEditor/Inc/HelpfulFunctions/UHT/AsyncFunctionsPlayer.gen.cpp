// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AsyncFunctionsPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncFunctionsPlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncFunctionsPlayer();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncFunctionsPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UAsyncFunctionsPlayer Function MontagePlayAsync
struct Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics
{
	struct AsyncFunctionsPlayer_eventMontagePlayAsync_Parms
	{
		UAnimInstance* AnimInst;
		TSoftObjectPtr<UAnimMontage> MontageToPlay;
		float InPlayRate;
		float StartTime;
		bool StopAllMontages;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InPlayRate,StartTime,StopAllMontages" },
		{ "Category", "Animation|Montage|SoftRef" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_StopAllMontages", "true" },
		{ "DisplayName", "Async Montage Play" },
		{ "Keywords", "SoftRef,Montage,Async" },
		{ "ModuleRelativePath", "Public/AsyncFunctionsPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInst;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static void NewProp_StopAllMontages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopAllMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_AnimInst = { "AnimInst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventMontagePlayAsync_Parms, AnimInst), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventMontagePlayAsync_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventMontagePlayAsync_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventMontagePlayAsync_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_StopAllMontages_SetBit(void* Obj)
{
	((AsyncFunctionsPlayer_eventMontagePlayAsync_Parms*)Obj)->StopAllMontages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_StopAllMontages = { "StopAllMontages", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncFunctionsPlayer_eventMontagePlayAsync_Parms), &Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_StopAllMontages_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_AnimInst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::NewProp_StopAllMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncFunctionsPlayer, nullptr, "MontagePlayAsync", nullptr, nullptr, Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::AsyncFunctionsPlayer_eventMontagePlayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::AsyncFunctionsPlayer_eventMontagePlayAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncFunctionsPlayer::execMontagePlayAsync)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_AnimInst);
	P_GET_SOFTOBJECT(TSoftObjectPtr<UAnimMontage>,Z_Param_MontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_UBOOL(Z_Param_StopAllMontages);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MontagePlayAsync(Z_Param_AnimInst,Z_Param_MontageToPlay,Z_Param_InPlayRate,Z_Param_StartTime,Z_Param_StopAllMontages);
	P_NATIVE_END;
}
// End Class UAsyncFunctionsPlayer Function MontagePlayAsync

// Begin Class UAsyncFunctionsPlayer Function PlayDynamicMontageAsync
struct Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics
{
	struct AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms
	{
		UAnimInstance* AnimInst;
		TSoftObjectPtr<UAnimSequence> Asset;
		FName SlotName;
		float BlendInTime;
		float BlendOutTime;
		float InPlayRate;
		int32 LoopCount;
		float BlendOutTriggerTime;
		float StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "BlendInTime,BlendOutTime,InPlayRate,LoopCount,BlendOutTriggerTime,StopAllMontages" },
		{ "Category", "Animation|Montage|SoftRef" },
		{ "CPP_Default_BlendInTime", "0.250000" },
		{ "CPP_Default_BlendOutTime", "0.250000" },
		{ "CPP_Default_BlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "DisplayName", "Async Play Slot As Dynamic Montage" },
		{ "Keywords", "SoftRef,Montage,Async" },
		{ "ModuleRelativePath", "Public/AsyncFunctionsPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInst;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_AnimInst = { "AnimInst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, AnimInst), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, Asset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, BlendInTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, BlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, LoopCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_BlendOutTriggerTime = { "BlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, BlendOutTriggerTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_AnimInst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_BlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_BlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_BlendOutTriggerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncFunctionsPlayer, nullptr, "PlayDynamicMontageAsync", nullptr, nullptr, Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::AsyncFunctionsPlayer_eventPlayDynamicMontageAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncFunctionsPlayer::execPlayDynamicMontageAsync)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_AnimInst);
	P_GET_SOFTOBJECT(TSoftObjectPtr<UAnimSequence>,Z_Param_Asset);
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTriggerTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayDynamicMontageAsync(Z_Param_AnimInst,Z_Param_Asset,Z_Param_SlotName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_StartTime);
	P_NATIVE_END;
}
// End Class UAsyncFunctionsPlayer Function PlayDynamicMontageAsync

// Begin Class UAsyncFunctionsPlayer
void UAsyncFunctionsPlayer::StaticRegisterNativesUAsyncFunctionsPlayer()
{
	UClass* Class = UAsyncFunctionsPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MontagePlayAsync", &UAsyncFunctionsPlayer::execMontagePlayAsync },
		{ "PlayDynamicMontageAsync", &UAsyncFunctionsPlayer::execPlayDynamicMontageAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncFunctionsPlayer);
UClass* Z_Construct_UClass_UAsyncFunctionsPlayer_NoRegister()
{
	return UAsyncFunctionsPlayer::StaticClass();
}
struct Z_Construct_UClass_UAsyncFunctionsPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AsyncFunctionsPlayer.h" },
		{ "ModuleRelativePath", "Public/AsyncFunctionsPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncFunctionsPlayer_MontagePlayAsync, "MontagePlayAsync" }, // 16630364
		{ &Z_Construct_UFunction_UAsyncFunctionsPlayer_PlayDynamicMontageAsync, "PlayDynamicMontageAsync" }, // 3497144701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncFunctionsPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAsyncFunctionsPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFunctionsPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncFunctionsPlayer_Statics::ClassParams = {
	&UAsyncFunctionsPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFunctionsPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncFunctionsPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncFunctionsPlayer()
{
	if (!Z_Registration_Info_UClass_UAsyncFunctionsPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncFunctionsPlayer.OuterSingleton, Z_Construct_UClass_UAsyncFunctionsPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncFunctionsPlayer.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAsyncFunctionsPlayer>()
{
	return UAsyncFunctionsPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncFunctionsPlayer);
UAsyncFunctionsPlayer::~UAsyncFunctionsPlayer() {}
// End Class UAsyncFunctionsPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncFunctionsPlayer, UAsyncFunctionsPlayer::StaticClass, TEXT("UAsyncFunctionsPlayer"), &Z_Registration_Info_UClass_UAsyncFunctionsPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncFunctionsPlayer), 3843399097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_3123694102(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncFunctionsPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ModifyClimbingParamsVolume.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifyClimbingParamsVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AModifyClimbingParamsVolume();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AModifyClimbingParamsVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class AModifyClimbingParamsVolume Function OnOverlapBegin
struct Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics
{
	struct ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle the begin overlap event\n" },
#endif
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle the begin overlap event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifyClimbingParamsVolume, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::ModifyClimbingParamsVolume_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModifyClimbingParamsVolume::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AModifyClimbingParamsVolume Function OnOverlapBegin

// Begin Class AModifyClimbingParamsVolume Function OnOverlapEnd
struct Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics
{
	struct ModifyClimbingParamsVolume_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle the end overlap event\n" },
#endif
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle the end overlap event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyClimbingParamsVolume_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModifyClimbingParamsVolume, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::ModifyClimbingParamsVolume_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::ModifyClimbingParamsVolume_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModifyClimbingParamsVolume::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AModifyClimbingParamsVolume Function OnOverlapEnd

// Begin Class AModifyClimbingParamsVolume
void AModifyClimbingParamsVolume::StaticRegisterNativesAModifyClimbingParamsVolume()
{
	UClass* Class = AModifyClimbingParamsVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &AModifyClimbingParamsVolume::execOnOverlapBegin },
		{ "OnOverlapEnd", &AModifyClimbingParamsVolume::execOnOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModifyClimbingParamsVolume);
UClass* Z_Construct_UClass_AModifyClimbingParamsVolume_NoRegister()
{
	return AModifyClimbingParamsVolume::StaticClass();
}
struct Z_Construct_UClass_AModifyClimbingParamsVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation HLOD Input NetWorking Replication Mobile DataLayers" },
		{ "IncludePath", "ModifyClimbingParamsVolume.h" },
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeUpOffsetIterations_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1. Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*It affects the number of iterations of the ledge detection function in order to analyze more collisions in the Z axis. \n\x09It allows you to potentially increase the speed of ledge detection. Note: This value affects performance.*/" },
#endif
		{ "DisplayName", "Ledge Up Offset Iterations" },
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It affects the number of iterations of the ledge detection function in order to analyze more collisions in the Z axis.\n       It allows you to potentially increase the speed of ledge detection. Note: This value affects performance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpOffsetDeltaValue_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1. Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Specifies at what value the starting position of the ledge search function will be moved in the Z axis. \n\x09If value < 0 then variable is NOT Override value in Climbing Component*/" },
#endif
		{ "DisplayName", "Up Offset Delta Value" },
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies at what value the starting position of the ledge search function will be moved in the Z axis.\n       If value < 0 then variable is NOT Override value in Climbing Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeSearchForwardRange_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1. Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If value < 0 then variable is NOT Override value in Climbing Component*/" },
#endif
		{ "DisplayName", "Ledge Search Forward Range" },
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If value < 0 then variable is NOT Override value in Climbing Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalVelocityTollerance_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1. Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If the current character velocity Z is lower that this value the modify is not changing parameters for ledge. */" },
#endif
		{ "DisplayName", "Vertical Velocity Tollerance" },
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current character velocity Z is lower that this value the modify is not changing parameters for ledge." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModifyClimbingParamsVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LedgeUpOffsetIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpOffsetDeltaValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeSearchForwardRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalVelocityTollerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapBegin, "OnOverlapBegin" }, // 68465657
		{ &Z_Construct_UFunction_AModifyClimbingParamsVolume_OnOverlapEnd, "OnOverlapEnd" }, // 2499476610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModifyClimbingParamsVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_LedgeUpOffsetIterations = { "LedgeUpOffsetIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModifyClimbingParamsVolume, LedgeUpOffsetIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeUpOffsetIterations_MetaData), NewProp_LedgeUpOffsetIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_UpOffsetDeltaValue = { "UpOffsetDeltaValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModifyClimbingParamsVolume, UpOffsetDeltaValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpOffsetDeltaValue_MetaData), NewProp_UpOffsetDeltaValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_LedgeSearchForwardRange = { "LedgeSearchForwardRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModifyClimbingParamsVolume, LedgeSearchForwardRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeSearchForwardRange_MetaData), NewProp_LedgeSearchForwardRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_VerticalVelocityTollerance = { "VerticalVelocityTollerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModifyClimbingParamsVolume, VerticalVelocityTollerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalVelocityTollerance_MetaData), NewProp_VerticalVelocityTollerance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModifyClimbingParamsVolume, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_LedgeUpOffsetIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_UpOffsetDeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_LedgeSearchForwardRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_VerticalVelocityTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::NewProp_BoxComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::ClassParams = {
	&AModifyClimbingParamsVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModifyClimbingParamsVolume()
{
	if (!Z_Registration_Info_UClass_AModifyClimbingParamsVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModifyClimbingParamsVolume.OuterSingleton, Z_Construct_UClass_AModifyClimbingParamsVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModifyClimbingParamsVolume.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<AModifyClimbingParamsVolume>()
{
	return AModifyClimbingParamsVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModifyClimbingParamsVolume);
AModifyClimbingParamsVolume::~AModifyClimbingParamsVolume() {}
// End Class AModifyClimbingParamsVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ModifyClimbingParamsVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModifyClimbingParamsVolume, AModifyClimbingParamsVolume::StaticClass, TEXT("AModifyClimbingParamsVolume"), &Z_Registration_Info_UClass_AModifyClimbingParamsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModifyClimbingParamsVolume), 872004196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ModifyClimbingParamsVolume_h_2382117370(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ModifyClimbingParamsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ModifyClimbingParamsVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

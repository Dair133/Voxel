// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubCableComponent/Public/JakubCableComponentBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJakubCableComponentBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
UPackage* Z_Construct_UPackage__Script_JakubCableComponent();
// End Cross Module References

// Begin Class UJakubCableComponentBPLibrary Function GetCollisionTraceFlag
struct Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics
{
	struct JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms
	{
		UStaticMeshComponent* Object;
		TEnumAsByte<ECollisionTraceFlag> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Get Collision Trace Flag" },
		{ "Keywords", "For More Information About Static Mesh" },
		{ "ModuleRelativePath", "Public/JakubCableComponentBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms, Object), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(0, nullptr) }; // 4042370968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCableComponentBPLibrary, nullptr, "GetCollisionTraceFlag", nullptr, nullptr, Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCableComponentBPLibrary::execGetCollisionTraceFlag)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionTraceFlag>*)Z_Param__Result=UJakubCableComponentBPLibrary::GetCollisionTraceFlag(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UJakubCableComponentBPLibrary Function GetCollisionTraceFlag

// Begin Class UJakubCableComponentBPLibrary Function PerformPIDControl
struct Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics
{
	struct JakubCableComponentBPLibrary_eventPerformPIDControl_Parms
	{
		float CurrentValue;
		float TargetValue;
		float IntegralSum;
		float PreviousError;
		float Kp;
		float Ki;
		float Kd;
		float dt;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|interpolation" },
		{ "DisplayName", "Perform PID Control" },
		{ "Keywords", "Interpolation" },
		{ "ModuleRelativePath", "Public/JakubCableComponentBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntegralSum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Kp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ki;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Kd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, CurrentValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, TargetValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_IntegralSum = { "IntegralSum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, IntegralSum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_PreviousError = { "PreviousError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, PreviousError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_Kp = { "Kp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, Kp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_Ki = { "Ki", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, Ki), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_Kd = { "Kd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, Kd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, dt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventPerformPIDControl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_TargetValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_IntegralSum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_PreviousError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_Kp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_Ki,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_Kd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_dt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCableComponentBPLibrary, nullptr, "PerformPIDControl", nullptr, nullptr, Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::JakubCableComponentBPLibrary_eventPerformPIDControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::JakubCableComponentBPLibrary_eventPerformPIDControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCableComponentBPLibrary::execPerformPIDControl)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_IntegralSum);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousError);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Kp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Ki);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Kd);
	P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJakubCableComponentBPLibrary::PerformPIDControl(Z_Param_CurrentValue,Z_Param_TargetValue,Z_Param_IntegralSum,Z_Param_PreviousError,Z_Param_Kp,Z_Param_Ki,Z_Param_Kd,Z_Param_dt);
	P_NATIVE_END;
}
// End Class UJakubCableComponentBPLibrary Function PerformPIDControl

// Begin Class UJakubCableComponentBPLibrary
void UJakubCableComponentBPLibrary::StaticRegisterNativesUJakubCableComponentBPLibrary()
{
	UClass* Class = UJakubCableComponentBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCollisionTraceFlag", &UJakubCableComponentBPLibrary::execGetCollisionTraceFlag },
		{ "PerformPIDControl", &UJakubCableComponentBPLibrary::execPerformPIDControl },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJakubCableComponentBPLibrary);
UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary_NoRegister()
{
	return UJakubCableComponentBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JakubCableComponentBPLibrary.h" },
		{ "ModuleRelativePath", "Public/JakubCableComponentBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag, "GetCollisionTraceFlag" }, // 63525090
		{ &Z_Construct_UFunction_UJakubCableComponentBPLibrary_PerformPIDControl, "PerformPIDControl" }, // 2255374366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJakubCableComponentBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::ClassParams = {
	&UJakubCableComponentBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary()
{
	if (!Z_Registration_Info_UClass_UJakubCableComponentBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJakubCableComponentBPLibrary.OuterSingleton, Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJakubCableComponentBPLibrary.OuterSingleton;
}
template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<UJakubCableComponentBPLibrary>()
{
	return UJakubCableComponentBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJakubCableComponentBPLibrary);
UJakubCableComponentBPLibrary::~UJakubCableComponentBPLibrary() {}
// End Class UJakubCableComponentBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJakubCableComponentBPLibrary, UJakubCableComponentBPLibrary::StaticClass, TEXT("UJakubCableComponentBPLibrary"), &Z_Registration_Info_UClass_UJakubCableComponentBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJakubCableComponentBPLibrary), 1526254412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_2222260271(TEXT("/Script/JakubCableComponent"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

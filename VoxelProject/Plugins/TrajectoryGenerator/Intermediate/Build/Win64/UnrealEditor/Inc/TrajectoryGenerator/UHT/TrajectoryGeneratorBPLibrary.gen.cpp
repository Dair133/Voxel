// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrajectoryGenerator/Public/TrajectoryGeneratorBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrajectoryGeneratorBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_UTrajectoryGeneratorBPLibrary();
TRAJECTORYGENERATOR_API UClass* Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_NoRegister();
TRAJECTORYGENERATOR_API UEnum* Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis();
UPackage* Z_Construct_UPackage__Script_TrajectoryGenerator();
// End Cross Module References

// Begin Enum ECurveVectorAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveVectorAxis;
static UEnum* ECurveVectorAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECurveVectorAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECurveVectorAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis, (UObject*)Z_Construct_UPackage__Script_TrajectoryGenerator(), TEXT("ECurveVectorAxis"));
	}
	return Z_Registration_Info_UEnum_ECurveVectorAxis.OuterSingleton;
}
template<> TRAJECTORYGENERATOR_API UEnum* StaticEnum<ECurveVectorAxis>()
{
	return ECurveVectorAxis_StaticEnum();
}
struct Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
		{ "X.Name", "ECurveVectorAxis::X" },
		{ "Y.Name", "ECurveVectorAxis::Y" },
		{ "Z.Name", "ECurveVectorAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECurveVectorAxis::X", (int64)ECurveVectorAxis::X },
		{ "ECurveVectorAxis::Y", (int64)ECurveVectorAxis::Y },
		{ "ECurveVectorAxis::Z", (int64)ECurveVectorAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TrajectoryGenerator,
	nullptr,
	"ECurveVectorAxis",
	"ECurveVectorAxis",
	Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis()
{
	if (!Z_Registration_Info_UEnum_ECurveVectorAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveVectorAxis.InnerSingleton, Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECurveVectorAxis.InnerSingleton;
}
// End Enum ECurveVectorAxis

// Begin Class UTrajectoryGeneratorBPLibrary Function AddKeyToCurveFloat
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms
	{
		UCurveFloat* CurveFloat;
		float Time;
		float Value;
		TEnumAsByte<ERichCurveInterpMode> InterpMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "CPP_Default_InterpMode", "RCIM_Linear" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(0, nullptr) }; // 294528593
void Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms), &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_CurveFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "AddKeyToCurveFloat", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventAddKeyToCurveFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execAddKeyToCurveFloat)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveFloat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FByteProperty,Z_Param_InterpMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::AddKeyToCurveFloat(Z_Param_CurveFloat,Z_Param_Time,Z_Param_Value,ERichCurveInterpMode(Z_Param_InterpMode));
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function AddKeyToCurveFloat

// Begin Class UTrajectoryGeneratorBPLibrary Function AddKeyToCurveVector
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms
	{
		UCurveVector* CurveVector;
		float Time;
		FVector Value;
		TEnumAsByte<ERichCurveInterpMode> InterpMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "CPP_Default_InterpMode", "RCIM_Linear" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_CurveVector = { "CurveVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms, CurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(0, nullptr) }; // 294528593
void Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms), &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_CurveVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "AddKeyToCurveVector", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventAddKeyToCurveVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execAddKeyToCurveVector)
{
	P_GET_OBJECT(UCurveVector,Z_Param_CurveVector);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_GET_PROPERTY(FByteProperty,Z_Param_InterpMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::AddKeyToCurveVector(Z_Param_CurveVector,Z_Param_Time,Z_Param_Value,ERichCurveInterpMode(Z_Param_InterpMode));
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function AddKeyToCurveVector

// Begin Class UTrajectoryGeneratorBPLibrary Function ClearAllKeysFromCurveFloat
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveFloat_Parms
	{
		UCurveFloat* CurveFloat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveFloat_Parms, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::NewProp_CurveFloat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "ClearAllKeysFromCurveFloat", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execClearAllKeysFromCurveFloat)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveFloat);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTrajectoryGeneratorBPLibrary::ClearAllKeysFromCurveFloat(Z_Param_CurveFloat);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function ClearAllKeysFromCurveFloat

// Begin Class UTrajectoryGeneratorBPLibrary Function ClearAllKeysFromCurveVector
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveVector_Parms
	{
		UCurveVector* CurveVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::NewProp_CurveVector = { "CurveVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveVector_Parms, CurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::NewProp_CurveVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "ClearAllKeysFromCurveVector", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventClearAllKeysFromCurveVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execClearAllKeysFromCurveVector)
{
	P_GET_OBJECT(UCurveVector,Z_Param_CurveVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTrajectoryGeneratorBPLibrary::ClearAllKeysFromCurveVector(Z_Param_CurveVector);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function ClearAllKeysFromCurveVector

// Begin Class UTrajectoryGeneratorBPLibrary Function CreateCurveFloatAsset
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventCreateCurveFloatAsset_Parms
	{
		FString AssetName;
		FString AssetPath;
		UCurveFloat* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventCreateCurveFloatAsset_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventCreateCurveFloatAsset_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventCreateCurveFloatAsset_Parms, ReturnValue), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "CreateCurveFloatAsset", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::TrajectoryGeneratorBPLibrary_eventCreateCurveFloatAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::TrajectoryGeneratorBPLibrary_eventCreateCurveFloatAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execCreateCurveFloatAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCurveFloat**)Z_Param__Result=UTrajectoryGeneratorBPLibrary::CreateCurveFloatAsset(Z_Param_AssetName,Z_Param_AssetPath);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function CreateCurveFloatAsset

// Begin Class UTrajectoryGeneratorBPLibrary Function CreateCurveVectorAsset
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventCreateCurveVectorAsset_Parms
	{
		FString AssetName;
		FString AssetPath;
		UCurveVector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventCreateCurveVectorAsset_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventCreateCurveVectorAsset_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventCreateCurveVectorAsset_Parms, ReturnValue), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "CreateCurveVectorAsset", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::TrajectoryGeneratorBPLibrary_eventCreateCurveVectorAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::TrajectoryGeneratorBPLibrary_eventCreateCurveVectorAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execCreateCurveVectorAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCurveVector**)Z_Param__Result=UTrajectoryGeneratorBPLibrary::CreateCurveVectorAsset(Z_Param_AssetName,Z_Param_AssetPath);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function CreateCurveVectorAsset

// Begin Class UTrajectoryGeneratorBPLibrary Function GetFloatValueAtKeyFrame
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventGetFloatValueAtKeyFrame_Parms
	{
		UCurveFloat* Curve;
		int32 KeyFrameIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return float value from CurveFloat by keyframe index\n" },
#endif
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return float value from CurveFloat by keyframe index" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyFrameIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetFloatValueAtKeyFrame_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::NewProp_KeyFrameIndex = { "KeyFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetFloatValueAtKeyFrame_Parms, KeyFrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetFloatValueAtKeyFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::NewProp_KeyFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "GetFloatValueAtKeyFrame", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::TrajectoryGeneratorBPLibrary_eventGetFloatValueAtKeyFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::TrajectoryGeneratorBPLibrary_eventGetFloatValueAtKeyFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execGetFloatValueAtKeyFrame)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::GetFloatValueAtKeyFrame(Z_Param_Curve,Z_Param_KeyFrameIndex);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function GetFloatValueAtKeyFrame

// Begin Class UTrajectoryGeneratorBPLibrary Function GetNumKeyFramesCurveFloat
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveFloat_Parms
	{
		UCurveFloat* Curve;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return all keyframes in CurveFloat\n" },
#endif
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return all keyframes in CurveFloat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveFloat_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "GetNumKeyFramesCurveFloat", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execGetNumKeyFramesCurveFloat)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::GetNumKeyFramesCurveFloat(Z_Param_Curve);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function GetNumKeyFramesCurveFloat

// Begin Class UTrajectoryGeneratorBPLibrary Function GetNumKeyFramesCurveVector
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveVector_Parms
	{
		UCurveVector* Curve;
		ECurveVectorAxis Axis;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return all keyframes from CurveVector by selected axis\n" },
#endif
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return all keyframes from CurveVector by selected axis" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveVector_Parms, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveVector_Parms, Axis), Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis, METADATA_PARAMS(0, nullptr) }; // 1400154957
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveVector_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "GetNumKeyFramesCurveVector", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventGetNumKeyFramesCurveVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execGetNumKeyFramesCurveVector)
{
	P_GET_OBJECT(UCurveVector,Z_Param_Curve);
	P_GET_ENUM(ECurveVectorAxis,Z_Param_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::GetNumKeyFramesCurveVector(Z_Param_Curve,ECurveVectorAxis(Z_Param_Axis));
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function GetNumKeyFramesCurveVector

// Begin Class UTrajectoryGeneratorBPLibrary Function GetVectorValueAtKeyFrame
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventGetVectorValueAtKeyFrame_Parms
	{
		UCurveVector* Curve;
		int32 KeyFrameIndex;
		ECurveVectorAxis Axis;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return float value from CurveVector by keyframe index\n" },
#endif
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return float value from CurveVector by keyframe index" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyFrameIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetVectorValueAtKeyFrame_Parms, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_KeyFrameIndex = { "KeyFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetVectorValueAtKeyFrame_Parms, KeyFrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetVectorValueAtKeyFrame_Parms, Axis), Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis, METADATA_PARAMS(0, nullptr) }; // 1400154957
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventGetVectorValueAtKeyFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_KeyFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "GetVectorValueAtKeyFrame", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::TrajectoryGeneratorBPLibrary_eventGetVectorValueAtKeyFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::TrajectoryGeneratorBPLibrary_eventGetVectorValueAtKeyFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execGetVectorValueAtKeyFrame)
{
	P_GET_OBJECT(UCurveVector,Z_Param_Curve);
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyFrameIndex);
	P_GET_ENUM(ECurveVectorAxis,Z_Param_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::GetVectorValueAtKeyFrame(Z_Param_Curve,Z_Param_KeyFrameIndex,ECurveVectorAxis(Z_Param_Axis));
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function GetVectorValueAtKeyFrame

// Begin Class UTrajectoryGeneratorBPLibrary Function LoadAssetsFromPath
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventLoadAssetsFromPath_Parms
	{
		TSubclassOf<UObject> AssetClass;
		FString AssetPath;
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "DeterminesOutputType", "AssetClass" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventLoadAssetsFromPath_Parms, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventLoadAssetsFromPath_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventLoadAssetsFromPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_AssetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "LoadAssetsFromPath", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::TrajectoryGeneratorBPLibrary_eventLoadAssetsFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::TrajectoryGeneratorBPLibrary_eventLoadAssetsFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execLoadAssetsFromPath)
{
	P_GET_OBJECT(UClass,Z_Param_AssetClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::LoadAssetsFromPath(Z_Param_AssetClass,Z_Param_AssetPath);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function LoadAssetsFromPath

// Begin Class UTrajectoryGeneratorBPLibrary Function RemoveKeyFrameFromCurveFloat
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveFloat_Parms
	{
		UCurveFloat* Curve;
		int32 KeyFrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyFrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveFloat_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_KeyFrameIndex = { "KeyFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveFloat_Parms, KeyFrameIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveFloat_Parms), &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_KeyFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "RemoveKeyFrameFromCurveFloat", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execRemoveKeyFrameFromCurveFloat)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::RemoveKeyFrameFromCurveFloat(Z_Param_Curve,Z_Param_KeyFrameIndex);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function RemoveKeyFrameFromCurveFloat

// Begin Class UTrajectoryGeneratorBPLibrary Function RemoveKeyFrameFromCurveVector
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms
	{
		UCurveVector* Curve;
		int32 KeyFrameIndex;
		ECurveVectorAxis Axis;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyFrameIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_KeyFrameIndex = { "KeyFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms, KeyFrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms, Axis), Z_Construct_UEnum_TrajectoryGenerator_ECurveVectorAxis, METADATA_PARAMS(0, nullptr) }; // 1400154957
void Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms), &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_KeyFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "RemoveKeyFrameFromCurveVector", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::TrajectoryGeneratorBPLibrary_eventRemoveKeyFrameFromCurveVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execRemoveKeyFrameFromCurveVector)
{
	P_GET_OBJECT(UCurveVector,Z_Param_Curve);
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyFrameIndex);
	P_GET_ENUM(ECurveVectorAxis,Z_Param_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::RemoveKeyFrameFromCurveVector(Z_Param_Curve,Z_Param_KeyFrameIndex,ECurveVectorAxis(Z_Param_Axis));
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function RemoveKeyFrameFromCurveVector

// Begin Class UTrajectoryGeneratorBPLibrary Function TrajectoryGeneratorSampleFunction
struct Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics
{
	struct TrajectoryGeneratorBPLibrary_eventTrajectoryGeneratorSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TrajectoryGeneratorTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "TrajectoryGenerator sample test testing" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventTrajectoryGeneratorSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrajectoryGeneratorBPLibrary_eventTrajectoryGeneratorSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, nullptr, "TrajectoryGeneratorSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::TrajectoryGeneratorBPLibrary_eventTrajectoryGeneratorSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::TrajectoryGeneratorBPLibrary_eventTrajectoryGeneratorSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrajectoryGeneratorBPLibrary::execTrajectoryGeneratorSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UTrajectoryGeneratorBPLibrary::TrajectoryGeneratorSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UTrajectoryGeneratorBPLibrary Function TrajectoryGeneratorSampleFunction

// Begin Class UTrajectoryGeneratorBPLibrary
void UTrajectoryGeneratorBPLibrary::StaticRegisterNativesUTrajectoryGeneratorBPLibrary()
{
	UClass* Class = UTrajectoryGeneratorBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddKeyToCurveFloat", &UTrajectoryGeneratorBPLibrary::execAddKeyToCurveFloat },
		{ "AddKeyToCurveVector", &UTrajectoryGeneratorBPLibrary::execAddKeyToCurveVector },
		{ "ClearAllKeysFromCurveFloat", &UTrajectoryGeneratorBPLibrary::execClearAllKeysFromCurveFloat },
		{ "ClearAllKeysFromCurveVector", &UTrajectoryGeneratorBPLibrary::execClearAllKeysFromCurveVector },
		{ "CreateCurveFloatAsset", &UTrajectoryGeneratorBPLibrary::execCreateCurveFloatAsset },
		{ "CreateCurveVectorAsset", &UTrajectoryGeneratorBPLibrary::execCreateCurveVectorAsset },
		{ "GetFloatValueAtKeyFrame", &UTrajectoryGeneratorBPLibrary::execGetFloatValueAtKeyFrame },
		{ "GetNumKeyFramesCurveFloat", &UTrajectoryGeneratorBPLibrary::execGetNumKeyFramesCurveFloat },
		{ "GetNumKeyFramesCurveVector", &UTrajectoryGeneratorBPLibrary::execGetNumKeyFramesCurveVector },
		{ "GetVectorValueAtKeyFrame", &UTrajectoryGeneratorBPLibrary::execGetVectorValueAtKeyFrame },
		{ "LoadAssetsFromPath", &UTrajectoryGeneratorBPLibrary::execLoadAssetsFromPath },
		{ "RemoveKeyFrameFromCurveFloat", &UTrajectoryGeneratorBPLibrary::execRemoveKeyFrameFromCurveFloat },
		{ "RemoveKeyFrameFromCurveVector", &UTrajectoryGeneratorBPLibrary::execRemoveKeyFrameFromCurveVector },
		{ "TrajectoryGeneratorSampleFunction", &UTrajectoryGeneratorBPLibrary::execTrajectoryGeneratorSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrajectoryGeneratorBPLibrary);
UClass* Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_NoRegister()
{
	return UTrajectoryGeneratorBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TrajectoryGeneratorBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TrajectoryGeneratorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveFloat, "AddKeyToCurveFloat" }, // 905735163
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_AddKeyToCurveVector, "AddKeyToCurveVector" }, // 1135536537
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveFloat, "ClearAllKeysFromCurveFloat" }, // 3418353221
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_ClearAllKeysFromCurveVector, "ClearAllKeysFromCurveVector" }, // 1308206906
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveFloatAsset, "CreateCurveFloatAsset" }, // 684457532
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_CreateCurveVectorAsset, "CreateCurveVectorAsset" }, // 84178842
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetFloatValueAtKeyFrame, "GetFloatValueAtKeyFrame" }, // 254733271
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveFloat, "GetNumKeyFramesCurveFloat" }, // 4170565616
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetNumKeyFramesCurveVector, "GetNumKeyFramesCurveVector" }, // 930645757
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_GetVectorValueAtKeyFrame, "GetVectorValueAtKeyFrame" }, // 2447674174
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_LoadAssetsFromPath, "LoadAssetsFromPath" }, // 1283506808
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveFloat, "RemoveKeyFrameFromCurveFloat" }, // 1253326070
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_RemoveKeyFrameFromCurveVector, "RemoveKeyFrameFromCurveVector" }, // 4115011833
		{ &Z_Construct_UFunction_UTrajectoryGeneratorBPLibrary_TrajectoryGeneratorSampleFunction, "TrajectoryGeneratorSampleFunction" }, // 1787588927
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrajectoryGeneratorBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TrajectoryGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics::ClassParams = {
	&UTrajectoryGeneratorBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTrajectoryGeneratorBPLibrary()
{
	if (!Z_Registration_Info_UClass_UTrajectoryGeneratorBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrajectoryGeneratorBPLibrary.OuterSingleton, Z_Construct_UClass_UTrajectoryGeneratorBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrajectoryGeneratorBPLibrary.OuterSingleton;
}
template<> TRAJECTORYGENERATOR_API UClass* StaticClass<UTrajectoryGeneratorBPLibrary>()
{
	return UTrajectoryGeneratorBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTrajectoryGeneratorBPLibrary);
UTrajectoryGeneratorBPLibrary::~UTrajectoryGeneratorBPLibrary() {}
// End Class UTrajectoryGeneratorBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECurveVectorAxis_StaticEnum, TEXT("ECurveVectorAxis"), &Z_Registration_Info_UEnum_ECurveVectorAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1400154957U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrajectoryGeneratorBPLibrary, UTrajectoryGeneratorBPLibrary::StaticClass, TEXT("UTrajectoryGeneratorBPLibrary"), &Z_Registration_Info_UClass_UTrajectoryGeneratorBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrajectoryGeneratorBPLibrary), 1318060265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_3810016212(TEXT("/Script/TrajectoryGenerator"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_TrajectoryGenerator_Source_TrajectoryGenerator_Public_TrajectoryGeneratorBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

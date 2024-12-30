// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubCableComponent/Public/JakubSimpleParticleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJakubSimpleParticleComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubSimpleParticleComponent();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubSimpleParticleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JakubCableComponent();
// End Cross Module References
	DEFINE_FUNCTION(UJakubSimpleParticleComponent::execFindBetweenNormals)
	{
		P_GET_STRUCT(FVector,Z_Param_V1);
		P_GET_STRUCT(FVector,Z_Param_V2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->FindBetweenNormals(Z_Param_V1,Z_Param_V2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubSimpleParticleComponent::execSetAttachToParticleOffset)
	{
		P_GET_STRUCT(FTransform,Z_Param_RelativeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachToParticleOffset(Z_Param_RelativeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubSimpleParticleComponent::execAttachComponentToParticle)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Parent);
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttachComponentToParticle(Z_Param_Parent,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubSimpleParticleComponent::execGetParticleCurrentLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetParticleCurrentLocation();
		P_NATIVE_END;
	}
	void UJakubSimpleParticleComponent::StaticRegisterNativesUJakubSimpleParticleComponent()
	{
		UClass* Class = UJakubSimpleParticleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachComponentToParticle", &UJakubSimpleParticleComponent::execAttachComponentToParticle },
			{ "FindBetweenNormals", &UJakubSimpleParticleComponent::execFindBetweenNormals },
			{ "GetParticleCurrentLocation", &UJakubSimpleParticleComponent::execGetParticleCurrentLocation },
			{ "SetAttachToParticleOffset", &UJakubSimpleParticleComponent::execSetAttachToParticleOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics
	{
		struct JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms
		{
			USceneComponent* Parent;
			EAttachmentRule LocationRule;
			EAttachmentRule RotationRule;
			EAttachmentRule ScaleRule;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	void Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms), &Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_LocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_LocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_RotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_RotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubSimpleParticleComponent, nullptr, "AttachComponentToParticle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::JakubSimpleParticleComponent_eventAttachComponentToParticle_Parms), Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics
	{
		struct JakubSimpleParticleComponent_eventFindBetweenNormals_Parms
		{
			FVector V1;
			FVector V2;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_V1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_V2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventFindBetweenNormals_Parms, V1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventFindBetweenNormals_Parms, V2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventFindBetweenNormals_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::NewProp_V1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::NewProp_V2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubSimpleParticleComponent, nullptr, "FindBetweenNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::JakubSimpleParticleComponent_eventFindBetweenNormals_Parms), Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics
	{
		struct JakubSimpleParticleComponent_eventGetParticleCurrentLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventGetParticleCurrentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubSimpleParticleComponent, nullptr, "GetParticleCurrentLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::JakubSimpleParticleComponent_eventGetParticleCurrentLocation_Parms), Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics
	{
		struct JakubSimpleParticleComponent_eventSetAttachToParticleOffset_Parms
		{
			FTransform RelativeOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubSimpleParticleComponent_eventSetAttachToParticleOffset_Parms, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::NewProp_RelativeOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubSimpleParticleComponent, nullptr, "SetAttachToParticleOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::JakubSimpleParticleComponent_eventSetAttachToParticleOffset_Parms), Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJakubSimpleParticleComponent);
	UClass* Z_Construct_UClass_UJakubSimpleParticleComponent_NoRegister()
	{
		return UJakubSimpleParticleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UJakubSimpleParticleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringForceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringForceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarDampingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarDampingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceBetweenParticles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceBetweenParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceSolverIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DistanceSolverIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugShapes_MetaData[];
#endif
		static void NewProp_DrawDebugShapes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugShapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationUpdateInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationUpdateInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationUpdateInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationUpdateInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseRelativeRotationUpdate_MetaData[];
#endif
		static void NewProp_UseRelativeRotationUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseRelativeRotationUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArrowComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJakubSimpleParticleComponent_AttachComponentToParticle, "AttachComponentToParticle" }, // 3543714225
		{ &Z_Construct_UFunction_UJakubSimpleParticleComponent_FindBetweenNormals, "FindBetweenNormals" }, // 133802445
		{ &Z_Construct_UFunction_UJakubSimpleParticleComponent_GetParticleCurrentLocation, "GetParticleCurrentLocation" }, // 2960846717
		{ &Z_Construct_UFunction_UJakubSimpleParticleComponent_SetAttachToParticleOffset, "SetAttachToParticleOffset" }, // 1664983341
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "JakubSimpleParticleComponent.h" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "Thumbnail", "Resources/JakubSimpleParticleComponent_64x.png" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleX_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The maximum angle to which a virtual particle can reach.*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "The maximum angle to which a virtual particle can reach." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleX = { "MaxAngleX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, MaxAngleX), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleY_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The maximum angle to which a virtual particle can reach.*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "The maximum angle to which a virtual particle can reach." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleY = { "MaxAngleY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, MaxAngleY), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleZ_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The maximum angle to which a virtual particle can reach.*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "The maximum angle to which a virtual particle can reach." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleZ = { "MaxAngleZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, MaxAngleZ), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_SpringForceFactor_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Set the elasticity coefficient for the spring simulation. A value of 0 means no elastic force.*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "Set the elasticity coefficient for the spring simulation. A value of 0 means no elastic force." },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_SpringForceFactor = { "SpringForceFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, SpringForceFactor), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_SpringForceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_SpringForceFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_ScalarDampingFactor_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The value affects the rate of decay of the forces acting on the particle (velocity and acceleration). \n    The smaller the value, the greater the damping. A value of 1 means no damping.*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "The value affects the rate of decay of the forces acting on the particle (velocity and acceleration).\n   The smaller the value, the greater the damping. A value of 1 means no damping." },
		{ "UIMax", "1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_ScalarDampingFactor = { "ScalarDampingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, ScalarDampingFactor), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_ScalarDampingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_ScalarDampingFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxDistanceBetweenParticles_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/* Specify the distance that the virtual particle should be from the beginning of the component's transformation.*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "Specify the distance that the virtual particle should be from the beginning of the component's transformation." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxDistanceBetweenParticles = { "MaxDistanceBetweenParticles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, MaxDistanceBetweenParticles), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxDistanceBetweenParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxDistanceBetweenParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DistanceSolverIterations_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DistanceSolverIterations = { "DistanceSolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, DistanceSolverIterations), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DistanceSolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DistanceSolverIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_GravityForce_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_GravityForce = { "GravityForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, GravityForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_GravityForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_GravityForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DrawDebugShapes_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DrawDebugShapes_SetBit(void* Obj)
	{
		((UJakubSimpleParticleComponent*)Obj)->DrawDebugShapes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DrawDebugShapes = { "DrawDebugShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubSimpleParticleComponent), &Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DrawDebugShapes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DrawDebugShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DrawDebugShapes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_RotationUpdateInterpSpeed_MetaData[] = {
		{ "Category", "Attach Config" },
		{ "Comment", "/* If = 0.0 then disabled interpolation*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "If = 0.0 then disabled interpolation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_RotationUpdateInterpSpeed = { "RotationUpdateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, RotationUpdateInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_RotationUpdateInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_RotationUpdateInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_LocationUpdateInterpSpeed_MetaData[] = {
		{ "Category", "Attach Config" },
		{ "Comment", "/* If = 0.0 then disabled interpolation*/" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
		{ "ToolTip", "If = 0.0 then disabled interpolation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_LocationUpdateInterpSpeed = { "LocationUpdateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubSimpleParticleComponent, LocationUpdateInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_LocationUpdateInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_LocationUpdateInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_UseRelativeRotationUpdate_MetaData[] = {
		{ "Category", "Attach Config" },
		{ "ModuleRelativePath", "Public/JakubSimpleParticleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_UseRelativeRotationUpdate_SetBit(void* Obj)
	{
		((UJakubSimpleParticleComponent*)Obj)->UseRelativeRotationUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_UseRelativeRotationUpdate = { "UseRelativeRotationUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubSimpleParticleComponent), &Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_UseRelativeRotationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_UseRelativeRotationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_UseRelativeRotationUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxAngleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_SpringForceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_ScalarDampingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_MaxDistanceBetweenParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DistanceSolverIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_GravityForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_DrawDebugShapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_RotationUpdateInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_LocationUpdateInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::NewProp_UseRelativeRotationUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJakubSimpleParticleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::ClassParams = {
		&UJakubSimpleParticleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJakubSimpleParticleComponent()
	{
		if (!Z_Registration_Info_UClass_UJakubSimpleParticleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJakubSimpleParticleComponent.OuterSingleton, Z_Construct_UClass_UJakubSimpleParticleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJakubSimpleParticleComponent.OuterSingleton;
	}
	template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<UJakubSimpleParticleComponent>()
	{
		return UJakubSimpleParticleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJakubSimpleParticleComponent);
	UJakubSimpleParticleComponent::~UJakubSimpleParticleComponent() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJakubSimpleParticleComponent, UJakubSimpleParticleComponent::StaticClass, TEXT("UJakubSimpleParticleComponent"), &Z_Registration_Info_UClass_UJakubSimpleParticleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJakubSimpleParticleComponent), 2945732338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_3487321172(TEXT("/Script/JakubCableComponent"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

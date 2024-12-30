// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubCableComponent/Public/JakubCablePhysic.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJakubCablePhysic() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCablePhysic();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCablePhysic_NoRegister();
	JAKUBCABLECOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FCableAttachPoint();
	UPackage* Z_Construct_UPackage__Script_JakubCableComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CableAttachPoint;
class UScriptStruct* FCableAttachPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CableAttachPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CableAttachPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCableAttachPoint, (UObject*)Z_Construct_UPackage__Script_JakubCableComponent(), TEXT("CableAttachPoint"));
	}
	return Z_Registration_Info_UScriptStruct_CableAttachPoint.OuterSingleton;
}
template<> JAKUBCABLECOMPONENT_API UScriptStruct* StaticStruct<FCableAttachPoint>()
{
	return FCableAttachPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCableAttachPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParticleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableAttachPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCableAttachPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "CableAttachPoint" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCableAttachPoint, ParticleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ParticleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ParticleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ComponentRef_MetaData[] = {
		{ "Category", "CableAttachPoint" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ComponentRef = { "ComponentRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCableAttachPoint, ComponentRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ComponentRef_MetaData)) }; // 1758507179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "CableAttachPoint" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCableAttachPoint, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCableAttachPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ParticleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ComponentRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_SocketName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
		nullptr,
		&NewStructOps,
		"CableAttachPoint",
		sizeof(FCableAttachPoint),
		alignof(FCableAttachPoint),
		Z_Construct_UScriptStruct_FCableAttachPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCableAttachPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_CableAttachPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CableAttachPoint.InnerSingleton, Z_Construct_UScriptStruct_FCableAttachPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CableAttachPoint.InnerSingleton;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execBreakAttachIfSegmentIsStretched)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ParticleIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StretchTolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BreakAttachIfSegmentIsStretched(Z_Param_Out_ParticleIndex,Z_Param_StretchTolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execAddImpulseToParticle)
	{
		P_GET_STRUCT(FVector,Z_Param_Impulse);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParticleIndex);
		P_GET_UBOOL(Z_Param_UseDistributedForce);
		P_GET_PROPERTY(FIntProperty,Z_Param_UnfoldingRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddImpulseToParticle(Z_Param_Impulse,Z_Param_ParticleIndex,Z_Param_UseDistributedForce,Z_Param_UnfoldingRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execUpdateSubstepTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSubstepTime);
		P_GET_UBOOL(Z_Param_FixVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSubstepTime(Z_Param_NewSubstepTime,Z_Param_FixVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execGetIndicesOfAttachedPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIndicesOfAttachedPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execGetCableCurrentSegmentsLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetCableCurrentSegmentsLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execGetCableInitSegmentsLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetCableInitSegmentsLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execGetCableParticleLocations)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCableParticleLocations(Z_Param_Out_Locations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execDetachParticleFrom)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ParticleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetachParticleFrom(Z_Param_ParticleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execGetAttachStructure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCableAttachPoint>*)Z_Param__Result=P_THIS->GetAttachStructure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execGetAttachedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttachedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execSetAttachIndexToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ComponentProperty);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParticleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachIndexToActor(Z_Param_Actor,Z_Param_ComponentProperty,Z_Param_SocketName,Z_Param_ParticleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubCablePhysic::execSetAttachIndexToComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParticleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachIndexToComponent(Z_Param_Component,Z_Param_SocketName,Z_Param_ParticleIndex);
		P_NATIVE_END;
	}
	void UJakubCablePhysic::StaticRegisterNativesUJakubCablePhysic()
	{
		UClass* Class = UJakubCablePhysic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddImpulseToParticle", &UJakubCablePhysic::execAddImpulseToParticle },
			{ "BreakAttachIfSegmentIsStretched", &UJakubCablePhysic::execBreakAttachIfSegmentIsStretched },
			{ "DetachParticleFrom", &UJakubCablePhysic::execDetachParticleFrom },
			{ "GetAttachedActors", &UJakubCablePhysic::execGetAttachedActors },
			{ "GetAttachStructure", &UJakubCablePhysic::execGetAttachStructure },
			{ "GetCableCurrentSegmentsLength", &UJakubCablePhysic::execGetCableCurrentSegmentsLength },
			{ "GetCableInitSegmentsLength", &UJakubCablePhysic::execGetCableInitSegmentsLength },
			{ "GetCableParticleLocations", &UJakubCablePhysic::execGetCableParticleLocations },
			{ "GetIndicesOfAttachedPoints", &UJakubCablePhysic::execGetIndicesOfAttachedPoints },
			{ "SetAttachIndexToActor", &UJakubCablePhysic::execSetAttachIndexToActor },
			{ "SetAttachIndexToComponent", &UJakubCablePhysic::execSetAttachIndexToComponent },
			{ "UpdateSubstepTime", &UJakubCablePhysic::execUpdateSubstepTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics
	{
		struct JakubCablePhysic_eventAddImpulseToParticle_Parms
		{
			FVector Impulse;
			int32 ParticleIndex;
			bool UseDistributedForce;
			int32 UnfoldingRange;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParticleIndex;
		static void NewProp_UseDistributedForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDistributedForce;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UnfoldingRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventAddImpulseToParticle_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventAddImpulseToParticle_Parms, ParticleIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce_SetBit(void* Obj)
	{
		((JakubCablePhysic_eventAddImpulseToParticle_Parms*)Obj)->UseDistributedForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce = { "UseDistributedForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JakubCablePhysic_eventAddImpulseToParticle_Parms), &Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UnfoldingRange = { "UnfoldingRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventAddImpulseToParticle_Parms, UnfoldingRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_Impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_ParticleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UnfoldingRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_Impulse", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_ParticleIndex", "1" },
		{ "CPP_Default_UnfoldingRange", "3" },
		{ "CPP_Default_UseDistributedForce", "false" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "AddImpulseToParticle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::JakubCablePhysic_eventAddImpulseToParticle_Parms), Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics
	{
		struct JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms
		{
			int32 ParticleIndex;
			float StretchTolerance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParticleIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchTolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms, ParticleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_StretchTolerance = { "StretchTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms, StretchTolerance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms), &Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ParticleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_StretchTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Auto detach the target attach constraint when the segment is out tolerance. Note: The tolerance value must be \n\x09selected depending on many factors. One of them is the SubstepTime value*/" },
		{ "CPP_Default_StretchTolerance", "14.000000" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Auto detach the target attach constraint when the segment is out tolerance. Note: The tolerance value must be\n      selected depending on many factors. One of them is the SubstepTime value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "BreakAttachIfSegmentIsStretched", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms), Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics
	{
		struct JakubCablePhysic_eventDetachParticleFrom_Parms
		{
			int32 ParticleIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParticleIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventDetachParticleFrom_Parms, ParticleIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JakubCablePhysic_eventDetachParticleFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JakubCablePhysic_eventDetachParticleFrom_Parms), &Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ParticleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Detach from constraint selected particle. If index is out of array size, then try detach last particle */" },
		{ "CPP_Default_ParticleIndex", "1" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Detach from constraint selected particle. If index is out of array size, then try detach last particle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "DetachParticleFrom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::JakubCablePhysic_eventDetachParticleFrom_Parms), Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics
	{
		struct JakubCablePhysic_eventGetAttachedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventGetAttachedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Gets the Actor that the cable is attached to **/" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Gets the Actor that the cable is attached to *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetAttachedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::JakubCablePhysic_eventGetAttachedActors_Parms), Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics
	{
		struct JakubCablePhysic_eventGetAttachStructure_Parms
		{
			TArray<FCableAttachPoint> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCableAttachPoint, METADATA_PARAMS(nullptr, 0) }; // 3418596856
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventGetAttachStructure_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3418596856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Gets the specific informations about attached to something particles **/" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Gets the specific informations about attached to something particles *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetAttachStructure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::JakubCablePhysic_eventGetAttachStructure_Parms), Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics
	{
		struct JakubCablePhysic_eventGetCableCurrentSegmentsLength_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventGetCableCurrentSegmentsLength_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Get the current lengths of cable segments (calculated by sum of distances between particles). \n\x09If the cable is attached to only one or two constraint, then the size of array is 1.*/" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Get the current lengths of cable segments (calculated by sum of distances between particles).\n      If the cable is attached to only one or two constraint, then the size of array is 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableCurrentSegmentsLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::JakubCablePhysic_eventGetCableCurrentSegmentsLength_Parms), Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics
	{
		struct JakubCablePhysic_eventGetCableInitSegmentsLength_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventGetCableInitSegmentsLength_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Get the targets lengths of cable segments. If the cable is attached to only one or two constraint, then the size of array is 1. */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Get the targets lengths of cable segments. If the cable is attached to only one or two constraint, then the size of array is 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableInitSegmentsLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::JakubCablePhysic_eventGetCableInitSegmentsLength_Parms), Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics
	{
		struct JakubCablePhysic_eventGetCableParticleLocations_Parms
		{
			TArray<FVector> Locations;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventGetCableParticleLocations_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Get array of locations of particles (in world space) making up the cable simulation. */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Get array of locations of particles (in world space) making up the cable simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableParticleLocations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::JakubCablePhysic_eventGetCableParticleLocations_Parms), Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics
	{
		struct JakubCablePhysic_eventGetIndicesOfAttachedPoints_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventGetIndicesOfAttachedPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetIndicesOfAttachedPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::JakubCablePhysic_eventGetIndicesOfAttachedPoints_Parms), Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics
	{
		struct JakubCablePhysic_eventSetAttachIndexToActor_Parms
		{
			AActor* Actor;
			FName ComponentProperty;
			FName SocketName;
			int32 ParticleIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentProperty;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParticleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ComponentProperty = { "ComponentProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, ComponentProperty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, ParticleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ComponentProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ParticleIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Attach the particle to the specified actor with have a component declared name */" },
		{ "CPP_Default_ParticleIndex", "1" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Attach the particle to the specified actor with have a component declared name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "SetAttachIndexToActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::JakubCablePhysic_eventSetAttachIndexToActor_Parms), Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics
	{
		struct JakubCablePhysic_eventSetAttachIndexToComponent_Parms
		{
			USceneComponent* Component;
			FName SocketName;
			int32 ParticleIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParticleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToComponent_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToComponent_Parms, ParticleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_ParticleIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Attach the choosed by index particle to specified component*/" },
		{ "CPP_Default_ParticleIndex", "1" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Attach the choosed by index particle to specified component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "SetAttachIndexToComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::JakubCablePhysic_eventSetAttachIndexToComponent_Parms), Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics
	{
		struct JakubCablePhysic_eventUpdateSubstepTime_Parms
		{
			float NewSubstepTime;
			bool FixVelocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSubstepTime;
		static void NewProp_FixVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FixVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_NewSubstepTime = { "NewSubstepTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubCablePhysic_eventUpdateSubstepTime_Parms, NewSubstepTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity_SetBit(void* Obj)
	{
		((JakubCablePhysic_eventUpdateSubstepTime_Parms*)Obj)->FixVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity = { "FixVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JakubCablePhysic_eventUpdateSubstepTime_Parms), &Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_NewSubstepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_FixVelocity", "true" },
		{ "CPP_Default_NewSubstepTime", "0.010000" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "UpdateSubstepTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::JakubCablePhysic_eventUpdateSubstepTime_Parms), Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJakubCablePhysic);
	UClass* Z_Construct_UClass_UJakubCablePhysic_NoRegister()
	{
		return UJakubCablePhysic::StaticClass();
	}
	struct Z_Construct_UClass_UJakubCablePhysic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachStart_MetaData[];
#endif
		static void NewProp_bAttachStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachToArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachToArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubstepTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubstepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingFactorRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampingFactorRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingByAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingByAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStiffness_MetaData[];
#endif
		static void NewProp_bEnableStiffness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSubstepping_MetaData[];
#endif
		static void NewProp_bUseSubstepping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSubstepping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCableUpdateWhenNotVisible_MetaData[];
#endif
		static void NewProp_bSkipCableUpdateWhenNotVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCableUpdateWhenNotVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData[];
#endif
		static void NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitTimeTo60FPS_MetaData[];
#endif
		static void NewProp_bLimitTimeTo60FPS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitTimeTo60FPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSubSegments_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CollisionSubSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptymalizeSubSegments_MetaData[];
#endif
		static void NewProp_OptymalizeSubSegments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OptymalizeSubSegments;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreBySweep_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreBySweep_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreBySweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CableForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUpdatingLODs_MetaData[];
#endif
		static void NewProp_bUseUpdatingLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUpdatingLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodsRadiusRangeMultipler_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodsRadiusRangeMultipler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastIndexOldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastIndexOldPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJakubCablePhysic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJakubCablePhysic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle, "AddImpulseToParticle" }, // 1057486802
		{ &Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched, "BreakAttachIfSegmentIsStretched" }, // 1403400525
		{ &Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom, "DetachParticleFrom" }, // 1617095542
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors, "GetAttachedActors" }, // 3932224624
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure, "GetAttachStructure" }, // 772351004
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength, "GetCableCurrentSegmentsLength" }, // 4270768119
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength, "GetCableInitSegmentsLength" }, // 4092248816
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations, "GetCableParticleLocations" }, // 1893048579
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints, "GetIndicesOfAttachedPoints" }, // 628185597
		{ &Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor, "SetAttachIndexToActor" }, // 1197766346
		{ &Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent, "SetAttachIndexToComponent" }, // 1705274538
		{ &Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime, "UpdateSubstepTime" }, // 647472451
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
		{ "HideCategories", "Object Physics Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "JakubCablePhysic.h" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/**\n\x09 *\x09Should we fix the start to something, or leave it free.\n\x09 *\x09If false, component transform is just used for initial location of start of cable\n\x09 */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Should we fix the start to something, or leave it free.\nIf false, component transform is just used for initial location of start of cable" },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bAttachStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart = { "bAttachStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray_Inner = { "AttachToArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCableAttachPoint, METADATA_PARAMS(nullptr, 0) }; // 3418596856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray = { "AttachToArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, AttachToArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray_MetaData)) }; // 3418596856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component. */" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableLength_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Rest length of the cable */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Rest length of the cable" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableLength = { "CableLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, CableLength), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSegments_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many segments the cable has */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "How many segments the cable has" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, NumSegments), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SubstepTime_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "0.005" },
		{ "Comment", "/** Controls the simulation substep time for the cable */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Controls the simulation substep time for the cable" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.005" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SubstepTime = { "SubstepTime", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, SubstepTime), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SubstepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SubstepTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SolverIterations_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of solver iterations controls how 'stiff' the cable is */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "The number of solver iterations controls how 'stiff' the cable is" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, SolverIterations), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SolverIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingFactorRange_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "/** The range defining how the rope speed damping is to take place. The 'X' value is the beginning of the rope and the \n\x09'Y' value is the end of the rope. Lower value, that make the the rope will move slower If the vector has the value [1,1], \n\x09it will mean that the rope has infinite energy, as a consequence, the movement will never be damped.*/" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "The range defining how the rope speed damping is to take place. The 'X' value is the beginning of the rope and the\n      'Y' value is the end of the rope. Lower value, that make the the rope will move slower If the vector has the value [1,1],\n      it will mean that the rope has infinite energy, as a consequence, the movement will never be damped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.9" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingFactorRange = { "DampingFactorRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, DampingFactorRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingFactorRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingFactorRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingByAcceleration_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* EXPERIMENTAL!!! - Allows to damp forces by calculating acceleration. It can lead to instability in the simulation.*/" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "EXPERIMENTAL!!! - Allows to damp forces by calculating acceleration. It can lead to instability in the simulation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingByAcceleration = { "DampingByAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, DampingByAcceleration), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingByAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingByAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Add stiffness constraints to cable. */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Add stiffness constraints to cable." },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bEnableStiffness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness = { "bEnableStiffness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** When false, will still wait for SubstepTime to elapse before updating, but will only run the cable simulation once using all of accumulated simulation time */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "When false, will still wait for SubstepTime to elapse before updating, but will only run the cable simulation once using all of accumulated simulation time" },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bUseSubstepping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping = { "bUseSubstepping", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bSkipCableUpdateWhenNotVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible = { "bSkipCableUpdateWhenNotVisible", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bSkipCableUpdateWhenNotOwnerRecentlyRendered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered = { "bSkipCableUpdateWhenNotOwnerRecentlyRendered", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Limit the refresh rate to 60 frames per second. Enabling this option may have a positive effect on the stability of the simulation. \n\x09If you use the \"AddImpulseToParticle\" function, changing the value of this parameter to true is recommended.*/" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Limit the refresh rate to 60 frames per second. Enabling this option may have a positive effect on the stability of the simulation.\n      If you use the \"AddImpulseToParticle\" function, changing the value of this parameter to true is recommended." },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bLimitTimeTo60FPS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS = { "bLimitTimeTo60FPS", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Perform sweeps for each cable particle, each substep, to avoid collisions with the world. */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Perform sweeps for each cable particle, each substep, to avoid collisions with the world." },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionFriction_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If collision is enabled, control how much sliding friction is applied when cable is in contact. */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "If collision is enabled, control how much sliding friction is applied when cable is in contact." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionFriction = { "CollisionFriction", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, CollisionFriction), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionSubSegments_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
		{ "Comment", "/* Specifies the maximum number of virtual particles. It allows for much more accurate collision detection, however, it can cause a large decrease in performance. */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Specifies the maximum number of virtual particles. It allows for much more accurate collision detection, however, it can cause a large decrease in performance." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionSubSegments = { "CollisionSubSegments", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, CollisionSubSegments), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionSubSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionSubSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* When this option is enabled, dividing to a virtual particles  starts when a collision is detected near the particles (n , n+1). */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "When this option is enabled, dividing to a virtual particles  starts when a collision is detected near the particles (n , n+1)." },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->OptymalizeSubSegments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments = { "OptymalizeSubSegments", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep_Inner = { "ActorsToIgnoreBySweep", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/* Add actors to be ignored during collision detection*/" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Add actors to be ignored during collision detection" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep = { "ActorsToIgnoreBySweep", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, ActorsToIgnoreBySweep), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableForce_MetaData[] = {
		{ "Category", "Cable Forces" },
		{ "Comment", "/** Force vector (world space) applied to all particles in cable. */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Force vector (world space) applied to all particles in cable." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableForce = { "CableForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, CableForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableGravityScale_MetaData[] = {
		{ "Category", "Cable Forces" },
		{ "Comment", "/** Scaling applied to world gravity affecting this cable. */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Scaling applied to world gravity affecting this cable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableGravityScale = { "CableGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, CableGravityScale), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableGravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableWidth_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** How wide the cable geometry is */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "How wide the cable geometry is" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, CableWidth), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSides_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of sides of the cable geometry */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "Number of sides of the cable geometry" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, NumSides), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_TileMaterial_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "Comment", "/** How many times to repeat the material along the length of the cable */" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "ToolTip", "How many times to repeat the material along the length of the cable" },
		{ "UIMax", "8" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_TileMaterial = { "TileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, TileMaterial), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_TileMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_TileMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs_MetaData[] = {
		{ "Category", "Cable Optimalization" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs_SetBit(void* Obj)
	{
		((UJakubCablePhysic*)Obj)->bUseUpdatingLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs = { "bUseUpdatingLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LodsRadiusRangeMultipler_MetaData[] = {
		{ "Category", "Cable Optimalization" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LodsRadiusRangeMultipler = { "LodsRadiusRangeMultipler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, LodsRadiusRangeMultipler), METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LodsRadiusRangeMultipler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LodsRadiusRangeMultipler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LastIndexOldPosition_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LastIndexOldPosition = { "LastIndexOldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubCablePhysic, LastIndexOldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LastIndexOldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LastIndexOldPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJakubCablePhysic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_EndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SubstepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SolverIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingFactorRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingByAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionSubSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_TileMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LodsRadiusRangeMultipler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LastIndexOldPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJakubCablePhysic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJakubCablePhysic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJakubCablePhysic_Statics::ClassParams = {
		&UJakubCablePhysic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJakubCablePhysic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UJakubCablePhysic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJakubCablePhysic()
	{
		if (!Z_Registration_Info_UClass_UJakubCablePhysic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJakubCablePhysic.OuterSingleton, Z_Construct_UClass_UJakubCablePhysic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJakubCablePhysic.OuterSingleton;
	}
	template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<UJakubCablePhysic>()
	{
		return UJakubCablePhysic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJakubCablePhysic);
	UJakubCablePhysic::~UJakubCablePhysic() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ScriptStructInfo[] = {
		{ FCableAttachPoint::StaticStruct, Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewStructOps, TEXT("CableAttachPoint"), &Z_Registration_Info_UScriptStruct_CableAttachPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCableAttachPoint), 3418596856U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJakubCablePhysic, UJakubCablePhysic::StaticClass, TEXT("UJakubCablePhysic"), &Z_Registration_Info_UClass_UJakubCablePhysic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJakubCablePhysic), 3653101285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_1416518735(TEXT("/Script/JakubCableComponent"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

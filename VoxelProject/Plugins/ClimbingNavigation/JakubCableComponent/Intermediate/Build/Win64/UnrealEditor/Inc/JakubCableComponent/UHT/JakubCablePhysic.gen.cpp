// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubCableComponent/Public/JakubCablePhysic.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJakubCablePhysic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCablePhysic();
JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCablePhysic_NoRegister();
JAKUBCABLECOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FCableAttachPoint();
JAKUBCABLECOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FExposedCableParticle();
UPackage* Z_Construct_UPackage__Script_JakubCableComponent();
// End Cross Module References

// Begin ScriptStruct FCableAttachPoint
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "CableAttachPoint" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRef_MetaData[] = {
		{ "Category", "CableAttachPoint" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "CableAttachPoint" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentRef;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCableAttachPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCableAttachPoint, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ComponentRef = { "ComponentRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCableAttachPoint, ComponentRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentRef_MetaData), NewProp_ComponentRef_MetaData) }; // 3869904073
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCableAttachPoint, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCableAttachPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_ComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCableAttachPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
	nullptr,
	&NewStructOps,
	"CableAttachPoint",
	Z_Construct_UScriptStruct_FCableAttachPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::PropPointers),
	sizeof(FCableAttachPoint),
	alignof(FCableAttachPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableAttachPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCableAttachPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCableAttachPoint()
{
	if (!Z_Registration_Info_UScriptStruct_CableAttachPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CableAttachPoint.InnerSingleton, Z_Construct_UScriptStruct_FCableAttachPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CableAttachPoint.InnerSingleton;
}
// End ScriptStruct FCableAttachPoint

// Begin ScriptStruct FExposedCableParticle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExposedCableParticle;
class UScriptStruct* FExposedCableParticle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedCableParticle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExposedCableParticle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposedCableParticle, (UObject*)Z_Construct_UPackage__Script_JakubCableComponent(), TEXT("ExposedCableParticle"));
	}
	return Z_Registration_Info_UScriptStruct_ExposedCableParticle.OuterSingleton;
}
template<> JAKUBCABLECOMPONENT_API UScriptStruct* StaticStruct<FExposedCableParticle>()
{
	return FExposedCableParticle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExposedCableParticle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "ExposedCableParticle" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPosition_MetaData[] = {
		{ "Category", "ExposedCableParticle" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsColliding_MetaData[] = {
		{ "Category", "ExposedCableParticle" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFree_MetaData[] = {
		{ "Category", "ExposedCableParticle" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosition;
	static void NewProp_bIsColliding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsColliding;
	static void NewProp_bIsFree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposedCableParticle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExposedCableParticle, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_OldPosition = { "OldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExposedCableParticle, OldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPosition_MetaData), NewProp_OldPosition_MetaData) };
void Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsColliding_SetBit(void* Obj)
{
	((FExposedCableParticle*)Obj)->bIsColliding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsColliding = { "bIsColliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FExposedCableParticle), &Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsColliding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsColliding_MetaData), NewProp_bIsColliding_MetaData) };
void Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsFree_SetBit(void* Obj)
{
	((FExposedCableParticle*)Obj)->bIsFree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsFree = { "bIsFree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FExposedCableParticle), &Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsFree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFree_MetaData), NewProp_bIsFree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExposedCableParticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_OldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsColliding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewProp_bIsFree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedCableParticle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposedCableParticle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
	nullptr,
	&NewStructOps,
	"ExposedCableParticle",
	Z_Construct_UScriptStruct_FExposedCableParticle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedCableParticle_Statics::PropPointers),
	sizeof(FExposedCableParticle),
	alignof(FExposedCableParticle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedCableParticle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExposedCableParticle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExposedCableParticle()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedCableParticle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExposedCableParticle.InnerSingleton, Z_Construct_UScriptStruct_FExposedCableParticle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExposedCableParticle.InnerSingleton;
}
// End ScriptStruct FExposedCableParticle

// Begin Class UJakubCablePhysic Function AddImpulseToParticle
struct Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics
{
	struct JakubCablePhysic_eventAddImpulseToParticle_Parms
	{
		FVector Impulse;
		int32 ParticleIndex;
		bool UseDistributedForce;
		int32 UnfoldingRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_Impulse", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_ParticleIndex", "1" },
		{ "CPP_Default_UnfoldingRange", "3" },
		{ "CPP_Default_UseDistributedForce", "false" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static void NewProp_UseDistributedForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDistributedForce;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnfoldingRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventAddImpulseToParticle_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventAddImpulseToParticle_Parms, ParticleIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce_SetBit(void* Obj)
{
	((JakubCablePhysic_eventAddImpulseToParticle_Parms*)Obj)->UseDistributedForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce = { "UseDistributedForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventAddImpulseToParticle_Parms), &Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UnfoldingRange = { "UnfoldingRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventAddImpulseToParticle_Parms, UnfoldingRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UseDistributedForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::NewProp_UnfoldingRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "AddImpulseToParticle", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::JakubCablePhysic_eventAddImpulseToParticle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::JakubCablePhysic_eventAddImpulseToParticle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UJakubCablePhysic Function AddImpulseToParticle

// Begin Class UJakubCablePhysic Function ApplyConstForceToParticle
struct Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics
{
	struct JakubCablePhysic_eventApplyConstForceToParticle_Parms
	{
		FVector Force;
		int32 ParticleIndex;
		bool ExpadLinear;
		int32 ExpandLenght;
		float ExpandMinRange;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_ExpadLinear", "false" },
		{ "CPP_Default_ExpandLenght", "3" },
		{ "CPP_Default_ExpandMinRange", "0.100000" },
		{ "CPP_Default_Force", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_ParticleIndex", "1" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static void NewProp_ExpadLinear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExpadLinear;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpandLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpandMinRange;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventApplyConstForceToParticle_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventApplyConstForceToParticle_Parms, ParticleIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpadLinear_SetBit(void* Obj)
{
	((JakubCablePhysic_eventApplyConstForceToParticle_Parms*)Obj)->ExpadLinear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpadLinear = { "ExpadLinear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventApplyConstForceToParticle_Parms), &Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpadLinear_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpandLenght = { "ExpandLenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventApplyConstForceToParticle_Parms, ExpandLenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpandMinRange = { "ExpandMinRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventApplyConstForceToParticle_Parms, ExpandMinRange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JakubCablePhysic_eventApplyConstForceToParticle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventApplyConstForceToParticle_Parms), &Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpadLinear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpandLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ExpandMinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "ApplyConstForceToParticle", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::JakubCablePhysic_eventApplyConstForceToParticle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::JakubCablePhysic_eventApplyConstForceToParticle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execApplyConstForceToParticle)
{
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_GET_PROPERTY(FIntProperty,Z_Param_ParticleIndex);
	P_GET_UBOOL(Z_Param_ExpadLinear);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExpandLenght);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ExpandMinRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyConstForceToParticle(Z_Param_Force,Z_Param_ParticleIndex,Z_Param_ExpadLinear,Z_Param_ExpandLenght,Z_Param_ExpandMinRange);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function ApplyConstForceToParticle

// Begin Class UJakubCablePhysic Function BreakAttachIfSegmentIsStretched
struct Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics
{
	struct JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms
	{
		int32 ParticleIndex;
		float StretchTolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Auto detach the target attach constraint when the segment is out tolerance. Note: The tolerance value must be \n\x09selected depending on many factors. One of them is the SubstepTime value*/" },
#endif
		{ "CPP_Default_StretchTolerance", "14.000000" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto detach the target attach constraint when the segment is out tolerance. Note: The tolerance value must be\n      selected depending on many factors. One of them is the SubstepTime value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchTolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms, ParticleIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_StretchTolerance = { "StretchTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms, StretchTolerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms), &Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_StretchTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "BreakAttachIfSegmentIsStretched", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::JakubCablePhysic_eventBreakAttachIfSegmentIsStretched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UJakubCablePhysic Function BreakAttachIfSegmentIsStretched

// Begin Class UJakubCablePhysic Function DetachParticleFrom
struct Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics
{
	struct JakubCablePhysic_eventDetachParticleFrom_Parms
	{
		int32 ParticleIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Detach from constraint selected particle. If index is out of array size, then try detach last particle */" },
#endif
		{ "CPP_Default_ParticleIndex", "1" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detach from constraint selected particle. If index is out of array size, then try detach last particle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventDetachParticleFrom_Parms, ParticleIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JakubCablePhysic_eventDetachParticleFrom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventDetachParticleFrom_Parms), &Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "DetachParticleFrom", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::JakubCablePhysic_eventDetachParticleFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::JakubCablePhysic_eventDetachParticleFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execDetachParticleFrom)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ParticleIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DetachParticleFrom(Z_Param_ParticleIndex);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function DetachParticleFrom

// Begin Class UJakubCablePhysic Function GetAnyPointIsColliding
struct Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics
{
	struct JakubCablePhysic_eventGetAnyPointIsColliding_Parms
	{
		int32 RangeMin;
		int32 RangeMax;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_RangeMax", "100" },
		{ "CPP_Default_RangeMin", "0" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeMax;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetAnyPointIsColliding_Parms, RangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetAnyPointIsColliding_Parms, RangeMax), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JakubCablePhysic_eventGetAnyPointIsColliding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventGetAnyPointIsColliding_Parms), &Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_RangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetAnyPointIsColliding", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::JakubCablePhysic_eventGetAnyPointIsColliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::JakubCablePhysic_eventGetAnyPointIsColliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetAnyPointIsColliding)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAnyPointIsColliding(Z_Param_RangeMin,Z_Param_RangeMax);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetAnyPointIsColliding

// Begin Class UJakubCablePhysic Function GetAttachedActors
struct Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics
{
	struct JakubCablePhysic_eventGetAttachedActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the Actor that the cable is attached to **/" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Actor that the cable is attached to *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetAttachedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetAttachedActors", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::JakubCablePhysic_eventGetAttachedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::JakubCablePhysic_eventGetAttachedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetAttachedActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttachedActors();
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetAttachedActors

// Begin Class UJakubCablePhysic Function GetAttachStructure
struct Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics
{
	struct JakubCablePhysic_eventGetAttachStructure_Parms
	{
		TArray<FCableAttachPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the specific informations about attached to something particles **/" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the specific informations about attached to something particles *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCableAttachPoint, METADATA_PARAMS(0, nullptr) }; // 77761348
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetAttachStructure_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 77761348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetAttachStructure", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::JakubCablePhysic_eventGetAttachStructure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::JakubCablePhysic_eventGetAttachStructure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetAttachStructure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FCableAttachPoint>*)Z_Param__Result=P_THIS->GetAttachStructure();
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetAttachStructure

// Begin Class UJakubCablePhysic Function GetCableCurrentSegmentsLength
struct Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics
{
	struct JakubCablePhysic_eventGetCableCurrentSegmentsLength_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Get the current lengths of cable segments (calculated by sum of distances between particles). \n\x09If the cable is attached to only one or two constraint, then the size of array is 1.*/" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current lengths of cable segments (calculated by sum of distances between particles).\n      If the cable is attached to only one or two constraint, then the size of array is 1." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableCurrentSegmentsLength_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableCurrentSegmentsLength", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::JakubCablePhysic_eventGetCableCurrentSegmentsLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::JakubCablePhysic_eventGetCableCurrentSegmentsLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetCableCurrentSegmentsLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetCableCurrentSegmentsLength();
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetCableCurrentSegmentsLength

// Begin Class UJakubCablePhysic Function GetCableInitSegmentsLength
struct Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics
{
	struct JakubCablePhysic_eventGetCableInitSegmentsLength_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Get the targets lengths of cable segments. If the cable is attached to only one or two constraint, then the size of array is 1. */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the targets lengths of cable segments. If the cable is attached to only one or two constraint, then the size of array is 1." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableInitSegmentsLength_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableInitSegmentsLength", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::JakubCablePhysic_eventGetCableInitSegmentsLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::JakubCablePhysic_eventGetCableInitSegmentsLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetCableInitSegmentsLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetCableInitSegmentsLength();
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetCableInitSegmentsLength

// Begin Class UJakubCablePhysic Function GetCableParticleLocations
struct Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics
{
	struct JakubCablePhysic_eventGetCableParticleLocations_Parms
	{
		TArray<FVector> Locations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get array of locations of particles (in world space) making up the cable simulation. */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get array of locations of particles (in world space) making up the cable simulation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableParticleLocations_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::NewProp_Locations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableParticleLocations", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::JakubCablePhysic_eventGetCableParticleLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::JakubCablePhysic_eventGetCableParticleLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetCableParticleLocations)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCableParticleLocations(Z_Param_Out_Locations);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetCableParticleLocations

// Begin Class UJakubCablePhysic Function GetCableParticlesStructure
struct Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics
{
	struct JakubCablePhysic_eventGetCableParticlesStructure_Parms
	{
		TArray<FExposedCableParticle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get array of Particles Structure (in world space) */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get array of Particles Structure (in world space)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExposedCableParticle, METADATA_PARAMS(0, nullptr) }; // 3054290502
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableParticlesStructure_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3054290502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableParticlesStructure", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::JakubCablePhysic_eventGetCableParticlesStructure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::JakubCablePhysic_eventGetCableParticlesStructure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetCableParticlesStructure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FExposedCableParticle>*)Z_Param__Result=P_THIS->GetCableParticlesStructure();
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetCableParticlesStructure

// Begin Class UJakubCablePhysic Function GetCableSpaceLenghtForSwinging
struct Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics
{
	struct JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms
	{
		int32 ParticlesCount;
		FExposedCableParticle FirstParticle;
		FExposedCableParticle LastParticle;
		TArray<FExposedCableParticle> ParticlesInSpace;
		bool DrawDebug;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specified Function deticated to rope swinging system */" },
#endif
		{ "CPP_Default_DrawDebug", "false" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specified Function deticated to rope swinging system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticlesCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstParticle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastParticle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticlesInSpace_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticlesInSpace;
	static void NewProp_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ParticlesCount = { "ParticlesCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms, ParticlesCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_FirstParticle = { "FirstParticle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms, FirstParticle), Z_Construct_UScriptStruct_FExposedCableParticle, METADATA_PARAMS(0, nullptr) }; // 3054290502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_LastParticle = { "LastParticle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms, LastParticle), Z_Construct_UScriptStruct_FExposedCableParticle, METADATA_PARAMS(0, nullptr) }; // 3054290502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ParticlesInSpace_Inner = { "ParticlesInSpace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExposedCableParticle, METADATA_PARAMS(0, nullptr) }; // 3054290502
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ParticlesInSpace = { "ParticlesInSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms, ParticlesInSpace), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3054290502
void Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_DrawDebug_SetBit(void* Obj)
{
	((JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms*)Obj)->DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms), &Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms), &Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ParticlesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_FirstParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_LastParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ParticlesInSpace_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ParticlesInSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetCableSpaceLenghtForSwinging", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::JakubCablePhysic_eventGetCableSpaceLenghtForSwinging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetCableSpaceLenghtForSwinging)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ParticlesCount);
	P_GET_STRUCT_REF(FExposedCableParticle,Z_Param_Out_FirstParticle);
	P_GET_STRUCT_REF(FExposedCableParticle,Z_Param_Out_LastParticle);
	P_GET_TARRAY_REF(FExposedCableParticle,Z_Param_Out_ParticlesInSpace);
	P_GET_UBOOL(Z_Param_DrawDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCableSpaceLenghtForSwinging(Z_Param_Out_ParticlesCount,Z_Param_Out_FirstParticle,Z_Param_Out_LastParticle,Z_Param_Out_ParticlesInSpace,Z_Param_DrawDebug);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetCableSpaceLenghtForSwinging

// Begin Class UJakubCablePhysic Function GetIndicesOfAttachedPoints
struct Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics
{
	struct JakubCablePhysic_eventGetIndicesOfAttachedPoints_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetIndicesOfAttachedPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetIndicesOfAttachedPoints", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::JakubCablePhysic_eventGetIndicesOfAttachedPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::JakubCablePhysic_eventGetIndicesOfAttachedPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetIndicesOfAttachedPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetIndicesOfAttachedPoints();
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetIndicesOfAttachedPoints

// Begin Class UJakubCablePhysic Function GetStretchTolleranceValuePerSegment
struct Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics
{
	struct JakubCablePhysic_eventGetStretchTolleranceValuePerSegment_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventGetStretchTolleranceValuePerSegment_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "GetStretchTolleranceValuePerSegment", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::JakubCablePhysic_eventGetStretchTolleranceValuePerSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::JakubCablePhysic_eventGetStretchTolleranceValuePerSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execGetStretchTolleranceValuePerSegment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetStretchTolleranceValuePerSegment();
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function GetStretchTolleranceValuePerSegment

// Begin Class UJakubCablePhysic Function ReduceForceForParticles
struct Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics
{
	struct JakubCablePhysic_eventReduceForceForParticles_Parms
	{
		int32 StartIndex;
		int32 EndIndex;
		float ReductionStrenght;
		float dt;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_dt", "0.000000" },
		{ "CPP_Default_EndIndex", "100" },
		{ "CPP_Default_ReductionStrenght", "1.000000" },
		{ "CPP_Default_StartIndex", "0" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReductionStrenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dt;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventReduceForceForParticles_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventReduceForceForParticles_Parms, EndIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_ReductionStrenght = { "ReductionStrenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventReduceForceForParticles_Parms, ReductionStrenght), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventReduceForceForParticles_Parms, dt), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JakubCablePhysic_eventReduceForceForParticles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventReduceForceForParticles_Parms), &Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_EndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_ReductionStrenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_dt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "ReduceForceForParticles", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::JakubCablePhysic_eventReduceForceForParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::JakubCablePhysic_eventReduceForceForParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execReduceForceForParticles)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReductionStrenght);
	P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReduceForceForParticles(Z_Param_StartIndex,Z_Param_EndIndex,Z_Param_ReductionStrenght,Z_Param_dt);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function ReduceForceForParticles

// Begin Class UJakubCablePhysic Function SetAttachIndexToActor
struct Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics
{
	struct JakubCablePhysic_eventSetAttachIndexToActor_Parms
	{
		AActor* Actor;
		FName ComponentProperty;
		FName SocketName;
		int32 ParticleIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attach the particle to the specified actor with have a component declared name */" },
#endif
		{ "CPP_Default_ParticleIndex", "1" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach the particle to the specified actor with have a component declared name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentProperty;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ComponentProperty = { "ComponentProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, ComponentProperty), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToActor_Parms, ParticleIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ComponentProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::NewProp_ParticleIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "SetAttachIndexToActor", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::JakubCablePhysic_eventSetAttachIndexToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::JakubCablePhysic_eventSetAttachIndexToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UJakubCablePhysic Function SetAttachIndexToActor

// Begin Class UJakubCablePhysic Function SetAttachIndexToComponent
struct Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics
{
	struct JakubCablePhysic_eventSetAttachIndexToComponent_Parms
	{
		USceneComponent* Component;
		FName SocketName;
		int32 ParticleIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attach the choosed by index particle to specified component*/" },
#endif
		{ "CPP_Default_ParticleIndex", "1" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach the choosed by index particle to specified component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToComponent_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetAttachIndexToComponent_Parms, ParticleIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::NewProp_ParticleIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "SetAttachIndexToComponent", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::JakubCablePhysic_eventSetAttachIndexToComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::JakubCablePhysic_eventSetAttachIndexToComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UJakubCablePhysic Function SetAttachIndexToComponent

// Begin Class UJakubCablePhysic Function SetParticleLocation
struct Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics
{
	struct JakubCablePhysic_eventSetParticleLocation_Parms
	{
		FVector Location;
		int32 ParticleIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_Location", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_ParticleIndex", "1" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetParticleLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventSetParticleLocation_Parms, ParticleIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::NewProp_ParticleIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "SetParticleLocation", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::JakubCablePhysic_eventSetParticleLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::JakubCablePhysic_eventSetParticleLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execSetParticleLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FIntProperty,Z_Param_ParticleIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParticleLocation(Z_Param_Location,Z_Param_ParticleIndex);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function SetParticleLocation

// Begin Class UJakubCablePhysic Function UpdateCableLength
struct Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics
{
	struct JakubCablePhysic_eventUpdateCableLength_Parms
	{
		float NewLenght;
		bool RefreshCableInitValues;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_NewLenght", "100.000000" },
		{ "CPP_Default_RefreshCableInitValues", "true" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLenght;
	static void NewProp_RefreshCableInitValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RefreshCableInitValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::NewProp_NewLenght = { "NewLenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventUpdateCableLength_Parms, NewLenght), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::NewProp_RefreshCableInitValues_SetBit(void* Obj)
{
	((JakubCablePhysic_eventUpdateCableLength_Parms*)Obj)->RefreshCableInitValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::NewProp_RefreshCableInitValues = { "RefreshCableInitValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventUpdateCableLength_Parms), &Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::NewProp_RefreshCableInitValues_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::NewProp_NewLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::NewProp_RefreshCableInitValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "UpdateCableLength", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::JakubCablePhysic_eventUpdateCableLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::JakubCablePhysic_eventUpdateCableLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execUpdateCableLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLenght);
	P_GET_UBOOL(Z_Param_RefreshCableInitValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCableLength(Z_Param_NewLenght,Z_Param_RefreshCableInitValues);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function UpdateCableLength

// Begin Class UJakubCablePhysic Function UpdateSubstepTime
struct Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics
{
	struct JakubCablePhysic_eventUpdateSubstepTime_Parms
	{
		float NewSubstepTime;
		bool FixVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_FixVelocity", "true" },
		{ "CPP_Default_NewSubstepTime", "0.010000" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSubstepTime;
	static void NewProp_FixVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FixVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_NewSubstepTime = { "NewSubstepTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventUpdateSubstepTime_Parms, NewSubstepTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity_SetBit(void* Obj)
{
	((JakubCablePhysic_eventUpdateSubstepTime_Parms*)Obj)->FixVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity = { "FixVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventUpdateSubstepTime_Parms), &Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_NewSubstepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::NewProp_FixVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "UpdateSubstepTime", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::JakubCablePhysic_eventUpdateSubstepTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::JakubCablePhysic_eventUpdateSubstepTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UJakubCablePhysic Function UpdateSubstepTime

// Begin Class UJakubCablePhysic Function UseForceToTightenTheRope
struct Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics
{
	struct JakubCablePhysic_eventUseForceToTightenTheRope_Parms
	{
		int32 EndIndex;
		int32 StartIndex;
		float ForceStrenght;
		bool ApplyDistanceForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "CPP_Default_ApplyDistanceForce", "false" },
		{ "CPP_Default_EndIndex", "0" },
		{ "CPP_Default_ForceStrenght", "1000.000000" },
		{ "CPP_Default_StartIndex", "-1" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceStrenght;
	static void NewProp_ApplyDistanceForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyDistanceForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventUseForceToTightenTheRope_Parms, EndIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventUseForceToTightenTheRope_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_ForceStrenght = { "ForceStrenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCablePhysic_eventUseForceToTightenTheRope_Parms, ForceStrenght), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_ApplyDistanceForce_SetBit(void* Obj)
{
	((JakubCablePhysic_eventUseForceToTightenTheRope_Parms*)Obj)->ApplyDistanceForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_ApplyDistanceForce = { "ApplyDistanceForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JakubCablePhysic_eventUseForceToTightenTheRope_Parms), &Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_ApplyDistanceForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_EndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_ForceStrenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::NewProp_ApplyDistanceForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCablePhysic, nullptr, "UseForceToTightenTheRope", nullptr, nullptr, Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::JakubCablePhysic_eventUseForceToTightenTheRope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::JakubCablePhysic_eventUseForceToTightenTheRope_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJakubCablePhysic::execUseForceToTightenTheRope)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForceStrenght);
	P_GET_UBOOL(Z_Param_ApplyDistanceForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseForceToTightenTheRope(Z_Param_EndIndex,Z_Param_StartIndex,Z_Param_ForceStrenght,Z_Param_ApplyDistanceForce);
	P_NATIVE_END;
}
// End Class UJakubCablePhysic Function UseForceToTightenTheRope

// Begin Class UJakubCablePhysic
void UJakubCablePhysic::StaticRegisterNativesUJakubCablePhysic()
{
	UClass* Class = UJakubCablePhysic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddImpulseToParticle", &UJakubCablePhysic::execAddImpulseToParticle },
		{ "ApplyConstForceToParticle", &UJakubCablePhysic::execApplyConstForceToParticle },
		{ "BreakAttachIfSegmentIsStretched", &UJakubCablePhysic::execBreakAttachIfSegmentIsStretched },
		{ "DetachParticleFrom", &UJakubCablePhysic::execDetachParticleFrom },
		{ "GetAnyPointIsColliding", &UJakubCablePhysic::execGetAnyPointIsColliding },
		{ "GetAttachedActors", &UJakubCablePhysic::execGetAttachedActors },
		{ "GetAttachStructure", &UJakubCablePhysic::execGetAttachStructure },
		{ "GetCableCurrentSegmentsLength", &UJakubCablePhysic::execGetCableCurrentSegmentsLength },
		{ "GetCableInitSegmentsLength", &UJakubCablePhysic::execGetCableInitSegmentsLength },
		{ "GetCableParticleLocations", &UJakubCablePhysic::execGetCableParticleLocations },
		{ "GetCableParticlesStructure", &UJakubCablePhysic::execGetCableParticlesStructure },
		{ "GetCableSpaceLenghtForSwinging", &UJakubCablePhysic::execGetCableSpaceLenghtForSwinging },
		{ "GetIndicesOfAttachedPoints", &UJakubCablePhysic::execGetIndicesOfAttachedPoints },
		{ "GetStretchTolleranceValuePerSegment", &UJakubCablePhysic::execGetStretchTolleranceValuePerSegment },
		{ "ReduceForceForParticles", &UJakubCablePhysic::execReduceForceForParticles },
		{ "SetAttachIndexToActor", &UJakubCablePhysic::execSetAttachIndexToActor },
		{ "SetAttachIndexToComponent", &UJakubCablePhysic::execSetAttachIndexToComponent },
		{ "SetParticleLocation", &UJakubCablePhysic::execSetParticleLocation },
		{ "UpdateCableLength", &UJakubCablePhysic::execUpdateCableLength },
		{ "UpdateSubstepTime", &UJakubCablePhysic::execUpdateSubstepTime },
		{ "UseForceToTightenTheRope", &UJakubCablePhysic::execUseForceToTightenTheRope },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJakubCablePhysic);
UClass* Z_Construct_UClass_UJakubCablePhysic_NoRegister()
{
	return UJakubCablePhysic::StaticClass();
}
struct Z_Construct_UClass_UJakubCablePhysic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
#endif
		{ "HideCategories", "Object Physics Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "JakubCablePhysic.h" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachStart_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Should we fix the start to something, or leave it free.\n\x09 *\x09If false, component transform is just used for initial location of start of cable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we fix the start to something, or leave it free.\nIf false, component transform is just used for initial location of start of cable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToArray_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component. */" },
#endif
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableLength_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rest length of the cable */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rest length of the cable" },
#endif
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many segments the cable has */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many segments the cable has" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubstepTime_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "0.003" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the simulation substep time for the cable */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the simulation substep time for the cable" },
#endif
		{ "UIMax", "0.1" },
		{ "UIMin", "0.003" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of solver iterations controls how 'stiff' the cable is */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of solver iterations controls how 'stiff' the cable is" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingFactorRange_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The range defining how the rope speed damping is to take place. The 'X' value is the beginning of the rope and the \n\x09'Y' value is the end of the rope. Lower value, that make the the rope will move slower If the vector has the value [1,1], \n\x09it will mean that the rope has infinite energy, as a consequence, the movement will never be damped.*/" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The range defining how the rope speed damping is to take place. The 'X' value is the beginning of the rope and the\n      'Y' value is the end of the rope. Lower value, that make the the rope will move slower If the vector has the value [1,1],\n      it will mean that the rope has infinite energy, as a consequence, the movement will never be damped." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingByAcceleration_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* EXPERIMENTAL!!! - Allows to damp forces by calculating acceleration. It can lead to instability in the simulation.*/" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EXPERIMENTAL!!! - Allows to damp forces by calculating acceleration. It can lead to instability in the simulation." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStiffness_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add stiffness constraints to cable. */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add stiffness constraints to cable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSubstepping_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When false, will still wait for SubstepTime to elapse before updating, but will only run the cable simulation once using all of accumulated simulation time */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When false, will still wait for SubstepTime to elapse before updating, but will only run the cable simulation once using all of accumulated simulation time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolveSimulationPerFrame_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Causes the simulation to be updated with each frame. Enabling this option makes the simulation as stable as possible. \n\x09Stability comes with greater computational demand. This option is recommended if the cable operate with hight velocities.*/" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Causes the simulation to be updated with each frame. Enabling this option makes the simulation as stable as possible.\n      Stability comes with greater computational demand. This option is recommended if the cable operate with hight velocities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCableUpdateWhenNotVisible_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitTimeTo60FPS_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Limit the refresh rate to 60 frames per second. Enabling this option may have a positive effect on the stability of the simulation. \n\x09If you use the \"AddImpulseToParticle\" function, changing the value of this parameter to true is recommended.*/" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the refresh rate to 60 frames per second. Enabling this option may have a positive effect on the stability of the simulation.\n      If you use the \"AddImpulseToParticle\" function, changing the value of this parameter to true is recommended." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Perform sweeps for each cable particle, each substep, to avoid collisions with the world. */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform sweeps for each cable particle, each substep, to avoid collisions with the world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFriction_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If collision is enabled, control how much sliding friction is applied when cable is in contact. */" },
#endif
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If collision is enabled, control how much sliding friction is applied when cable is in contact." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSubSegments_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specifies the maximum number of virtual particles. It allows for much more accurate collision detection, however, it can cause a large decrease in performance. */" },
#endif
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the maximum number of virtual particles. It allows for much more accurate collision detection, however, it can cause a large decrease in performance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptymalizeSubSegments_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* When this option is enabled, dividing to a virtual particles  starts when a collision is detected near the particles (n , n+1). */" },
#endif
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When this option is enabled, dividing to a virtual particles  starts when a collision is detected near the particles (n , n+1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreBySweep_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Add actors to be ignored during collision detection*/" },
#endif
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add actors to be ignored during collision detection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableForce_MetaData[] = {
		{ "Category", "Cable Forces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Force vector (world space) applied to all particles in cable. */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force vector (world space) applied to all particles in cable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableGravityScale_MetaData[] = {
		{ "Category", "Cable Forces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scaling applied to world gravity affecting this cable. */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaling applied to world gravity affecting this cable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableWidth_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How wide the cable geometry is */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How wide the cable geometry is" },
#endif
		{ "UIMax", "50.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of sides of the cable geometry */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of sides of the cable geometry" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMaterial_MetaData[] = {
		{ "Category", "Cable Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many times to repeat the material along the length of the cable */" },
#endif
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many times to repeat the material along the length of the cable" },
#endif
		{ "UIMax", "8" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUpdatingLODs_MetaData[] = {
		{ "Category", "Cable Optimalization" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodsRadiusRangeMultipler_MetaData[] = {
		{ "Category", "Cable Optimalization" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastIndexOldPosition_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ModuleRelativePath", "Public/JakubCablePhysic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAttachStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachToArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachToArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CableLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubstepTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIterations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DampingFactorRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingByAcceleration;
	static void NewProp_bEnableStiffness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStiffness;
	static void NewProp_bUseSubstepping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSubstepping;
	static void NewProp_bSolveSimulationPerFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolveSimulationPerFrame;
	static void NewProp_bSkipCableUpdateWhenNotVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCableUpdateWhenNotVisible;
	static void NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered;
	static void NewProp_bLimitTimeTo60FPS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitTimeTo60FPS;
	static void NewProp_bEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionFriction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionSubSegments;
	static void NewProp_OptymalizeSubSegments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OptymalizeSubSegments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreBySweep_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreBySweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CableForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CableGravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CableWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileMaterial;
	static void NewProp_bUseUpdatingLODs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUpdatingLODs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LodsRadiusRangeMultipler;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastIndexOldPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJakubCablePhysic_AddImpulseToParticle, "AddImpulseToParticle" }, // 592590016
		{ &Z_Construct_UFunction_UJakubCablePhysic_ApplyConstForceToParticle, "ApplyConstForceToParticle" }, // 2862645086
		{ &Z_Construct_UFunction_UJakubCablePhysic_BreakAttachIfSegmentIsStretched, "BreakAttachIfSegmentIsStretched" }, // 2683631048
		{ &Z_Construct_UFunction_UJakubCablePhysic_DetachParticleFrom, "DetachParticleFrom" }, // 297044946
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetAnyPointIsColliding, "GetAnyPointIsColliding" }, // 183850019
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetAttachedActors, "GetAttachedActors" }, // 3872503946
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetAttachStructure, "GetAttachStructure" }, // 3591134432
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableCurrentSegmentsLength, "GetCableCurrentSegmentsLength" }, // 2976624663
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableInitSegmentsLength, "GetCableInitSegmentsLength" }, // 3621547844
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableParticleLocations, "GetCableParticleLocations" }, // 3212728926
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableParticlesStructure, "GetCableParticlesStructure" }, // 3830532410
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetCableSpaceLenghtForSwinging, "GetCableSpaceLenghtForSwinging" }, // 3382648709
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetIndicesOfAttachedPoints, "GetIndicesOfAttachedPoints" }, // 1707990421
		{ &Z_Construct_UFunction_UJakubCablePhysic_GetStretchTolleranceValuePerSegment, "GetStretchTolleranceValuePerSegment" }, // 2084553652
		{ &Z_Construct_UFunction_UJakubCablePhysic_ReduceForceForParticles, "ReduceForceForParticles" }, // 3746602645
		{ &Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToActor, "SetAttachIndexToActor" }, // 1866923703
		{ &Z_Construct_UFunction_UJakubCablePhysic_SetAttachIndexToComponent, "SetAttachIndexToComponent" }, // 3221255813
		{ &Z_Construct_UFunction_UJakubCablePhysic_SetParticleLocation, "SetParticleLocation" }, // 343942314
		{ &Z_Construct_UFunction_UJakubCablePhysic_UpdateCableLength, "UpdateCableLength" }, // 2336231176
		{ &Z_Construct_UFunction_UJakubCablePhysic_UpdateSubstepTime, "UpdateSubstepTime" }, // 2177640084
		{ &Z_Construct_UFunction_UJakubCablePhysic_UseForceToTightenTheRope, "UseForceToTightenTheRope" }, // 3812474319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJakubCablePhysic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bAttachStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart = { "bAttachStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bAttachStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachStart_MetaData), NewProp_bAttachStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray_Inner = { "AttachToArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCableAttachPoint, METADATA_PARAMS(0, nullptr) }; // 77761348
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_AttachToArray = { "AttachToArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, AttachToArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToArray_MetaData), NewProp_AttachToArray_MetaData) }; // 77761348
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableLength = { "CableLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, CableLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableLength_MetaData), NewProp_CableLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, NumSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSegments_MetaData), NewProp_NumSegments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SubstepTime = { "SubstepTime", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, SubstepTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubstepTime_MetaData), NewProp_SubstepTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, SolverIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverIterations_MetaData), NewProp_SolverIterations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingFactorRange = { "DampingFactorRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, DampingFactorRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingFactorRange_MetaData), NewProp_DampingFactorRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_DampingByAcceleration = { "DampingByAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, DampingByAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingByAcceleration_MetaData), NewProp_DampingByAcceleration_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bEnableStiffness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness = { "bEnableStiffness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableStiffness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStiffness_MetaData), NewProp_bEnableStiffness_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bUseSubstepping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping = { "bUseSubstepping", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseSubstepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSubstepping_MetaData), NewProp_bUseSubstepping_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSolveSimulationPerFrame_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bSolveSimulationPerFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSolveSimulationPerFrame = { "bSolveSimulationPerFrame", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSolveSimulationPerFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolveSimulationPerFrame_MetaData), NewProp_bSolveSimulationPerFrame_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bSkipCableUpdateWhenNotVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible = { "bSkipCableUpdateWhenNotVisible", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipCableUpdateWhenNotVisible_MetaData), NewProp_bSkipCableUpdateWhenNotVisible_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bSkipCableUpdateWhenNotOwnerRecentlyRendered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered = { "bSkipCableUpdateWhenNotOwnerRecentlyRendered", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData), NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bLimitTimeTo60FPS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS = { "bLimitTimeTo60FPS", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bLimitTimeTo60FPS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitTimeTo60FPS_MetaData), NewProp_bLimitTimeTo60FPS_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCollision_MetaData), NewProp_bEnableCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionFriction = { "CollisionFriction", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, CollisionFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionFriction_MetaData), NewProp_CollisionFriction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CollisionSubSegments = { "CollisionSubSegments", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, CollisionSubSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSubSegments_MetaData), NewProp_CollisionSubSegments_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->OptymalizeSubSegments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments = { "OptymalizeSubSegments", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_OptymalizeSubSegments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptymalizeSubSegments_MetaData), NewProp_OptymalizeSubSegments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep_Inner = { "ActorsToIgnoreBySweep", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_ActorsToIgnoreBySweep = { "ActorsToIgnoreBySweep", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, ActorsToIgnoreBySweep), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnoreBySweep_MetaData), NewProp_ActorsToIgnoreBySweep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableForce = { "CableForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, CableForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableForce_MetaData), NewProp_CableForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableGravityScale = { "CableGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, CableGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableGravityScale_MetaData), NewProp_CableGravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, CableWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableWidth_MetaData), NewProp_CableWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, NumSides), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSides_MetaData), NewProp_NumSides_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_TileMaterial = { "TileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, TileMaterial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMaterial_MetaData), NewProp_TileMaterial_MetaData) };
void Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs_SetBit(void* Obj)
{
	((UJakubCablePhysic*)Obj)->bUseUpdatingLODs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs = { "bUseUpdatingLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJakubCablePhysic), &Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bUseUpdatingLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUpdatingLODs_MetaData), NewProp_bUseUpdatingLODs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LodsRadiusRangeMultipler = { "LodsRadiusRangeMultipler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, LodsRadiusRangeMultipler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodsRadiusRangeMultipler_MetaData), NewProp_LodsRadiusRangeMultipler_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_LastIndexOldPosition = { "LastIndexOldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJakubCablePhysic, LastIndexOldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastIndexOldPosition_MetaData), NewProp_LastIndexOldPosition_MetaData) };
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubCablePhysic_Statics::NewProp_bSolveSimulationPerFrame,
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJakubCablePhysic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCablePhysic_Statics::Class_MetaDataParams), Z_Construct_UClass_UJakubCablePhysic_Statics::Class_MetaDataParams)
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
// End Class UJakubCablePhysic

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCableAttachPoint::StaticStruct, Z_Construct_UScriptStruct_FCableAttachPoint_Statics::NewStructOps, TEXT("CableAttachPoint"), &Z_Registration_Info_UScriptStruct_CableAttachPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCableAttachPoint), 77761348U) },
		{ FExposedCableParticle::StaticStruct, Z_Construct_UScriptStruct_FExposedCableParticle_Statics::NewStructOps, TEXT("ExposedCableParticle"), &Z_Registration_Info_UScriptStruct_ExposedCableParticle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExposedCableParticle), 3054290502U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJakubCablePhysic, UJakubCablePhysic::StaticClass, TEXT("UJakubCablePhysic"), &Z_Registration_Info_UClass_UJakubCablePhysic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJakubCablePhysic), 3842886556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_2846227941(TEXT("/Script/JakubCableComponent"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

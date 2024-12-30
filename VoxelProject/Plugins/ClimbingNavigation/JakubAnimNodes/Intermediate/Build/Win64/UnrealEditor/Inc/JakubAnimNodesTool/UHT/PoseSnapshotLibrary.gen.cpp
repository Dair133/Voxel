// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/PoseSnapshotLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSnapshotLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
JAKUBANIMNODESTOOL_API UClass* Z_Construct_UClass_UPoseSnapshotLibrary();
JAKUBANIMNODESTOOL_API UClass* Z_Construct_UClass_UPoseSnapshotLibrary_NoRegister();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshotReference();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
// End Cross Module References

// Begin ScriptStruct FPoseSnapshotReference
static_assert(std::is_polymorphic<FPoseSnapshotReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FPoseSnapshotReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSnapshotReference;
class UScriptStruct* FPoseSnapshotReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSnapshotReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSnapshotReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSnapshotReference, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("PoseSnapshotReference"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSnapshotReference.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FPoseSnapshotReference>()
{
	return FPoseSnapshotReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSnapshotReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"PoseSnapshotReference",
	nullptr,
	0,
	sizeof(FPoseSnapshotReference),
	alignof(FPoseSnapshotReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshotReference()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSnapshotReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSnapshotReference.InnerSingleton, Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PoseSnapshotReference.InnerSingleton;
}
// End ScriptStruct FPoseSnapshotReference

// Begin Class UPoseSnapshotLibrary Function ConvertToPoseSnapshot
struct Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics
{
	struct PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FPoseSnapshotReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a Pose Snapshot context from an anim node context. */" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a Pose Snapshot context from an anim node context." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshotReference, METADATA_PARAMS(0, nullptr) }; // 662244693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "ConvertToPoseSnapshot", nullptr, nullptr, Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoseSnapshotLibrary::execConvertToPoseSnapshot)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPoseSnapshotReference*)Z_Param__Result=UPoseSnapshotLibrary::ConvertToPoseSnapshot(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UPoseSnapshotLibrary Function ConvertToPoseSnapshot

// Begin Class UPoseSnapshotLibrary Function DrawSkeletonFromPoseSnapshot
struct Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics
{
	struct PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms
	{
		const UObject* WorldContextObject;
		const UAnimInstance* AnimInstance;
		FPoseSnapshot PoseSnapshot;
		TArray<FName> LimbsName;
		FName RootBoneName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Draw pose from PoseSnapshot by using points and lines*/" },
#endif
		{ "CPP_Default_RootBoneName", "Root" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw pose from PoseSnapshot by using points and lines" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LimbsName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LimbsName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseSnapshot_MetaData), NewProp_PoseSnapshot_MetaData) }; // 2619874508
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_LimbsName_Inner = { "LimbsName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_LimbsName = { "LimbsName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, LimbsName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, RootBoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms), &Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_PoseSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_LimbsName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_LimbsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_RootBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "DrawSkeletonFromPoseSnapshot", nullptr, nullptr, Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoseSnapshotLibrary::execDrawSkeletonFromPoseSnapshot)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
	P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PoseSnapshot);
	P_GET_TARRAY(FName,Z_Param_LimbsName);
	P_GET_PROPERTY(FNameProperty,Z_Param_RootBoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPoseSnapshotLibrary::DrawSkeletonFromPoseSnapshot(Z_Param_WorldContextObject,Z_Param_AnimInstance,Z_Param_Out_PoseSnapshot,Z_Param_LimbsName,Z_Param_RootBoneName);
	P_NATIVE_END;
}
// End Class UPoseSnapshotLibrary Function DrawSkeletonFromPoseSnapshot

// Begin Class UPoseSnapshotLibrary Function GetBoneParents
struct Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics
{
	struct PoseSnapshotLibrary_eventGetBoneParents_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
		FName BoneName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Return parents bones name from skeleton hierarchy*/" },
#endif
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return parents bones name from skeleton hierarchy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneParents_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneParents_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneParents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "GetBoneParents", nullptr, nullptr, Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::PoseSnapshotLibrary_eventGetBoneParents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::PoseSnapshotLibrary_eventGetBoneParents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoseSnapshotLibrary::execGetBoneParents)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UPoseSnapshotLibrary::GetBoneParents(Z_Param_SkeletalMeshComponent,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UPoseSnapshotLibrary Function GetBoneParents

// Begin Class UPoseSnapshotLibrary Function GetBoneTransformFromPoseSnapshot
struct Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics
{
	struct PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms
	{
		FPoseSnapshot PoseSnapshot;
		FName BoneName;
		const UAnimInstance* AnimInstance;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Return bone transform in component space*/" },
#endif
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return bone transform in component space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseSnapshot_MetaData), NewProp_PoseSnapshot_MetaData) }; // 2619874508
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_PoseSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "GetBoneTransformFromPoseSnapshot", nullptr, nullptr, Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoseSnapshotLibrary::execGetBoneTransformFromPoseSnapshot)
{
	P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PoseSnapshot);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UPoseSnapshotLibrary::GetBoneTransformFromPoseSnapshot(Z_Param_Out_PoseSnapshot,Z_Param_BoneName,Z_Param_AnimInstance);
	P_NATIVE_END;
}
// End Class UPoseSnapshotLibrary Function GetBoneTransformFromPoseSnapshot

// Begin Class UPoseSnapshotLibrary Function GetSavedPoseSnapshot
struct Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics
{
	struct PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms
	{
		FPoseSnapshotReference PoseSnapshot;
		FPoseSnapshot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the PoseSnapshot structure from PoseSnapshot saver. */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the PoseSnapshot structure from PoseSnapshot saver." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshotReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseSnapshot_MetaData), NewProp_PoseSnapshot_MetaData) }; // 662244693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(0, nullptr) }; // 2619874508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::NewProp_PoseSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "GetSavedPoseSnapshot", nullptr, nullptr, Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoseSnapshotLibrary::execGetSavedPoseSnapshot)
{
	P_GET_STRUCT_REF(FPoseSnapshotReference,Z_Param_Out_PoseSnapshot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPoseSnapshot*)Z_Param__Result=UPoseSnapshotLibrary::GetSavedPoseSnapshot(Z_Param_Out_PoseSnapshot);
	P_NATIVE_END;
}
// End Class UPoseSnapshotLibrary Function GetSavedPoseSnapshot

// Begin Class UPoseSnapshotLibrary
void UPoseSnapshotLibrary::StaticRegisterNativesUPoseSnapshotLibrary()
{
	UClass* Class = UPoseSnapshotLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToPoseSnapshot", &UPoseSnapshotLibrary::execConvertToPoseSnapshot },
		{ "DrawSkeletonFromPoseSnapshot", &UPoseSnapshotLibrary::execDrawSkeletonFromPoseSnapshot },
		{ "GetBoneParents", &UPoseSnapshotLibrary::execGetBoneParents },
		{ "GetBoneTransformFromPoseSnapshot", &UPoseSnapshotLibrary::execGetBoneTransformFromPoseSnapshot },
		{ "GetSavedPoseSnapshot", &UPoseSnapshotLibrary::execGetSavedPoseSnapshot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSnapshotLibrary);
UClass* Z_Construct_UClass_UPoseSnapshotLibrary_NoRegister()
{
	return UPoseSnapshotLibrary::StaticClass();
}
struct Z_Construct_UClass_UPoseSnapshotLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSnapshotLibrary.h" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot, "ConvertToPoseSnapshot" }, // 2468891803
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot, "DrawSkeletonFromPoseSnapshot" }, // 815670112
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents, "GetBoneParents" }, // 3959501387
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot, "GetBoneTransformFromPoseSnapshot" }, // 1018825523
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot, "GetSavedPoseSnapshot" }, // 1913345102
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSnapshotLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPoseSnapshotLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSnapshotLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSnapshotLibrary_Statics::ClassParams = {
	&UPoseSnapshotLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSnapshotLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSnapshotLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoseSnapshotLibrary()
{
	if (!Z_Registration_Info_UClass_UPoseSnapshotLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSnapshotLibrary.OuterSingleton, Z_Construct_UClass_UPoseSnapshotLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoseSnapshotLibrary.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UClass* StaticClass<UPoseSnapshotLibrary>()
{
	return UPoseSnapshotLibrary::StaticClass();
}
UPoseSnapshotLibrary::UPoseSnapshotLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSnapshotLibrary);
UPoseSnapshotLibrary::~UPoseSnapshotLibrary() {}
// End Class UPoseSnapshotLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPoseSnapshotReference::StaticStruct, Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics::NewStructOps, TEXT("PoseSnapshotReference"), &Z_Registration_Info_UScriptStruct_PoseSnapshotReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSnapshotReference), 662244693U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSnapshotLibrary, UPoseSnapshotLibrary::StaticClass, TEXT("UPoseSnapshotLibrary"), &Z_Registration_Info_UClass_UPoseSnapshotLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSnapshotLibrary), 83772516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_911151219(TEXT("/Script/JakubAnimNodesTool"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_FallDamageAndSliding.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_FallDamageAndSliding() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_FallDamageAndSliding();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_FallDamageAndSliding_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCharMovementValues();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSlidingConditionData();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin ScriptStruct FCharMovementValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharMovementValues;
class UScriptStruct* FCharMovementValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharMovementValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharMovementValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharMovementValues, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CharMovementValues"));
	}
	return Z_Registration_Info_UScriptStruct_CharMovementValues.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCharMovementValues>()
{
	return FCharMovementValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharMovementValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkableFloorAngle_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionFactor_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFriction_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControl_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkableFloorAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharMovementValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_WalkableFloorAngle = { "WalkableFloorAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharMovementValues, WalkableFloorAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkableFloorAngle_MetaData), NewProp_WalkableFloorAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_FrictionFactor = { "FrictionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharMovementValues, FrictionFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionFactor_MetaData), NewProp_FrictionFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_BrakingFriction = { "BrakingFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharMovementValues, BrakingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFriction_MetaData), NewProp_BrakingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_AirControl = { "AirControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharMovementValues, AirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControl_MetaData), NewProp_AirControl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharMovementValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_WalkableFloorAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_FrictionFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_BrakingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewProp_AirControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharMovementValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharMovementValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"CharMovementValues",
	Z_Construct_UScriptStruct_FCharMovementValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharMovementValues_Statics::PropPointers),
	sizeof(FCharMovementValues),
	alignof(FCharMovementValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharMovementValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharMovementValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharMovementValues()
{
	if (!Z_Registration_Info_UScriptStruct_CharMovementValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharMovementValues.InnerSingleton, Z_Construct_UScriptStruct_FCharMovementValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharMovementValues.InnerSingleton;
}
// End ScriptStruct FCharMovementValues

// Begin ScriptStruct FSlidingConditionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlidingConditionData;
class UScriptStruct* FSlidingConditionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlidingConditionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlidingConditionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlidingConditionData, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("SlidingConditionData"));
	}
	return Z_Registration_Info_UScriptStruct_SlidingConditionData.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FSlidingConditionData>()
{
	return FSlidingConditionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlidingConditionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionMode_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "CharMovement" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocomotionMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlidingConditionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlidingConditionData, MovementState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementState_MetaData), NewProp_MovementState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlidingConditionData, MovementAction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAction_MetaData), NewProp_MovementAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_LocomotionMode = { "LocomotionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlidingConditionData, LocomotionMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionMode_MetaData), NewProp_LocomotionMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlidingConditionData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlidingConditionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_MovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_LocomotionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlidingConditionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlidingConditionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"SlidingConditionData",
	Z_Construct_UScriptStruct_FSlidingConditionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlidingConditionData_Statics::PropPointers),
	sizeof(FSlidingConditionData),
	alignof(FSlidingConditionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlidingConditionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlidingConditionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlidingConditionData()
{
	if (!Z_Registration_Info_UScriptStruct_SlidingConditionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlidingConditionData.InnerSingleton, Z_Construct_UScriptStruct_FSlidingConditionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlidingConditionData.InnerSingleton;
}
// End ScriptStruct FSlidingConditionData

// Begin Class UCpp_FallDamageAndSliding Function CheckCanMantleOnEdge
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics
{
	struct Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms
	{
		bool CanStart;
		FVector TargetCapLocation;
		FVector SecondPoint;
		FVector HitNormal1;
		FVector HitNormal2;
		UPrimitiveComponent* HitComponent;
		TEnumAsByte<ECollisionChannel> TChannel;
		int32 DrawDebugIndex;
		float RoomCheckCapScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fall Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fall Damage Protected Function\n" },
#endif
		{ "CPP_Default_DrawDebugIndex", "0" },
		{ "CPP_Default_RoomCheckCapScale", "0.900000" },
		{ "CPP_Default_TChannel", "ECC_Visibility" },
		{ "DisplayName", "Check Can Mantle On Edge" },
		{ "Keywords", "Mantle Damage" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fall Damage Protected Function" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_CanStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCapLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawDebugIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomCheckCapScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_CanStart_SetBit(void* Obj)
{
	((Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms*)Obj)->CanStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_CanStart = { "CanStart", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms), &Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_CanStart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_TargetCapLocation = { "TargetCapLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, TargetCapLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_SecondPoint = { "SecondPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, SecondPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_HitNormal1 = { "HitNormal1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, HitNormal1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_HitNormal2 = { "HitNormal2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, HitNormal2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_TChannel = { "TChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, TChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_DrawDebugIndex = { "DrawDebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, DrawDebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_RoomCheckCapScale = { "RoomCheckCapScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms, RoomCheckCapScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_CanStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_TargetCapLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_SecondPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_HitNormal1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_HitNormal2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_TChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_DrawDebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::NewProp_RoomCheckCapScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "CheckCanMantleOnEdge", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::Cpp_FallDamageAndSliding_eventCheckCanMantleOnEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execCheckCanMantleOnEdge)
{
	P_GET_UBOOL_REF(Z_Param_Out_CanStart);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetCapLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SecondPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal1);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal2);
	P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_HitComponent);
	P_GET_PROPERTY(FByteProperty,Z_Param_TChannel);
	P_GET_PROPERTY(FIntProperty,Z_Param_DrawDebugIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RoomCheckCapScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCanMantleOnEdge(Z_Param_Out_CanStart,Z_Param_Out_TargetCapLocation,Z_Param_Out_SecondPoint,Z_Param_Out_HitNormal1,Z_Param_Out_HitNormal2,P_ARG_GC_BARRIER(Z_Param_Out_HitComponent),ECollisionChannel(Z_Param_TChannel),Z_Param_DrawDebugIndex,Z_Param_RoomCheckCapScale);
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function CheckCanMantleOnEdge

// Begin Class UCpp_FallDamageAndSliding Function CheckCanStartSlidingC
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics
{
	struct Cpp_FallDamageAndSliding_eventCheckCanStartSlidingC_Parms
	{
		FVector Acc;
		float SlopeDiffTollerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sliding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sliding System - Check Can Start Sliding\n" },
#endif
		{ "CPP_Default_Acc", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_SlopeDiffTollerance", "2.000000" },
		{ "DisplayName", "Check Can Start Sliding" },
		{ "Keywords", "Sliding" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sliding System - Check Can Start Sliding" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeDiffTollerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_Acc = { "Acc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanStartSlidingC_Parms, Acc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_SlopeDiffTollerance = { "SlopeDiffTollerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventCheckCanStartSlidingC_Parms, SlopeDiffTollerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_FallDamageAndSliding_eventCheckCanStartSlidingC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_FallDamageAndSliding_eventCheckCanStartSlidingC_Parms), &Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_Acc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_SlopeDiffTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "CheckCanStartSlidingC", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::Cpp_FallDamageAndSliding_eventCheckCanStartSlidingC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::Cpp_FallDamageAndSliding_eventCheckCanStartSlidingC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execCheckCanStartSlidingC)
{
	P_GET_STRUCT(FVector,Z_Param_Acc);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SlopeDiffTollerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanStartSlidingC(Z_Param_Acc,Z_Param_SlopeDiffTollerance);
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function CheckCanStartSlidingC

// Begin Class UCpp_FallDamageAndSliding Function PrepareToSlidingC
struct Cpp_FallDamageAndSliding_eventPrepareToSlidingC_Parms
{
	bool CanStart;
};
static FName NAME_UCpp_FallDamageAndSliding_PrepareToSlidingC = FName(TEXT("PrepareToSlidingC"));
void UCpp_FallDamageAndSliding::PrepareToSlidingC(bool CanStart)
{
	Cpp_FallDamageAndSliding_eventPrepareToSlidingC_Parms Parms;
	Parms.CanStart=CanStart ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UCpp_FallDamageAndSliding_PrepareToSlidingC),&Parms);
}
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sliding" },
		{ "CPP_Default_CanStart", "true" },
		{ "DisplayName", "Prepare To Sliding" },
		{ "Keywords", "Sliding" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::NewProp_CanStart_SetBit(void* Obj)
{
	((Cpp_FallDamageAndSliding_eventPrepareToSlidingC_Parms*)Obj)->CanStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::NewProp_CanStart = { "CanStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_FallDamageAndSliding_eventPrepareToSlidingC_Parms), &Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::NewProp_CanStart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::NewProp_CanStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "PrepareToSlidingC", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::PropPointers), sizeof(Cpp_FallDamageAndSliding_eventPrepareToSlidingC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_FallDamageAndSliding_eventPrepareToSlidingC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execPrepareToSlidingC)
{
	P_GET_UBOOL(Z_Param_CanStart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareToSlidingC_Implementation(Z_Param_CanStart);
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function PrepareToSlidingC

// Begin Class UCpp_FallDamageAndSliding Function SimpleTrajectoryC
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics
{
	struct Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms
	{
		bool NotNull;
		TArray<FHitResult> ReturnAllHits;
		TArray<float> ReturnDistances;
		TArray<FHitResult> ReturnWalkableHits;
		ACharacter* Char;
		FVector StartLocation;
		FVector StartDirection;
		int32 Iterations;
		float OffsetScale;
		FVector Velocity;
		FVector Acceleration;
		bool ReturnOnlyValid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sliding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sliding Protected Functions\n" },
#endif
		{ "CPP_Default_Acceleration", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_Iterations", "6" },
		{ "CPP_Default_OffsetScale", "3.000000" },
		{ "CPP_Default_ReturnOnlyValid", "false" },
		{ "CPP_Default_Velocity", "0.000000,0.000000,0.000000" },
		{ "DisplayName", "Simple Trajectory" },
		{ "Keywords", "Trajectory" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sliding Protected Functions" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_NotNull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NotNull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnAllHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnAllHits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnDistances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnWalkableHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnWalkableHits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Char;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartDirection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static void NewProp_ReturnOnlyValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnOnlyValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_NotNull_SetBit(void* Obj)
{
	((Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms*)Obj)->NotNull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_NotNull = { "NotNull", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms), &Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_NotNull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnAllHits_Inner = { "ReturnAllHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnAllHits = { "ReturnAllHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, ReturnAllHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnDistances_Inner = { "ReturnDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnDistances = { "ReturnDistances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, ReturnDistances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnWalkableHits_Inner = { "ReturnWalkableHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnWalkableHits = { "ReturnWalkableHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, ReturnWalkableHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, Char), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_StartDirection = { "StartDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, StartDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, Iterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_OffsetScale = { "OffsetScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, OffsetScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnOnlyValid_SetBit(void* Obj)
{
	((Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms*)Obj)->ReturnOnlyValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnOnlyValid = { "ReturnOnlyValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms), &Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnOnlyValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_NotNull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnAllHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnAllHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnWalkableHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnWalkableHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Char,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_StartDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_OffsetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::NewProp_ReturnOnlyValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "SimpleTrajectoryC", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::Cpp_FallDamageAndSliding_eventSimpleTrajectoryC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execSimpleTrajectoryC)
{
	P_GET_UBOOL_REF(Z_Param_Out_NotNull);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_ReturnAllHits);
	P_GET_TARRAY_REF(float,Z_Param_Out_ReturnDistances);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_ReturnWalkableHits);
	P_GET_OBJECT(ACharacter,Z_Param_Char);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_StartDirection);
	P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetScale);
	P_GET_STRUCT(FVector,Z_Param_Velocity);
	P_GET_STRUCT(FVector,Z_Param_Acceleration);
	P_GET_UBOOL(Z_Param_ReturnOnlyValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimpleTrajectoryC(Z_Param_Out_NotNull,Z_Param_Out_ReturnAllHits,Z_Param_Out_ReturnDistances,Z_Param_Out_ReturnWalkableHits,Z_Param_Char,Z_Param_StartLocation,Z_Param_StartDirection,Z_Param_Iterations,Z_Param_OffsetScale,Z_Param_Velocity,Z_Param_Acceleration,Z_Param_ReturnOnlyValid);
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function SimpleTrajectoryC

// Begin Class UCpp_FallDamageAndSliding Function SlidingConditionC
struct Cpp_FallDamageAndSliding_eventSlidingConditionC_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Cpp_FallDamageAndSliding_eventSlidingConditionC_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UCpp_FallDamageAndSliding_SlidingConditionC = FName(TEXT("SlidingConditionC"));
bool UCpp_FallDamageAndSliding::SlidingConditionC()
{
	Cpp_FallDamageAndSliding_eventSlidingConditionC_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UCpp_FallDamageAndSliding_SlidingConditionC),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sliding" },
		{ "DisplayName", "Sliding Condition" },
		{ "Keywords", "Sliding" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cpp_FallDamageAndSliding_eventSlidingConditionC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_FallDamageAndSliding_eventSlidingConditionC_Parms), &Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "SlidingConditionC", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::PropPointers), sizeof(Cpp_FallDamageAndSliding_eventSlidingConditionC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Cpp_FallDamageAndSliding_eventSlidingConditionC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execSlidingConditionC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SlidingConditionC_Implementation();
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function SlidingConditionC

// Begin Class UCpp_FallDamageAndSliding Function UpdateAngleCorrectDurningSliding
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics
{
	struct Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms
	{
		float ReturnDot;
		TArray<FHitResult> HitData;
		float Theta;
		float SlidingMinAngle;
		float InterpSpeed;
		bool CheckHitValid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sliding" },
		{ "CPP_Default_CheckHitValid", "false" },
		{ "CPP_Default_InterpSpeed", "4.000000" },
		{ "CPP_Default_SlidingMinAngle", "20.000000" },
		{ "CPP_Default_Theta", "45.000000" },
		{ "DisplayName", "Update Angle Correct Durning Sliding" },
		{ "Keywords", "Sliding" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnDot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Theta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlidingMinAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static void NewProp_CheckHitValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckHitValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_ReturnDot = { "ReturnDot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms, ReturnDot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_HitData_Inner = { "HitData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms, HitData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_Theta = { "Theta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms, Theta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_SlidingMinAngle = { "SlidingMinAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms, SlidingMinAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_CheckHitValid_SetBit(void* Obj)
{
	((Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms*)Obj)->CheckHitValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_CheckHitValid = { "CheckHitValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms), &Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_CheckHitValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_ReturnDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_HitData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_HitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_Theta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_SlidingMinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::NewProp_CheckHitValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "UpdateAngleCorrectDurningSliding", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::Cpp_FallDamageAndSliding_eventUpdateAngleCorrectDurningSliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execUpdateAngleCorrectDurningSliding)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnDot);
	P_GET_TARRAY(FHitResult,Z_Param_HitData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Theta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SlidingMinAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_GET_UBOOL(Z_Param_CheckHitValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAngleCorrectDurningSliding(Z_Param_Out_ReturnDot,Z_Param_HitData,Z_Param_Theta,Z_Param_SlidingMinAngle,Z_Param_InterpSpeed,Z_Param_CheckHitValid);
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function UpdateAngleCorrectDurningSliding

// Begin Class UCpp_FallDamageAndSliding Function UpdateCharFrictionDurningSliding
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics
{
	struct Cpp_FallDamageAndSliding_eventUpdateCharFrictionDurningSliding_Parms
	{
		float ReturnTheta;
		UCharacterMovementComponent* CMove;
		float InterpSpeed;
		float FrictionScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sliding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sliding System - Update Character Movement Braking Friction Factor Durning Sliding\n" },
#endif
		{ "CPP_Default_FrictionScale", "1.000000" },
		{ "CPP_Default_InterpSpeed", "10.000000" },
		{ "DisplayName", "Update Char Friction Durning Sliding" },
		{ "Keywords", "Sliding" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sliding System - Update Character Movement Braking Friction Factor Durning Sliding" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CMove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnTheta;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CMove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_ReturnTheta = { "ReturnTheta", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharFrictionDurningSliding_Parms, ReturnTheta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_CMove = { "CMove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharFrictionDurningSliding_Parms, CMove), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CMove_MetaData), NewProp_CMove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharFrictionDurningSliding_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_FrictionScale = { "FrictionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharFrictionDurningSliding_Parms, FrictionScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_ReturnTheta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_CMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::NewProp_FrictionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "UpdateCharFrictionDurningSliding", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::Cpp_FallDamageAndSliding_eventUpdateCharFrictionDurningSliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::Cpp_FallDamageAndSliding_eventUpdateCharFrictionDurningSliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execUpdateCharFrictionDurningSliding)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnTheta);
	P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMove);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrictionScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCharFrictionDurningSliding(Z_Param_Out_ReturnTheta,Z_Param_CMove,Z_Param_InterpSpeed,Z_Param_FrictionScale);
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function UpdateCharFrictionDurningSliding

// Begin Class UCpp_FallDamageAndSliding Function UpdateCharWalkAngleDurningSliding
struct Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics
{
	struct Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms
	{
		UCharacterMovementComponent* CMove;
		TArray<FHitResult> HitData;
		float ClampMin;
		float ClampMax;
		float InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sliding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sliding System - Update Character Movement Walkable Z Angle Durning Sliding\n" },
#endif
		{ "CPP_Default_ClampMax", "55.000000" },
		{ "CPP_Default_ClampMin", "20.000000" },
		{ "CPP_Default_InterpSpeed", "6.000000" },
		{ "DisplayName", "Update Char Walk Angle Durning Sliding" },
		{ "Keywords", "Sliding" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sliding System - Update Character Movement Walkable Z Angle Durning Sliding" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CMove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_CMove = { "CMove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms, CMove), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CMove_MetaData), NewProp_CMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_HitData_Inner = { "HitData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms, HitData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms, ClampMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms, ClampMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_CMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_HitData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_HitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_ClampMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_ClampMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_FallDamageAndSliding, nullptr, "UpdateCharWalkAngleDurningSliding", nullptr, nullptr, Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::Cpp_FallDamageAndSliding_eventUpdateCharWalkAngleDurningSliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCpp_FallDamageAndSliding::execUpdateCharWalkAngleDurningSliding)
{
	P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMove);
	P_GET_TARRAY(FHitResult,Z_Param_HitData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClampMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClampMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCharWalkAngleDurningSliding(Z_Param_CMove,Z_Param_HitData,Z_Param_ClampMin,Z_Param_ClampMax,Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class UCpp_FallDamageAndSliding Function UpdateCharWalkAngleDurningSliding

// Begin Class UCpp_FallDamageAndSliding
void UCpp_FallDamageAndSliding::StaticRegisterNativesUCpp_FallDamageAndSliding()
{
	UClass* Class = UCpp_FallDamageAndSliding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCanMantleOnEdge", &UCpp_FallDamageAndSliding::execCheckCanMantleOnEdge },
		{ "CheckCanStartSlidingC", &UCpp_FallDamageAndSliding::execCheckCanStartSlidingC },
		{ "PrepareToSlidingC", &UCpp_FallDamageAndSliding::execPrepareToSlidingC },
		{ "SimpleTrajectoryC", &UCpp_FallDamageAndSliding::execSimpleTrajectoryC },
		{ "SlidingConditionC", &UCpp_FallDamageAndSliding::execSlidingConditionC },
		{ "UpdateAngleCorrectDurningSliding", &UCpp_FallDamageAndSliding::execUpdateAngleCorrectDurningSliding },
		{ "UpdateCharFrictionDurningSliding", &UCpp_FallDamageAndSliding::execUpdateCharFrictionDurningSliding },
		{ "UpdateCharWalkAngleDurningSliding", &UCpp_FallDamageAndSliding::execUpdateCharWalkAngleDurningSliding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_FallDamageAndSliding);
UClass* Z_Construct_UClass_UCpp_FallDamageAndSliding_NoRegister()
{
	return UCpp_FallDamageAndSliding::StaticClass();
}
struct Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_FallDamageAndSliding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//References Variable\n" },
#endif
		{ "DisplayName", "CharacterC" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References Variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSlidingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sliding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sliding Variables\n" },
#endif
		{ "DisplayName", "StartSlidingC" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sliding Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleConditionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sliding" },
		{ "DisplayName", "AngleConditionC" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothAccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sliding" },
		{ "DisplayName", "SmoothAccelerationC" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sliding" },
		{ "DisplayName", "DebugTraceIndexC" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCharMoveValuesC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sliding" },
		{ "DisplayName", "SavedCharMoveValuesC" },
		{ "ModuleRelativePath", "Public/Cpp_FallDamageAndSliding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharC;
	static void NewProp_StartSlidingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartSlidingC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleConditionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothAccelerationC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugTraceIndexC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedCharMoveValuesC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanMantleOnEdge, "CheckCanMantleOnEdge" }, // 92068121
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_CheckCanStartSlidingC, "CheckCanStartSlidingC" }, // 3222133064
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_PrepareToSlidingC, "PrepareToSlidingC" }, // 846163224
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_SimpleTrajectoryC, "SimpleTrajectoryC" }, // 2418662126
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_SlidingConditionC, "SlidingConditionC" }, // 3466095929
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateAngleCorrectDurningSliding, "UpdateAngleCorrectDurningSliding" }, // 529135870
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharFrictionDurningSliding, "UpdateCharFrictionDurningSliding" }, // 792715719
		{ &Z_Construct_UFunction_UCpp_FallDamageAndSliding_UpdateCharWalkAngleDurningSliding, "UpdateCharWalkAngleDurningSliding" }, // 4017665508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_FallDamageAndSliding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_CharC = { "CharC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_FallDamageAndSliding, CharC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharC_MetaData), NewProp_CharC_MetaData) };
void Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_StartSlidingC_SetBit(void* Obj)
{
	((UCpp_FallDamageAndSliding*)Obj)->StartSlidingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_StartSlidingC = { "StartSlidingC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_FallDamageAndSliding), &Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_StartSlidingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSlidingC_MetaData), NewProp_StartSlidingC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_AngleConditionC = { "AngleConditionC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_FallDamageAndSliding, AngleConditionC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleConditionC_MetaData), NewProp_AngleConditionC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_SmoothAccelerationC = { "SmoothAccelerationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_FallDamageAndSliding, SmoothAccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothAccelerationC_MetaData), NewProp_SmoothAccelerationC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_DebugTraceIndexC = { "DebugTraceIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_FallDamageAndSliding, DebugTraceIndexC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceIndexC_MetaData), NewProp_DebugTraceIndexC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_SavedCharMoveValuesC = { "SavedCharMoveValuesC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_FallDamageAndSliding, SavedCharMoveValuesC), Z_Construct_UScriptStruct_FCharMovementValues, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCharMoveValuesC_MetaData), NewProp_SavedCharMoveValuesC_MetaData) }; // 3498304163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_CharC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_StartSlidingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_AngleConditionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_SmoothAccelerationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_DebugTraceIndexC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::NewProp_SavedCharMoveValuesC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::ClassParams = {
	&UCpp_FallDamageAndSliding::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::Class_MetaDataParams), Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCpp_FallDamageAndSliding()
{
	if (!Z_Registration_Info_UClass_UCpp_FallDamageAndSliding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_FallDamageAndSliding.OuterSingleton, Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCpp_FallDamageAndSliding.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_FallDamageAndSliding>()
{
	return UCpp_FallDamageAndSliding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_FallDamageAndSliding);
UCpp_FallDamageAndSliding::~UCpp_FallDamageAndSliding() {}
// End Class UCpp_FallDamageAndSliding

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharMovementValues::StaticStruct, Z_Construct_UScriptStruct_FCharMovementValues_Statics::NewStructOps, TEXT("CharMovementValues"), &Z_Registration_Info_UScriptStruct_CharMovementValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharMovementValues), 3498304163U) },
		{ FSlidingConditionData::StaticStruct, Z_Construct_UScriptStruct_FSlidingConditionData_Statics::NewStructOps, TEXT("SlidingConditionData"), &Z_Registration_Info_UScriptStruct_SlidingConditionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlidingConditionData), 538788305U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_FallDamageAndSliding, UCpp_FallDamageAndSliding::StaticClass, TEXT("UCpp_FallDamageAndSliding"), &Z_Registration_Info_UClass_UCpp_FallDamageAndSliding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_FallDamageAndSliding), 2787921805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_3181895309(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

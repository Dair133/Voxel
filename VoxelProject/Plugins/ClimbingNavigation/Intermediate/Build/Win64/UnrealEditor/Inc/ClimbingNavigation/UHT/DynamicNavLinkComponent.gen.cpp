// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/DynamicNavLinkComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicNavLinkComponent() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UDynamicNavLinkComponent();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UDynamicNavLinkComponent_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkComponent();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Enum NavLink_NavAreaMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_NavLink_NavAreaMode;
static UEnum* NavLink_NavAreaMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_NavLink_NavAreaMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_NavLink_NavAreaMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("NavLink_NavAreaMode"));
	}
	return Z_Registration_Info_UEnum_NavLink_NavAreaMode.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<NavLink_NavAreaMode>()
{
	return NavLink_NavAreaMode_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "NavLink_NavAreaMode::Default" },
		{ "LowHeight.Name", "NavLink_NavAreaMode::LowHeight" },
		{ "ModuleRelativePath", "Public/DynamicNavLinkComponent.h" },
		{ "Null.Name", "NavLink_NavAreaMode::Null" },
		{ "Obstacle.Name", "NavLink_NavAreaMode::Obstacle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NavLink_NavAreaMode::Default", (int64)NavLink_NavAreaMode::Default },
		{ "NavLink_NavAreaMode::LowHeight", (int64)NavLink_NavAreaMode::LowHeight },
		{ "NavLink_NavAreaMode::Null", (int64)NavLink_NavAreaMode::Null },
		{ "NavLink_NavAreaMode::Obstacle", (int64)NavLink_NavAreaMode::Obstacle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"NavLink_NavAreaMode",
	"NavLink_NavAreaMode",
	Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode()
{
	if (!Z_Registration_Info_UEnum_NavLink_NavAreaMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_NavLink_NavAreaMode.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_NavLink_NavAreaMode.InnerSingleton;
}
// End Enum NavLink_NavAreaMode

// Begin Class UDynamicNavLinkComponent Function AddNewNavLink
struct Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics
{
	struct DynamicNavLinkComponent_eventAddNewNavLink_Parms
	{
		FNavigationLink Object;
		float LeftProjectHeight;
		float RightProjectHeight;
		float SnapRadius;
		NavLink_NavAreaMode NavAreaMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Navigation" },
		{ "CPP_Default_LeftProjectHeight", "0.000000" },
		{ "CPP_Default_NavAreaMode", "Default" },
		{ "CPP_Default_RightProjectHeight", "1000.000000" },
		{ "CPP_Default_SnapRadius", "30.000000" },
		{ "DisplayName", "Add New Nav Link" },
		{ "Keywords", "Navigation" },
		{ "ModuleRelativePath", "Public/DynamicNavLinkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Object;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftProjectHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightProjectHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NavAreaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NavAreaMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicNavLinkComponent_eventAddNewNavLink_Parms, Object), Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) }; // 770316475
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_LeftProjectHeight = { "LeftProjectHeight", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicNavLinkComponent_eventAddNewNavLink_Parms, LeftProjectHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_RightProjectHeight = { "RightProjectHeight", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicNavLinkComponent_eventAddNewNavLink_Parms, RightProjectHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_SnapRadius = { "SnapRadius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicNavLinkComponent_eventAddNewNavLink_Parms, SnapRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_NavAreaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_NavAreaMode = { "NavAreaMode", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicNavLinkComponent_eventAddNewNavLink_Parms, NavAreaMode), Z_Construct_UEnum_ClimbingNavigation_NavLink_NavAreaMode, METADATA_PARAMS(0, nullptr) }; // 3706622743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_LeftProjectHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_RightProjectHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_SnapRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_NavAreaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::NewProp_NavAreaMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicNavLinkComponent, nullptr, "AddNewNavLink", nullptr, nullptr, Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::DynamicNavLinkComponent_eventAddNewNavLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::DynamicNavLinkComponent_eventAddNewNavLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicNavLinkComponent::execAddNewNavLink)
{
	P_GET_STRUCT_REF(FNavigationLink,Z_Param_Out_Object);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LeftProjectHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RightProjectHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SnapRadius);
	P_GET_ENUM(NavLink_NavAreaMode,Z_Param_NavAreaMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNewNavLink(Z_Param_Out_Object,Z_Param_LeftProjectHeight,Z_Param_RightProjectHeight,Z_Param_SnapRadius,NavLink_NavAreaMode(Z_Param_NavAreaMode));
	P_NATIVE_END;
}
// End Class UDynamicNavLinkComponent Function AddNewNavLink

// Begin Class UDynamicNavLinkComponent Function RebuildNavLinks
struct Z_Construct_UFunction_UDynamicNavLinkComponent_RebuildNavLinks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "DisplayName", "Rebuild Nav Links" },
		{ "Keywords", "Navigation" },
		{ "ModuleRelativePath", "Public/DynamicNavLinkComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicNavLinkComponent_RebuildNavLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicNavLinkComponent, nullptr, "RebuildNavLinks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicNavLinkComponent_RebuildNavLinks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicNavLinkComponent_RebuildNavLinks_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDynamicNavLinkComponent_RebuildNavLinks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicNavLinkComponent_RebuildNavLinks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicNavLinkComponent::execRebuildNavLinks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildNavLinks();
	P_NATIVE_END;
}
// End Class UDynamicNavLinkComponent Function RebuildNavLinks

// Begin Class UDynamicNavLinkComponent
void UDynamicNavLinkComponent::StaticRegisterNativesUDynamicNavLinkComponent()
{
	UClass* Class = UDynamicNavLinkComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewNavLink", &UDynamicNavLinkComponent::execAddNewNavLink },
		{ "RebuildNavLinks", &UDynamicNavLinkComponent::execRebuildNavLinks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicNavLinkComponent);
UClass* Z_Construct_UClass_UDynamicNavLinkComponent_NoRegister()
{
	return UDynamicNavLinkComponent::StaticClass();
}
struct Z_Construct_UClass_UDynamicNavLinkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "DynamicNavLinkComponent.h" },
		{ "ModuleRelativePath", "Public/DynamicNavLinkComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicNavLinkComponent_AddNewNavLink, "AddNewNavLink" }, // 1073093554
		{ &Z_Construct_UFunction_UDynamicNavLinkComponent_RebuildNavLinks, "RebuildNavLinks" }, // 26661685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicNavLinkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDynamicNavLinkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavLinkComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicNavLinkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicNavLinkComponent_Statics::ClassParams = {
	&UDynamicNavLinkComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicNavLinkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicNavLinkComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicNavLinkComponent()
{
	if (!Z_Registration_Info_UClass_UDynamicNavLinkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicNavLinkComponent.OuterSingleton, Z_Construct_UClass_UDynamicNavLinkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicNavLinkComponent.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UDynamicNavLinkComponent>()
{
	return UDynamicNavLinkComponent::StaticClass();
}
UDynamicNavLinkComponent::UDynamicNavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicNavLinkComponent);
UDynamicNavLinkComponent::~UDynamicNavLinkComponent() {}
// End Class UDynamicNavLinkComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ NavLink_NavAreaMode_StaticEnum, TEXT("NavLink_NavAreaMode"), &Z_Registration_Info_UEnum_NavLink_NavAreaMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3706622743U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicNavLinkComponent, UDynamicNavLinkComponent::StaticClass, TEXT("UDynamicNavLinkComponent"), &Z_Registration_Info_UClass_UDynamicNavLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicNavLinkComponent), 20826984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_2189734423(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

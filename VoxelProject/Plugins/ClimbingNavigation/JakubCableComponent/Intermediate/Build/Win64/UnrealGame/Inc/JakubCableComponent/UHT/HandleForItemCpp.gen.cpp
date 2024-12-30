// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubCableComponent/Public/HandleForItemCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandleForItemCpp() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UHandleForItemCpp();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UHandleForItemCpp_NoRegister();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubSimpleParticleComponent();
	JAKUBCABLECOMPONENT_API UEnum* Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType();
	UPackage* Z_Construct_UPackage__Script_JakubCableComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIWALS_HandleItemType;
	static UEnum* EIWALS_HandleItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIWALS_HandleItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIWALS_HandleItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType, (UObject*)Z_Construct_UPackage__Script_JakubCableComponent(), TEXT("EIWALS_HandleItemType"));
		}
		return Z_Registration_Info_UEnum_EIWALS_HandleItemType.OuterSingleton;
	}
	template<> JAKUBCABLECOMPONENT_API UEnum* StaticEnum<EIWALS_HandleItemType::Type>()
	{
		return EIWALS_HandleItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enumerators[] = {
		{ "EIWALS_HandleItemType::None", (int64)EIWALS_HandleItemType::None },
		{ "EIWALS_HandleItemType::Binoculars", (int64)EIWALS_HandleItemType::Binoculars },
		{ "EIWALS_HandleItemType::Bow", (int64)EIWALS_HandleItemType::Bow },
		{ "EIWALS_HandleItemType::Axe", (int64)EIWALS_HandleItemType::Axe },
		{ "EIWALS_HandleItemType::Knife", (int64)EIWALS_HandleItemType::Knife },
		{ "EIWALS_HandleItemType::Sword", (int64)EIWALS_HandleItemType::Sword },
		{ "EIWALS_HandleItemType::Food", (int64)EIWALS_HandleItemType::Food },
		{ "EIWALS_HandleItemType::FirstAidKit", (int64)EIWALS_HandleItemType::FirstAidKit },
		{ "EIWALS_HandleItemType::Grenade_1", (int64)EIWALS_HandleItemType::Grenade_1 },
		{ "EIWALS_HandleItemType::Grenade_2", (int64)EIWALS_HandleItemType::Grenade_2 },
		{ "EIWALS_HandleItemType::Prop_1", (int64)EIWALS_HandleItemType::Prop_1 },
		{ "EIWALS_HandleItemType::Prop_2", (int64)EIWALS_HandleItemType::Prop_2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enum_MetaDataParams[] = {
		{ "Axe.DisplayName", "Axe" },
		{ "Axe.Name", "EIWALS_HandleItemType::Axe" },
		{ "Binoculars.DisplayName", "Binoculars" },
		{ "Binoculars.Name", "EIWALS_HandleItemType::Binoculars" },
		{ "BlueprintType", "true" },
		{ "Bow.DisplayName", "Bow" },
		{ "Bow.Name", "EIWALS_HandleItemType::Bow" },
		{ "FirstAidKit.DisplayName", "FirstAidKit" },
		{ "FirstAidKit.Name", "EIWALS_HandleItemType::FirstAidKit" },
		{ "Food.DisplayName", "Food" },
		{ "Food.Name", "EIWALS_HandleItemType::Food" },
		{ "Grenade_1.DisplayName", "Grenade_1" },
		{ "Grenade_1.Name", "EIWALS_HandleItemType::Grenade_1" },
		{ "Grenade_2.DisplayName", "Grenade_2" },
		{ "Grenade_2.Name", "EIWALS_HandleItemType::Grenade_2" },
		{ "Knife.DisplayName", "Knife" },
		{ "Knife.Name", "EIWALS_HandleItemType::Knife" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EIWALS_HandleItemType::None" },
		{ "Prop_1.DisplayName", "Prop_1" },
		{ "Prop_1.Name", "EIWALS_HandleItemType::Prop_1" },
		{ "Prop_2.DisplayName", "Prop_2" },
		{ "Prop_2.Name", "EIWALS_HandleItemType::Prop_2" },
		{ "Sword.DisplayName", "Sword" },
		{ "Sword.Name", "EIWALS_HandleItemType::Sword" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JakubCableComponent,
		nullptr,
		"EIWALS_HandleItemType",
		"EIWALS_HandleItemType::Type",
		Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType()
	{
		if (!Z_Registration_Info_UEnum_EIWALS_HandleItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIWALS_HandleItemType.InnerSingleton, Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIWALS_HandleItemType.InnerSingleton;
	}
	void UHandleForItemCpp::StaticRegisterNativesUHandleForItemCpp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandleForItemCpp);
	UClass* Z_Construct_UClass_UHandleForItemCpp_NoRegister()
	{
		return UHandleForItemCpp::StaticClass();
	}
	struct Z_Construct_UClass_UHandleForItemCpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTypeC_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SocketTypeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketNameC_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketNameC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachRuleC_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachRuleC_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachRuleC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToBackpackC_MetaData[];
#endif
		static void NewProp_AttachToBackpackC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttachToBackpackC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanEquipItemC_MetaData[];
#endif
		static void NewProp_CanEquipItemC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanEquipItemC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropAttachOffsetC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropAttachOffsetC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropItemDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropItemDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInEquipmentC_MetaData[];
#endif
		static void NewProp_IsInEquipmentC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInEquipmentC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToPickC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToPickC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackpackActorC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackpackActorC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandleForItemCpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJakubSimpleParticleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "HandleForItemCpp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_SocketTypeC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Socket Type" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_SocketTypeC = { "SocketTypeC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, SocketTypeC), Z_Construct_UEnum_JakubCableComponent_EIWALS_HandleItemType, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_SocketTypeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_SocketTypeC_MetaData)) }; // 1094419504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachSocketNameC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Attach Socket Name" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachSocketNameC = { "AttachSocketNameC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, AttachSocketNameC), METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachSocketNameC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachSocketNameC_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Attach Rule" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC = { "AttachRuleC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, AttachRuleC), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC_MetaData)) }; // 1532071077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Attach To Backpack" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	void Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC_SetBit(void* Obj)
	{
		((UHandleForItemCpp*)Obj)->AttachToBackpackC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC = { "AttachToBackpackC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHandleForItemCpp), &Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Can Equip Item" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	void Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC_SetBit(void* Obj)
	{
		((UHandleForItemCpp*)Obj)->CanEquipItemC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC = { "CanEquipItemC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHandleForItemCpp), &Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_PropAttachOffsetC_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Prop Attach Offset" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_PropAttachOffsetC = { "PropAttachOffsetC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, PropAttachOffsetC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_PropAttachOffsetC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_PropAttachOffsetC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_DropItemDelay_MetaData[] = {
		{ "Category", "Handle Config" },
		{ "DisplayName", "Drop Item Delay" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_DropItemDelay = { "DropItemDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, DropItemDelay), METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_DropItemDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_DropItemDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "//System Variables\n" },
		{ "DisplayName", "Is In Equipment" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
		{ "ToolTip", "System Variables" },
	};
#endif
	void Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC_SetBit(void* Obj)
	{
		((UHandleForItemCpp*)Obj)->IsInEquipmentC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC = { "IsInEquipmentC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHandleForItemCpp), &Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CharacterC_MetaData[] = {
		{ "Category", "System" },
		{ "DisplayName", "Character" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CharacterC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CharacterC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_ItemToPickC_MetaData[] = {
		{ "Category", "System" },
		{ "DisplayName", "Item To Pick" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_ItemToPickC = { "ItemToPickC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, ItemToPickC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_ItemToPickC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_ItemToPickC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_BackpackActorC_MetaData[] = {
		{ "Category", "System" },
		{ "DisplayName", "Backpack Actor" },
		{ "Keywords", "Physic Handle Item" },
		{ "ModuleRelativePath", "Public/HandleForItemCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_BackpackActorC = { "BackpackActorC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandleForItemCpp, BackpackActorC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_BackpackActorC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_BackpackActorC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandleForItemCpp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_SocketTypeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachSocketNameC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachRuleC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_AttachToBackpackC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CanEquipItemC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_PropAttachOffsetC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_DropItemDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_IsInEquipmentC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_CharacterC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_ItemToPickC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandleForItemCpp_Statics::NewProp_BackpackActorC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandleForItemCpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandleForItemCpp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandleForItemCpp_Statics::ClassParams = {
		&UHandleForItemCpp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHandleForItemCpp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHandleForItemCpp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandleForItemCpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandleForItemCpp()
	{
		if (!Z_Registration_Info_UClass_UHandleForItemCpp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandleForItemCpp.OuterSingleton, Z_Construct_UClass_UHandleForItemCpp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHandleForItemCpp.OuterSingleton;
	}
	template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<UHandleForItemCpp>()
	{
		return UHandleForItemCpp::StaticClass();
	}
	UHandleForItemCpp::UHandleForItemCpp() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandleForItemCpp);
	UHandleForItemCpp::~UHandleForItemCpp() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_Statics::EnumInfo[] = {
		{ EIWALS_HandleItemType_StaticEnum, TEXT("EIWALS_HandleItemType"), &Z_Registration_Info_UEnum_EIWALS_HandleItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1094419504U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHandleForItemCpp, UHandleForItemCpp::StaticClass, TEXT("UHandleForItemCpp"), &Z_Registration_Info_UClass_UHandleForItemCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandleForItemCpp), 2815416019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_1265907666(TEXT("/Script/JakubCableComponent"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_MyCableComponent_5_2_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

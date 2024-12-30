// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrajectoryGenerator_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TrajectoryGenerator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TrajectoryGenerator()
	{
		if (!Z_Registration_Info_UPackage__Script_TrajectoryGenerator.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TrajectoryGenerator",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x90EB98B0,
				0xA9B02C56,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TrajectoryGenerator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TrajectoryGenerator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TrajectoryGenerator(Z_Construct_UPackage__Script_TrajectoryGenerator, TEXT("/Script/TrajectoryGenerator"), Z_Registration_Info_UPackage__Script_TrajectoryGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x90EB98B0, 0xA9B02C56));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

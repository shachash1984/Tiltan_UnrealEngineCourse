// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayground_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Playground;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Playground()
	{
		if (!Z_Registration_Info_UPackage__Script_Playground.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Playground",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE24445F4,
				0x03A29959,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Playground.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Playground.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Playground(Z_Construct_UPackage__Script_Playground, TEXT("/Script/Playground"), Z_Registration_Info_UPackage__Script_Playground, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE24445F4, 0x03A29959));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

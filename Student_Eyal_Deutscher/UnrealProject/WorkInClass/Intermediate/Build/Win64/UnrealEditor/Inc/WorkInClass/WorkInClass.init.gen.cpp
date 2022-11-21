// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkInClass_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WorkInClass;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WorkInClass()
	{
		if (!Z_Registration_Info_UPackage__Script_WorkInClass.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WorkInClass",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xACFDC210,
				0x932444FF,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WorkInClass.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WorkInClass.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WorkInClass(Z_Construct_UPackage__Script_WorkInClass, TEXT("/Script/WorkInClass"), Z_Registration_Info_UPackage__Script_WorkInClass, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xACFDC210, 0x932444FF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

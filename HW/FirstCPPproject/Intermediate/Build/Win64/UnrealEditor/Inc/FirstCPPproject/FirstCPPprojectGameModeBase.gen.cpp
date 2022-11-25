// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCPPproject/FirstCPPprojectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCPPprojectGameModeBase() {}
// Cross Module References
	FIRSTCPPPROJECT_API UClass* Z_Construct_UClass_AFirstCPPprojectGameModeBase_NoRegister();
	FIRSTCPPPROJECT_API UClass* Z_Construct_UClass_AFirstCPPprojectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstCPPproject();
// End Cross Module References
	void AFirstCPPprojectGameModeBase::StaticRegisterNativesAFirstCPPprojectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstCPPprojectGameModeBase);
	UClass* Z_Construct_UClass_AFirstCPPprojectGameModeBase_NoRegister()
	{
		return AFirstCPPprojectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCPPproject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstCPPprojectGameModeBase.h" },
		{ "ModuleRelativePath", "FirstCPPprojectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstCPPprojectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics::ClassParams = {
		&AFirstCPPprojectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstCPPprojectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFirstCPPprojectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstCPPprojectGameModeBase.OuterSingleton, Z_Construct_UClass_AFirstCPPprojectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstCPPprojectGameModeBase.OuterSingleton;
	}
	template<> FIRSTCPPPROJECT_API UClass* StaticClass<AFirstCPPprojectGameModeBase>()
	{
		return AFirstCPPprojectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstCPPprojectGameModeBase);
	struct Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_FirstCPPprojectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_FirstCPPprojectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstCPPprojectGameModeBase, AFirstCPPprojectGameModeBase::StaticClass, TEXT("AFirstCPPprojectGameModeBase"), &Z_Registration_Info_UClass_AFirstCPPprojectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstCPPprojectGameModeBase), 3623421806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_FirstCPPprojectGameModeBase_h_2308950006(TEXT("/Script/FirstCPPproject"),
		Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_FirstCPPprojectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_FirstCPPprojectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

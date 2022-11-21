// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCppProject/FirstCppProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCppProjectGameModeBase() {}
// Cross Module References
	FIRSTCPPPROJECT_API UClass* Z_Construct_UClass_AFirstCppProjectGameModeBase_NoRegister();
	FIRSTCPPPROJECT_API UClass* Z_Construct_UClass_AFirstCppProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstCppProject();
// End Cross Module References
	void AFirstCppProjectGameModeBase::StaticRegisterNativesAFirstCppProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstCppProjectGameModeBase);
	UClass* Z_Construct_UClass_AFirstCppProjectGameModeBase_NoRegister()
	{
		return AFirstCppProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCppProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstCppProjectGameModeBase.h" },
		{ "ModuleRelativePath", "FirstCppProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstCppProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics::ClassParams = {
		&AFirstCppProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstCppProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFirstCppProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstCppProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AFirstCppProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstCppProjectGameModeBase.OuterSingleton;
	}
	template<> FIRSTCPPPROJECT_API UClass* StaticClass<AFirstCppProjectGameModeBase>()
	{
		return AFirstCppProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstCppProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_FirstCppProject_Source_FirstCppProject_FirstCppProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCppProject_Source_FirstCppProject_FirstCppProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstCppProjectGameModeBase, AFirstCppProjectGameModeBase::StaticClass, TEXT("AFirstCppProjectGameModeBase"), &Z_Registration_Info_UClass_AFirstCppProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstCppProjectGameModeBase), 499764216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCppProject_Source_FirstCppProject_FirstCppProjectGameModeBase_h_1341222282(TEXT("/Script/FirstCppProject"),
		Z_CompiledInDeferFile_FID_FirstCppProject_Source_FirstCppProject_FirstCppProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstCppProject_Source_FirstCppProject_FirstCppProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

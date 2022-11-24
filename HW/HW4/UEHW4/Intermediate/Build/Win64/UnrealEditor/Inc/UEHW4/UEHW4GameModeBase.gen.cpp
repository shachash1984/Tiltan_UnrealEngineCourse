// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEHW4/UEHW4GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEHW4GameModeBase() {}
// Cross Module References
	UEHW4_API UClass* Z_Construct_UClass_AUEHW4GameModeBase_NoRegister();
	UEHW4_API UClass* Z_Construct_UClass_AUEHW4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UEHW4();
// End Cross Module References
	void AUEHW4GameModeBase::StaticRegisterNativesAUEHW4GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUEHW4GameModeBase);
	UClass* Z_Construct_UClass_AUEHW4GameModeBase_NoRegister()
	{
		return AUEHW4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUEHW4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEHW4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEHW4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEHW4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UEHW4GameModeBase.h" },
		{ "ModuleRelativePath", "UEHW4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEHW4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEHW4GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUEHW4GameModeBase_Statics::ClassParams = {
		&AUEHW4GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUEHW4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUEHW4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEHW4GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUEHW4GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUEHW4GameModeBase.OuterSingleton, Z_Construct_UClass_AUEHW4GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUEHW4GameModeBase.OuterSingleton;
	}
	template<> UEHW4_API UClass* StaticClass<AUEHW4GameModeBase>()
	{
		return AUEHW4GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEHW4GameModeBase);
	struct Z_CompiledInDeferFile_FID_UEHW4_Source_UEHW4_UEHW4GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEHW4_Source_UEHW4_UEHW4GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUEHW4GameModeBase, AUEHW4GameModeBase::StaticClass, TEXT("AUEHW4GameModeBase"), &Z_Registration_Info_UClass_AUEHW4GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUEHW4GameModeBase), 1077587166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEHW4_Source_UEHW4_UEHW4GameModeBase_h_927553892(TEXT("/Script/UEHW4"),
		Z_CompiledInDeferFile_FID_UEHW4_Source_UEHW4_UEHW4GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEHW4_Source_UEHW4_UEHW4GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

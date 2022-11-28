// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW4/HW4GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW4GameModeBase() {}
// Cross Module References
	HW4_API UClass* Z_Construct_UClass_AHW4GameModeBase_NoRegister();
	HW4_API UClass* Z_Construct_UClass_AHW4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HW4();
// End Cross Module References
	void AHW4GameModeBase::StaticRegisterNativesAHW4GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW4GameModeBase);
	UClass* Z_Construct_UClass_AHW4GameModeBase_NoRegister()
	{
		return AHW4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHW4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHW4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HW4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHW4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HW4GameModeBase.h" },
		{ "ModuleRelativePath", "HW4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHW4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW4GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW4GameModeBase_Statics::ClassParams = {
		&AHW4GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHW4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHW4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHW4GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHW4GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW4GameModeBase.OuterSingleton, Z_Construct_UClass_AHW4GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHW4GameModeBase.OuterSingleton;
	}
	template<> HW4_API UClass* StaticClass<AHW4GameModeBase>()
	{
		return AHW4GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHW4GameModeBase);
	struct Z_CompiledInDeferFile_FID_HW4_Source_HW4_HW4GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW4_Source_HW4_HW4GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHW4GameModeBase, AHW4GameModeBase::StaticClass, TEXT("AHW4GameModeBase"), &Z_Registration_Info_UClass_AHW4GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW4GameModeBase), 883908778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW4_Source_HW4_HW4GameModeBase_h_178384165(TEXT("/Script/HW4"),
		Z_CompiledInDeferFile_FID_HW4_Source_HW4_HW4GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW4_Source_HW4_HW4GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealHomeWork3/UnrealHomeWork3GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealHomeWork3GameModeBase() {}
// Cross Module References
	UNREALHOMEWORK3_API UClass* Z_Construct_UClass_AUnrealHomeWork3GameModeBase_NoRegister();
	UNREALHOMEWORK3_API UClass* Z_Construct_UClass_AUnrealHomeWork3GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealHomeWork3();
// End Cross Module References
	void AUnrealHomeWork3GameModeBase::StaticRegisterNativesAUnrealHomeWork3GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealHomeWork3GameModeBase);
	UClass* Z_Construct_UClass_AUnrealHomeWork3GameModeBase_NoRegister()
	{
		return AUnrealHomeWork3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealHomeWork3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealHomeWork3GameModeBase.h" },
		{ "ModuleRelativePath", "UnrealHomeWork3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealHomeWork3GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics::ClassParams = {
		&AUnrealHomeWork3GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealHomeWork3GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealHomeWork3GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealHomeWork3GameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealHomeWork3GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealHomeWork3GameModeBase.OuterSingleton;
	}
	template<> UNREALHOMEWORK3_API UClass* StaticClass<AUnrealHomeWork3GameModeBase>()
	{
		return AUnrealHomeWork3GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealHomeWork3GameModeBase);
	struct Z_CompiledInDeferFile_FID_UnrealHomeWork3_Source_UnrealHomeWork3_UnrealHomeWork3GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealHomeWork3_Source_UnrealHomeWork3_UnrealHomeWork3GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealHomeWork3GameModeBase, AUnrealHomeWork3GameModeBase::StaticClass, TEXT("AUnrealHomeWork3GameModeBase"), &Z_Registration_Info_UClass_AUnrealHomeWork3GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealHomeWork3GameModeBase), 4081679346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealHomeWork3_Source_UnrealHomeWork3_UnrealHomeWork3GameModeBase_h_956799720(TEXT("/Script/UnrealHomeWork3"),
		Z_CompiledInDeferFile_FID_UnrealHomeWork3_Source_UnrealHomeWork3_UnrealHomeWork3GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealHomeWork3_Source_UnrealHomeWork3_UnrealHomeWork3GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

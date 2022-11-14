// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/PlaygroundGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaygroundGameMode() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_APlaygroundGameMode_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_APlaygroundGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void APlaygroundGameMode::StaticRegisterNativesAPlaygroundGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaygroundGameMode);
	UClass* Z_Construct_UClass_APlaygroundGameMode_NoRegister()
	{
		return APlaygroundGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APlaygroundGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaygroundGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaygroundGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlaygroundGameMode.h" },
		{ "ModuleRelativePath", "PlaygroundGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaygroundGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaygroundGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaygroundGameMode_Statics::ClassParams = {
		&APlaygroundGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlaygroundGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaygroundGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaygroundGameMode()
	{
		if (!Z_Registration_Info_UClass_APlaygroundGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaygroundGameMode.OuterSingleton, Z_Construct_UClass_APlaygroundGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlaygroundGameMode.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<APlaygroundGameMode>()
	{
		return APlaygroundGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaygroundGameMode);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlaygroundGameMode, APlaygroundGameMode::StaticClass, TEXT("APlaygroundGameMode"), &Z_Registration_Info_UClass_APlaygroundGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaygroundGameMode), 2286502910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameMode_h_1472473711(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

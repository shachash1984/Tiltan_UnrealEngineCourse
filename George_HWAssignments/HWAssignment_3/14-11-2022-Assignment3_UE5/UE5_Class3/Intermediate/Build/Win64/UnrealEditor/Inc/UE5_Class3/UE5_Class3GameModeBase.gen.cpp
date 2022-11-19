// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Class3/UE5_Class3GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Class3GameModeBase() {}
// Cross Module References
	UE5_CLASS3_API UClass* Z_Construct_UClass_AUE5_Class3GameModeBase_NoRegister();
	UE5_CLASS3_API UClass* Z_Construct_UClass_AUE5_Class3GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5_Class3();
// End Cross Module References
	void AUE5_Class3GameModeBase::StaticRegisterNativesAUE5_Class3GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_Class3GameModeBase);
	UClass* Z_Construct_UClass_AUE5_Class3GameModeBase_NoRegister()
	{
		return AUE5_Class3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_Class3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_Class3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Class3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_Class3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_Class3GameModeBase.h" },
		{ "ModuleRelativePath", "UE5_Class3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_Class3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_Class3GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_Class3GameModeBase_Statics::ClassParams = {
		&AUE5_Class3GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE5_Class3GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Class3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5_Class3GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5_Class3GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_Class3GameModeBase.OuterSingleton, Z_Construct_UClass_AUE5_Class3GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_Class3GameModeBase.OuterSingleton;
	}
	template<> UE5_CLASS3_API UClass* StaticClass<AUE5_Class3GameModeBase>()
	{
		return AUE5_Class3GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_Class3GameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5_Class3_Source_UE5_Class3_UE5_Class3GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class3_Source_UE5_Class3_UE5_Class3GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_Class3GameModeBase, AUE5_Class3GameModeBase::StaticClass, TEXT("AUE5_Class3GameModeBase"), &Z_Registration_Info_UClass_AUE5_Class3GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_Class3GameModeBase), 1693377766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class3_Source_UE5_Class3_UE5_Class3GameModeBase_h_1406297507(TEXT("/Script/UE5_Class3"),
		Z_CompiledInDeferFile_FID_UE5_Class3_Source_UE5_Class3_UE5_Class3GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Class3_Source_UE5_Class3_UE5_Class3GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

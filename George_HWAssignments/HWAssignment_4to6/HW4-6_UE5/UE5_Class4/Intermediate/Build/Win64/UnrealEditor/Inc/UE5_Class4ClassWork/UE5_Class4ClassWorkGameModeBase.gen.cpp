// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Class4ClassWork/UE5_Class4ClassWorkGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Class4ClassWorkGameModeBase() {}
// Cross Module References
	UE5_CLASS4CLASSWORK_API UClass* Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_NoRegister();
	UE5_CLASS4CLASSWORK_API UClass* Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5_Class4ClassWork();
// End Cross Module References
	void AUE5_Class4ClassWorkGameModeBase::StaticRegisterNativesAUE5_Class4ClassWorkGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_Class4ClassWorkGameModeBase);
	UClass* Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_NoRegister()
	{
		return AUE5_Class4ClassWorkGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Class4ClassWork,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_Class4ClassWorkGameModeBase.h" },
		{ "ModuleRelativePath", "UE5_Class4ClassWorkGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_Class4ClassWorkGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics::ClassParams = {
		&AUE5_Class4ClassWorkGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5_Class4ClassWorkGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_Class4ClassWorkGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_Class4ClassWorkGameModeBase.OuterSingleton;
	}
	template<> UE5_CLASS4CLASSWORK_API UClass* StaticClass<AUE5_Class4ClassWorkGameModeBase>()
	{
		return AUE5_Class4ClassWorkGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_Class4ClassWorkGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_UE5_Class4ClassWorkGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_UE5_Class4ClassWorkGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_Class4ClassWorkGameModeBase, AUE5_Class4ClassWorkGameModeBase::StaticClass, TEXT("AUE5_Class4ClassWorkGameModeBase"), &Z_Registration_Info_UClass_AUE5_Class4ClassWorkGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_Class4ClassWorkGameModeBase), 1225051758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_UE5_Class4ClassWorkGameModeBase_h_1673539990(TEXT("/Script/UE5_Class4ClassWork"),
		Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_UE5_Class4ClassWorkGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_UE5_Class4ClassWorkGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

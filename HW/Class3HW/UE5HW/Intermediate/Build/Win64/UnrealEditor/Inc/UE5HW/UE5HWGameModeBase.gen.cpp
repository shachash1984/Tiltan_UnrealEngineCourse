// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5HW/UE5HWGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5HWGameModeBase() {}
// Cross Module References
	UE5HW_API UClass* Z_Construct_UClass_AUE5HWGameModeBase_NoRegister();
	UE5HW_API UClass* Z_Construct_UClass_AUE5HWGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5HW();
// End Cross Module References
	void AUE5HWGameModeBase::StaticRegisterNativesAUE5HWGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5HWGameModeBase);
	UClass* Z_Construct_UClass_AUE5HWGameModeBase_NoRegister()
	{
		return AUE5HWGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5HWGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5HWGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5HW,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5HWGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5HWGameModeBase.h" },
		{ "ModuleRelativePath", "UE5HWGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5HWGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5HWGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5HWGameModeBase_Statics::ClassParams = {
		&AUE5HWGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE5HWGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5HWGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5HWGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5HWGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5HWGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5HWGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5HWGameModeBase.OuterSingleton;
	}
	template<> UE5HW_API UClass* StaticClass<AUE5HWGameModeBase>()
	{
		return AUE5HWGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5HWGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5HW_Source_UE5HW_UE5HWGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5HW_Source_UE5HW_UE5HWGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5HWGameModeBase, AUE5HWGameModeBase::StaticClass, TEXT("AUE5HWGameModeBase"), &Z_Registration_Info_UClass_AUE5HWGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5HWGameModeBase), 2694484027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5HW_Source_UE5HW_UE5HWGameModeBase_h_1660945102(TEXT("/Script/UE5HW"),
		Z_CompiledInDeferFile_FID_UE5HW_Source_UE5HW_UE5HWGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5HW_Source_UE5HW_UE5HWGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

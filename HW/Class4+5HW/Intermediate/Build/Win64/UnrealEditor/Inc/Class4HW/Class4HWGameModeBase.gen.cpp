// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Class4HW/Class4HWGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClass4HWGameModeBase() {}
// Cross Module References
	CLASS4HW_API UClass* Z_Construct_UClass_AClass4HWGameModeBase_NoRegister();
	CLASS4HW_API UClass* Z_Construct_UClass_AClass4HWGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Class4HW();
// End Cross Module References
	void AClass4HWGameModeBase::StaticRegisterNativesAClass4HWGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClass4HWGameModeBase);
	UClass* Z_Construct_UClass_AClass4HWGameModeBase_NoRegister()
	{
		return AClass4HWGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AClass4HWGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClass4HWGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Class4HW,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClass4HWGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Class4HWGameModeBase.h" },
		{ "ModuleRelativePath", "Class4HWGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClass4HWGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClass4HWGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClass4HWGameModeBase_Statics::ClassParams = {
		&AClass4HWGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AClass4HWGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClass4HWGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClass4HWGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AClass4HWGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClass4HWGameModeBase.OuterSingleton, Z_Construct_UClass_AClass4HWGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClass4HWGameModeBase.OuterSingleton;
	}
	template<> CLASS4HW_API UClass* StaticClass<AClass4HWGameModeBase>()
	{
		return AClass4HWGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClass4HWGameModeBase);
	struct Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Class4HWGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Class4HWGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClass4HWGameModeBase, AClass4HWGameModeBase::StaticClass, TEXT("AClass4HWGameModeBase"), &Z_Registration_Info_UClass_AClass4HWGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClass4HWGameModeBase), 4219055356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Class4HWGameModeBase_h_1221509188(TEXT("/Script/Class4HW"),
		Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Class4HWGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Class4HWGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

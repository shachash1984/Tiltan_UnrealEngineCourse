// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorkInClass/WorkInClassGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkInClassGameModeBase() {}
// Cross Module References
	WORKINCLASS_API UClass* Z_Construct_UClass_AWorkInClassGameModeBase_NoRegister();
	WORKINCLASS_API UClass* Z_Construct_UClass_AWorkInClassGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WorkInClass();
// End Cross Module References
	void AWorkInClassGameModeBase::StaticRegisterNativesAWorkInClassGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorkInClassGameModeBase);
	UClass* Z_Construct_UClass_AWorkInClassGameModeBase_NoRegister()
	{
		return AWorkInClassGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWorkInClassGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorkInClassGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WorkInClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorkInClassGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorkInClassGameModeBase.h" },
		{ "ModuleRelativePath", "WorkInClassGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorkInClassGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorkInClassGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorkInClassGameModeBase_Statics::ClassParams = {
		&AWorkInClassGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWorkInClassGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorkInClassGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorkInClassGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AWorkInClassGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorkInClassGameModeBase.OuterSingleton, Z_Construct_UClass_AWorkInClassGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorkInClassGameModeBase.OuterSingleton;
	}
	template<> WORKINCLASS_API UClass* StaticClass<AWorkInClassGameModeBase>()
	{
		return AWorkInClassGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorkInClassGameModeBase);
	struct Z_CompiledInDeferFile_FID_WorkInClass_Source_WorkInClass_WorkInClassGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkInClass_Source_WorkInClass_WorkInClassGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorkInClassGameModeBase, AWorkInClassGameModeBase::StaticClass, TEXT("AWorkInClassGameModeBase"), &Z_Registration_Info_UClass_AWorkInClassGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorkInClassGameModeBase), 674788888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkInClass_Source_WorkInClass_WorkInClassGameModeBase_h_1154121356(TEXT("/Script/WorkInClass"),
		Z_CompiledInDeferFile_FID_WorkInClass_Source_WorkInClass_WorkInClassGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkInClass_Source_WorkInClass_WorkInClassGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

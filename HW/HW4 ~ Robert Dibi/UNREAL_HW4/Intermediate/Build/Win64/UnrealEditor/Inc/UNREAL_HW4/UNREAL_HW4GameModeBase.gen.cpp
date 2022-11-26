// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UNREAL_HW4/UNREAL_HW4GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNREAL_HW4GameModeBase() {}
// Cross Module References
	UNREAL_HW4_API UClass* Z_Construct_UClass_AUNREAL_HW4GameModeBase_NoRegister();
	UNREAL_HW4_API UClass* Z_Construct_UClass_AUNREAL_HW4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UNREAL_HW4();
// End Cross Module References
	void AUNREAL_HW4GameModeBase::StaticRegisterNativesAUNREAL_HW4GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUNREAL_HW4GameModeBase);
	UClass* Z_Construct_UClass_AUNREAL_HW4GameModeBase_NoRegister()
	{
		return AUNREAL_HW4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UNREAL_HW4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UNREAL_HW4GameModeBase.h" },
		{ "ModuleRelativePath", "UNREAL_HW4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUNREAL_HW4GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics::ClassParams = {
		&AUNREAL_HW4GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUNREAL_HW4GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUNREAL_HW4GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUNREAL_HW4GameModeBase.OuterSingleton, Z_Construct_UClass_AUNREAL_HW4GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUNREAL_HW4GameModeBase.OuterSingleton;
	}
	template<> UNREAL_HW4_API UClass* StaticClass<AUNREAL_HW4GameModeBase>()
	{
		return AUNREAL_HW4GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUNREAL_HW4GameModeBase);
	struct Z_CompiledInDeferFile_FID_UNREAL_HW4_Source_UNREAL_HW4_UNREAL_HW4GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_HW4_Source_UNREAL_HW4_UNREAL_HW4GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUNREAL_HW4GameModeBase, AUNREAL_HW4GameModeBase::StaticClass, TEXT("AUNREAL_HW4GameModeBase"), &Z_Registration_Info_UClass_AUNREAL_HW4GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUNREAL_HW4GameModeBase), 2872699166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_HW4_Source_UNREAL_HW4_UNREAL_HW4GameModeBase_h_3451948292(TEXT("/Script/UNREAL_HW4"),
		Z_CompiledInDeferFile_FID_UNREAL_HW4_Source_UNREAL_HW4_UNREAL_HW4GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_HW4_Source_UNREAL_HW4_UNREAL_HW4GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

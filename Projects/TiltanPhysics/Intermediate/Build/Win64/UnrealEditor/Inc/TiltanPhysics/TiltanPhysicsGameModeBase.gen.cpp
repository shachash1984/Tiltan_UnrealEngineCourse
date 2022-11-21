// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TiltanPhysics/TiltanPhysicsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTiltanPhysicsGameModeBase() {}
// Cross Module References
	TILTANPHYSICS_API UClass* Z_Construct_UClass_ATiltanPhysicsGameModeBase_NoRegister();
	TILTANPHYSICS_API UClass* Z_Construct_UClass_ATiltanPhysicsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TiltanPhysics();
// End Cross Module References
	void ATiltanPhysicsGameModeBase::StaticRegisterNativesATiltanPhysicsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATiltanPhysicsGameModeBase);
	UClass* Z_Construct_UClass_ATiltanPhysicsGameModeBase_NoRegister()
	{
		return ATiltanPhysicsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TiltanPhysics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TiltanPhysicsGameModeBase.h" },
		{ "ModuleRelativePath", "TiltanPhysicsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATiltanPhysicsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics::ClassParams = {
		&ATiltanPhysicsGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATiltanPhysicsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATiltanPhysicsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATiltanPhysicsGameModeBase.OuterSingleton, Z_Construct_UClass_ATiltanPhysicsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATiltanPhysicsGameModeBase.OuterSingleton;
	}
	template<> TILTANPHYSICS_API UClass* StaticClass<ATiltanPhysicsGameModeBase>()
	{
		return ATiltanPhysicsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATiltanPhysicsGameModeBase);
	struct Z_CompiledInDeferFile_FID_TiltanPhysics_Source_TiltanPhysics_TiltanPhysicsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TiltanPhysics_Source_TiltanPhysics_TiltanPhysicsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATiltanPhysicsGameModeBase, ATiltanPhysicsGameModeBase::StaticClass, TEXT("ATiltanPhysicsGameModeBase"), &Z_Registration_Info_UClass_ATiltanPhysicsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATiltanPhysicsGameModeBase), 3056375398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TiltanPhysics_Source_TiltanPhysics_TiltanPhysicsGameModeBase_h_1640480694(TEXT("/Script/TiltanPhysics"),
		Z_CompiledInDeferFile_FID_TiltanPhysics_Source_TiltanPhysics_TiltanPhysicsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TiltanPhysics_Source_TiltanPhysics_TiltanPhysicsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

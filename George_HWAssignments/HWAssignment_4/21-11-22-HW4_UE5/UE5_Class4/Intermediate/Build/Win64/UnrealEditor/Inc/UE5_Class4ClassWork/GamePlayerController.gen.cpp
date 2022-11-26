// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Class4ClassWork/Public/GamePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePlayerController() {}
// Cross Module References
	UE5_CLASS4CLASSWORK_API UClass* Z_Construct_UClass_AGamePlayerController_NoRegister();
	UE5_CLASS4CLASSWORK_API UClass* Z_Construct_UClass_AGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UE5_Class4ClassWork();
// End Cross Module References
	void AGamePlayerController::StaticRegisterNativesAGamePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamePlayerController);
	UClass* Z_Construct_UClass_AGamePlayerController_NoRegister()
	{
		return AGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Class4ClassWork,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GamePlayerController.h" },
		{ "ModuleRelativePath", "Public/GamePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamePlayerController_Statics::ClassParams = {
		&AGamePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamePlayerController()
	{
		if (!Z_Registration_Info_UClass_AGamePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamePlayerController.OuterSingleton, Z_Construct_UClass_AGamePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGamePlayerController.OuterSingleton;
	}
	template<> UE5_CLASS4CLASSWORK_API UClass* StaticClass<AGamePlayerController>()
	{
		return AGamePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePlayerController);
	struct Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_Public_GamePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_Public_GamePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGamePlayerController, AGamePlayerController::StaticClass, TEXT("AGamePlayerController"), &Z_Registration_Info_UClass_AGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePlayerController), 2793007590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_Public_GamePlayerController_h_1580842066(TEXT("/Script/UE5_Class4ClassWork"),
		Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_Public_GamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Class4ClassWork_Source_UE5_Class4ClassWork_Public_GamePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

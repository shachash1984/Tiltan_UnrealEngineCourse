// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCPPproject/Public/ThrowingRock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowingRock() {}
// Cross Module References
	FIRSTCPPPROJECT_API UClass* Z_Construct_UClass_AThrowingRock_NoRegister();
	FIRSTCPPPROJECT_API UClass* Z_Construct_UClass_AThrowingRock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstCPPproject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AThrowingRock::StaticRegisterNativesAThrowingRock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowingRock);
	UClass* Z_Construct_UClass_AThrowingRock_NoRegister()
	{
		return AThrowingRock::StaticClass();
	}
	struct Z_Construct_UClass_AThrowingRock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowingRock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCPPproject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingRock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThrowingRock.h" },
		{ "ModuleRelativePath", "Public/ThrowingRock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingRock_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ThrowingRock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingRock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingRock_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingRock, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingRock_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingRock_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowingRock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingRock_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowingRock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowingRock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowingRock_Statics::ClassParams = {
		&AThrowingRock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThrowingRock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingRock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowingRock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingRock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowingRock()
	{
		if (!Z_Registration_Info_UClass_AThrowingRock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowingRock.OuterSingleton, Z_Construct_UClass_AThrowingRock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowingRock.OuterSingleton;
	}
	template<> FIRSTCPPPROJECT_API UClass* StaticClass<AThrowingRock>()
	{
		return AThrowingRock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowingRock);
	struct Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowingRock, AThrowingRock::StaticClass, TEXT("AThrowingRock"), &Z_Registration_Info_UClass_AThrowingRock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowingRock), 4185901543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_1302091073(TEXT("/Script/FirstCPPproject"),
		Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

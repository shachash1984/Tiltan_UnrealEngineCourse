// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Class4HW/Public/Target2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget2() {}
// Cross Module References
	CLASS4HW_API UClass* Z_Construct_UClass_ATarget2_NoRegister();
	CLASS4HW_API UClass* Z_Construct_UClass_ATarget2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Class4HW();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATarget2::StaticRegisterNativesATarget2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATarget2);
	UClass* Z_Construct_UClass_ATarget2_NoRegister()
	{
		return ATarget2::StaticClass();
	}
	struct Z_Construct_UClass_ATarget2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATarget2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Class4HW,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Target2.h" },
		{ "ModuleRelativePath", "Public/Target2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget2_Statics::NewProp_meshComponent_MetaData[] = {
		{ "Category", "Target2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Target2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget2_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget2, meshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget2_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget2_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATarget2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget2_Statics::NewProp_meshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATarget2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATarget2_Statics::ClassParams = {
		&ATarget2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATarget2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATarget2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATarget2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATarget2()
	{
		if (!Z_Registration_Info_UClass_ATarget2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATarget2.OuterSingleton, Z_Construct_UClass_ATarget2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATarget2.OuterSingleton;
	}
	template<> CLASS4HW_API UClass* StaticClass<ATarget2>()
	{
		return ATarget2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget2);
	struct Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Target2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Target2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATarget2, ATarget2::StaticClass, TEXT("ATarget2"), &Z_Registration_Info_UClass_ATarget2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATarget2), 1421236576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Target2_h_2239705278(TEXT("/Script/Class4HW"),
		Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Target2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Target2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

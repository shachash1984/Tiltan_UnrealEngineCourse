// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Class4HW/Public/Arrow2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrow2() {}
// Cross Module References
	CLASS4HW_API UClass* Z_Construct_UClass_AArrow2_NoRegister();
	CLASS4HW_API UClass* Z_Construct_UClass_AArrow2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Class4HW();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArrow2::StaticRegisterNativesAArrow2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArrow2);
	UClass* Z_Construct_UClass_AArrow2_NoRegister()
	{
		return AArrow2::StaticClass();
	}
	struct Z_Construct_UClass_AArrow2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Arrow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArrow2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Class4HW,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrow2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Arrow2.h" },
		{ "ModuleRelativePath", "Public/Arrow2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrow2_Statics::NewProp_Arrow_MetaData[] = {
		{ "Category", "Arrow2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Arrow2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArrow2_Statics::NewProp_Arrow = { "Arrow", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArrow2, Arrow), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArrow2_Statics::NewProp_Arrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArrow2_Statics::NewProp_Arrow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArrow2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArrow2_Statics::NewProp_Arrow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArrow2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrow2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArrow2_Statics::ClassParams = {
		&AArrow2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArrow2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArrow2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArrow2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArrow2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArrow2()
	{
		if (!Z_Registration_Info_UClass_AArrow2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArrow2.OuterSingleton, Z_Construct_UClass_AArrow2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArrow2.OuterSingleton;
	}
	template<> CLASS4HW_API UClass* StaticClass<AArrow2>()
	{
		return AArrow2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArrow2);
	struct Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArrow2, AArrow2::StaticClass, TEXT("AArrow2"), &Z_Registration_Info_UClass_AArrow2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArrow2), 2750714546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow2_h_1623082598(TEXT("/Script/Class4HW"),
		Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

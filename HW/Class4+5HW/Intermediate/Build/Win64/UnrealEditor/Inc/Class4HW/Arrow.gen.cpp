// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Class4HW/Public/Arrow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrow() {}
// Cross Module References
	CLASS4HW_API UClass* Z_Construct_UClass_AArrow_NoRegister();
	CLASS4HW_API UClass* Z_Construct_UClass_AArrow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Class4HW();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArrow::StaticRegisterNativesAArrow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArrow);
	UClass* Z_Construct_UClass_AArrow_NoRegister()
	{
		return AArrow::StaticClass();
	}
	struct Z_Construct_UClass_AArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowHead_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowBody_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Class4HW,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Arrow.h" },
		{ "ModuleRelativePath", "Public/Arrow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrow_Statics::NewProp_ArrowHead_MetaData[] = {
		{ "Category", "Arrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Arrow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArrow_Statics::NewProp_ArrowHead = { "ArrowHead", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArrow, ArrowHead), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArrow_Statics::NewProp_ArrowHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::NewProp_ArrowHead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrow_Statics::NewProp_ArrowBody_MetaData[] = {
		{ "Category", "Arrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Arrow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArrow_Statics::NewProp_ArrowBody = { "ArrowBody", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArrow, ArrowBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArrow_Statics::NewProp_ArrowBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::NewProp_ArrowBody_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArrow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArrow_Statics::NewProp_ArrowHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArrow_Statics::NewProp_ArrowBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArrow_Statics::ClassParams = {
		&AArrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArrow()
	{
		if (!Z_Registration_Info_UClass_AArrow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArrow.OuterSingleton, Z_Construct_UClass_AArrow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArrow.OuterSingleton;
	}
	template<> CLASS4HW_API UClass* StaticClass<AArrow>()
	{
		return AArrow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArrow);
	struct Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArrow, AArrow::StaticClass, TEXT("AArrow"), &Z_Registration_Info_UClass_AArrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArrow), 1639897847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow_h_3912483073(TEXT("/Script/Class4HW"),
		Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class4_5HW_Source_Class4HW_Public_Arrow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Class4ClassWork/Public/TargetStatue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetStatue() {}
// Cross Module References
	UE5_CLASS4CLASSWORK_API UClass* Z_Construct_UClass_ATargetStatue_NoRegister();
	UE5_CLASS4CLASSWORK_API UClass* Z_Construct_UClass_ATargetStatue();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE5_Class4ClassWork();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATargetStatue::execOnHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit();
		P_NATIVE_END;
	}
	void ATargetStatue::StaticRegisterNativesATargetStatue()
	{
		UClass* Class = ATargetStatue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ATargetStatue::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATargetStatue_OnHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetStatue_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetStatue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetStatue_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetStatue, nullptr, "OnHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetStatue_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetStatue_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetStatue_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetStatue_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetStatue);
	UClass* Z_Construct_UClass_ATargetStatue_NoRegister()
	{
		return ATargetStatue::StaticClass();
	}
	struct Z_Construct_UClass_ATargetStatue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_ATargetStatue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Class4ClassWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATargetStatue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetStatue_OnHit, "OnHit" }, // 286343520
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetStatue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetStatue.h" },
		{ "ModuleRelativePath", "Public/TargetStatue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetStatue_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "TargetStatue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetStatue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetStatue_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetStatue, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetStatue_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetStatue_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetStatue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetStatue_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetStatue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetStatue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetStatue_Statics::ClassParams = {
		&ATargetStatue::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATargetStatue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetStatue_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetStatue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetStatue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetStatue()
	{
		if (!Z_Registration_Info_UClass_ATargetStatue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetStatue.OuterSingleton, Z_Construct_UClass_ATargetStatue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATargetStatue.OuterSingleton;
	}
	template<> UE5_CLASS4CLASSWORK_API UClass* StaticClass<ATargetStatue>()
	{
		return ATargetStatue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetStatue);
	struct Z_CompiledInDeferFile_FID_UE5_Class4_Source_UE5_Class4ClassWork_Public_TargetStatue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class4_Source_UE5_Class4ClassWork_Public_TargetStatue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATargetStatue, ATargetStatue::StaticClass, TEXT("ATargetStatue"), &Z_Registration_Info_UClass_ATargetStatue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetStatue), 3217952281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Class4_Source_UE5_Class4ClassWork_Public_TargetStatue_h_170710058(TEXT("/Script/UE5_Class4ClassWork"),
		Z_CompiledInDeferFile_FID_UE5_Class4_Source_UE5_Class4ClassWork_Public_TargetStatue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Class4_Source_UE5_Class4ClassWork_Public_TargetStatue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

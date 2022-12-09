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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AThrowingRock::execOnCollision)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollision(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AThrowingRock::StaticRegisterNativesAThrowingRock()
	{
		UClass* Class = AThrowingRock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollision", &AThrowingRock::execOnCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowingRock_OnCollision_Statics
	{
		struct ThrowingRock_eventOnCollision_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingRock_eventOnCollision_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingRock_eventOnCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingRock_eventOnCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingRock_eventOnCollision_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingRock_eventOnCollision_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingRock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingRock, nullptr, "OnCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::ThrowingRock_eventOnCollision_Parms), Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingRock_OnCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowingRock_OnCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowingRock);
	UClass* Z_Construct_UClass_AThrowingRock_NoRegister()
	{
		return AThrowingRock::StaticClass();
	}
	struct Z_Construct_UClass_AThrowingRock_Statics
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
	UObject* (*const Z_Construct_UClass_AThrowingRock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCPPproject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowingRock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowingRock_OnCollision, "OnCollision" }, // 2410154970
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
		{ "Comment", "//UFUNCTION()\n//\x09virtual void OnCollision(int value);\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingRock.h" },
		{ "ToolTip", "UFUNCTION()\n       virtual void OnCollision(int value);" },
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
		FuncInfo,
		Z_Construct_UClass_AThrowingRock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AThrowingRock, AThrowingRock::StaticClass, TEXT("AThrowingRock"), &Z_Registration_Info_UClass_AThrowingRock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowingRock), 2958152863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_2283074489(TEXT("/Script/FirstCPPproject"),
		Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstCPPproject_Source_FirstCPPproject_Public_ThrowingRock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

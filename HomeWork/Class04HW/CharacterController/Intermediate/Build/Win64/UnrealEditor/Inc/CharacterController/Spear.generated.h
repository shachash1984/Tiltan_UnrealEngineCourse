// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CHARACTERCONTROLLER_Spear_generated_h
#error "Spear.generated.h already included, missing '#pragma once' in Spear.h"
#endif
#define CHARACTERCONTROLLER_Spear_generated_h

#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_SPARSE_DATA
#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollision);


#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollision);


#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpear(); \
	friend struct Z_Construct_UClass_ASpear_Statics; \
public: \
	DECLARE_CLASS(ASpear, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterController"), NO_API) \
	DECLARE_SERIALIZER(ASpear)


#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpear(); \
	friend struct Z_Construct_UClass_ASpear_Statics; \
public: \
	DECLARE_CLASS(ASpear, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterController"), NO_API) \
	DECLARE_SERIALIZER(ASpear)


#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpear(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpear) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpear); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpear(ASpear&&); \
	NO_API ASpear(const ASpear&); \
public:


#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpear(ASpear&&); \
	NO_API ASpear(const ASpear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpear)


#define FID_CharacterController_Source_CharacterController_Public_Spear_h_9_PROLOG
#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_SPARSE_DATA \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_RPC_WRAPPERS \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_INCLASS \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CharacterController_Source_CharacterController_Public_Spear_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_SPARSE_DATA \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_INCLASS_NO_PURE_DECLS \
	FID_CharacterController_Source_CharacterController_Public_Spear_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERCONTROLLER_API UClass* StaticClass<class ASpear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CharacterController_Source_CharacterController_Public_Spear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

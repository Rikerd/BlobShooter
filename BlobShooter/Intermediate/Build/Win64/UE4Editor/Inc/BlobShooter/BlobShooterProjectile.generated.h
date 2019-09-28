// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BLOBSHOOTER_BlobShooterProjectile_generated_h
#error "BlobShooterProjectile.generated.h already included, missing '#pragma once' in BlobShooterProjectile.h"
#endif
#define BLOBSHOOTER_BlobShooterProjectile_generated_h

#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlobShooterProjectile(); \
	friend struct Z_Construct_UClass_ABlobShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ABlobShooterProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlobShooter"), NO_API) \
	DECLARE_SERIALIZER(ABlobShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlobShooterProjectile(); \
	friend struct Z_Construct_UClass_ABlobShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ABlobShooterProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlobShooter"), NO_API) \
	DECLARE_SERIALIZER(ABlobShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlobShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlobShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlobShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlobShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlobShooterProjectile(ABlobShooterProjectile&&); \
	NO_API ABlobShooterProjectile(const ABlobShooterProjectile&); \
public:


#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlobShooterProjectile(ABlobShooterProjectile&&); \
	NO_API ABlobShooterProjectile(const ABlobShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlobShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlobShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlobShooterProjectile)


#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ABlobShooterProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABlobShooterProjectile, ProjectileMovement); }


#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_12_PROLOG
#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_RPC_WRAPPERS \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_INCLASS \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BlobShooter_Source_BlobShooter_BlobShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOBSHOOTER_API UClass* StaticClass<class ABlobShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlobShooter_Source_BlobShooter_BlobShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

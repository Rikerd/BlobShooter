// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLOBSHOOTER_BlobShooterPawn_generated_h
#error "BlobShooterPawn.generated.h already included, missing '#pragma once' in BlobShooterPawn.h"
#endif
#define BLOBSHOOTER_BlobShooterPawn_generated_h

#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_RPC_WRAPPERS
#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlobShooterPawn(); \
	friend struct Z_Construct_UClass_ABlobShooterPawn_Statics; \
public: \
	DECLARE_CLASS(ABlobShooterPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlobShooter"), NO_API) \
	DECLARE_SERIALIZER(ABlobShooterPawn)


#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABlobShooterPawn(); \
	friend struct Z_Construct_UClass_ABlobShooterPawn_Statics; \
public: \
	DECLARE_CLASS(ABlobShooterPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlobShooter"), NO_API) \
	DECLARE_SERIALIZER(ABlobShooterPawn)


#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlobShooterPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlobShooterPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlobShooterPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlobShooterPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlobShooterPawn(ABlobShooterPawn&&); \
	NO_API ABlobShooterPawn(const ABlobShooterPawn&); \
public:


#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlobShooterPawn(ABlobShooterPawn&&); \
	NO_API ABlobShooterPawn(const ABlobShooterPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlobShooterPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlobShooterPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlobShooterPawn)


#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ABlobShooterPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ABlobShooterPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABlobShooterPawn, CameraBoom); }


#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_9_PROLOG
#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_RPC_WRAPPERS \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_INCLASS \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_INCLASS_NO_PURE_DECLS \
	BlobShooter_Source_BlobShooter_BlobShooterPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOBSHOOTER_API UClass* StaticClass<class ABlobShooterPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlobShooter_Source_BlobShooter_BlobShooterPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

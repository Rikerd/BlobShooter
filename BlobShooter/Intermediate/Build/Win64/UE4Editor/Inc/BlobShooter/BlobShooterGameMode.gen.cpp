// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlobShooter/BlobShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlobShooterGameMode() {}
// Cross Module References
	BLOBSHOOTER_API UClass* Z_Construct_UClass_ABlobShooterGameMode_NoRegister();
	BLOBSHOOTER_API UClass* Z_Construct_UClass_ABlobShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BlobShooter();
// End Cross Module References
	void ABlobShooterGameMode::StaticRegisterNativesABlobShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABlobShooterGameMode_NoRegister()
	{
		return ABlobShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABlobShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlobShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlobShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlobShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BlobShooterGameMode.h" },
		{ "ModuleRelativePath", "BlobShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlobShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlobShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlobShooterGameMode_Statics::ClassParams = {
		&ABlobShooterGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABlobShooterGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlobShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlobShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlobShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlobShooterGameMode, 2579840553);
	template<> BLOBSHOOTER_API UClass* StaticClass<ABlobShooterGameMode>()
	{
		return ABlobShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlobShooterGameMode(Z_Construct_UClass_ABlobShooterGameMode, &ABlobShooterGameMode::StaticClass, TEXT("/Script/BlobShooter"), TEXT("ABlobShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlobShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

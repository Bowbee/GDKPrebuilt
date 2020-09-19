// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/SpatialTestCharacterMovement/CharacterMovementTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementTestGameMode() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACharacterMovementTestGameMode_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACharacterMovementTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void ACharacterMovementTestGameMode::StaticRegisterNativesACharacterMovementTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACharacterMovementTestGameMode_NoRegister()
	{
		return ACharacterMovementTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterMovementTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterMovementTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovementTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameMode used for the SpatialTestCharacterMovementMap\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpatialGDK/SpatialTestCharacterMovement/CharacterMovementTestGameMode.h" },
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestCharacterMovement/CharacterMovementTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode used for the SpatialTestCharacterMovementMap" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterMovementTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterMovementTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterMovementTestGameMode_Statics::ClassParams = {
		&ACharacterMovementTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		0x00000014u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterMovementTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovementTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterMovementTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterMovementTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterMovementTestGameMode, 3308723694);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ACharacterMovementTestGameMode>()
	{
		return ACharacterMovementTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterMovementTestGameMode(Z_Construct_UClass_ACharacterMovementTestGameMode, &ACharacterMovementTestGameMode::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ACharacterMovementTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterMovementTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

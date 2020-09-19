// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedStartupActorGameMode() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AReplicatedStartupActorGameMode_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AReplicatedStartupActorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void AReplicatedStartupActorGameMode::StaticRegisterNativesAReplicatedStartupActorGameMode()
	{
	}
	UClass* Z_Construct_UClass_AReplicatedStartupActorGameMode_NoRegister()
	{
		return AReplicatedStartupActorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorGameMode.h" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicatedStartupActorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics::ClassParams = {
		&AReplicatedStartupActorGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicatedStartupActorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReplicatedStartupActorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplicatedStartupActorGameMode, 3719368694);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<AReplicatedStartupActorGameMode>()
	{
		return AReplicatedStartupActorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplicatedStartupActorGameMode(Z_Construct_UClass_AReplicatedStartupActorGameMode, &AReplicatedStartupActorGameMode::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("AReplicatedStartupActorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicatedStartupActorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

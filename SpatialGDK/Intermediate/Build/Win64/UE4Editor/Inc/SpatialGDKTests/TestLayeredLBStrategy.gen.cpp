// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKTests/SpatialGDK/LoadBalancing/LayeredLBStrategy/TestLayeredLBStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestLayeredLBStrategy() {}
// Cross Module References
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UTwoByFourLBGridStrategy_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UTwoByFourLBGridStrategy();
	SPATIALGDK_API UClass* Z_Construct_UClass_UGridBasedLBStrategy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKTests();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_ALayer1Pawn_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_ALayer1Pawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_ALayer2Pawn_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_ALayer2Pawn();
// End Cross Module References
	void UTwoByFourLBGridStrategy::StaticRegisterNativesUTwoByFourLBGridStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTwoByFourLBGridStrategy_NoRegister()
	{
		return UTwoByFourLBGridStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridBasedLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is for testing purposes only.\n */" },
		{ "IncludePath", "SpatialGDK/LoadBalancing/LayeredLBStrategy/TestLayeredLBStrategy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "SpatialGDK/LoadBalancing/LayeredLBStrategy/TestLayeredLBStrategy.h" },
		{ "ToolTip", "This class is for testing purposes only." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwoByFourLBGridStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics::ClassParams = {
		&UTwoByFourLBGridStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x041000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwoByFourLBGridStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwoByFourLBGridStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwoByFourLBGridStrategy, 232140030);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<UTwoByFourLBGridStrategy>()
	{
		return UTwoByFourLBGridStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwoByFourLBGridStrategy(Z_Construct_UClass_UTwoByFourLBGridStrategy, &UTwoByFourLBGridStrategy::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("UTwoByFourLBGridStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwoByFourLBGridStrategy);
	void ALayer1Pawn::StaticRegisterNativesALayer1Pawn()
	{
	}
	UClass* Z_Construct_UClass_ALayer1Pawn_NoRegister()
	{
		return ALayer1Pawn::StaticClass();
	}
	struct Z_Construct_UClass_ALayer1Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALayer1Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALayer1Pawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Same as a Default pawn but for testing\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpatialGDK/LoadBalancing/LayeredLBStrategy/TestLayeredLBStrategy.h" },
		{ "ModuleRelativePath", "SpatialGDK/LoadBalancing/LayeredLBStrategy/TestLayeredLBStrategy.h" },
		{ "ToolTip", "Same as a Default pawn but for testing" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALayer1Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALayer1Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALayer1Pawn_Statics::ClassParams = {
		&ALayer1Pawn::StaticClass,
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
		0x009002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ALayer1Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALayer1Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALayer1Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALayer1Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALayer1Pawn, 3981947041);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<ALayer1Pawn>()
	{
		return ALayer1Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALayer1Pawn(Z_Construct_UClass_ALayer1Pawn, &ALayer1Pawn::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("ALayer1Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALayer1Pawn);
	void ALayer2Pawn::StaticRegisterNativesALayer2Pawn()
	{
	}
	UClass* Z_Construct_UClass_ALayer2Pawn_NoRegister()
	{
		return ALayer2Pawn::StaticClass();
	}
	struct Z_Construct_UClass_ALayer2Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALayer2Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALayer2Pawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Same as a Default pawn but for testing\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpatialGDK/LoadBalancing/LayeredLBStrategy/TestLayeredLBStrategy.h" },
		{ "ModuleRelativePath", "SpatialGDK/LoadBalancing/LayeredLBStrategy/TestLayeredLBStrategy.h" },
		{ "ToolTip", "Same as a Default pawn but for testing" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALayer2Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALayer2Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALayer2Pawn_Statics::ClassParams = {
		&ALayer2Pawn::StaticClass,
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
		0x009002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ALayer2Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALayer2Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALayer2Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALayer2Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALayer2Pawn, 1018203427);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<ALayer2Pawn>()
	{
		return ALayer2Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALayer2Pawn(Z_Construct_UClass_ALayer2Pawn, &ALayer2Pawn::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("ALayer2Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALayer2Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

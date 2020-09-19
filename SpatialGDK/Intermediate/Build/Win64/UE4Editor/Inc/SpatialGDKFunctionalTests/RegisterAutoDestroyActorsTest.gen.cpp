// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/RegisterAutoDestroyActorsTest/RegisterAutoDestroyActorsTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegisterAutoDestroyActorsTest() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2();
// End Cross Module References
	void ARegisterAutoDestroyActorsTestPart1::StaticRegisterNativesARegisterAutoDestroyActorsTestPart1()
	{
	}
	UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_NoRegister()
	{
		return ARegisterAutoDestroyActorsTestPart1::StaticClass();
	}
	struct Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * These Tests are meant to test the functionality of RegisterAutoDestroyActor in Test environments.\n * Keep in mind that for it to run correctly you need to run both part 1 and 2, and in that order,\n * since the auto destruction happens at the end of the test, so you need the next test to check \n * that it is working. This test should work both with and without load-balancing, as long as \n * the servers have global interest area (limitation at this time).\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/RegisterAutoDestroyActorsTest/RegisterAutoDestroyActorsTest.h" },
		{ "ModuleRelativePath", "SpatialGDK/RegisterAutoDestroyActorsTest/RegisterAutoDestroyActorsTest.h" },
		{ "ToolTip", "These Tests are meant to test the functionality of RegisterAutoDestroyActor in Test environments.\nKeep in mind that for it to run correctly you need to run both part 1 and 2, and in that order,\nsince the auto destruction happens at the end of the test, so you need the next test to check\nthat it is working. This test should work both with and without load-balancing, as long as\nthe servers have global interest area (limitation at this time)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARegisterAutoDestroyActorsTestPart1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics::ClassParams = {
		&ARegisterAutoDestroyActorsTestPart1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARegisterAutoDestroyActorsTestPart1, 3131582165);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ARegisterAutoDestroyActorsTestPart1>()
	{
		return ARegisterAutoDestroyActorsTestPart1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARegisterAutoDestroyActorsTestPart1(Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart1, &ARegisterAutoDestroyActorsTestPart1::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ARegisterAutoDestroyActorsTestPart1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARegisterAutoDestroyActorsTestPart1);
	void ARegisterAutoDestroyActorsTestPart2::StaticRegisterNativesARegisterAutoDestroyActorsTestPart2()
	{
	}
	UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_NoRegister()
	{
		return ARegisterAutoDestroyActorsTestPart2::StaticClass();
	}
	struct Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/RegisterAutoDestroyActorsTest/RegisterAutoDestroyActorsTest.h" },
		{ "ModuleRelativePath", "SpatialGDK/RegisterAutoDestroyActorsTest/RegisterAutoDestroyActorsTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARegisterAutoDestroyActorsTestPart2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics::ClassParams = {
		&ARegisterAutoDestroyActorsTestPart2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARegisterAutoDestroyActorsTestPart2, 675771783);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ARegisterAutoDestroyActorsTestPart2>()
	{
		return ARegisterAutoDestroyActorsTestPart2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARegisterAutoDestroyActorsTestPart2(Z_Construct_UClass_ARegisterAutoDestroyActorsTestPart2, &ARegisterAutoDestroyActorsTestPart2::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ARegisterAutoDestroyActorsTestPart2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARegisterAutoDestroyActorsTestPart2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

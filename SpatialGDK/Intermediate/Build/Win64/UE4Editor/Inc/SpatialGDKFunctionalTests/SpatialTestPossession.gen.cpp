// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/SpatialTestPossession/SpatialTestPossession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialTestPossession() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialTestPossession_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialTestPossession();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void ASpatialTestPossession::StaticRegisterNativesASpatialTestPossession()
	{
	}
	UClass* Z_Construct_UClass_ASpatialTestPossession_NoRegister()
	{
		return ASpatialTestPossession::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialTestPossession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialTestPossession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialTestPossession_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/SpatialTestPossession/SpatialTestPossession.h" },
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestPossession/SpatialTestPossession.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialTestPossession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialTestPossession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialTestPossession_Statics::ClassParams = {
		&ASpatialTestPossession::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpatialTestPossession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestPossession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialTestPossession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialTestPossession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialTestPossession, 4195237286);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ASpatialTestPossession>()
	{
		return ASpatialTestPossession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialTestPossession(Z_Construct_UClass_ASpatialTestPossession, &ASpatialTestPossession::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ASpatialTestPossession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialTestPossession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

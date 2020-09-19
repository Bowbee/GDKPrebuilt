// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/Test1x2GridStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest1x2GridStrategy() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_UTest1x2GridStrategy_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_UTest1x2GridStrategy();
	SPATIALGDK_API UClass* Z_Construct_UClass_UGridBasedLBStrategy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void UTest1x2GridStrategy::StaticRegisterNativesUTest1x2GridStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTest1x2GridStrategy_NoRegister()
	{
		return UTest1x2GridStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTest1x2GridStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTest1x2GridStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridBasedLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest1x2GridStrategy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A 1 by 2 (rows by columns) load balancing strategy for testing zoning features.\n * Has a 10000 unit interest border, so almost everything should be in view.\n */" },
		{ "IncludePath", "Test1x2GridStrategy.h" },
		{ "ModuleRelativePath", "Public/Test1x2GridStrategy.h" },
		{ "ToolTip", "A 1 by 2 (rows by columns) load balancing strategy for testing zoning features.\nHas a 10000 unit interest border, so almost everything should be in view." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTest1x2GridStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTest1x2GridStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTest1x2GridStrategy_Statics::ClassParams = {
		&UTest1x2GridStrategy::StaticClass,
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
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UTest1x2GridStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTest1x2GridStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTest1x2GridStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTest1x2GridStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest1x2GridStrategy, 893333289);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<UTest1x2GridStrategy>()
	{
		return UTest1x2GridStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest1x2GridStrategy(Z_Construct_UClass_UTest1x2GridStrategy, &UTest1x2GridStrategy::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("UTest1x2GridStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest1x2GridStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

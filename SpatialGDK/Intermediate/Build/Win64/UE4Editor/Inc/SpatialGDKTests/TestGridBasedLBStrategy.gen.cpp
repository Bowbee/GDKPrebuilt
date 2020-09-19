// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKTests/SpatialGDK/LoadBalancing/GridBasedLBStrategy/TestGridBasedLBStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGridBasedLBStrategy() {}
// Cross Module References
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UTestGridBasedLBStrategy_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UTestGridBasedLBStrategy();
	SPATIALGDK_API UClass* Z_Construct_UClass_UGridBasedLBStrategy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKTests();
// End Cross Module References
	void UTestGridBasedLBStrategy::StaticRegisterNativesUTestGridBasedLBStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTestGridBasedLBStrategy_NoRegister()
	{
		return UTestGridBasedLBStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTestGridBasedLBStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestGridBasedLBStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridBasedLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestGridBasedLBStrategy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is for testing purposes only.\n */" },
		{ "IncludePath", "SpatialGDK/LoadBalancing/GridBasedLBStrategy/TestGridBasedLBStrategy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "SpatialGDK/LoadBalancing/GridBasedLBStrategy/TestGridBasedLBStrategy.h" },
		{ "ToolTip", "This class is for testing purposes only." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestGridBasedLBStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestGridBasedLBStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestGridBasedLBStrategy_Statics::ClassParams = {
		&UTestGridBasedLBStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTestGridBasedLBStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestGridBasedLBStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestGridBasedLBStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestGridBasedLBStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestGridBasedLBStrategy, 2485012154);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<UTestGridBasedLBStrategy>()
	{
		return UTestGridBasedLBStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestGridBasedLBStrategy(Z_Construct_UClass_UTestGridBasedLBStrategy, &UTestGridBasedLBStrategy::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("UTestGridBasedLBStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestGridBasedLBStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

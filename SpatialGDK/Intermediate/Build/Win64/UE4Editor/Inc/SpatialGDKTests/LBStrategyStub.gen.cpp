// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKTests/SpatialGDK/LoadBalancing/AbstractLBStrategy/LBStrategyStub.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLBStrategyStub() {}
// Cross Module References
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_ULBStrategyStub_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_ULBStrategyStub();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKTests();
// End Cross Module References
	void ULBStrategyStub::StaticRegisterNativesULBStrategyStub()
	{
	}
	UClass* Z_Construct_UClass_ULBStrategyStub_NoRegister()
	{
		return ULBStrategyStub::StaticClass();
	}
	struct Z_Construct_UClass_ULBStrategyStub_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULBStrategyStub_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULBStrategyStub_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is for testing purposes only.\n */" },
		{ "IncludePath", "SpatialGDK/LoadBalancing/AbstractLBStrategy/LBStrategyStub.h" },
		{ "ModuleRelativePath", "SpatialGDK/LoadBalancing/AbstractLBStrategy/LBStrategyStub.h" },
		{ "ToolTip", "This class is for testing purposes only." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULBStrategyStub_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULBStrategyStub>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULBStrategyStub_Statics::ClassParams = {
		&ULBStrategyStub::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULBStrategyStub_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULBStrategyStub_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULBStrategyStub()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULBStrategyStub_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULBStrategyStub, 1971635147);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<ULBStrategyStub>()
	{
		return ULBStrategyStub::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULBStrategyStub(Z_Construct_UClass_ULBStrategyStub, &ULBStrategyStub::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("ULBStrategyStub"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULBStrategyStub);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

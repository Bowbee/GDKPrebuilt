// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/SpatialFunctionalTestGridLBStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialFunctionalTestGridLBStrategy() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy();
	SPATIALGDK_API UClass* Z_Construct_UClass_UGridBasedLBStrategy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_NoRegister();
// End Cross Module References
	void USpatialFunctionalTestGridLBStrategy::StaticRegisterNativesUSpatialFunctionalTestGridLBStrategy()
	{
	}
	UClass* Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_NoRegister()
	{
		return USpatialFunctionalTestGridLBStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridBasedLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A 2 by 2 (rows by columns) load balancing strategy for testing zoning features.\n * You should use this Grid LBS instead of the UGridBasedLBStrategy because it allows you to\n * do runtime delegations of Actors to specific Server Workers.\n */" },
		{ "IncludePath", "SpatialFunctionalTestGridLBStrategy.h" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestGridLBStrategy.h" },
		{ "ToolTip", "A 2 by 2 (rows by columns) load balancing strategy for testing zoning features.\nYou should use this Grid LBS instead of the UGridBasedLBStrategy because it allows you to\ndo runtime delegations of Actors to specific Server Workers." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_NoRegister, (int32)VTABLE_OFFSET(USpatialFunctionalTestGridLBStrategy, ISpatialFunctionalTestLBDelegationInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialFunctionalTestGridLBStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::ClassParams = {
		&USpatialFunctionalTestGridLBStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialFunctionalTestGridLBStrategy, 686640098);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<USpatialFunctionalTestGridLBStrategy>()
	{
		return USpatialFunctionalTestGridLBStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialFunctionalTestGridLBStrategy(Z_Construct_UClass_USpatialFunctionalTestGridLBStrategy, &USpatialFunctionalTestGridLBStrategy::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("USpatialFunctionalTestGridLBStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialFunctionalTestGridLBStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

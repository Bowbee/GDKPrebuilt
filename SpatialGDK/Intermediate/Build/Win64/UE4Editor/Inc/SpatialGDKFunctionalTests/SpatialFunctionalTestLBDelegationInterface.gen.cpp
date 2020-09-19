// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/SpatialFunctionalTestLBDelegationInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialFunctionalTestLBDelegationInterface() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void USpatialFunctionalTestLBDelegationInterface::StaticRegisterNativesUSpatialFunctionalTestLBDelegationInterface()
	{
	}
	UClass* Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_NoRegister()
	{
		return USpatialFunctionalTestLBDelegationInterface::StaticClass();
	}
	struct Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestLBDelegationInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISpatialFunctionalTestLBDelegationInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics::ClassParams = {
		&USpatialFunctionalTestLBDelegationInterface::StaticClass,
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
		0x000840A1u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialFunctionalTestLBDelegationInterface, 2605821658);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<USpatialFunctionalTestLBDelegationInterface>()
	{
		return USpatialFunctionalTestLBDelegationInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialFunctionalTestLBDelegationInterface(Z_Construct_UClass_USpatialFunctionalTestLBDelegationInterface, &USpatialFunctionalTestLBDelegationInterface::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("USpatialFunctionalTestLBDelegationInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialFunctionalTestLBDelegationInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/LoadBalancing/AbstractLockingPolicy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractLockingPolicy() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLockingPolicy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLockingPolicy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
// End Cross Module References
	void UAbstractLockingPolicy::StaticRegisterNativesUAbstractLockingPolicy()
	{
	}
	UClass* Z_Construct_UClass_UAbstractLockingPolicy_NoRegister()
	{
		return UAbstractLockingPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UAbstractLockingPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbstractLockingPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractLockingPolicy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadBalancing/AbstractLockingPolicy.h" },
		{ "ModuleRelativePath", "Public/LoadBalancing/AbstractLockingPolicy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbstractLockingPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbstractLockingPolicy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbstractLockingPolicy_Statics::ClassParams = {
		&UAbstractLockingPolicy::StaticClass,
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
		0x001000A1u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UAbstractLockingPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLockingPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbstractLockingPolicy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbstractLockingPolicy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbstractLockingPolicy, 2317508296);
	template<> SPATIALGDK_API UClass* StaticClass<UAbstractLockingPolicy>()
	{
		return UAbstractLockingPolicy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbstractLockingPolicy(Z_Construct_UClass_UAbstractLockingPolicy, &UAbstractLockingPolicy::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("UAbstractLockingPolicy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbstractLockingPolicy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

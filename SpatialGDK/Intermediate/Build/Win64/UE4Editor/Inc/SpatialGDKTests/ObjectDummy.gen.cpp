// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKTests/SpatialGDK/Utils/RPCContainer/ObjectDummy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectDummy() {}
// Cross Module References
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UObjectDummy_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UObjectDummy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKTests();
// End Cross Module References
	void UObjectDummy::StaticRegisterNativesUObjectDummy()
	{
	}
	UClass* Z_Construct_UClass_UObjectDummy_NoRegister()
	{
		return UObjectDummy::StaticClass();
	}
	struct Z_Construct_UClass_UObjectDummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectDummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectDummy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialGDK/Utils/RPCContainer/ObjectDummy.h" },
		{ "ModuleRelativePath", "SpatialGDK/Utils/RPCContainer/ObjectDummy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectDummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectDummy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectDummy_Statics::ClassParams = {
		&UObjectDummy::StaticClass,
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
		0x000000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectDummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectDummy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectDummy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectDummy, 1369351466);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<UObjectDummy>()
	{
		return UObjectDummy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectDummy(Z_Construct_UClass_UObjectDummy, &UObjectDummy::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("UObjectDummy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectDummy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKTests/SpatialGDK/Utils/RPCContainer/ObjectStub.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectStub() {}
// Cross Module References
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UObjectStub_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UObjectStub();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKTests();
// End Cross Module References
	void UObjectStub::StaticRegisterNativesUObjectStub()
	{
	}
	UClass* Z_Construct_UClass_UObjectStub_NoRegister()
	{
		return UObjectStub::StaticClass();
	}
	struct Z_Construct_UClass_UObjectStub_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectStub_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectStub_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialGDK/Utils/RPCContainer/ObjectStub.h" },
		{ "ModuleRelativePath", "SpatialGDK/Utils/RPCContainer/ObjectStub.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectStub_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectStub>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectStub_Statics::ClassParams = {
		&UObjectStub::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectStub_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectStub_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectStub()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectStub_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectStub, 3987088579);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<UObjectStub>()
	{
		return UObjectStub::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectStub(Z_Construct_UClass_UObjectStub, &UObjectStub::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("UObjectStub"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectStub);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

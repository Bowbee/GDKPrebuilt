// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKTests/SpatialGDK/Utils/RPCContainer/ObjectSpy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSpy() {}
// Cross Module References
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UObjectSpy_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UObjectSpy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKTests();
// End Cross Module References
	void UObjectSpy::StaticRegisterNativesUObjectSpy()
	{
	}
	UClass* Z_Construct_UClass_UObjectSpy_NoRegister()
	{
		return UObjectSpy::StaticClass();
	}
	struct Z_Construct_UClass_UObjectSpy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectSpy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSpy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace SpyUtils\n" },
		{ "IncludePath", "SpatialGDK/Utils/RPCContainer/ObjectSpy.h" },
		{ "ModuleRelativePath", "SpatialGDK/Utils/RPCContainer/ObjectSpy.h" },
		{ "ToolTip", "namespace SpyUtils" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectSpy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectSpy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectSpy_Statics::ClassParams = {
		&UObjectSpy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectSpy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSpy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectSpy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectSpy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectSpy, 558157663);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<UObjectSpy>()
	{
		return UObjectSpy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectSpy(Z_Construct_UClass_UObjectSpy, &UObjectSpy::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("UObjectSpy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectSpy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

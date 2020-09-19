// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/SpatialTestPossession/SpatialTestRepossession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialTestRepossession() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialTestRepossession_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialTestRepossession();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ATestPossessionPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void ASpatialTestRepossession::StaticRegisterNativesASpatialTestRepossession()
	{
	}
	UClass* Z_Construct_UClass_ASpatialTestRepossession_NoRegister()
	{
		return ASpatialTestRepossession::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialTestRepossession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Controllers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controllers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialTestRepossession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialTestRepossession_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/SpatialTestPossession/SpatialTestRepossession.h" },
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestPossession/SpatialTestRepossession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_TestPawns_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestPossession/SpatialTestRepossession.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_TestPawns = { "TestPawns", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialTestRepossession, TestPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_TestPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_TestPawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_TestPawns_Inner = { "TestPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATestPossessionPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_Controllers_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestPossession/SpatialTestRepossession.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialTestRepossession, Controllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_Controllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_Controllers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_Controllers_Inner = { "Controllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialTestRepossession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_TestPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_TestPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_Controllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialTestRepossession_Statics::NewProp_Controllers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialTestRepossession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialTestRepossession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialTestRepossession_Statics::ClassParams = {
		&ASpatialTestRepossession::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpatialTestRepossession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestRepossession_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialTestRepossession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestRepossession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialTestRepossession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialTestRepossession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialTestRepossession, 1183299238);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ASpatialTestRepossession>()
	{
		return ASpatialTestRepossession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialTestRepossession(Z_Construct_UClass_ASpatialTestRepossession, &ASpatialTestRepossession::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ASpatialTestRepossession"), false, nullptr, nullptr, nullptr);

	void ASpatialTestRepossession::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Controllers(TEXT("Controllers"));
		static const FName Name_TestPawns(TEXT("TestPawns"));

		const bool bIsValid = true
			&& Name_Controllers == ClassReps[(int32)ENetFields_Private::Controllers].Property->GetFName()
			&& Name_TestPawns == ClassReps[(int32)ENetFields_Private::TestPawns].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpatialTestRepossession"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialTestRepossession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

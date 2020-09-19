// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3157/RPCInInterfaceTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCInInterfaceTest() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARPCInInterfaceTest_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARPCInInterfaceTest();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARPCInInterfaceActor_NoRegister();
// End Cross Module References
	void ARPCInInterfaceTest::StaticRegisterNativesARPCInInterfaceTest()
	{
	}
	UClass* Z_Construct_UClass_ARPCInInterfaceTest_NoRegister()
	{
		return ARPCInInterfaceTest::StaticClass();
	}
	struct Z_Construct_UClass_ARPCInInterfaceTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPCInInterfaceTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPCInInterfaceTest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/UNR-3157/RPCInInterfaceTest.h" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3157/RPCInInterfaceTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPCInInterfaceTest_Statics::NewProp_TestActor_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3157/RPCInInterfaceTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPCInInterfaceTest_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPCInInterfaceTest, TestActor), Z_Construct_UClass_ARPCInInterfaceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPCInInterfaceTest_Statics::NewProp_TestActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPCInInterfaceTest_Statics::NewProp_TestActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPCInInterfaceTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPCInInterfaceTest_Statics::NewProp_TestActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPCInInterfaceTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPCInInterfaceTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPCInInterfaceTest_Statics::ClassParams = {
		&ARPCInInterfaceTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARPCInInterfaceTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPCInInterfaceTest_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ARPCInInterfaceTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPCInInterfaceTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPCInInterfaceTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPCInInterfaceTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPCInInterfaceTest, 3636580737);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ARPCInInterfaceTest>()
	{
		return ARPCInInterfaceTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPCInInterfaceTest(Z_Construct_UClass_ARPCInInterfaceTest, &ARPCInInterfaceTest::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ARPCInInterfaceTest"), false, nullptr, nullptr, nullptr);

	void ARPCInInterfaceTest::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TestActor(TEXT("TestActor"));

		const bool bIsValid = true
			&& Name_TestActor == ClassReps[(int32)ENetFields_Private::TestActor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARPCInInterfaceTest"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPCInInterfaceTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

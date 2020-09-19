// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/DormancyAndTombstoneTest/DormancyTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDormancyTestActor() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ADormancyTestActor_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ADormancyTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void ADormancyTestActor::StaticRegisterNativesADormancyTestActor()
	{
	}
	UClass* Z_Construct_UClass_ADormancyTestActor_NoRegister()
	{
		return ADormancyTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ADormancyTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestIntProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TestIntProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADormancyTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADormancyTestActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Helper actor for the dormancy tests.\n * Has a TestIntProp to see if it replicates when it should/shouldn't.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "SpatialGDK/DormancyAndTombstoneTest/DormancyTestActor.h" },
		{ "ModuleRelativePath", "SpatialGDK/DormancyAndTombstoneTest/DormancyTestActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A Helper actor for the dormancy tests.\nHas a TestIntProp to see if it replicates when it should/shouldn't." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADormancyTestActor_Statics::NewProp_TestIntProp_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/DormancyAndTombstoneTest/DormancyTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADormancyTestActor_Statics::NewProp_TestIntProp = { "TestIntProp", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADormancyTestActor, TestIntProp), METADATA_PARAMS(Z_Construct_UClass_ADormancyTestActor_Statics::NewProp_TestIntProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADormancyTestActor_Statics::NewProp_TestIntProp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADormancyTestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADormancyTestActor_Statics::NewProp_TestIntProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADormancyTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADormancyTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADormancyTestActor_Statics::ClassParams = {
		&ADormancyTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADormancyTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADormancyTestActor_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ADormancyTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADormancyTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADormancyTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADormancyTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADormancyTestActor, 3445378729);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ADormancyTestActor>()
	{
		return ADormancyTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADormancyTestActor(Z_Construct_UClass_ADormancyTestActor, &ADormancyTestActor::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ADormancyTestActor"), false, nullptr, nullptr, nullptr);

	void ADormancyTestActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TestIntProp(TEXT("TestIntProp"));

		const bool bIsValid = true
			&& Name_TestIntProp == ClassReps[(int32)ENetFields_Private::TestIntProp].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADormancyTestActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADormancyTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3066/OwnerOnlyTestPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwnerOnlyTestPawn() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AOwnerOnlyTestPawn_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AOwnerOnlyTestPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void AOwnerOnlyTestPawn::StaticRegisterNativesAOwnerOnlyTestPawn()
	{
	}
	UClass* Z_Construct_UClass_AOwnerOnlyTestPawn_NoRegister()
	{
		return AOwnerOnlyTestPawn::StaticClass();
	}
	struct Z_Construct_UClass_AOwnerOnlyTestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestInt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpatialGDK/UNR-3066/OwnerOnlyTestPawn.h" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3066/OwnerOnlyTestPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::NewProp_TestInt_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3066/OwnerOnlyTestPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::NewProp_TestInt = { "TestInt", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOwnerOnlyTestPawn, TestInt), METADATA_PARAMS(Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::NewProp_TestInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::NewProp_TestInt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::NewProp_TestInt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOwnerOnlyTestPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::ClassParams = {
		&AOwnerOnlyTestPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOwnerOnlyTestPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOwnerOnlyTestPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOwnerOnlyTestPawn, 2372161504);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<AOwnerOnlyTestPawn>()
	{
		return AOwnerOnlyTestPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOwnerOnlyTestPawn(Z_Construct_UClass_AOwnerOnlyTestPawn, &AOwnerOnlyTestPawn::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("AOwnerOnlyTestPawn"), false, nullptr, nullptr, nullptr);

	void AOwnerOnlyTestPawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TestInt(TEXT("TestInt"));

		const bool bIsValid = true
			&& Name_TestInt == ClassReps[(int32)ENetFields_Private::TestInt].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOwnerOnlyTestPawn"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOwnerOnlyTestPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

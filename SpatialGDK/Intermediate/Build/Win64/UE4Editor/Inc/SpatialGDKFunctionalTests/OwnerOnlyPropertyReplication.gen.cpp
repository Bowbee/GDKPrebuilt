// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3066/OwnerOnlyPropertyReplication.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwnerOnlyPropertyReplication() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AOwnerOnlyPropertyReplication_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AOwnerOnlyPropertyReplication();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AOwnerOnlyTestPawn_NoRegister();
// End Cross Module References
	void AOwnerOnlyPropertyReplication::StaticRegisterNativesAOwnerOnlyPropertyReplication()
	{
	}
	UClass* Z_Construct_UClass_AOwnerOnlyPropertyReplication_NoRegister()
	{
		return AOwnerOnlyPropertyReplication::StaticClass();
	}
	struct Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/UNR-3066/OwnerOnlyPropertyReplication.h" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3066/OwnerOnlyPropertyReplication.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3066/OwnerOnlyPropertyReplication.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOwnerOnlyPropertyReplication, Pawn), Z_Construct_UClass_AOwnerOnlyTestPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::NewProp_Pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOwnerOnlyPropertyReplication>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::ClassParams = {
		&AOwnerOnlyPropertyReplication::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOwnerOnlyPropertyReplication()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOwnerOnlyPropertyReplication_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOwnerOnlyPropertyReplication, 2395128063);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<AOwnerOnlyPropertyReplication>()
	{
		return AOwnerOnlyPropertyReplication::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOwnerOnlyPropertyReplication(Z_Construct_UClass_AOwnerOnlyPropertyReplication, &AOwnerOnlyPropertyReplication::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("AOwnerOnlyPropertyReplication"), false, nullptr, nullptr, nullptr);

	void AOwnerOnlyPropertyReplication::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Pawn(TEXT("Pawn"));

		const bool bIsValid = true
			&& Name_Pawn == ClassReps[(int32)ENetFields_Private::Pawn].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOwnerOnlyPropertyReplication"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOwnerOnlyPropertyReplication);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

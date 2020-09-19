// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3761/SpatialTestNetReference/CubeWithReferences.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeWithReferences() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACubeWithReferences_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACubeWithReferences();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AReplicatedTestActorBase();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void ACubeWithReferences::StaticRegisterNativesACubeWithReferences()
	{
	}
	UClass* Z_Construct_UClass_ACubeWithReferences_NoRegister()
	{
		return ACubeWithReferences::StaticClass();
	}
	struct Z_Construct_UClass_ACubeWithReferences_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbour2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Neighbour2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbour1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Neighbour1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeWithReferences_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AReplicatedTestActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeWithReferences_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialGDK/UNR-3761/SpatialTestNetReference/CubeWithReferences.h" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestNetReference/CubeWithReferences.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour2_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestNetReference/CubeWithReferences.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour2 = { "Neighbour2", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubeWithReferences, Neighbour2), Z_Construct_UClass_ACubeWithReferences_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour1_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestNetReference/CubeWithReferences.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour1 = { "Neighbour1", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubeWithReferences, Neighbour1), Z_Construct_UClass_ACubeWithReferences_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeWithReferences_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeWithReferences_Statics::NewProp_Neighbour1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeWithReferences_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeWithReferences>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeWithReferences_Statics::ClassParams = {
		&ACubeWithReferences::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubeWithReferences_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubeWithReferences_Statics::PropPointers),
		0,
		0x008000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ACubeWithReferences_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeWithReferences_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeWithReferences()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeWithReferences_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeWithReferences, 1564524404);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ACubeWithReferences>()
	{
		return ACubeWithReferences::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeWithReferences(Z_Construct_UClass_ACubeWithReferences, &ACubeWithReferences::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ACubeWithReferences"), false, nullptr, nullptr, nullptr);

	void ACubeWithReferences::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Neighbour1(TEXT("Neighbour1"));
		static const FName Name_Neighbour2(TEXT("Neighbour2"));

		const bool bIsValid = true
			&& Name_Neighbour1 == ClassReps[(int32)ENetFields_Private::Neighbour1].Property->GetFName()
			&& Name_Neighbour2 == ClassReps[(int32)ENetFields_Private::Neighbour2].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACubeWithReferences"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeWithReferences);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

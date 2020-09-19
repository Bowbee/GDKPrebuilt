// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/SpatialTestReplicatedStartupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialTestReplicatedStartupActor() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialTestReplicatedStartupActor_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialTestReplicatedStartupActor();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void ASpatialTestReplicatedStartupActor::StaticRegisterNativesASpatialTestReplicatedStartupActor()
	{
	}
	UClass* Z_Construct_UClass_ASpatialTestReplicatedStartupActor_NoRegister()
	{
		return ASpatialTestReplicatedStartupActor::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidReference_MetaData[];
#endif
		static void NewProp_bIsValidReference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/SpatialTestReplicatedStartupActor.h" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/SpatialTestReplicatedStartupActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::NewProp_bIsValidReference_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/SpatialTestReplicatedStartupActor.h" },
	};
#endif
	void Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::NewProp_bIsValidReference_SetBit(void* Obj)
	{
		((ASpatialTestReplicatedStartupActor*)Obj)->bIsValidReference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::NewProp_bIsValidReference = { "bIsValidReference", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialTestReplicatedStartupActor), &Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::NewProp_bIsValidReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::NewProp_bIsValidReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::NewProp_bIsValidReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::NewProp_bIsValidReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialTestReplicatedStartupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::ClassParams = {
		&ASpatialTestReplicatedStartupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialTestReplicatedStartupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialTestReplicatedStartupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialTestReplicatedStartupActor, 3393305584);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ASpatialTestReplicatedStartupActor>()
	{
		return ASpatialTestReplicatedStartupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialTestReplicatedStartupActor(Z_Construct_UClass_ASpatialTestReplicatedStartupActor, &ASpatialTestReplicatedStartupActor::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ASpatialTestReplicatedStartupActor"), false, nullptr, nullptr, nullptr);

	void ASpatialTestReplicatedStartupActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsValidReference(TEXT("bIsValidReference"));

		const bool bIsValid = true
			&& Name_bIsValidReference == ClassReps[(int32)ENetFields_Private::bIsValidReference].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpatialTestReplicatedStartupActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialTestReplicatedStartupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

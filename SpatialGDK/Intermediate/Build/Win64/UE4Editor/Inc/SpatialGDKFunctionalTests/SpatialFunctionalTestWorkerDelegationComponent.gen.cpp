// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/SpatialFunctionalTestWorkerDelegationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialFunctionalTestWorkerDelegationComponent() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void USpatialFunctionalTestWorkerDelegationComponent::StaticRegisterNativesUSpatialFunctionalTestWorkerDelegationComponent()
	{
	}
	UClass* Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_NoRegister()
	{
		return USpatialFunctionalTestWorkerDelegationComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPersistent_MetaData[];
#endif
		static void NewProp_bIsPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPersistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WorkerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Actor Component for Functional Testing purposes only that allows you to delegate its Actor to a specific Server Worker.\n * Note that currently this functionality only works in single layer Load Balancing Strategies, and your Default Load\n * Balancing Strategy needs to implement ISpatialFunctionalTestLBDelegationInterface.\n */" },
		{ "IncludePath", "SpatialFunctionalTestWorkerDelegationComponent.h" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestWorkerDelegationComponent.h" },
		{ "ToolTip", "* Actor Component for Functional Testing purposes only that allows you to delegate its Actor to a specific Server Worker.\n* Note that currently this functionality only works in single layer Load Balancing Strategies, and your Default Load\n* Balancing Strategy needs to implement ISpatialFunctionalTestLBDelegationInterface." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_bIsPersistent_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestWorkerDelegationComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_bIsPersistent_SetBit(void* Obj)
	{
		((USpatialFunctionalTestWorkerDelegationComponent*)Obj)->bIsPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_bIsPersistent = { "bIsPersistent", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialFunctionalTestWorkerDelegationComponent), &Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_bIsPersistent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_bIsPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_bIsPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_WorkerId_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestWorkerDelegationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_WorkerId = { "WorkerId", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialFunctionalTestWorkerDelegationComponent, WorkerId), METADATA_PARAMS(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_WorkerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_WorkerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_bIsPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::NewProp_WorkerId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialFunctionalTestWorkerDelegationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::ClassParams = {
		&USpatialFunctionalTestWorkerDelegationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialFunctionalTestWorkerDelegationComponent, 1843140544);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<USpatialFunctionalTestWorkerDelegationComponent>()
	{
		return USpatialFunctionalTestWorkerDelegationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialFunctionalTestWorkerDelegationComponent(Z_Construct_UClass_USpatialFunctionalTestWorkerDelegationComponent, &USpatialFunctionalTestWorkerDelegationComponent::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("USpatialFunctionalTestWorkerDelegationComponent"), false, nullptr, nullptr, nullptr);

	void USpatialFunctionalTestWorkerDelegationComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WorkerId(TEXT("WorkerId"));
		static const FName Name_bIsPersistent(TEXT("bIsPersistent"));

		const bool bIsValid = true
			&& Name_WorkerId == ClassReps[(int32)ENetFields_Private::WorkerId].Property->GetFName()
			&& Name_bIsPersistent == ClassReps[(int32)ENetFields_Private::bIsPersistent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USpatialFunctionalTestWorkerDelegationComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialFunctionalTestWorkerDelegationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

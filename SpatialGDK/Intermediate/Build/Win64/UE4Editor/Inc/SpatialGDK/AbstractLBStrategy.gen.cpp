// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/LoadBalancing/AbstractLBStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractLBStrategy() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
// End Cross Module References
	void UAbstractLBStrategy::StaticRegisterNativesUAbstractLBStrategy()
	{
	}
	UClass* Z_Construct_UClass_UAbstractLBStrategy_NoRegister()
	{
		return UAbstractLBStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UAbstractLBStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbstractLBStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractLBStrategy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class can be used to define a load balancing strategy.\n * At runtime, all unreal workers will:\n * 1. Instantiate an instance of the strategy class specified in TODO: where are we adding this?\n * 2. Call the Init method, passing the current USpatialNetDriver.\n * 3. (Translator / Enforcer only): Initialize Worker to VirtualWorkerId mapping with\n *      VirtualWorkerIds from GetVirtualWorkerIds() and begin assinging workers.\n *    (Other Workers): SetLocalVirtualWorkerId when assigned a VirtualWorkerId.\n * 4. For each Actor being replicated:\n *   a) Check if authority should be relinquished by calling ShouldHaveAuthority\n *   b) If true: Send authority change request to Translator/Enforcer passing in new\n *        VirtualWorkerId returned by WhoShouldHaveAuthority\n */" },
		{ "IncludePath", "LoadBalancing/AbstractLBStrategy.h" },
		{ "ModuleRelativePath", "Public/LoadBalancing/AbstractLBStrategy.h" },
		{ "ToolTip", "This class can be used to define a load balancing strategy.\nAt runtime, all unreal workers will:\n1. Instantiate an instance of the strategy class specified in TODO: where are we adding this?\n2. Call the Init method, passing the current USpatialNetDriver.\n3. (Translator / Enforcer only): Initialize Worker to VirtualWorkerId mapping with\n     VirtualWorkerIds from GetVirtualWorkerIds() and begin assinging workers.\n   (Other Workers): SetLocalVirtualWorkerId when assigned a VirtualWorkerId.\n4. For each Actor being replicated:\n  a) Check if authority should be relinquished by calling ShouldHaveAuthority\n  b) If true: Send authority change request to Translator/Enforcer passing in new\n       VirtualWorkerId returned by WhoShouldHaveAuthority" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbstractLBStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbstractLBStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbstractLBStrategy_Statics::ClassParams = {
		&UAbstractLBStrategy::StaticClass,
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
		0x001000A1u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UAbstractLBStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLBStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbstractLBStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbstractLBStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbstractLBStrategy, 669736129);
	template<> SPATIALGDK_API UClass* StaticClass<UAbstractLBStrategy>()
	{
		return UAbstractLBStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbstractLBStrategy(Z_Construct_UClass_UAbstractLBStrategy, &UAbstractLBStrategy::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("UAbstractLBStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbstractLBStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

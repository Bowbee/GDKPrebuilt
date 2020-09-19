// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/LoadBalancing/OwnershipLockingPolicy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwnershipLockingPolicy() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_UOwnershipLockingPolicy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UOwnershipLockingPolicy();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLockingPolicy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOwnershipLockingPolicy::execOnHierarchyRootActorDeleted)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActorRoot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHierarchyRootActorDeleted(Z_Param_DestroyedActorRoot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOwnershipLockingPolicy::execOnExplicitlyLockedActorDeleted)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExplicitlyLockedActorDeleted(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void UOwnershipLockingPolicy::StaticRegisterNativesUOwnershipLockingPolicy()
	{
		UClass* Class = UOwnershipLockingPolicy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExplicitlyLockedActorDeleted", &UOwnershipLockingPolicy::execOnExplicitlyLockedActorDeleted },
			{ "OnHierarchyRootActorDeleted", &UOwnershipLockingPolicy::execOnHierarchyRootActorDeleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics
	{
		struct OwnershipLockingPolicy_eventOnExplicitlyLockedActorDeleted_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OwnershipLockingPolicy_eventOnExplicitlyLockedActorDeleted_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadBalancing/OwnershipLockingPolicy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOwnershipLockingPolicy, nullptr, "OnExplicitlyLockedActorDeleted", nullptr, nullptr, sizeof(OwnershipLockingPolicy_eventOnExplicitlyLockedActorDeleted_Parms), Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics
	{
		struct OwnershipLockingPolicy_eventOnHierarchyRootActorDeleted_Parms
		{
			AActor* DestroyedActorRoot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActorRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::NewProp_DestroyedActorRoot = { "DestroyedActorRoot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OwnershipLockingPolicy_eventOnHierarchyRootActorDeleted_Parms, DestroyedActorRoot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::NewProp_DestroyedActorRoot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadBalancing/OwnershipLockingPolicy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOwnershipLockingPolicy, nullptr, "OnHierarchyRootActorDeleted", nullptr, nullptr, sizeof(OwnershipLockingPolicy_eventOnHierarchyRootActorDeleted_Parms), Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOwnershipLockingPolicy_NoRegister()
	{
		return UOwnershipLockingPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UOwnershipLockingPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOwnershipLockingPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractLockingPolicy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOwnershipLockingPolicy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOwnershipLockingPolicy_OnExplicitlyLockedActorDeleted, "OnExplicitlyLockedActorDeleted" }, // 1978404937
		{ &Z_Construct_UFunction_UOwnershipLockingPolicy_OnHierarchyRootActorDeleted, "OnHierarchyRootActorDeleted" }, // 376945969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwnershipLockingPolicy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadBalancing/OwnershipLockingPolicy.h" },
		{ "ModuleRelativePath", "Public/LoadBalancing/OwnershipLockingPolicy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOwnershipLockingPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOwnershipLockingPolicy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOwnershipLockingPolicy_Statics::ClassParams = {
		&UOwnershipLockingPolicy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UOwnershipLockingPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOwnershipLockingPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOwnershipLockingPolicy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOwnershipLockingPolicy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOwnershipLockingPolicy, 3534826792);
	template<> SPATIALGDK_API UClass* StaticClass<UOwnershipLockingPolicy>()
	{
		return UOwnershipLockingPolicy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOwnershipLockingPolicy(Z_Construct_UClass_UOwnershipLockingPolicy, &UOwnershipLockingPolicy::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("UOwnershipLockingPolicy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOwnershipLockingPolicy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

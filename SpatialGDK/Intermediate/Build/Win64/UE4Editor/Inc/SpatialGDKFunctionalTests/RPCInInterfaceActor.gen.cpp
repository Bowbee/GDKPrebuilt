// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3157/RPCInInterfaceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCInInterfaceActor() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARPCInInterfaceActor_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ARPCInInterfaceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_URPCTestInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARPCInInterfaceActor::execRPCInInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCInInterface_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ARPCInInterfaceActor_RPCInInterface = FName(TEXT("RPCInInterface"));
	void ARPCInInterfaceActor::RPCInInterface()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARPCInInterfaceActor_RPCInInterface),NULL);
	}
	void ARPCInInterfaceActor::StaticRegisterNativesARPCInInterfaceActor()
	{
		UClass* Class = ARPCInInterfaceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RPCInInterface", &ARPCInInterfaceActor::execRPCInInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3157/RPCInInterfaceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPCInInterfaceActor, nullptr, "RPCInInterface", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPCInInterfaceActor_NoRegister()
	{
		return ARPCInInterfaceActor::StaticClass();
	}
	struct Z_Construct_UClass_ARPCInInterfaceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPCInInterfaceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPCInInterfaceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPCInInterfaceActor_RPCInInterface, "RPCInInterface" }, // 2129689626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPCInInterfaceActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpatialGDK/UNR-3157/RPCInInterfaceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3157/RPCInInterfaceActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPCInInterfaceActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URPCTestInterface_NoRegister, (int32)VTABLE_OFFSET(ARPCInInterfaceActor, IRPCTestInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPCInInterfaceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPCInInterfaceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPCInInterfaceActor_Statics::ClassParams = {
		&ARPCInInterfaceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ARPCInInterfaceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPCInInterfaceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPCInInterfaceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPCInInterfaceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPCInInterfaceActor, 4207076952);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ARPCInInterfaceActor>()
	{
		return ARPCInInterfaceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPCInInterfaceActor(Z_Construct_UClass_ARPCInInterfaceActor, &ARPCInInterfaceActor::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ARPCInInterfaceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPCInInterfaceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

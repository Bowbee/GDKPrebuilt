// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Tests/TestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActor() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_ATestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
// End Cross Module References
	DEFINE_FUNCTION(ATestActor::execTestServerRPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestServerRPC_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATestActor_TestServerRPC = FName(TEXT("TestServerRPC"));
	void ATestActor::TestServerRPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATestActor_TestServerRPC),NULL);
	}
	void ATestActor::StaticRegisterNativesATestActor()
	{
		UClass* Class = ATestActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestServerRPC", &ATestActor::execTestServerRPC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestActor_TestServerRPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestActor_TestServerRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/TestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_TestServerRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "TestServerRPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestActor_TestServerRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_TestServerRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestActor_TestServerRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestActor_TestServerRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestActor_NoRegister()
	{
		return ATestActor::StaticClass();
	}
	struct Z_Construct_UClass_ATestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestActor_TestServerRPC, "TestServerRPC" }, // 1512352068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/TestActor.h" },
		{ "ModuleRelativePath", "Public/Tests/TestActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
		&ATestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestActor, 2447868609);
	template<> SPATIALGDK_API UClass* StaticClass<ATestActor>()
	{
		return ATestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestActor(Z_Construct_UClass_ATestActor, &ATestActor::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("ATestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3157/RPCTestInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCTestInterface() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_URPCTestInterface_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_URPCTestInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	DEFINE_FUNCTION(IRPCTestInterface::execRPCInInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCInInterface_Implementation();
		P_NATIVE_END;
	}
	void IRPCTestInterface::RPCInInterface()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RPCInInterface instead.");
	}
	void URPCTestInterface::StaticRegisterNativesURPCTestInterface()
	{
		UClass* Class = URPCTestInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RPCInInterface", &IRPCTestInterface::execRPCInInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPCTestInterface_RPCInInterface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPCTestInterface_RPCInInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3157/RPCTestInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPCTestInterface_RPCInInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPCTestInterface, nullptr, "RPCInInterface", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPCTestInterface_RPCInInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPCTestInterface_RPCInInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPCTestInterface_RPCInInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPCTestInterface_RPCInInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPCTestInterface_NoRegister()
	{
		return URPCTestInterface::StaticClass();
	}
	struct Z_Construct_UClass_URPCTestInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPCTestInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPCTestInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPCTestInterface_RPCInInterface, "RPCInInterface" }, // 863631228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCTestInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3157/RPCTestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPCTestInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRPCTestInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPCTestInterface_Statics::ClassParams = {
		&URPCTestInterface::StaticClass,
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
		0x000040A1u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_URPCTestInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPCTestInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPCTestInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPCTestInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPCTestInterface, 2106942645);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<URPCTestInterface>()
	{
		return URPCTestInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPCTestInterface(Z_Construct_UClass_URPCTestInterface, &URPCTestInterface::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("URPCTestInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPCTestInterface);
	static FName NAME_URPCTestInterface_RPCInInterface = FName(TEXT("RPCInInterface"));
	void IRPCTestInterface::Execute_RPCInInterface(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URPCTestInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URPCTestInterface_RPCInInterface);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IRPCTestInterface*)(O->GetNativeInterfaceAddress(URPCTestInterface::StaticClass())))
		{
			I->RPCInInterface_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationFlowController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossServerAndClientOrchestrationFlowController() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTestFlowController();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	DEFINE_FUNCTION(ACrossServerAndClientOrchestrationFlowController::execServerClientReadValueAck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerClientReadValueAck_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck = FName(TEXT("ServerClientReadValueAck"));
	void ACrossServerAndClientOrchestrationFlowController::ServerClientReadValueAck()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck),NULL);
	}
	void ACrossServerAndClientOrchestrationFlowController::StaticRegisterNativesACrossServerAndClientOrchestrationFlowController()
	{
		UClass* Class = ACrossServerAndClientOrchestrationFlowController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerClientReadValueAck", &ACrossServerAndClientOrchestrationFlowController::execServerClientReadValueAck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController, nullptr, "ServerClientReadValueAck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_NoRegister()
	{
		return ACrossServerAndClientOrchestrationFlowController::StaticClass();
	}
	struct Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrossServerAndClientOrchestrationFlowController_ServerClientReadValueAck, "ServerClientReadValueAck" }, // 1774955416
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationFlowController.h" },
		{ "ModuleRelativePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationFlowController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossServerAndClientOrchestrationFlowController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::ClassParams = {
		&ACrossServerAndClientOrchestrationFlowController::StaticClass,
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
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossServerAndClientOrchestrationFlowController, 3563699774);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ACrossServerAndClientOrchestrationFlowController>()
	{
		return ACrossServerAndClientOrchestrationFlowController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossServerAndClientOrchestrationFlowController(Z_Construct_UClass_ACrossServerAndClientOrchestrationFlowController, &ACrossServerAndClientOrchestrationFlowController::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ACrossServerAndClientOrchestrationFlowController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossServerAndClientOrchestrationFlowController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

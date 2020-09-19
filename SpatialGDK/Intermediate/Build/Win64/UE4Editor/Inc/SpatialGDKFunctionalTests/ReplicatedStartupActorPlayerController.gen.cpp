// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedStartupActorPlayerController() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AReplicatedStartupActorPlayerController_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AReplicatedStartupActorPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialTestReplicatedStartupActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AReplicatedStartupActorPlayerController::execResetBoolean)
	{
		P_GET_OBJECT(ASpatialTestReplicatedStartupActor,Z_Param_Test);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBoolean_Implementation(Z_Param_Test);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicatedStartupActorPlayerController::execClientToServerRPC)
	{
		P_GET_OBJECT(ASpatialTestReplicatedStartupActor,Z_Param_Test);
		P_GET_OBJECT(AActor,Z_Param_ReplicatedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientToServerRPC_Implementation(Z_Param_Test,Z_Param_ReplicatedActor);
		P_NATIVE_END;
	}
	static FName NAME_AReplicatedStartupActorPlayerController_ClientToServerRPC = FName(TEXT("ClientToServerRPC"));
	void AReplicatedStartupActorPlayerController::ClientToServerRPC(ASpatialTestReplicatedStartupActor* Test, AActor* ReplicatedActor)
	{
		ReplicatedStartupActorPlayerController_eventClientToServerRPC_Parms Parms;
		Parms.Test=Test;
		Parms.ReplicatedActor=ReplicatedActor;
		ProcessEvent(FindFunctionChecked(NAME_AReplicatedStartupActorPlayerController_ClientToServerRPC),&Parms);
	}
	static FName NAME_AReplicatedStartupActorPlayerController_ResetBoolean = FName(TEXT("ResetBoolean"));
	void AReplicatedStartupActorPlayerController::ResetBoolean(ASpatialTestReplicatedStartupActor* Test)
	{
		ReplicatedStartupActorPlayerController_eventResetBoolean_Parms Parms;
		Parms.Test=Test;
		ProcessEvent(FindFunctionChecked(NAME_AReplicatedStartupActorPlayerController_ResetBoolean),&Parms);
	}
	void AReplicatedStartupActorPlayerController::StaticRegisterNativesAReplicatedStartupActorPlayerController()
	{
		UClass* Class = AReplicatedStartupActorPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientToServerRPC", &AReplicatedStartupActorPlayerController::execClientToServerRPC },
			{ "ResetBoolean", &AReplicatedStartupActorPlayerController::execResetBoolean },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Test;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::NewProp_ReplicatedActor = { "ReplicatedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicatedStartupActorPlayerController_eventClientToServerRPC_Parms, ReplicatedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicatedStartupActorPlayerController_eventClientToServerRPC_Parms, Test), Z_Construct_UClass_ASpatialTestReplicatedStartupActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::NewProp_ReplicatedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::NewProp_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicatedStartupActorPlayerController, nullptr, "ClientToServerRPC", nullptr, nullptr, sizeof(ReplicatedStartupActorPlayerController_eventClientToServerRPC_Parms), Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Test;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicatedStartupActorPlayerController_eventResetBoolean_Parms, Test), Z_Construct_UClass_ASpatialTestReplicatedStartupActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::NewProp_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicatedStartupActorPlayerController, nullptr, "ResetBoolean", nullptr, nullptr, sizeof(ReplicatedStartupActorPlayerController_eventResetBoolean_Parms), Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReplicatedStartupActorPlayerController_NoRegister()
	{
		return AReplicatedStartupActorPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ClientToServerRPC, "ClientToServerRPC" }, // 1166712282
		{ &Z_Construct_UFunction_AReplicatedStartupActorPlayerController_ResetBoolean, "ResetBoolean" }, // 395681147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorPlayerController.h" },
		{ "ModuleRelativePath", "SpatialGDK/UNR-3761/SpatialTestReplicatedStartupActor/ReplicatedStartupActorPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicatedStartupActorPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::ClassParams = {
		&AReplicatedStartupActorPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicatedStartupActorPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReplicatedStartupActorPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplicatedStartupActorPlayerController, 4190763269);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<AReplicatedStartupActorPlayerController>()
	{
		return AReplicatedStartupActorPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplicatedStartupActorPlayerController(Z_Construct_UClass_AReplicatedStartupActorPlayerController, &AReplicatedStartupActorPlayerController::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("AReplicatedStartupActorPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicatedStartupActorPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/SpatialFunctionalTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialFunctionalTest() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UFunction* Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepTickDelegate__DelegateSignature();
	SPATIALGDKFUNCTIONALTESTS_API UFunction* Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepStartDelegate__DelegateSignature();
	SPATIALGDKFUNCTIONALTESTS_API UFunction* Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepIsReadyDelegate__DelegateSignature();
	SPATIALGDKFUNCTIONALTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FWorkerDefinition();
	SPATIALGDKFUNCTIONALTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialFunctionalTestStepDefinition();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTestFlowController_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UEnum* Z_Construct_UEnum_SpatialGDKFunctionalTests_ESpatialFunctionalTestWorkerType();
// End Cross Module References
	DEFINE_FUNCTION(ASpatialFunctionalTest::execStartServerFlowControllerSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartServerFlowControllerSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execOnReplicated_CurrentStepIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplicated_CurrentStepIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execHasActorDelegation)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_WorkerId);
		P_GET_UBOOL_REF(Z_Param_Out_bIsPersistent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasActorDelegation(Z_Param_Actor,Z_Param_Out_WorkerId,Z_Param_Out_bIsPersistent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execRemoveActorDelegation)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActorDelegation_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execAddActorDelegation)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerWorkerId);
		P_GET_UBOOL(Z_Param_bPersistOnTestFinished);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorDelegation_Implementation(Z_Param_Actor,Z_Param_ServerWorkerId,Z_Param_bPersistOnTestFinished);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetAllClients)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWorkerDefinition*)Z_Param__Result=P_THIS->GetAllClients();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetAllServers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWorkerDefinition*)Z_Param__Result=P_THIS->GetAllServers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetAllWorkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWorkerDefinition*)Z_Param__Result=P_THIS->GetAllWorkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetAllWorkersId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAllWorkersId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetNumberOfClientWorkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfClientWorkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetNumberOfServerWorkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfServerWorkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execFinishStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execAddStepFromDefinitionMulti)
	{
		P_GET_STRUCT_REF(FSpatialFunctionalTestStepDefinition,Z_Param_Out_StepDefinition);
		P_GET_TARRAY_REF(FWorkerDefinition,Z_Param_Out_Workers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStepFromDefinitionMulti(Z_Param_Out_StepDefinition,Z_Param_Out_Workers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execAddStepFromDefinition)
	{
		P_GET_STRUCT_REF(FSpatialFunctionalTestStepDefinition,Z_Param_Out_StepDefinition);
		P_GET_STRUCT_REF(FWorkerDefinition,Z_Param_Out_Worker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStepFromDefinition(Z_Param_Out_StepDefinition,Z_Param_Out_Worker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execAddStepBlueprint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StepName);
		P_GET_STRUCT_REF(FWorkerDefinition,Z_Param_Out_Worker);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_IsReadyEvent);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_StartEvent);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_TickEvent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepTimeLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStepBlueprint(Z_Param_StepName,Z_Param_Out_Worker,FStepIsReadyDelegate(Z_Param_Out_IsReadyEvent),FStepStartDelegate(Z_Param_Out_StartEvent),FStepTickDelegate(Z_Param_Out_TickEvent),Z_Param_StepTimeLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetLocalFlowController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASpatialFunctionalTestFlowController**)Z_Param__Result=P_THIS->GetLocalFlowController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execGetFlowController)
	{
		P_GET_ENUM(ESpatialFunctionalTestWorkerType,Z_Param_WorkerType);
		P_GET_PROPERTY(FIntProperty,Z_Param_WorkerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASpatialFunctionalTestFlowController**)Z_Param__Result=P_THIS->GetFlowController(ESpatialFunctionalTestWorkerType(Z_Param_WorkerType),Z_Param_WorkerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execCrossServerNotifyStepFinished)
	{
		P_GET_OBJECT(ASpatialFunctionalTestFlowController,Z_Param_FlowController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrossServerNotifyStepFinished_Implementation(Z_Param_FlowController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTest::execCrossServerFinishTest)
	{
		P_GET_ENUM(EFunctionalTestResult,Z_Param_TestResult);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrossServerFinishTest_Implementation(EFunctionalTestResult(Z_Param_TestResult),Z_Param_Message);
		P_NATIVE_END;
	}
	static FName NAME_ASpatialFunctionalTest_AddActorDelegation = FName(TEXT("AddActorDelegation"));
	void ASpatialFunctionalTest::AddActorDelegation(AActor* Actor, int32 ServerWorkerId, bool bPersistOnTestFinished)
	{
		SpatialFunctionalTest_eventAddActorDelegation_Parms Parms;
		Parms.Actor=Actor;
		Parms.ServerWorkerId=ServerWorkerId;
		Parms.bPersistOnTestFinished=bPersistOnTestFinished ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTest_AddActorDelegation),&Parms);
	}
	static FName NAME_ASpatialFunctionalTest_CrossServerFinishTest = FName(TEXT("CrossServerFinishTest"));
	void ASpatialFunctionalTest::CrossServerFinishTest(EFunctionalTestResult TestResult, const FString& Message)
	{
		SpatialFunctionalTest_eventCrossServerFinishTest_Parms Parms;
		Parms.TestResult=TestResult;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTest_CrossServerFinishTest),&Parms);
	}
	static FName NAME_ASpatialFunctionalTest_CrossServerNotifyStepFinished = FName(TEXT("CrossServerNotifyStepFinished"));
	void ASpatialFunctionalTest::CrossServerNotifyStepFinished(ASpatialFunctionalTestFlowController* FlowController)
	{
		SpatialFunctionalTest_eventCrossServerNotifyStepFinished_Parms Parms;
		Parms.FlowController=FlowController;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTest_CrossServerNotifyStepFinished),&Parms);
	}
	static FName NAME_ASpatialFunctionalTest_RemoveActorDelegation = FName(TEXT("RemoveActorDelegation"));
	void ASpatialFunctionalTest::RemoveActorDelegation(AActor* Actor)
	{
		SpatialFunctionalTest_eventRemoveActorDelegation_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTest_RemoveActorDelegation),&Parms);
	}
	void ASpatialFunctionalTest::StaticRegisterNativesASpatialFunctionalTest()
	{
		UClass* Class = ASpatialFunctionalTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorDelegation", &ASpatialFunctionalTest::execAddActorDelegation },
			{ "AddStepBlueprint", &ASpatialFunctionalTest::execAddStepBlueprint },
			{ "AddStepFromDefinition", &ASpatialFunctionalTest::execAddStepFromDefinition },
			{ "AddStepFromDefinitionMulti", &ASpatialFunctionalTest::execAddStepFromDefinitionMulti },
			{ "CrossServerFinishTest", &ASpatialFunctionalTest::execCrossServerFinishTest },
			{ "CrossServerNotifyStepFinished", &ASpatialFunctionalTest::execCrossServerNotifyStepFinished },
			{ "FinishStep", &ASpatialFunctionalTest::execFinishStep },
			{ "GetAllClients", &ASpatialFunctionalTest::execGetAllClients },
			{ "GetAllServers", &ASpatialFunctionalTest::execGetAllServers },
			{ "GetAllWorkers", &ASpatialFunctionalTest::execGetAllWorkers },
			{ "GetAllWorkersId", &ASpatialFunctionalTest::execGetAllWorkersId },
			{ "GetFlowController", &ASpatialFunctionalTest::execGetFlowController },
			{ "GetLocalFlowController", &ASpatialFunctionalTest::execGetLocalFlowController },
			{ "GetNumberOfClientWorkers", &ASpatialFunctionalTest::execGetNumberOfClientWorkers },
			{ "GetNumberOfServerWorkers", &ASpatialFunctionalTest::execGetNumberOfServerWorkers },
			{ "HasActorDelegation", &ASpatialFunctionalTest::execHasActorDelegation },
			{ "OnReplicated_CurrentStepIndex", &ASpatialFunctionalTest::execOnReplicated_CurrentStepIndex },
			{ "RemoveActorDelegation", &ASpatialFunctionalTest::execRemoveActorDelegation },
			{ "StartServerFlowControllerSpawn", &ASpatialFunctionalTest::execStartServerFlowControllerSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics
	{
		static void NewProp_bPersistOnTestFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistOnTestFinished;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ServerWorkerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_bPersistOnTestFinished_SetBit(void* Obj)
	{
		((SpatialFunctionalTest_eventAddActorDelegation_Parms*)Obj)->bPersistOnTestFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_bPersistOnTestFinished = { "bPersistOnTestFinished", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialFunctionalTest_eventAddActorDelegation_Parms), &Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_bPersistOnTestFinished_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_ServerWorkerId = { "ServerWorkerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddActorDelegation_Parms, ServerWorkerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddActorDelegation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_bPersistOnTestFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_ServerWorkerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "CPP_Default_bPersistOnTestFinished", "false" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ServerWorkerId", "1" },
		{ "ToolTip", "Allows you to delegate authority over this Actor to a specific Server Worker. \n\nKeep in mind that currently this functionality only works in single layer Load Balancing Strategies, and your Default Load Balancing Strategy needs to implement ISpatialFunctionalTestLBDelegationInterface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "AddActorDelegation", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventAddActorDelegation_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020CD0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics
	{
		struct SpatialFunctionalTest_eventAddStepBlueprint_Parms
		{
			FString StepName;
			FWorkerDefinition Worker;
			FScriptDelegate IsReadyEvent;
			FScriptDelegate StartEvent;
			FScriptDelegate TickEvent;
			float StepTimeLimit;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TickEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_StartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_IsReadyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Worker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Worker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StepName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StepTimeLimit = { "StepTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepBlueprint_Parms, StepTimeLimit), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_TickEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_TickEvent = { "TickEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepBlueprint_Parms, TickEvent), Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_TickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_TickEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StartEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepBlueprint_Parms, StartEvent), Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepStartDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_IsReadyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_IsReadyEvent = { "IsReadyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepBlueprint_Parms, IsReadyEvent), Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepIsReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_IsReadyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_IsReadyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_Worker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_Worker = { "Worker", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepBlueprint_Parms, Worker), Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_Worker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_Worker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StepName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StepName = { "StepName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepBlueprint_Parms, StepName), METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StepName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StepName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StepTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_TickEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_IsReadyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_Worker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::NewProp_StepName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "IsReadyEvent,StartEvent,TickEvent" },
		{ "Category", "Spatial Functional Test" },
		{ "CPP_Default_StepTimeLimit", "0.000000" },
		{ "DisplayName", "Add Step" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Adds a Test Step. Check GetAllWorkers(), GetAllServerWorkers() and GetAllClientWorkers() for convenience.\n\nIf you split the Worker pin you can define if you want to run on Server, Client or All.\n\nWorker Ids start from 1.\nIf you pass 0 it will run on all the Servers / Clients (there's also a convenience function GetAllWorkersId())\n\nIf you choose WorkerType 'All' it runs on all Servers and Clients (hence WorkerId is ignored).\n\nKeep in mind you can split the Worker pin for convenience." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "AddStepBlueprint", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventAddStepBlueprint_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics
	{
		struct SpatialFunctionalTest_eventAddStepFromDefinition_Parms
		{
			FSpatialFunctionalTestStepDefinition StepDefinition;
			FWorkerDefinition Worker;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Worker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Worker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StepDefinition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_Worker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_Worker = { "Worker", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepFromDefinition_Parms, Worker), Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_Worker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_Worker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_StepDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_StepDefinition = { "StepDefinition", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepFromDefinition_Parms, StepDefinition), Z_Construct_UScriptStruct_FSpatialFunctionalTestStepDefinition, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_StepDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_StepDefinition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_Worker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::NewProp_StepDefinition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Adds a Step from a Definition. Allows you to define a Step and add it / re-use it multiple times.\n\nKeep in mind you can split the Worker pin for convenience." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "AddStepFromDefinition", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventAddStepFromDefinition_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics
	{
		struct SpatialFunctionalTest_eventAddStepFromDefinitionMulti_Parms
		{
			FSpatialFunctionalTestStepDefinition StepDefinition;
			TArray<FWorkerDefinition> Workers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Workers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Workers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Workers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StepDefinition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_Workers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_Workers = { "Workers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepFromDefinitionMulti_Parms, Workers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_Workers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_Workers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_Workers_Inner = { "Workers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_StepDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_StepDefinition = { "StepDefinition", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventAddStepFromDefinitionMulti_Parms, StepDefinition), Z_Construct_UScriptStruct_FSpatialFunctionalTestStepDefinition, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_StepDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_StepDefinition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_Workers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_Workers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::NewProp_StepDefinition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Adds a Step from a Definition. Allows you to define a Step and add it / re-use it multiple times.\n\nKeep in mind you can split the Worker pin for convenience.\nIt is a more extensible version of AddStepFromDefinition(), where you can pass an array with multiple specific Workers." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "AddStepFromDefinitionMulti", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventAddStepFromDefinitionMulti_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TestResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestResult_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventCrossServerFinishTest_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_TestResult = { "TestResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventCrossServerFinishTest_Parms, TestResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_TestResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_TestResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::NewProp_TestResult_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "CrossServerFinishTest", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventCrossServerFinishTest_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020CD0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::NewProp_FlowController = { "FlowController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventCrossServerNotifyStepFinished_Parms, FlowController), Z_Construct_UClass_ASpatialFunctionalTestFlowController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::NewProp_FlowController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "CrossServerNotifyStepFinished", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventCrossServerNotifyStepFinished_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020CD0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "Comment", "// Terminate current Running Step (called once per FlowController executing it)\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Terminate current Running Step (called once per FlowController executing it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "FinishStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics
	{
		struct SpatialFunctionalTest_eventGetAllClients_Parms
		{
			FWorkerDefinition ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetAllClients_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Returns a Worker Defnition that represents all of the Clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetAllClients", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetAllClients_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics
	{
		struct SpatialFunctionalTest_eventGetAllServers_Parms
		{
			FWorkerDefinition ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetAllServers_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Returns a Worker Defnition that represents all of the Servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetAllServers", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetAllServers_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics
	{
		struct SpatialFunctionalTest_eventGetAllWorkers_Parms
		{
			FWorkerDefinition ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetAllWorkers_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Returns a Worker Defnition that represents all of the Servers and Clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetAllWorkers", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetAllWorkers_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics
	{
		struct SpatialFunctionalTest_eventGetAllWorkersId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetAllWorkersId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Returns the Id (0) that represents all Workers (ie Server / Client), useful for when you want to have a Server / Client Step run on all of them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetAllWorkersId", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetAllWorkersId_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics
	{
		struct SpatialFunctionalTest_eventGetFlowController_Parms
		{
			ESpatialFunctionalTestWorkerType WorkerType;
			int32 WorkerId;
			ASpatialFunctionalTestFlowController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WorkerId;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorkerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorkerType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetFlowController_Parms, ReturnValue), Z_Construct_UClass_ASpatialFunctionalTestFlowController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_WorkerId = { "WorkerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetFlowController_Parms, WorkerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_WorkerType = { "WorkerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetFlowController_Parms, WorkerType), Z_Construct_UEnum_SpatialGDKFunctionalTests_ESpatialFunctionalTestWorkerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_WorkerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_WorkerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_WorkerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::NewProp_WorkerType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Returns the FlowController for a specific Server / Client.\nKeep in mind that WorkerIds start from 1, and the Server's WorkerId will match their VirtualWorkerId while the Client's will be based on the order they connect.\n\n'All' Worker type will soft assert as it isn't supported." },
		{ "WorkerId", "1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetFlowController", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetFlowController_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics
	{
		struct SpatialFunctionalTest_eventGetLocalFlowController_Parms
		{
			ASpatialFunctionalTestFlowController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetLocalFlowController_Parms, ReturnValue), Z_Construct_UClass_ASpatialFunctionalTestFlowController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "Comment", "// Get the FlowController that is Local to this instance\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Get the FlowController that is Local to this instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetLocalFlowController", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetLocalFlowController_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics
	{
		struct SpatialFunctionalTest_eventGetNumberOfClientWorkers_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetNumberOfClientWorkers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "Comment", "// Convenience function that goes over all FlowControllers and counts how many are Clients\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Convenience function that goes over all FlowControllers and counts how many are Clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetNumberOfClientWorkers", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetNumberOfClientWorkers_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics
	{
		struct SpatialFunctionalTest_eventGetNumberOfServerWorkers_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventGetNumberOfServerWorkers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "Comment", "// Convenience function that goes over all FlowControllers and counts how many are Servers\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Convenience function that goes over all FlowControllers and counts how many are Servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "GetNumberOfServerWorkers", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventGetNumberOfServerWorkers_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics
	{
		struct SpatialFunctionalTest_eventHasActorDelegation_Parms
		{
			AActor* Actor;
			int32 WorkerId;
			bool bIsPersistent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIsPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPersistent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WorkerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialFunctionalTest_eventHasActorDelegation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialFunctionalTest_eventHasActorDelegation_Parms), &Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_bIsPersistent_SetBit(void* Obj)
	{
		((SpatialFunctionalTest_eventHasActorDelegation_Parms*)Obj)->bIsPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_bIsPersistent = { "bIsPersistent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialFunctionalTest_eventHasActorDelegation_Parms), &Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_bIsPersistent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_WorkerId = { "WorkerId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventHasActorDelegation_Parms, WorkerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventHasActorDelegation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_bIsPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_WorkerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Check is the Actor has it's authority delegated to a specific Server Worker. \n\nKeep in mind that currently this functionality only works in single layer Load Balancing Strategies, and your Default Load Balancing Strategy needs to implement ISpatialFunctionalTestLBDelegationInterface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "HasActorDelegation", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventHasActorDelegation_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "OnReplicated_CurrentStepIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTest_eventRemoveActorDelegation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Remove Actor authority delegation, making it fallback to the Default Load Balacing Strategy. \n\nKeep in mind that currently this functionality only works in single layer Load Balancing Strategies, and your Default Load Balancing Strategy needs to implement ISpatialFunctionalTestLBDelegationInterface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "RemoveActorDelegation", nullptr, nullptr, sizeof(SpatialFunctionalTest_eventRemoveActorDelegation_Parms), Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020CD0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTest, nullptr, "StartServerFlowControllerSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpatialFunctionalTest_NoRegister()
	{
		return ASpatialFunctionalTest::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialFunctionalTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FlowControllers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStepIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentStepIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRequiredClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRequiredClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadyToSpawnServerControllers_MetaData[];
#endif
		static void NewProp_bReadyToSpawnServerControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadyToSpawnServerControllers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialFunctionalTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpatialFunctionalTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_AddActorDelegation, "AddActorDelegation" }, // 3914148716
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_AddStepBlueprint, "AddStepBlueprint" }, // 2041598920
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinition, "AddStepFromDefinition" }, // 2219722733
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_AddStepFromDefinitionMulti, "AddStepFromDefinitionMulti" }, // 1553726589
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerFinishTest, "CrossServerFinishTest" }, // 251357305
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_CrossServerNotifyStepFinished, "CrossServerNotifyStepFinished" }, // 1838969341
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_FinishStep, "FinishStep" }, // 341614279
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetAllClients, "GetAllClients" }, // 14636826
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetAllServers, "GetAllServers" }, // 4074870579
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkers, "GetAllWorkers" }, // 3063458725
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetAllWorkersId, "GetAllWorkersId" }, // 3107298488
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetFlowController, "GetFlowController" }, // 798199889
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetLocalFlowController, "GetLocalFlowController" }, // 4186695075
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfClientWorkers, "GetNumberOfClientWorkers" }, // 3930516510
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_GetNumberOfServerWorkers, "GetNumberOfServerWorkers" }, // 3850542189
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_HasActorDelegation, "HasActorDelegation" }, // 673787871
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_OnReplicated_CurrentStepIndex, "OnReplicated_CurrentStepIndex" }, // 1648906198
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_RemoveActorDelegation, "RemoveActorDelegation" }, // 3811819362
		{ &Z_Construct_UFunction_ASpatialFunctionalTest_StartServerFlowControllerSpawn, "StartServerFlowControllerSpawn" }, // 305328725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * A Spatial Functional NetTest allows you to define a series of steps, and control which server/client context they execute on\n * Servers and Clients are registered as Test Players by the framework, and request individual steps to be executed in the correct Player\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialFunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "* A Spatial Functional NetTest allows you to define a series of steps, and control which server/client context they execute on\n* Servers and Clients are registered as Test Players by the framework, and request individual steps to be executed in the correct Player" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_FlowControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_FlowControllers = { "FlowControllers", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialFunctionalTest, FlowControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_FlowControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_FlowControllers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_FlowControllers_Inner = { "FlowControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpatialFunctionalTestFlowController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_CurrentStepIndex_MetaData[] = {
		{ "Comment", "// Current Step Index, < 0 if not executing any, check consts at the top\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
		{ "ToolTip", "Current Step Index, < 0 if not executing any, check consts at the top" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_CurrentStepIndex = { "CurrentStepIndex", "OnReplicated_CurrentStepIndex", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialFunctionalTest, CurrentStepIndex), METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_CurrentStepIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_CurrentStepIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_NumRequiredClients_MetaData[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_NumRequiredClients = { "NumRequiredClients", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialFunctionalTest, NumRequiredClients), METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_NumRequiredClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_NumRequiredClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_bReadyToSpawnServerControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTest.h" },
	};
#endif
	void Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_bReadyToSpawnServerControllers_SetBit(void* Obj)
	{
		((ASpatialFunctionalTest*)Obj)->bReadyToSpawnServerControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_bReadyToSpawnServerControllers = { "bReadyToSpawnServerControllers", "StartServerFlowControllerSpawn", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASpatialFunctionalTest), &Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_bReadyToSpawnServerControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_bReadyToSpawnServerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_bReadyToSpawnServerControllers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialFunctionalTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_FlowControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_FlowControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_CurrentStepIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_NumRequiredClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTest_Statics::NewProp_bReadyToSpawnServerControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialFunctionalTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialFunctionalTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialFunctionalTest_Statics::ClassParams = {
		&ASpatialFunctionalTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpatialFunctionalTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTest_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialFunctionalTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialFunctionalTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialFunctionalTest, 3664289711);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ASpatialFunctionalTest>()
	{
		return ASpatialFunctionalTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialFunctionalTest(Z_Construct_UClass_ASpatialFunctionalTest, &ASpatialFunctionalTest::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ASpatialFunctionalTest"), false, nullptr, nullptr, nullptr);

	void ASpatialFunctionalTest::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReadyToSpawnServerControllers(TEXT("bReadyToSpawnServerControllers"));
		static const FName Name_CurrentStepIndex(TEXT("CurrentStepIndex"));
		static const FName Name_FlowControllers(TEXT("FlowControllers"));

		const bool bIsValid = true
			&& Name_bReadyToSpawnServerControllers == ClassReps[(int32)ENetFields_Private::bReadyToSpawnServerControllers].Property->GetFName()
			&& Name_CurrentStepIndex == ClassReps[(int32)ENetFields_Private::CurrentStepIndex].Property->GetFName()
			&& Name_FlowControllers == ClassReps[(int32)ENetFields_Private::FlowControllers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpatialFunctionalTest"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialFunctionalTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

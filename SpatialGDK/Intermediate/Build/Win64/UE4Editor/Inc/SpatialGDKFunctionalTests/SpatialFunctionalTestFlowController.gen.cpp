// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/SpatialFunctionalTestFlowController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialFunctionalTestFlowController() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTestFlowController_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTestFlowController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FWorkerDefinition();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execServerNotifyFinishTest)
	{
		P_GET_ENUM(EFunctionalTestResult,Z_Param_TestResult);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNotifyFinishTest_Implementation(EFunctionalTestResult(Z_Param_TestResult),Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execCrossServerNotifyStepFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrossServerNotifyStepFinished_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execServerNotifyStepFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNotifyStepFinished_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execClientStartStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StepIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartStep_Implementation(Z_Param_StepIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execServerSetReadyToRunTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetReadyToRunTest_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execOnReadyToRegisterWithTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReadyToRegisterWithTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execGetWorkerDefinition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWorkerDefinition*)Z_Param__Result=P_THIS->GetWorkerDefinition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execCrossServerSetWorkerId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewWorkerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrossServerSetWorkerId_Implementation(Z_Param_NewWorkerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialFunctionalTestFlowController::execCrossServerStartStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StepIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrossServerStartStep_Implementation(Z_Param_StepIndex);
		P_NATIVE_END;
	}
	static FName NAME_ASpatialFunctionalTestFlowController_ClientStartStep = FName(TEXT("ClientStartStep"));
	void ASpatialFunctionalTestFlowController::ClientStartStep(int32 StepIndex)
	{
		SpatialFunctionalTestFlowController_eventClientStartStep_Parms Parms;
		Parms.StepIndex=StepIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTestFlowController_ClientStartStep),&Parms);
	}
	static FName NAME_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished = FName(TEXT("CrossServerNotifyStepFinished"));
	void ASpatialFunctionalTestFlowController::CrossServerNotifyStepFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished),NULL);
	}
	static FName NAME_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId = FName(TEXT("CrossServerSetWorkerId"));
	void ASpatialFunctionalTestFlowController::CrossServerSetWorkerId(int32 NewWorkerId)
	{
		SpatialFunctionalTestFlowController_eventCrossServerSetWorkerId_Parms Parms;
		Parms.NewWorkerId=NewWorkerId;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId),&Parms);
	}
	static FName NAME_ASpatialFunctionalTestFlowController_CrossServerStartStep = FName(TEXT("CrossServerStartStep"));
	void ASpatialFunctionalTestFlowController::CrossServerStartStep(int32 StepIndex)
	{
		SpatialFunctionalTestFlowController_eventCrossServerStartStep_Parms Parms;
		Parms.StepIndex=StepIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTestFlowController_CrossServerStartStep),&Parms);
	}
	static FName NAME_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest = FName(TEXT("ServerNotifyFinishTest"));
	void ASpatialFunctionalTestFlowController::ServerNotifyFinishTest(EFunctionalTestResult TestResult, const FString& Message)
	{
		SpatialFunctionalTestFlowController_eventServerNotifyFinishTest_Parms Parms;
		Parms.TestResult=TestResult;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest),&Parms);
	}
	static FName NAME_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished = FName(TEXT("ServerNotifyStepFinished"));
	void ASpatialFunctionalTestFlowController::ServerNotifyStepFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished),NULL);
	}
	static FName NAME_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest = FName(TEXT("ServerSetReadyToRunTest"));
	void ASpatialFunctionalTestFlowController::ServerSetReadyToRunTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest),NULL);
	}
	void ASpatialFunctionalTestFlowController::StaticRegisterNativesASpatialFunctionalTestFlowController()
	{
		UClass* Class = ASpatialFunctionalTestFlowController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientStartStep", &ASpatialFunctionalTestFlowController::execClientStartStep },
			{ "CrossServerNotifyStepFinished", &ASpatialFunctionalTestFlowController::execCrossServerNotifyStepFinished },
			{ "CrossServerSetWorkerId", &ASpatialFunctionalTestFlowController::execCrossServerSetWorkerId },
			{ "CrossServerStartStep", &ASpatialFunctionalTestFlowController::execCrossServerStartStep },
			{ "GetWorkerDefinition", &ASpatialFunctionalTestFlowController::execGetWorkerDefinition },
			{ "OnReadyToRegisterWithTest", &ASpatialFunctionalTestFlowController::execOnReadyToRegisterWithTest },
			{ "ServerNotifyFinishTest", &ASpatialFunctionalTestFlowController::execServerNotifyFinishTest },
			{ "ServerNotifyStepFinished", &ASpatialFunctionalTestFlowController::execServerNotifyStepFinished },
			{ "ServerSetReadyToRunTest", &ASpatialFunctionalTestFlowController::execServerSetReadyToRunTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_StepIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::NewProp_StepIndex = { "StepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestFlowController_eventClientStartStep_Parms, StepIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::NewProp_StepIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "ClientStartStep", nullptr, nullptr, sizeof(SpatialFunctionalTestFlowController_eventClientStartStep_Parms), Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "CrossServerNotifyStepFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040CD1, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewWorkerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::NewProp_NewWorkerId = { "NewWorkerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestFlowController_eventCrossServerSetWorkerId_Parms, NewWorkerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::NewProp_NewWorkerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Each server worker will assign local client ids, this function will be used by\n// the Test owner server worker to guarantee they are all unique\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
		{ "ToolTip", "Each server worker will assign local client ids, this function will be used by\nthe Test owner server worker to guarantee they are all unique" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "CrossServerSetWorkerId", nullptr, nullptr, sizeof(SpatialFunctionalTestFlowController_eventCrossServerSetWorkerId_Parms), Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020CD0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_StepIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::NewProp_StepIndex = { "StepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestFlowController_eventCrossServerStartStep_Parms, StepIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::NewProp_StepIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Locally triggers StepIndex Test Step to start\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
		{ "ToolTip", "Locally triggers StepIndex Test Step to start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "CrossServerStartStep", nullptr, nullptr, sizeof(SpatialFunctionalTestFlowController_eventCrossServerStartStep_Parms), Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020CD0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics
	{
		struct SpatialFunctionalTestFlowController_eventGetWorkerDefinition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestFlowController_eventGetWorkerDefinition_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "GetWorkerDefinition", nullptr, nullptr, sizeof(SpatialFunctionalTestFlowController_eventGetWorkerDefinition_Parms), Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "OnReadyToRegisterWithTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestFlowController_eventServerNotifyFinishTest_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_TestResult = { "TestResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestFlowController_eventServerNotifyFinishTest_Parms, TestResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_TestResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_TestResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::NewProp_TestResult_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "ServerNotifyFinishTest", nullptr, nullptr, sizeof(SpatialFunctionalTestFlowController_eventServerNotifyFinishTest_Parms), Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "ServerNotifyStepFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialFunctionalTestFlowController, nullptr, "ServerSetReadyToRunTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpatialFunctionalTestFlowController_NoRegister()
	{
		return ASpatialFunctionalTestFlowController::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadyToRunTest_MetaData[];
#endif
		static void NewProp_bIsReadyToRunTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadyToRunTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadyToRegisterWithTest_MetaData[];
#endif
		static void NewProp_bReadyToRegisterWithTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadyToRegisterWithTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkerDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningTest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ClientStartStep, "ClientStartStep" }, // 674095448
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerNotifyStepFinished, "CrossServerNotifyStepFinished" }, // 747249300
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerSetWorkerId, "CrossServerSetWorkerId" }, // 3699237778
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_CrossServerStartStep, "CrossServerStartStep" }, // 1147062873
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_GetWorkerDefinition, "GetWorkerDefinition" }, // 3480028175
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_OnReadyToRegisterWithTest, "OnReadyToRegisterWithTest" }, // 1844418227
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyFinishTest, "ServerNotifyFinishTest" }, // 3912917811
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerNotifyStepFinished, "ServerNotifyStepFinished" }, // 3890289812
		{ &Z_Construct_UFunction_ASpatialFunctionalTestFlowController_ServerSetReadyToRunTest, "ServerSetReadyToRunTest" }, // 1039804087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialFunctionalTestFlowController.h" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bIsReadyToRunTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	void Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bIsReadyToRunTest_SetBit(void* Obj)
	{
		((ASpatialFunctionalTestFlowController*)Obj)->bIsReadyToRunTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bIsReadyToRunTest = { "bIsReadyToRunTest", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialFunctionalTestFlowController), &Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bIsReadyToRunTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bIsReadyToRunTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bIsReadyToRunTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bReadyToRegisterWithTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	void Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bReadyToRegisterWithTest_SetBit(void* Obj)
	{
		((ASpatialFunctionalTestFlowController*)Obj)->bReadyToRegisterWithTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bReadyToRegisterWithTest = { "bReadyToRegisterWithTest", "OnReadyToRegisterWithTest", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASpatialFunctionalTestFlowController), &Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bReadyToRegisterWithTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bReadyToRegisterWithTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bReadyToRegisterWithTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_WorkerDefinition_MetaData[] = {
		{ "Comment", "// Holds WorkerType and WorkerId. Type should be only Server or Client, and Id >= 1 (after registered)\n// The Client WorkerId will be given out in the order they connect; the Server one matches its VirtualWorkerId\n" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
		{ "ToolTip", "Holds WorkerType and WorkerId. Type should be only Server or Client, and Id >= 1 (after registered)\nThe Client WorkerId will be given out in the order they connect; the Server one matches its VirtualWorkerId" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_WorkerDefinition = { "WorkerDefinition", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialFunctionalTestFlowController, WorkerDefinition), Z_Construct_UScriptStruct_FWorkerDefinition, METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_WorkerDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_WorkerDefinition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_OwningTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestFlowController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_OwningTest = { "OwningTest", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialFunctionalTestFlowController, OwningTest), Z_Construct_UClass_ASpatialFunctionalTest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_OwningTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_OwningTest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bIsReadyToRunTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_bReadyToRegisterWithTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_WorkerDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::NewProp_OwningTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialFunctionalTestFlowController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::ClassParams = {
		&ASpatialFunctionalTestFlowController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialFunctionalTestFlowController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialFunctionalTestFlowController, 3484433588);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ASpatialFunctionalTestFlowController>()
	{
		return ASpatialFunctionalTestFlowController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialFunctionalTestFlowController(Z_Construct_UClass_ASpatialFunctionalTestFlowController, &ASpatialFunctionalTestFlowController::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ASpatialFunctionalTestFlowController"), false, nullptr, nullptr, nullptr);

	void ASpatialFunctionalTestFlowController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwningTest(TEXT("OwningTest"));
		static const FName Name_WorkerDefinition(TEXT("WorkerDefinition"));
		static const FName Name_bReadyToRegisterWithTest(TEXT("bReadyToRegisterWithTest"));
		static const FName Name_bIsReadyToRunTest(TEXT("bIsReadyToRunTest"));

		const bool bIsValid = true
			&& Name_OwningTest == ClassReps[(int32)ENetFields_Private::OwningTest].Property->GetFName()
			&& Name_WorkerDefinition == ClassReps[(int32)ENetFields_Private::WorkerDefinition].Property->GetFName()
			&& Name_bReadyToRegisterWithTest == ClassReps[(int32)ENetFields_Private::bReadyToRegisterWithTest].Property->GetFName()
			&& Name_bIsReadyToRunTest == ClassReps[(int32)ENetFields_Private::bIsReadyToRunTest].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpatialFunctionalTestFlowController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialFunctionalTestFlowController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

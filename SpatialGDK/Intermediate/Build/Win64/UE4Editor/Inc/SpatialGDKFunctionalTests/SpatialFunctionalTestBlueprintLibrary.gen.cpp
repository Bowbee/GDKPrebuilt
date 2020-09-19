// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/SpatialFunctionalTestBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialFunctionalTestBlueprintLibrary() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialFunctionalTestStepDefinition();
	SPATIALGDKFUNCTIONALTESTS_API UFunction* Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepTickDelegate__DelegateSignature();
	SPATIALGDKFUNCTIONALTESTS_API UFunction* Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepStartDelegate__DelegateSignature();
	SPATIALGDKFUNCTIONALTESTS_API UFunction* Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepIsReadyDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USpatialFunctionalTestBlueprintLibrary::execMakeStepDefinition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StepName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_IsReadyEvent);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_StartEvent);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_TickEvent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepTimeLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpatialFunctionalTestStepDefinition*)Z_Param__Result=USpatialFunctionalTestBlueprintLibrary::MakeStepDefinition(Z_Param_StepName,FStepIsReadyDelegate(Z_Param_Out_IsReadyEvent),FStepStartDelegate(Z_Param_Out_StartEvent),FStepTickDelegate(Z_Param_Out_TickEvent),Z_Param_StepTimeLimit);
		P_NATIVE_END;
	}
	void USpatialFunctionalTestBlueprintLibrary::StaticRegisterNativesUSpatialFunctionalTestBlueprintLibrary()
	{
		UClass* Class = USpatialFunctionalTestBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeStepDefinition", &USpatialFunctionalTestBlueprintLibrary::execMakeStepDefinition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics
	{
		struct SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms
		{
			FString StepName;
			FScriptDelegate IsReadyEvent;
			FScriptDelegate StartEvent;
			FScriptDelegate TickEvent;
			float StepTimeLimit;
			FSpatialFunctionalTestStepDefinition ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepTimeLimit_MetaData[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StepName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpatialFunctionalTestStepDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepTimeLimit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepTimeLimit = { "StepTimeLimit", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms, StepTimeLimit), METADATA_PARAMS(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_TickEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_TickEvent = { "TickEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms, TickEvent), Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_TickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_TickEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StartEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms, StartEvent), Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepStartDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_IsReadyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_IsReadyEvent = { "IsReadyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms, IsReadyEvent), Z_Construct_UDelegateFunction_SpatialGDKFunctionalTests_StepIsReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_IsReadyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_IsReadyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepName = { "StepName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms, StepName), METADATA_PARAMS(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_TickEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_IsReadyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::NewProp_StepName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "IsReadyEvent,StartEvent,TickEvent" },
		{ "Category", "Spatial Functional Test" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestBlueprintLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary, nullptr, "MakeStepDefinition", nullptr, nullptr, sizeof(SpatialFunctionalTestBlueprintLibrary_eventMakeStepDefinition_Parms), Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_NoRegister()
	{
		return USpatialFunctionalTestBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialFunctionalTestBlueprintLibrary_MakeStepDefinition, "MakeStepDefinition" }, // 586227942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialFunctionalTestBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestBlueprintLibrary.h" },
		{ "ScriptName", "SpatialFunctionalTestLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialFunctionalTestBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::ClassParams = {
		&USpatialFunctionalTestBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialFunctionalTestBlueprintLibrary, 791089301);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<USpatialFunctionalTestBlueprintLibrary>()
	{
		return USpatialFunctionalTestBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialFunctionalTestBlueprintLibrary(Z_Construct_UClass_USpatialFunctionalTestBlueprintLibrary, &USpatialFunctionalTestBlueprintLibrary::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("USpatialFunctionalTestBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialFunctionalTestBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

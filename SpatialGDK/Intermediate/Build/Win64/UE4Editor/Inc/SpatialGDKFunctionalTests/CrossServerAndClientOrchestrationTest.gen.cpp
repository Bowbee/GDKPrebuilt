// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossServerAndClientOrchestrationTest() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationTest();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ASpatialFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	SPATIALGDKFUNCTIONALTESTS_API UEnum* Z_Construct_UEnum_SpatialGDKFunctionalTests_ESpatialFunctionalTestWorkerType();
// End Cross Module References
	DEFINE_FUNCTION(ACrossServerAndClientOrchestrationTest::execCrossServerSetTestValue)
	{
		P_GET_ENUM(ESpatialFunctionalTestWorkerType,Z_Param_ControllerType);
		P_GET_PROPERTY(FByteProperty,Z_Param_ChangedInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrossServerSetTestValue_Implementation(ESpatialFunctionalTestWorkerType(Z_Param_ControllerType),Z_Param_ChangedInstance);
		P_NATIVE_END;
	}
	static FName NAME_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue = FName(TEXT("CrossServerSetTestValue"));
	void ACrossServerAndClientOrchestrationTest::CrossServerSetTestValue(ESpatialFunctionalTestWorkerType ControllerType, uint8 ChangedInstance)
	{
		CrossServerAndClientOrchestrationTest_eventCrossServerSetTestValue_Parms Parms;
		Parms.ControllerType=ControllerType;
		Parms.ChangedInstance=ChangedInstance;
		ProcessEvent(FindFunctionChecked(NAME_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue),&Parms);
	}
	void ACrossServerAndClientOrchestrationTest::StaticRegisterNativesACrossServerAndClientOrchestrationTest()
	{
		UClass* Class = ACrossServerAndClientOrchestrationTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrossServerSetTestValue", &ACrossServerAndClientOrchestrationTest::execCrossServerSetTestValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChangedInstance;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::NewProp_ChangedInstance = { "ChangedInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrossServerAndClientOrchestrationTest_eventCrossServerSetTestValue_Parms, ChangedInstance), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrossServerAndClientOrchestrationTest_eventCrossServerSetTestValue_Parms, ControllerType), Z_Construct_UEnum_SpatialGDKFunctionalTests_ESpatialFunctionalTestWorkerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::NewProp_ChangedInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::NewProp_ControllerType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrossServerAndClientOrchestrationTest, nullptr, "CrossServerSetTestValue", nullptr, nullptr, sizeof(CrossServerAndClientOrchestrationTest_eventCrossServerSetTestValue_Parms), Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020CD0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_NoRegister()
	{
		return ACrossServerAndClientOrchestrationTest::StaticClass();
	}
	struct Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientWorkerSetValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClientWorkerSetValues;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClientWorkerSetValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWorkerSetValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerWorkerSetValues;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ServerWorkerSetValues_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpatialFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrossServerAndClientOrchestrationTest_CrossServerSetTestValue, "CrossServerSetTestValue" }, // 4025556616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Replication LOD Utilities|Transformation Actor Input Rendering" },
		{ "IncludePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationTest.h" },
		{ "ModuleRelativePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ClientWorkerSetValues_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ClientWorkerSetValues = { "ClientWorkerSetValues", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrossServerAndClientOrchestrationTest, ClientWorkerSetValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ClientWorkerSetValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ClientWorkerSetValues_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ClientWorkerSetValues_Inner = { "ClientWorkerSetValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ServerWorkerSetValues_MetaData[] = {
		{ "ModuleRelativePath", "SpatialGDK/CrossServerAndClientOrchestrationTest/CrossServerAndClientOrchestrationTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ServerWorkerSetValues = { "ServerWorkerSetValues", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrossServerAndClientOrchestrationTest, ServerWorkerSetValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ServerWorkerSetValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ServerWorkerSetValues_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ServerWorkerSetValues_Inner = { "ServerWorkerSetValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ClientWorkerSetValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ClientWorkerSetValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ServerWorkerSetValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::NewProp_ServerWorkerSetValues_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossServerAndClientOrchestrationTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::ClassParams = {
		&ACrossServerAndClientOrchestrationTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossServerAndClientOrchestrationTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossServerAndClientOrchestrationTest, 3443315946);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ACrossServerAndClientOrchestrationTest>()
	{
		return ACrossServerAndClientOrchestrationTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossServerAndClientOrchestrationTest(Z_Construct_UClass_ACrossServerAndClientOrchestrationTest, &ACrossServerAndClientOrchestrationTest::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ACrossServerAndClientOrchestrationTest"), false, nullptr, nullptr, nullptr);

	void ACrossServerAndClientOrchestrationTest::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ServerWorkerSetValues(TEXT("ServerWorkerSetValues"));
		static const FName Name_ClientWorkerSetValues(TEXT("ClientWorkerSetValues"));

		const bool bIsValid = true
			&& Name_ServerWorkerSetValues == ClassReps[(int32)ENetFields_Private::ServerWorkerSetValues].Property->GetFName()
			&& Name_ClientWorkerSetValues == ClassReps[(int32)ENetFields_Private::ClientWorkerSetValues].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACrossServerAndClientOrchestrationTest"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossServerAndClientOrchestrationTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

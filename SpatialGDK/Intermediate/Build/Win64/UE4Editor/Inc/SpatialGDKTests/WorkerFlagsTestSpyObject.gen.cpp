// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKTests/SpatialGDK/Interop/SpatialWorkerFlags/WorkerFlagsTestSpyObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkerFlagsTestSpyObject() {}
// Cross Module References
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UWorkerFlagsTestSpyObject_NoRegister();
	SPATIALGDKTESTS_API UClass* Z_Construct_UClass_UWorkerFlagsTestSpyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKTests();
// End Cross Module References
	DEFINE_FUNCTION(UWorkerFlagsTestSpyObject::execSetFlagUpdated)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FlagName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FlagValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFlagUpdated(Z_Param_FlagName,Z_Param_FlagValue);
		P_NATIVE_END;
	}
	void UWorkerFlagsTestSpyObject::StaticRegisterNativesUWorkerFlagsTestSpyObject()
	{
		UClass* Class = UWorkerFlagsTestSpyObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFlagUpdated", &UWorkerFlagsTestSpyObject::execSetFlagUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics
	{
		struct WorkerFlagsTestSpyObject_eventSetFlagUpdated_Parms
		{
			FString FlagName;
			FString FlagValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlagValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagValue = { "FlagValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorkerFlagsTestSpyObject_eventSetFlagUpdated_Parms, FlagValue), METADATA_PARAMS(Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagName = { "FlagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorkerFlagsTestSpyObject_eventSetFlagUpdated_Parms, FlagName), METADATA_PARAMS(Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::NewProp_FlagName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/Interop/SpatialWorkerFlags/WorkerFlagsTestSpyObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorkerFlagsTestSpyObject, nullptr, "SetFlagUpdated", nullptr, nullptr, sizeof(WorkerFlagsTestSpyObject_eventSetFlagUpdated_Parms), Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWorkerFlagsTestSpyObject_NoRegister()
	{
		return UWorkerFlagsTestSpyObject::StaticClass();
	}
	struct Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorkerFlagsTestSpyObject_SetFlagUpdated, "SetFlagUpdated" }, // 2795399958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialGDK/Interop/SpatialWorkerFlags/WorkerFlagsTestSpyObject.h" },
		{ "ModuleRelativePath", "SpatialGDK/Interop/SpatialWorkerFlags/WorkerFlagsTestSpyObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorkerFlagsTestSpyObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::ClassParams = {
		&UWorkerFlagsTestSpyObject::StaticClass,
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
		0x000000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorkerFlagsTestSpyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorkerFlagsTestSpyObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorkerFlagsTestSpyObject, 811384040);
	template<> SPATIALGDKTESTS_API UClass* StaticClass<UWorkerFlagsTestSpyObject>()
	{
		return UWorkerFlagsTestSpyObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorkerFlagsTestSpyObject(Z_Construct_UClass_UWorkerFlagsTestSpyObject, &UWorkerFlagsTestSpyObject::StaticClass, TEXT("/Script/SpatialGDKTests"), TEXT("UWorkerFlagsTestSpyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorkerFlagsTestSpyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

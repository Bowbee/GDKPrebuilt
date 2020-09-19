// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/SpatialTestCharacterMovement/TestMovementCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestMovementCharacter() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ATestMovementCharacter_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_ATestMovementCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATestMovementCharacter::execUpdateCameraLocationAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCameraLocationAndRotation_Implementation(Z_Param_Location,Z_Param_NewRotation);
		P_NATIVE_END;
	}
	static FName NAME_ATestMovementCharacter_UpdateCameraLocationAndRotation = FName(TEXT("UpdateCameraLocationAndRotation"));
	void ATestMovementCharacter::UpdateCameraLocationAndRotation(FVector Location, FRotator NewRotation)
	{
		TestMovementCharacter_eventUpdateCameraLocationAndRotation_Parms Parms;
		Parms.Location=Location;
		Parms.NewRotation=NewRotation;
		ProcessEvent(FindFunctionChecked(NAME_ATestMovementCharacter_UpdateCameraLocationAndRotation),&Parms);
	}
	void ATestMovementCharacter::StaticRegisterNativesATestMovementCharacter()
	{
		UClass* Class = ATestMovementCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCameraLocationAndRotation", &ATestMovementCharacter::execUpdateCameraLocationAndRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestMovementCharacter_eventUpdateCameraLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestMovementCharacter_eventUpdateCameraLocationAndRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestCharacterMovement/TestMovementCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestMovementCharacter, nullptr, "UpdateCameraLocationAndRotation", nullptr, nullptr, sizeof(TestMovementCharacter_eventUpdateCameraLocationAndRotation_Parms), Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC0, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestMovementCharacter_NoRegister()
	{
		return ATestMovementCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATestMovementCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestMovementCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestMovementCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestMovementCharacter_UpdateCameraLocationAndRotation, "UpdateCameraLocationAndRotation" }, // 1406910474
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestMovementCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpatialGDK/SpatialTestCharacterMovement/TestMovementCharacter.h" },
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestCharacterMovement/TestMovementCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestCharacterMovement/TestMovementCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestMovementCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialGDK/SpatialTestCharacterMovement/TestMovementCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestMovementCharacter, SphereComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_SphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestMovementCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestMovementCharacter_Statics::NewProp_SphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestMovementCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestMovementCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestMovementCharacter_Statics::ClassParams = {
		&ATestMovementCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestMovementCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestMovementCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ATestMovementCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestMovementCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestMovementCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestMovementCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestMovementCharacter, 477090681);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<ATestMovementCharacter>()
	{
		return ATestMovementCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestMovementCharacter(Z_Construct_UClass_ATestMovementCharacter, &ATestMovementCharacter::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("ATestMovementCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestMovementCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

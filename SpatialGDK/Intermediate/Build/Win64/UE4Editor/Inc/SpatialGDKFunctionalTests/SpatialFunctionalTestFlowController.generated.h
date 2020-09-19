// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFunctionalTestResult : uint8;
struct FWorkerDefinition;
#ifdef SPATIALGDKFUNCTIONALTESTS_SpatialFunctionalTestFlowController_generated_h
#error "SpatialFunctionalTestFlowController.generated.h already included, missing '#pragma once' in SpatialFunctionalTestFlowController.h"
#endif
#define SPATIALGDKFUNCTIONALTESTS_SpatialFunctionalTestFlowController_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_RPC_WRAPPERS \
	virtual void ServerNotifyFinishTest_Implementation(EFunctionalTestResult TestResult, const FString& Message); \
	virtual void CrossServerNotifyStepFinished_Implementation(); \
	virtual void ServerNotifyStepFinished_Implementation(); \
	virtual void ClientStartStep_Implementation(int32 StepIndex); \
	virtual void ServerSetReadyToRunTest_Implementation(); \
	virtual void CrossServerSetWorkerId_Implementation(int32 NewWorkerId); \
	virtual void CrossServerStartStep_Implementation(int32 StepIndex); \
 \
	DECLARE_FUNCTION(execServerNotifyFinishTest); \
	DECLARE_FUNCTION(execCrossServerNotifyStepFinished); \
	DECLARE_FUNCTION(execServerNotifyStepFinished); \
	DECLARE_FUNCTION(execClientStartStep); \
	DECLARE_FUNCTION(execServerSetReadyToRunTest); \
	DECLARE_FUNCTION(execOnReadyToRegisterWithTest); \
	DECLARE_FUNCTION(execGetWorkerDefinition); \
	DECLARE_FUNCTION(execCrossServerSetWorkerId); \
	DECLARE_FUNCTION(execCrossServerStartStep);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerNotifyFinishTest_Implementation(EFunctionalTestResult TestResult, const FString& Message); \
	virtual void CrossServerNotifyStepFinished_Implementation(); \
	virtual void ServerNotifyStepFinished_Implementation(); \
	virtual void ClientStartStep_Implementation(int32 StepIndex); \
	virtual void ServerSetReadyToRunTest_Implementation(); \
	virtual void CrossServerSetWorkerId_Implementation(int32 NewWorkerId); \
	virtual void CrossServerStartStep_Implementation(int32 StepIndex); \
 \
	DECLARE_FUNCTION(execServerNotifyFinishTest); \
	DECLARE_FUNCTION(execCrossServerNotifyStepFinished); \
	DECLARE_FUNCTION(execServerNotifyStepFinished); \
	DECLARE_FUNCTION(execClientStartStep); \
	DECLARE_FUNCTION(execServerSetReadyToRunTest); \
	DECLARE_FUNCTION(execOnReadyToRegisterWithTest); \
	DECLARE_FUNCTION(execGetWorkerDefinition); \
	DECLARE_FUNCTION(execCrossServerSetWorkerId); \
	DECLARE_FUNCTION(execCrossServerStartStep);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_EVENT_PARMS \
	struct SpatialFunctionalTestFlowController_eventClientStartStep_Parms \
	{ \
		int32 StepIndex; \
	}; \
	struct SpatialFunctionalTestFlowController_eventCrossServerSetWorkerId_Parms \
	{ \
		int32 NewWorkerId; \
	}; \
	struct SpatialFunctionalTestFlowController_eventCrossServerStartStep_Parms \
	{ \
		int32 StepIndex; \
	}; \
	struct SpatialFunctionalTestFlowController_eventServerNotifyFinishTest_Parms \
	{ \
		EFunctionalTestResult TestResult; \
		FString Message; \
	};


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_CALLBACK_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpatialFunctionalTestFlowController(); \
	friend struct Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics; \
public: \
	DECLARE_CLASS(ASpatialFunctionalTestFlowController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKFunctionalTests"), NO_API) \
	DECLARE_SERIALIZER(ASpatialFunctionalTestFlowController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwningTest=NETFIELD_REP_START, \
		WorkerDefinition, \
		bReadyToRegisterWithTest, \
		bIsReadyToRunTest, \
		NETFIELD_REP_END=bIsReadyToRunTest	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASpatialFunctionalTestFlowController(); \
	friend struct Z_Construct_UClass_ASpatialFunctionalTestFlowController_Statics; \
public: \
	DECLARE_CLASS(ASpatialFunctionalTestFlowController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKFunctionalTests"), NO_API) \
	DECLARE_SERIALIZER(ASpatialFunctionalTestFlowController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwningTest=NETFIELD_REP_START, \
		WorkerDefinition, \
		bReadyToRegisterWithTest, \
		bIsReadyToRunTest, \
		NETFIELD_REP_END=bIsReadyToRunTest	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialFunctionalTestFlowController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialFunctionalTestFlowController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialFunctionalTestFlowController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialFunctionalTestFlowController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialFunctionalTestFlowController(ASpatialFunctionalTestFlowController&&); \
	NO_API ASpatialFunctionalTestFlowController(const ASpatialFunctionalTestFlowController&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialFunctionalTestFlowController(ASpatialFunctionalTestFlowController&&); \
	NO_API ASpatialFunctionalTestFlowController(const ASpatialFunctionalTestFlowController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialFunctionalTestFlowController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialFunctionalTestFlowController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialFunctionalTestFlowController)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsReadyToRunTest() { return STRUCT_OFFSET(ASpatialFunctionalTestFlowController, bIsReadyToRunTest); }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_17_PROLOG \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_EVENT_PARMS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<class ASpatialFunctionalTestFlowController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestFlowController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

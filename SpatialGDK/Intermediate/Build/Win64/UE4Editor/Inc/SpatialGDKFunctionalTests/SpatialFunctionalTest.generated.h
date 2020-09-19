// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FWorkerDefinition;
struct FSpatialFunctionalTestStepDefinition;
class ASpatialFunctionalTestFlowController;
enum class ESpatialFunctionalTestWorkerType : uint8;
enum class EFunctionalTestResult : uint8;
#ifdef SPATIALGDKFUNCTIONALTESTS_SpatialFunctionalTest_generated_h
#error "SpatialFunctionalTest.generated.h already included, missing '#pragma once' in SpatialFunctionalTest.h"
#endif
#define SPATIALGDKFUNCTIONALTESTS_SpatialFunctionalTest_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_RPC_WRAPPERS \
	virtual void RemoveActorDelegation_Implementation(AActor* Actor); \
	virtual void AddActorDelegation_Implementation(AActor* Actor, int32 ServerWorkerId, bool bPersistOnTestFinished); \
	virtual void CrossServerNotifyStepFinished_Implementation(ASpatialFunctionalTestFlowController* FlowController); \
	virtual void CrossServerFinishTest_Implementation(EFunctionalTestResult TestResult, const FString& Message); \
 \
	DECLARE_FUNCTION(execStartServerFlowControllerSpawn); \
	DECLARE_FUNCTION(execOnReplicated_CurrentStepIndex); \
	DECLARE_FUNCTION(execHasActorDelegation); \
	DECLARE_FUNCTION(execRemoveActorDelegation); \
	DECLARE_FUNCTION(execAddActorDelegation); \
	DECLARE_FUNCTION(execGetAllClients); \
	DECLARE_FUNCTION(execGetAllServers); \
	DECLARE_FUNCTION(execGetAllWorkers); \
	DECLARE_FUNCTION(execGetAllWorkersId); \
	DECLARE_FUNCTION(execGetNumberOfClientWorkers); \
	DECLARE_FUNCTION(execGetNumberOfServerWorkers); \
	DECLARE_FUNCTION(execFinishStep); \
	DECLARE_FUNCTION(execAddStepFromDefinitionMulti); \
	DECLARE_FUNCTION(execAddStepFromDefinition); \
	DECLARE_FUNCTION(execAddStepBlueprint); \
	DECLARE_FUNCTION(execGetLocalFlowController); \
	DECLARE_FUNCTION(execGetFlowController); \
	DECLARE_FUNCTION(execCrossServerNotifyStepFinished); \
	DECLARE_FUNCTION(execCrossServerFinishTest);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveActorDelegation_Implementation(AActor* Actor); \
	virtual void AddActorDelegation_Implementation(AActor* Actor, int32 ServerWorkerId, bool bPersistOnTestFinished); \
	virtual void CrossServerNotifyStepFinished_Implementation(ASpatialFunctionalTestFlowController* FlowController); \
	virtual void CrossServerFinishTest_Implementation(EFunctionalTestResult TestResult, const FString& Message); \
 \
	DECLARE_FUNCTION(execStartServerFlowControllerSpawn); \
	DECLARE_FUNCTION(execOnReplicated_CurrentStepIndex); \
	DECLARE_FUNCTION(execHasActorDelegation); \
	DECLARE_FUNCTION(execRemoveActorDelegation); \
	DECLARE_FUNCTION(execAddActorDelegation); \
	DECLARE_FUNCTION(execGetAllClients); \
	DECLARE_FUNCTION(execGetAllServers); \
	DECLARE_FUNCTION(execGetAllWorkers); \
	DECLARE_FUNCTION(execGetAllWorkersId); \
	DECLARE_FUNCTION(execGetNumberOfClientWorkers); \
	DECLARE_FUNCTION(execGetNumberOfServerWorkers); \
	DECLARE_FUNCTION(execFinishStep); \
	DECLARE_FUNCTION(execAddStepFromDefinitionMulti); \
	DECLARE_FUNCTION(execAddStepFromDefinition); \
	DECLARE_FUNCTION(execAddStepBlueprint); \
	DECLARE_FUNCTION(execGetLocalFlowController); \
	DECLARE_FUNCTION(execGetFlowController); \
	DECLARE_FUNCTION(execCrossServerNotifyStepFinished); \
	DECLARE_FUNCTION(execCrossServerFinishTest);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_EVENT_PARMS \
	struct SpatialFunctionalTest_eventAddActorDelegation_Parms \
	{ \
		AActor* Actor; \
		int32 ServerWorkerId; \
		bool bPersistOnTestFinished; \
	}; \
	struct SpatialFunctionalTest_eventCrossServerFinishTest_Parms \
	{ \
		EFunctionalTestResult TestResult; \
		FString Message; \
	}; \
	struct SpatialFunctionalTest_eventCrossServerNotifyStepFinished_Parms \
	{ \
		ASpatialFunctionalTestFlowController* FlowController; \
	}; \
	struct SpatialFunctionalTest_eventRemoveActorDelegation_Parms \
	{ \
		AActor* Actor; \
	};


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_CALLBACK_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpatialFunctionalTest(); \
	friend struct Z_Construct_UClass_ASpatialFunctionalTest_Statics; \
public: \
	DECLARE_CLASS(ASpatialFunctionalTest, AFunctionalTest, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKFunctionalTests"), NO_API) \
	DECLARE_SERIALIZER(ASpatialFunctionalTest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReadyToSpawnServerControllers=NETFIELD_REP_START, \
		CurrentStepIndex, \
		FlowControllers, \
		NETFIELD_REP_END=FlowControllers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_INCLASS \
private: \
	static void StaticRegisterNativesASpatialFunctionalTest(); \
	friend struct Z_Construct_UClass_ASpatialFunctionalTest_Statics; \
public: \
	DECLARE_CLASS(ASpatialFunctionalTest, AFunctionalTest, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKFunctionalTests"), NO_API) \
	DECLARE_SERIALIZER(ASpatialFunctionalTest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReadyToSpawnServerControllers=NETFIELD_REP_START, \
		CurrentStepIndex, \
		FlowControllers, \
		NETFIELD_REP_END=FlowControllers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialFunctionalTest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialFunctionalTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialFunctionalTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialFunctionalTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialFunctionalTest(ASpatialFunctionalTest&&); \
	NO_API ASpatialFunctionalTest(const ASpatialFunctionalTest&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialFunctionalTest(ASpatialFunctionalTest&&); \
	NO_API ASpatialFunctionalTest(const ASpatialFunctionalTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialFunctionalTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialFunctionalTest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpatialFunctionalTest)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumRequiredClients() { return STRUCT_OFFSET(ASpatialFunctionalTest, NumRequiredClients); } \
	FORCEINLINE static uint32 __PPO__CurrentStepIndex() { return STRUCT_OFFSET(ASpatialFunctionalTest, CurrentStepIndex); } \
	FORCEINLINE static uint32 __PPO__FlowControllers() { return STRUCT_OFFSET(ASpatialFunctionalTest, FlowControllers); }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_30_PROLOG \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_EVENT_PARMS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<class ASpatialFunctionalTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

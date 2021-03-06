// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESpatialFunctionalTestWorkerType : uint8;
#ifdef SPATIALGDKFUNCTIONALTESTS_CrossServerAndClientOrchestrationTest_generated_h
#error "CrossServerAndClientOrchestrationTest.generated.h already included, missing '#pragma once' in CrossServerAndClientOrchestrationTest.h"
#endif
#define SPATIALGDKFUNCTIONALTESTS_CrossServerAndClientOrchestrationTest_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_RPC_WRAPPERS \
	virtual void CrossServerSetTestValue_Implementation(ESpatialFunctionalTestWorkerType ControllerType, uint8 ChangedInstance); \
 \
	DECLARE_FUNCTION(execCrossServerSetTestValue);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CrossServerSetTestValue_Implementation(ESpatialFunctionalTestWorkerType ControllerType, uint8 ChangedInstance); \
 \
	DECLARE_FUNCTION(execCrossServerSetTestValue);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_EVENT_PARMS \
	struct CrossServerAndClientOrchestrationTest_eventCrossServerSetTestValue_Parms \
	{ \
		ESpatialFunctionalTestWorkerType ControllerType; \
		uint8 ChangedInstance; \
	};


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_CALLBACK_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossServerAndClientOrchestrationTest(); \
	friend struct Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics; \
public: \
	DECLARE_CLASS(ACrossServerAndClientOrchestrationTest, ASpatialFunctionalTest, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKFunctionalTests"), NO_API) \
	DECLARE_SERIALIZER(ACrossServerAndClientOrchestrationTest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerWorkerSetValues=NETFIELD_REP_START, \
		ClientWorkerSetValues, \
		NETFIELD_REP_END=ClientWorkerSetValues	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACrossServerAndClientOrchestrationTest(); \
	friend struct Z_Construct_UClass_ACrossServerAndClientOrchestrationTest_Statics; \
public: \
	DECLARE_CLASS(ACrossServerAndClientOrchestrationTest, ASpatialFunctionalTest, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKFunctionalTests"), NO_API) \
	DECLARE_SERIALIZER(ACrossServerAndClientOrchestrationTest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerWorkerSetValues=NETFIELD_REP_START, \
		ClientWorkerSetValues, \
		NETFIELD_REP_END=ClientWorkerSetValues	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrossServerAndClientOrchestrationTest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrossServerAndClientOrchestrationTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossServerAndClientOrchestrationTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossServerAndClientOrchestrationTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossServerAndClientOrchestrationTest(ACrossServerAndClientOrchestrationTest&&); \
	NO_API ACrossServerAndClientOrchestrationTest(const ACrossServerAndClientOrchestrationTest&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossServerAndClientOrchestrationTest(ACrossServerAndClientOrchestrationTest&&); \
	NO_API ACrossServerAndClientOrchestrationTest(const ACrossServerAndClientOrchestrationTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossServerAndClientOrchestrationTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossServerAndClientOrchestrationTest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrossServerAndClientOrchestrationTest)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_12_PROLOG \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_EVENT_PARMS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<class ACrossServerAndClientOrchestrationTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_CrossServerAndClientOrchestrationTest_CrossServerAndClientOrchestrationTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

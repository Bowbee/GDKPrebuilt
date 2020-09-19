// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDKFUNCTIONALTESTS_SpatialFunctionalTestStep_generated_h
#error "SpatialFunctionalTestStep.generated.h already included, missing '#pragma once' in SpatialFunctionalTestStep.h"
#endif
#define SPATIALGDKFUNCTIONALTESTS_SpatialFunctionalTestStep_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestStep_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialFunctionalTestStepDefinition_Statics; \
	SPATIALGDKFUNCTIONALTESTS_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDKFUNCTIONALTESTS_API UScriptStruct* StaticStruct<struct FSpatialFunctionalTestStepDefinition>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestStep_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkerDefinition_Statics; \
	SPATIALGDKFUNCTIONALTESTS_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDKFUNCTIONALTESTS_API UScriptStruct* StaticStruct<struct FWorkerDefinition>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestStep_h_16_DELEGATE \
struct _Script_SpatialGDKFunctionalTests_eventStepTickDelegate_Parms \
{ \
	float DeltaTime; \
}; \
static inline void FStepTickDelegate_DelegateWrapper(const FScriptDelegate& StepTickDelegate, float DeltaTime) \
{ \
	_Script_SpatialGDKFunctionalTests_eventStepTickDelegate_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	StepTickDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestStep_h_15_DELEGATE \
static inline void FStepStartDelegate_DelegateWrapper(const FScriptDelegate& StepStartDelegate) \
{ \
	StepStartDelegate.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestStep_h_14_DELEGATE \
struct _Script_SpatialGDKFunctionalTests_eventStepIsReadyDelegate_Parms \
{ \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_SpatialGDKFunctionalTests_eventStepIsReadyDelegate_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FStepIsReadyDelegate_DelegateWrapper(const FScriptDelegate& StepIsReadyDelegate) \
{ \
	_Script_SpatialGDKFunctionalTests_eventStepIsReadyDelegate_Parms Parms; \
	StepIsReadyDelegate.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_Public_SpatialFunctionalTestStep_h


#define FOREACH_ENUM_ESPATIALFUNCTIONALTESTWORKERTYPE(op) \
	op(ESpatialFunctionalTestWorkerType::Server) \
	op(ESpatialFunctionalTestWorkerType::Client) \
	op(ESpatialFunctionalTestWorkerType::All) 

enum class ESpatialFunctionalTestWorkerType : uint8;
template<> SPATIALGDKFUNCTIONALTESTS_API UEnum* StaticEnum<ESpatialFunctionalTestWorkerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

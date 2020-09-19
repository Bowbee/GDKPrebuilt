// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSpatialPingAverageData;
#ifdef SPATIALGDK_SpatialPingComponent_generated_h
#error "SpatialPingComponent.generated.h already included, missing '#pragma once' in SpatialPingComponent.h"
#endif
#define SPATIALGDK_SpatialPingComponent_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics; \
	SPATIALGDK_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDK_API UScriptStruct* StaticStruct<struct FSpatialPingAverageData>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_12_DELEGATE \
struct _Script_SpatialGDK_eventOnRecordPing_Parms \
{ \
	float Ping; \
}; \
static inline void FOnRecordPing_DelegateWrapper(const FMulticastScriptDelegate& OnRecordPing, float Ping) \
{ \
	_Script_SpatialGDK_eventOnRecordPing_Parms Parms; \
	Parms.Ping=Ping; \
	OnRecordPing.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_RPC_WRAPPERS \
	virtual bool SendServerWorkerPingID_Validate(uint16 ); \
	virtual void SendServerWorkerPingID_Implementation(uint16 PingID); \
 \
	DECLARE_FUNCTION(execSendServerWorkerPingID); \
	DECLARE_FUNCTION(execOnRep_ReplicatedPingID); \
	DECLARE_FUNCTION(execGetAverageData); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execSetPingEnabled); \
	DECLARE_FUNCTION(execGetIsPingEnabled);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SendServerWorkerPingID_Validate(uint16 ); \
	virtual void SendServerWorkerPingID_Implementation(uint16 PingID); \
 \
	DECLARE_FUNCTION(execSendServerWorkerPingID); \
	DECLARE_FUNCTION(execOnRep_ReplicatedPingID); \
	DECLARE_FUNCTION(execGetAverageData); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execSetPingEnabled); \
	DECLARE_FUNCTION(execGetIsPingEnabled);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_EVENT_PARMS \
	struct SpatialPingComponent_eventSendServerWorkerPingID_Parms \
	{ \
		uint16 PingID; \
	};


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_CALLBACK_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialPingComponent(); \
	friend struct Z_Construct_UClass_USpatialPingComponent_Statics; \
public: \
	DECLARE_CLASS(USpatialPingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialPingComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPingID=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPingID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUSpatialPingComponent(); \
	friend struct Z_Construct_UClass_USpatialPingComponent_Statics; \
public: \
	DECLARE_CLASS(USpatialPingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialPingComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPingID=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPingID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialPingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialPingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialPingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialPingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialPingComponent(USpatialPingComponent&&); \
	NO_API USpatialPingComponent(const USpatialPingComponent&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialPingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialPingComponent(USpatialPingComponent&&); \
	NO_API USpatialPingComponent(const USpatialPingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialPingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialPingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialPingComponent)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPingID() { return STRUCT_OFFSET(USpatialPingComponent, ReplicatedPingID); } \
	FORCEINLINE static uint32 __PPO__OwningController() { return STRUCT_OFFSET(USpatialPingComponent, OwningController); }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_46_PROLOG \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_EVENT_PARMS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpatialPingComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class USpatialPingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_Components_SpatialPingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

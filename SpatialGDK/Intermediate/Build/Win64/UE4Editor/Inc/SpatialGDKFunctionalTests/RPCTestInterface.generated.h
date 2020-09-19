// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDKFUNCTIONALTESTS_RPCTestInterface_generated_h
#error "RPCTestInterface.generated.h already included, missing '#pragma once' in RPCTestInterface.h"
#endif
#define SPATIALGDKFUNCTIONALTESTS_RPCTestInterface_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_RPC_WRAPPERS \
	virtual void RPCInInterface_Implementation()=0; \
 \
	DECLARE_FUNCTION(execRPCInInterface);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCInInterface_Implementation()=0; \
 \
	DECLARE_FUNCTION(execRPCInInterface);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_EVENT_PARMS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_CALLBACK_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPCTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPCTestInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPCTestInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPCTestInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPCTestInterface(URPCTestInterface&&); \
	NO_API URPCTestInterface(const URPCTestInterface&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPCTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPCTestInterface(URPCTestInterface&&); \
	NO_API URPCTestInterface(const URPCTestInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPCTestInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPCTestInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPCTestInterface)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURPCTestInterface(); \
	friend struct Z_Construct_UClass_URPCTestInterface_Statics; \
public: \
	DECLARE_CLASS(URPCTestInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SpatialGDKFunctionalTests"), NO_API) \
	DECLARE_SERIALIZER(URPCTestInterface)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRPCTestInterface() {} \
public: \
	typedef URPCTestInterface UClassType; \
	typedef IRPCTestInterface ThisClass; \
	static void Execute_RPCInInterface(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IRPCTestInterface() {} \
public: \
	typedef URPCTestInterface UClassType; \
	typedef IRPCTestInterface ThisClass; \
	static void Execute_RPCInInterface(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_9_PROLOG \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_EVENT_PARMS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<class URPCTestInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKFunctionalTests_SpatialGDK_UNR_3157_RPCTestInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDK_RPCContainer_generated_h
#error "RPCContainer.generated.h already included, missing '#pragma once' in RPCContainer.h"
#endif
#define SPATIALGDK_RPCContainer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_RPCContainer_h


#define FOREACH_ENUM_ERPCRESULT(op) \
	op(ERPCResult::Success) \
	op(ERPCResult::UnresolvedTargetObject) \
	op(ERPCResult::MissingFunctionInfo) \
	op(ERPCResult::UnresolvedParameters) \
	op(ERPCResult::NoAuthority) \
	op(ERPCResult::NoActorChannel) \
	op(ERPCResult::SpatialActorChannelNotListening) \
	op(ERPCResult::NoNetConnection) \
	op(ERPCResult::InvalidRPCType) \
	op(ERPCResult::NoOwningController) \
	op(ERPCResult::NoControllerChannel) \
	op(ERPCResult::ControllerChannelNotListening) \
	op(ERPCResult::RPCServiceFailure) \
	op(ERPCResult::Unknown) 

enum class ERPCResult : uint8;
template<> SPATIALGDK_API UEnum* StaticEnum<ERPCResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

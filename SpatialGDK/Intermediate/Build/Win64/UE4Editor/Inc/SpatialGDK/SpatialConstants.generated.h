// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDK_SpatialConstants_generated_h
#error "SpatialConstants.generated.h already included, missing '#pragma once' in SpatialConstants.h"
#endif
#define SPATIALGDK_SpatialConstants_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_SpatialConstants_h


#define FOREACH_ENUM_ERPCTYPE(op) \
	op(ERPCType::Invalid) \
	op(ERPCType::ClientReliable) \
	op(ERPCType::ClientUnreliable) \
	op(ERPCType::ServerReliable) \
	op(ERPCType::ServerUnreliable) \
	op(ERPCType::NetMulticast) \
	op(ERPCType::CrossServer) 

enum class ERPCType : uint8;
template<> SPATIALGDK_API UEnum* StaticEnum<ERPCType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

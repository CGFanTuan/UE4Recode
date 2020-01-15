// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARTUP_startupGameMode_generated_h
#error "startupGameMode.generated.h already included, missing '#pragma once' in startupGameMode.h"
#endif
#define STARTUP_startupGameMode_generated_h

#define startup_Source_startup_startupGameMode_h_12_RPC_WRAPPERS
#define startup_Source_startup_startupGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define startup_Source_startup_startupGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAstartupGameMode(); \
	friend struct Z_Construct_UClass_AstartupGameMode_Statics; \
public: \
	DECLARE_CLASS(AstartupGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/startup"), STARTUP_API) \
	DECLARE_SERIALIZER(AstartupGameMode)


#define startup_Source_startup_startupGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAstartupGameMode(); \
	friend struct Z_Construct_UClass_AstartupGameMode_Statics; \
public: \
	DECLARE_CLASS(AstartupGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/startup"), STARTUP_API) \
	DECLARE_SERIALIZER(AstartupGameMode)


#define startup_Source_startup_startupGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARTUP_API AstartupGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AstartupGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARTUP_API, AstartupGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AstartupGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARTUP_API AstartupGameMode(AstartupGameMode&&); \
	STARTUP_API AstartupGameMode(const AstartupGameMode&); \
public:


#define startup_Source_startup_startupGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARTUP_API AstartupGameMode(AstartupGameMode&&); \
	STARTUP_API AstartupGameMode(const AstartupGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARTUP_API, AstartupGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AstartupGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AstartupGameMode)


#define startup_Source_startup_startupGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define startup_Source_startup_startupGameMode_h_9_PROLOG
#define startup_Source_startup_startupGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	startup_Source_startup_startupGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	startup_Source_startup_startupGameMode_h_12_RPC_WRAPPERS \
	startup_Source_startup_startupGameMode_h_12_INCLASS \
	startup_Source_startup_startupGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define startup_Source_startup_startupGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	startup_Source_startup_startupGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	startup_Source_startup_startupGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	startup_Source_startup_startupGameMode_h_12_INCLASS_NO_PURE_DECLS \
	startup_Source_startup_startupGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARTUP_API UClass* StaticClass<class AstartupGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID startup_Source_startup_startupGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

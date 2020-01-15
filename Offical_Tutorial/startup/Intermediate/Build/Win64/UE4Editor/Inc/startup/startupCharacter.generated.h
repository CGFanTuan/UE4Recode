// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARTUP_startupCharacter_generated_h
#error "startupCharacter.generated.h already included, missing '#pragma once' in startupCharacter.h"
#endif
#define STARTUP_startupCharacter_generated_h

#define startup_Source_startup_startupCharacter_h_12_RPC_WRAPPERS
#define startup_Source_startup_startupCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define startup_Source_startup_startupCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAstartupCharacter(); \
	friend struct Z_Construct_UClass_AstartupCharacter_Statics; \
public: \
	DECLARE_CLASS(AstartupCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/startup"), NO_API) \
	DECLARE_SERIALIZER(AstartupCharacter)


#define startup_Source_startup_startupCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAstartupCharacter(); \
	friend struct Z_Construct_UClass_AstartupCharacter_Statics; \
public: \
	DECLARE_CLASS(AstartupCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/startup"), NO_API) \
	DECLARE_SERIALIZER(AstartupCharacter)


#define startup_Source_startup_startupCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AstartupCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AstartupCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AstartupCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AstartupCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AstartupCharacter(AstartupCharacter&&); \
	NO_API AstartupCharacter(const AstartupCharacter&); \
public:


#define startup_Source_startup_startupCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AstartupCharacter(AstartupCharacter&&); \
	NO_API AstartupCharacter(const AstartupCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AstartupCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AstartupCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AstartupCharacter)


#define startup_Source_startup_startupCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AstartupCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AstartupCharacter, FollowCamera); }


#define startup_Source_startup_startupCharacter_h_9_PROLOG
#define startup_Source_startup_startupCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	startup_Source_startup_startupCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	startup_Source_startup_startupCharacter_h_12_RPC_WRAPPERS \
	startup_Source_startup_startupCharacter_h_12_INCLASS \
	startup_Source_startup_startupCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define startup_Source_startup_startupCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	startup_Source_startup_startupCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	startup_Source_startup_startupCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	startup_Source_startup_startupCharacter_h_12_INCLASS_NO_PURE_DECLS \
	startup_Source_startup_startupCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARTUP_API UClass* StaticClass<class AstartupCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID startup_Source_startup_startupCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

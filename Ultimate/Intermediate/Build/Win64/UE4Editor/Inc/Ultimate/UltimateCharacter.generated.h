// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ULTIMATE_UltimateCharacter_generated_h
#error "UltimateCharacter.generated.h already included, missing '#pragma once' in UltimateCharacter.h"
#endif
#define ULTIMATE_UltimateCharacter_generated_h

#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_RPC_WRAPPERS
#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUltimateCharacter(); \
	friend struct Z_Construct_UClass_AUltimateCharacter_Statics; \
public: \
	DECLARE_CLASS(AUltimateCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ultimate"), NO_API) \
	DECLARE_SERIALIZER(AUltimateCharacter)


#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUltimateCharacter(); \
	friend struct Z_Construct_UClass_AUltimateCharacter_Statics; \
public: \
	DECLARE_CLASS(AUltimateCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ultimate"), NO_API) \
	DECLARE_SERIALIZER(AUltimateCharacter)


#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUltimateCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUltimateCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUltimateCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUltimateCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUltimateCharacter(AUltimateCharacter&&); \
	NO_API AUltimateCharacter(const AUltimateCharacter&); \
public:


#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUltimateCharacter(AUltimateCharacter&&); \
	NO_API AUltimateCharacter(const AUltimateCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUltimateCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUltimateCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUltimateCharacter)


#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUltimateCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AUltimateCharacter, FollowCamera); }


#define Ultimate_Source_Ultimate_UltimateCharacter_h_9_PROLOG
#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_RPC_WRAPPERS \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_INCLASS \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ultimate_Source_Ultimate_UltimateCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Ultimate_Source_Ultimate_UltimateCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ultimate_Source_Ultimate_UltimateCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

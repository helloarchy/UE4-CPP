// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ULTIMATE_CustomActor_generated_h
#error "CustomActor.generated.h already included, missing '#pragma once' in CustomActor.h"
#endif
#define ULTIMATE_CustomActor_generated_h

#define Ultimate_Source_Ultimate_CustomActor_h_12_RPC_WRAPPERS
#define Ultimate_Source_Ultimate_CustomActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ultimate_Source_Ultimate_CustomActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomActor(); \
	friend struct Z_Construct_UClass_ACustomActor_Statics; \
public: \
	DECLARE_CLASS(ACustomActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ultimate"), NO_API) \
	DECLARE_SERIALIZER(ACustomActor)


#define Ultimate_Source_Ultimate_CustomActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACustomActor(); \
	friend struct Z_Construct_UClass_ACustomActor_Statics; \
public: \
	DECLARE_CLASS(ACustomActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ultimate"), NO_API) \
	DECLARE_SERIALIZER(ACustomActor)


#define Ultimate_Source_Ultimate_CustomActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomActor(ACustomActor&&); \
	NO_API ACustomActor(const ACustomActor&); \
public:


#define Ultimate_Source_Ultimate_CustomActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomActor(ACustomActor&&); \
	NO_API ACustomActor(const ACustomActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomActor)


#define Ultimate_Source_Ultimate_CustomActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Ultimate_Source_Ultimate_CustomActor_h_9_PROLOG
#define Ultimate_Source_Ultimate_CustomActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ultimate_Source_Ultimate_CustomActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Ultimate_Source_Ultimate_CustomActor_h_12_RPC_WRAPPERS \
	Ultimate_Source_Ultimate_CustomActor_h_12_INCLASS \
	Ultimate_Source_Ultimate_CustomActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ultimate_Source_Ultimate_CustomActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ultimate_Source_Ultimate_CustomActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Ultimate_Source_Ultimate_CustomActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ultimate_Source_Ultimate_CustomActor_h_12_INCLASS_NO_PURE_DECLS \
	Ultimate_Source_Ultimate_CustomActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ultimate_Source_Ultimate_CustomActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRACTICE_03_Practice_03GameMode_generated_h
#error "Practice_03GameMode.generated.h already included, missing '#pragma once' in Practice_03GameMode.h"
#endif
#define PRACTICE_03_Practice_03GameMode_generated_h

#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTurretDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTurretDestroy(); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTurretDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTurretDestroy(); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPractice_03GameMode(); \
	friend struct Z_Construct_UClass_APractice_03GameMode_Statics; \
public: \
	DECLARE_CLASS(APractice_03GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Practice_03"), PRACTICE_03_API) \
	DECLARE_SERIALIZER(APractice_03GameMode)


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPractice_03GameMode(); \
	friend struct Z_Construct_UClass_APractice_03GameMode_Statics; \
public: \
	DECLARE_CLASS(APractice_03GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Practice_03"), PRACTICE_03_API) \
	DECLARE_SERIALIZER(APractice_03GameMode)


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PRACTICE_03_API APractice_03GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APractice_03GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PRACTICE_03_API, APractice_03GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APractice_03GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PRACTICE_03_API APractice_03GameMode(APractice_03GameMode&&); \
	PRACTICE_03_API APractice_03GameMode(const APractice_03GameMode&); \
public:


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PRACTICE_03_API APractice_03GameMode(APractice_03GameMode&&); \
	PRACTICE_03_API APractice_03GameMode(const APractice_03GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PRACTICE_03_API, APractice_03GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APractice_03GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APractice_03GameMode)


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Score() { return STRUCT_OFFSET(APractice_03GameMode, Score); }


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_12_PROLOG
#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_RPC_WRAPPERS \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_INCLASS \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Practice_05_Source_Practice_03_Practice_03GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_INCLASS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_Practice_03GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Practice_05_Source_Practice_03_Practice_03GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

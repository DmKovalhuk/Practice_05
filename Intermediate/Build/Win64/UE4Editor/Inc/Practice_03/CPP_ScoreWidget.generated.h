// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRACTICE_03_CPP_ScoreWidget_generated_h
#error "CPP_ScoreWidget.generated.h already included, missing '#pragma once' in CPP_ScoreWidget.h"
#endif
#define PRACTICE_03_CPP_ScoreWidget_generated_h

#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDieMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DieMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScoreText) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScoreValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScoreText(Z_Param_ScoreValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScreenHud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScreenHud(); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDieMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DieMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScoreText) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScoreValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScoreText(Z_Param_ScoreValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScreenHud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScreenHud(); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_ScoreWidget(); \
	friend struct Z_Construct_UClass_UCPP_ScoreWidget_Statics; \
public: \
	DECLARE_CLASS(UCPP_ScoreWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(UCPP_ScoreWidget)


#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCPP_ScoreWidget(); \
	friend struct Z_Construct_UClass_UCPP_ScoreWidget_Statics; \
public: \
	DECLARE_CLASS(UCPP_ScoreWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(UCPP_ScoreWidget)


#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_ScoreWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_ScoreWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_ScoreWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_ScoreWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_ScoreWidget(UCPP_ScoreWidget&&); \
	NO_API UCPP_ScoreWidget(const UCPP_ScoreWidget&); \
public:


#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_ScoreWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_ScoreWidget(UCPP_ScoreWidget&&); \
	NO_API UCPP_ScoreWidget(const UCPP_ScoreWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_ScoreWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_ScoreWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_ScoreWidget)


#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_13_PROLOG
#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_RPC_WRAPPERS \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_INCLASS \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_INCLASS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_CPP_ScoreWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Practice_05_Source_Practice_03_CPP_ScoreWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

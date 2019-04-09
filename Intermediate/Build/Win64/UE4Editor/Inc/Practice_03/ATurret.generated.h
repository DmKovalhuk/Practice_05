// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PRACTICE_03_ATurret_generated_h
#error "ATurret.generated.h already included, missing '#pragma once' in ATurret.h"
#endif
#define PRACTICE_03_ATurret_generated_h

#define Practice_05_Source_Practice_03_ATurret_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Die(Z_Param_Health); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_ATurret_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Die(Z_Param_Health); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_ATurret_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAATurret(); \
	friend struct Z_Construct_UClass_AATurret_Statics; \
public: \
	DECLARE_CLASS(AATurret, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(AATurret)


#define Practice_05_Source_Practice_03_ATurret_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAATurret(); \
	friend struct Z_Construct_UClass_AATurret_Statics; \
public: \
	DECLARE_CLASS(AATurret, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(AATurret)


#define Practice_05_Source_Practice_03_ATurret_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AATurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AATurret(AATurret&&); \
	NO_API AATurret(const AATurret&); \
public:


#define Practice_05_Source_Practice_03_ATurret_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AATurret(AATurret&&); \
	NO_API AATurret(const AATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AATurret)


#define Practice_05_Source_Practice_03_ATurret_h_15_PRIVATE_PROPERTY_OFFSET
#define Practice_05_Source_Practice_03_ATurret_h_12_PROLOG
#define Practice_05_Source_Practice_03_ATurret_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_ATurret_h_15_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_ATurret_h_15_RPC_WRAPPERS \
	Practice_05_Source_Practice_03_ATurret_h_15_INCLASS \
	Practice_05_Source_Practice_03_ATurret_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Practice_05_Source_Practice_03_ATurret_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_ATurret_h_15_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_ATurret_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_ATurret_h_15_INCLASS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_ATurret_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Practice_05_Source_Practice_03_ATurret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
#ifdef PRACTICE_03_Practice_03Projectile_generated_h
#error "Practice_03Projectile.generated.h already included, missing '#pragma once' in Practice_03Projectile.h"
#endif
#define PRACTICE_03_Practice_03Projectile_generated_h

#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPractice_03Projectile(); \
	friend struct Z_Construct_UClass_APractice_03Projectile_Statics; \
public: \
	DECLARE_CLASS(APractice_03Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(APractice_03Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPractice_03Projectile(); \
	friend struct Z_Construct_UClass_APractice_03Projectile_Statics; \
public: \
	DECLARE_CLASS(APractice_03Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(APractice_03Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APractice_03Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APractice_03Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APractice_03Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APractice_03Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APractice_03Projectile(APractice_03Projectile&&); \
	NO_API APractice_03Projectile(const APractice_03Projectile&); \
public:


#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APractice_03Projectile(APractice_03Projectile&&); \
	NO_API APractice_03Projectile(const APractice_03Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APractice_03Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APractice_03Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APractice_03Projectile)


#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APractice_03Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APractice_03Projectile, ProjectileMovement); }


#define Practice_05_Source_Practice_03_Practice_03Projectile_h_9_PROLOG
#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_RPC_WRAPPERS \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_INCLASS \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Practice_05_Source_Practice_03_Practice_03Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_Practice_03Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Practice_05_Source_Practice_03_Practice_03Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

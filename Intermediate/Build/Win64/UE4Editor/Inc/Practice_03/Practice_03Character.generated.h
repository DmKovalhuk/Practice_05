// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRACTICE_03_Practice_03Character_generated_h
#error "Practice_03Character.generated.h already included, missing '#pragma once' in Practice_03Character.h"
#endif
#define PRACTICE_03_Practice_03Character_generated_h

#define Practice_05_Source_Practice_03_Practice_03Character_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WeaponAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteFile(Z_Param_WeaponAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFromFile) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_WeaponAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadFromFile(Z_Param_Out_WeaponAmmo); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_Practice_03Character_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WeaponAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteFile(Z_Param_WeaponAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFromFile) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_WeaponAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadFromFile(Z_Param_Out_WeaponAmmo); \
		P_NATIVE_END; \
	}


#define Practice_05_Source_Practice_03_Practice_03Character_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPractice_03Character(); \
	friend struct Z_Construct_UClass_APractice_03Character_Statics; \
public: \
	DECLARE_CLASS(APractice_03Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(APractice_03Character)


#define Practice_05_Source_Practice_03_Practice_03Character_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPractice_03Character(); \
	friend struct Z_Construct_UClass_APractice_03Character_Statics; \
public: \
	DECLARE_CLASS(APractice_03Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Practice_03"), NO_API) \
	DECLARE_SERIALIZER(APractice_03Character)


#define Practice_05_Source_Practice_03_Practice_03Character_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APractice_03Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APractice_03Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APractice_03Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APractice_03Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APractice_03Character(APractice_03Character&&); \
	NO_API APractice_03Character(const APractice_03Character&); \
public:


#define Practice_05_Source_Practice_03_Practice_03Character_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APractice_03Character(APractice_03Character&&); \
	NO_API APractice_03Character(const APractice_03Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APractice_03Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APractice_03Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APractice_03Character)


#define Practice_05_Source_Practice_03_Practice_03Character_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APractice_03Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APractice_03Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APractice_03Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APractice_03Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APractice_03Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APractice_03Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APractice_03Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APractice_03Character, L_MotionController); }


#define Practice_05_Source_Practice_03_Practice_03Character_h_14_PROLOG
#define Practice_05_Source_Practice_03_Practice_03Character_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_RPC_WRAPPERS \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_INCLASS \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Practice_05_Source_Practice_03_Practice_03Character_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_PRIVATE_PROPERTY_OFFSET \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_INCLASS_NO_PURE_DECLS \
	Practice_05_Source_Practice_03_Practice_03Character_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Practice_05_Source_Practice_03_Practice_03Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

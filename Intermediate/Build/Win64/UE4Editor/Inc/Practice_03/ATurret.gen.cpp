// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practice_03/ATurret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATurret() {}
// Cross Module References
	PRACTICE_03_API UClass* Z_Construct_UClass_AATurret_NoRegister();
	PRACTICE_03_API UClass* Z_Construct_UClass_AATurret();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Practice_03();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_AATurret_Die();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_AATurret_OnComponentHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AATurret::StaticRegisterNativesAATurret()
	{
		UClass* Class = AATurret::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &AATurret::execDie },
			{ "OnComponentHit", &AATurret::execOnComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AATurret_Die_Statics
	{
		struct ATurret_eventDie_Parms
		{
			float Health;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AATurret_Die_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATurret_eventDie_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AATurret_Die_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATurret_eventDie_Parms), &Z_Construct_UFunction_AATurret_Die_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AATurret_Die_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ATurret_eventDie_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATurret_Die_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATurret_Die_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATurret_Die_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATurret_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ATurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AATurret_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATurret, "Die", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(ATurret_eventDie_Parms), Z_Construct_UFunction_AATurret_Die_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AATurret_Die_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AATurret_Die_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AATurret_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AATurret_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AATurret_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AATurret_OnComponentHit_Statics
	{
		struct ATurret_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ATurret_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ATurret_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ATurret_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ATurret_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_HitComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HitComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ATurret_eventOnComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATurret_OnComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATurret_OnComponentHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATurret_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ATurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AATurret_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATurret, "OnComponentHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(ATurret_eventOnComponentHit_Parms), Z_Construct_UFunction_AATurret_OnComponentHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AATurret_OnComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AATurret_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AATurret_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AATurret_NoRegister()
	{
		return AATurret::StaticClass();
	}
	struct Z_Construct_UClass_AATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Practice_03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AATurret_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AATurret_Die, "Die" }, // 2674598824
		{ &Z_Construct_UFunction_AATurret_OnComponentHit, "OnComponentHit" }, // 414778148
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATurret_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ATurret.h" },
		{ "ModuleRelativePath", "ATurret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATurret_Statics::NewProp_TurretMesh_MetaData[] = {
		{ "Category", "ASettingsTurret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ATurret.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATurret_Statics::NewProp_TurretMesh = { UE4CodeGen_Private::EPropertyClass::Object, "TurretMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AATurret, TurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATurret_Statics::NewProp_TurretMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AATurret_Statics::NewProp_TurretMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATurret_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ASettingsTurret" },
		{ "ModuleRelativePath", "ATurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AATurret_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AATurret, Health), METADATA_PARAMS(Z_Construct_UClass_AATurret_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AATurret_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATurret_Statics::NewProp_KillScore_MetaData[] = {
		{ "Category", "ASettingsTurret" },
		{ "ModuleRelativePath", "ATurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AATurret_Statics::NewProp_KillScore = { UE4CodeGen_Private::EPropertyClass::Float, "KillScore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AATurret, KillScore), METADATA_PARAMS(Z_Construct_UClass_AATurret_Statics::NewProp_KillScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_AATurret_Statics::NewProp_KillScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATurret_Statics::NewProp_TurretMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATurret_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATurret_Statics::NewProp_KillScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AATurret_Statics::ClassParams = {
		&AATurret::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AATurret_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AATurret_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AATurret_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AATurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AATurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AATurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AATurret, 3842841057);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AATurret(Z_Construct_UClass_AATurret, &AATurret::StaticClass, TEXT("/Script/Practice_03"), TEXT("AATurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AATurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

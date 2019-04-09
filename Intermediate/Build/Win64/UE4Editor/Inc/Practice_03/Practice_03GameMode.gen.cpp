// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practice_03/Practice_03GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePractice_03GameMode() {}
// Cross Module References
	PRACTICE_03_API UClass* Z_Construct_UClass_APractice_03GameMode_NoRegister();
	PRACTICE_03_API UClass* Z_Construct_UClass_APractice_03GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Practice_03();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_APractice_03GameMode_GetScore();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy();
// End Cross Module References
	void APractice_03GameMode::StaticRegisterNativesAPractice_03GameMode()
	{
		UClass* Class = APractice_03GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScore", &APractice_03GameMode::execGetScore },
			{ "OnTurretDestroy", &APractice_03GameMode::execOnTurretDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics
	{
		struct Practice_03GameMode_eventGetScore_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Practice_03GameMode_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Practice_03GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APractice_03GameMode, "GetScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Practice_03GameMode_eventGetScore_Parms), Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APractice_03GameMode_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APractice_03GameMode_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Practice_03GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APractice_03GameMode, "OnTurretDestroy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APractice_03GameMode_NoRegister()
	{
		return APractice_03GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APractice_03GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APractice_03GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Practice_03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APractice_03GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APractice_03GameMode_GetScore, "GetScore" }, // 4063628332
		{ &Z_Construct_UFunction_APractice_03GameMode_OnTurretDestroy, "OnTurretDestroy" }, // 791621317
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APractice_03GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Practice_03GameMode.h" },
		{ "ModuleRelativePath", "Practice_03GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APractice_03GameMode_Statics::NewProp_Score_MetaData[] = {
		{ "ModuleRelativePath", "Practice_03GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APractice_03GameMode_Statics::NewProp_Score = { UE4CodeGen_Private::EPropertyClass::Float, "Score", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(APractice_03GameMode, Score), METADATA_PARAMS(Z_Construct_UClass_APractice_03GameMode_Statics::NewProp_Score_MetaData, ARRAY_COUNT(Z_Construct_UClass_APractice_03GameMode_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APractice_03GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractice_03GameMode_Statics::NewProp_Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APractice_03GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APractice_03GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APractice_03GameMode_Statics::ClassParams = {
		&APractice_03GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APractice_03GameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APractice_03GameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APractice_03GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APractice_03GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APractice_03GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APractice_03GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APractice_03GameMode, 3385707546);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APractice_03GameMode(Z_Construct_UClass_APractice_03GameMode, &APractice_03GameMode::StaticClass, TEXT("/Script/Practice_03"), TEXT("APractice_03GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APractice_03GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

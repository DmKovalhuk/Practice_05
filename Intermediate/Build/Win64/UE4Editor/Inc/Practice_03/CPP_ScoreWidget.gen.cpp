// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practice_03/CPP_ScoreWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ScoreWidget() {}
// Cross Module References
	PRACTICE_03_API UClass* Z_Construct_UClass_UCPP_ScoreWidget_NoRegister();
	PRACTICE_03_API UClass* Z_Construct_UClass_UCPP_ScoreWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Practice_03();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_GetScore();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText();
	PRACTICE_03_API UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UCPP_ScoreWidget::StaticRegisterNativesUCPP_ScoreWidget()
	{
		UClass* Class = UCPP_ScoreWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DieMessage", &UCPP_ScoreWidget::execDieMessage },
			{ "GetScore", &UCPP_ScoreWidget::execGetScore },
			{ "SetScoreText", &UCPP_ScoreWidget::execSetScoreText },
			{ "UpdateScreenHud", &UCPP_ScoreWidget::execUpdateScreenHud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_ScoreWidget, "DieMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics
	{
		struct CPP_ScoreWidget_eventGetScore_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_ScoreWidget_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_ScoreWidget, "GetScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(CPP_ScoreWidget_eventGetScore_Parms), Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPP_ScoreWidget_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics
	{
		struct CPP_ScoreWidget_eventSetScoreText_Parms
		{
			float ScoreValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::NewProp_ScoreValue = { UE4CodeGen_Private::EPropertyClass::Float, "ScoreValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CPP_ScoreWidget_eventSetScoreText_Parms, ScoreValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::NewProp_ScoreValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
		{ "ToolTip", "UFUNCTION()\nfloat GetAmmo(ACharacter* OtherActor);\n\nUFUNCTION()\nvoid SetAmmoText(float AmmoValue);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_ScoreWidget, "SetScoreText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(CPP_ScoreWidget_eventSetScoreText_Parms), Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_ScoreWidget, "UpdateScreenHud", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPP_ScoreWidget_NoRegister()
	{
		return UCPP_ScoreWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_ScoreWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_ScoreWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Practice_03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_ScoreWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_ScoreWidget_DieMessage, "DieMessage" }, // 2576185664
		{ &Z_Construct_UFunction_UCPP_ScoreWidget_GetScore, "GetScore" }, // 3001958080
		{ &Z_Construct_UFunction_UCPP_ScoreWidget_SetScoreText, "SetScoreText" }, // 4268785401
		{ &Z_Construct_UFunction_UCPP_ScoreWidget_UpdateScreenHud, "UpdateScreenHud" }, // 3918828295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_ScoreWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_ScoreWidget.h" },
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_MessageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CPP_ScoreWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_MessageText = { UE4CodeGen_Private::EPropertyClass::Object, "MessageText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UCPP_ScoreWidget, MessageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_MessageText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_MessageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_AmmoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CPP_ScoreWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_AmmoText = { UE4CodeGen_Private::EPropertyClass::Object, "AmmoText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UCPP_ScoreWidget, AmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_AmmoText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_AmmoText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CPP_ScoreWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_ScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_ScoreText = { UE4CodeGen_Private::EPropertyClass::Object, "ScoreText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UCPP_ScoreWidget, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_ScoreText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_ScoreText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_ScoreWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_MessageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_AmmoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_ScoreWidget_Statics::NewProp_ScoreText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_ScoreWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_ScoreWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCPP_ScoreWidget_Statics::ClassParams = {
		&UCPP_ScoreWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCPP_ScoreWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCPP_ScoreWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCPP_ScoreWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCPP_ScoreWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_ScoreWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPP_ScoreWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPP_ScoreWidget, 3992916280);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPP_ScoreWidget(Z_Construct_UClass_UCPP_ScoreWidget, &UCPP_ScoreWidget::StaticClass, TEXT("/Script/Practice_03"), TEXT("UCPP_ScoreWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_ScoreWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToyProject/UnrealToyProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealToyProjectGameModeBase() {}
// Cross Module References
	UNREALTOYPROJECT_API UClass* Z_Construct_UClass_AUnrealToyProjectGameModeBase_NoRegister();
	UNREALTOYPROJECT_API UClass* Z_Construct_UClass_AUnrealToyProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealToyProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUnrealToyProjectGameModeBase::execChangeMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void AUnrealToyProjectGameModeBase::StaticRegisterNativesAUnrealToyProjectGameModeBase()
	{
		UClass* Class = AUnrealToyProjectGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AUnrealToyProjectGameModeBase::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics
	{
		struct UnrealToyProjectGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealToyProjectGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG_GAME" },
		{ "ModuleRelativePath", "UnrealToyProjectGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealToyProjectGameModeBase, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::UnrealToyProjectGameModeBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealToyProjectGameModeBase);
	UClass* Z_Construct_UClass_AUnrealToyProjectGameModeBase_NoRegister()
	{
		return AUnrealToyProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnrealToyProjectGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 2586634906
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealToyProjectGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealToyProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "UMG_GAME" },
		{ "ModuleRelativePath", "UnrealToyProjectGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_StartingWidgetClass = { "StartingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealToyProjectGameModeBase, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealToyProjectGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealToyProjectGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_StartingWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealToyProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::ClassParams = {
		&AUnrealToyProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealToyProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealToyProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealToyProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealToyProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealToyProjectGameModeBase.OuterSingleton;
	}
	template<> UNREALTOYPROJECT_API UClass* StaticClass<AUnrealToyProjectGameModeBase>()
	{
		return AUnrealToyProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealToyProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_UnrealToyProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_UnrealToyProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealToyProjectGameModeBase, AUnrealToyProjectGameModeBase::StaticClass, TEXT("AUnrealToyProjectGameModeBase"), &Z_Registration_Info_UClass_AUnrealToyProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealToyProjectGameModeBase), 3698976930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_UnrealToyProjectGameModeBase_h_60932104(TEXT("/Script/UnrealToyProject"),
		Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_UnrealToyProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_UnrealToyProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

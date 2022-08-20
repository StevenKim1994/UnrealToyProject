// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToyProject/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	UNREALTOYPROJECT_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	UNREALTOYPROJECT_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealToyProject();
// End Cross Module References
	DEFINE_FUNCTION(AMyActor::execMoveUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execInputSpaceKey)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputSpaceKey(Z_Param_Pressed);
		P_NATIVE_END;
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputSpaceKey", &AMyActor::execInputSpaceKey },
			{ "MoveUp", &AMyActor::execMoveUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics
	{
		struct MyActor_eventInputSpaceKey_Parms
		{
			bool Pressed;
		};
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((MyActor_eventInputSpaceKey_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyActor_eventInputSpaceKey_Parms), &Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::NewProp_Pressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "InputSpaceKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::MyActor_eventInputSpaceKey_Parms), Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_InputSpaceKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_InputSpaceKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_MoveUp_Statics
	{
		struct MyActor_eventMoveUp_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_MoveUp_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventMoveUp_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_MoveUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_MoveUp_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_MoveUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_MoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "MoveUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyActor_MoveUp_Statics::MyActor_eventMoveUp_Parms), Z_Construct_UFunction_AMyActor_MoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_MoveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_MoveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_MoveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_MoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_MoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_InputSpaceKey, "InputSpaceKey" }, // 2005899799
		{ &Z_Construct_UFunction_AMyActor_MoveUp, "MoveUp" }, // 2306803792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
	}
	template<> UNREALTOYPROJECT_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
	struct Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_MyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_MyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 1957909578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_MyActor_h_910275463(TEXT("/Script/UnrealToyProject"),
		Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealToyProject_Source_UnrealToyProject_MyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

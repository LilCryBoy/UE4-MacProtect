// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LCEProtect/Public/LCEProtectBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLCEProtectBPLibrary() {}
// Cross Module References
	LCEPROTECT_API UClass* Z_Construct_UClass_ULCEProtectBPLibrary_NoRegister();
	LCEPROTECT_API UClass* Z_Construct_UClass_ULCEProtectBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LCEProtect();
// End Cross Module References
	DEFINE_FUNCTION(ULCEProtectBPLibrary::execGetMACAdress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULCEProtectBPLibrary::GetMACAdress();
		P_NATIVE_END;
	}
	void ULCEProtectBPLibrary::StaticRegisterNativesULCEProtectBPLibrary()
	{
		UClass* Class = ULCEProtectBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMACAdress", &ULCEProtectBPLibrary::execGetMACAdress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics
	{
		struct LCEProtectBPLibrary_eventGetMACAdress_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LCEProtectBPLibrary_eventGetMACAdress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::Function_MetaDataParams[] = {
		{ "Category", "LCEMACPROTECT" },
		{ "DisplayName", "Get MAC" },
		{ "Keywords", "MAC Adress" },
		{ "ModuleRelativePath", "Public/LCEProtectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULCEProtectBPLibrary, nullptr, "GetMACAdress", nullptr, nullptr, sizeof(LCEProtectBPLibrary_eventGetMACAdress_Parms), Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULCEProtectBPLibrary_NoRegister()
	{
		return ULCEProtectBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULCEProtectBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULCEProtectBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LCEProtect,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULCEProtectBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULCEProtectBPLibrary_GetMACAdress, "GetMACAdress" }, // 3300527913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULCEProtectBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LCEProtectBPLibrary.h" },
		{ "ModuleRelativePath", "Public/LCEProtectBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULCEProtectBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULCEProtectBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULCEProtectBPLibrary_Statics::ClassParams = {
		&ULCEProtectBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULCEProtectBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULCEProtectBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULCEProtectBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULCEProtectBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULCEProtectBPLibrary, 1875408934);
	template<> LCEPROTECT_API UClass* StaticClass<ULCEProtectBPLibrary>()
	{
		return ULCEProtectBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULCEProtectBPLibrary(Z_Construct_UClass_ULCEProtectBPLibrary, &ULCEProtectBPLibrary::StaticClass, TEXT("/Script/LCEProtect"), TEXT("ULCEProtectBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULCEProtectBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

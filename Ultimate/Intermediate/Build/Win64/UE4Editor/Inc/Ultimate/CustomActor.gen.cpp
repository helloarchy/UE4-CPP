// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ultimate/CustomActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomActor() {}
// Cross Module References
	ULTIMATE_API UClass* Z_Construct_UClass_ACustomActor_NoRegister();
	ULTIMATE_API UClass* Z_Construct_UClass_ACustomActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Ultimate();
// End Cross Module References
	void ACustomActor::StaticRegisterNativesACustomActor()
	{
	}
	UClass* Z_Construct_UClass_ACustomActor_NoRegister()
	{
		return ACustomActor::StaticClass();
	}
	struct Z_Construct_UClass_ACustomActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Ultimate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomActor.h" },
		{ "ModuleRelativePath", "CustomActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomActor_Statics::ClassParams = {
		&ACustomActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACustomActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACustomActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomActor, 1314813969);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomActor(Z_Construct_UClass_ACustomActor, &ACustomActor::StaticClass, TEXT("/Script/Ultimate"), TEXT("ACustomActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

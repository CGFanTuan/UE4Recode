// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "startup/startupGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodestartupGameMode() {}
// Cross Module References
	STARTUP_API UClass* Z_Construct_UClass_AstartupGameMode_NoRegister();
	STARTUP_API UClass* Z_Construct_UClass_AstartupGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_startup();
// End Cross Module References
	void AstartupGameMode::StaticRegisterNativesAstartupGameMode()
	{
	}
	UClass* Z_Construct_UClass_AstartupGameMode_NoRegister()
	{
		return AstartupGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AstartupGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AstartupGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_startup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AstartupGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "startupGameMode.h" },
		{ "ModuleRelativePath", "startupGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AstartupGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AstartupGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AstartupGameMode_Statics::ClassParams = {
		&AstartupGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AstartupGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AstartupGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AstartupGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AstartupGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AstartupGameMode, 3542281952);
	template<> STARTUP_API UClass* StaticClass<AstartupGameMode>()
	{
		return AstartupGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AstartupGameMode(Z_Construct_UClass_AstartupGameMode, &AstartupGameMode::StaticClass, TEXT("/Script/startup"), TEXT("AstartupGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AstartupGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

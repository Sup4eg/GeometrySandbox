// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/BaseGeometryActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGeometryActor() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
// End Cross Module References
	void ABaseGeometryActor::StaticRegisterNativesABaseGeometryActor()
	{
	}
	UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister()
	{
		return ABaseGeometryActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGeometryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponsNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_weaponsNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killsNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_killsNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasWeapon_MetaData[];
#endif
		static void NewProp_hasWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGeometryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGeometryActor.h" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_weaponsNum_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_weaponsNum = { "weaponsNum", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, weaponsNum), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_weaponsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_weaponsNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_killsNum_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_killsNum = { "killsNum", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, killsNum), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_killsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_killsNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, health), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((ABaseGeometryActor*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGeometryActor), &Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_hasWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_hasWeapon_SetBit(void* Obj)
	{
		((ABaseGeometryActor*)Obj)->hasWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_hasWeapon = { "hasWeapon", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGeometryActor), &Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_hasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_hasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_hasWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_weaponsNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_killsNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_hasWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGeometryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGeometryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams = {
		&ABaseGeometryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGeometryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseGeometryActor, 537150751);
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<ABaseGeometryActor>()
	{
		return ABaseGeometryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGeometryActor(Z_Construct_UClass_ABaseGeometryActor, &ABaseGeometryActor::StaticClass, TEXT("/Script/GeometrySandbox"), TEXT("ABaseGeometryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGeometryActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

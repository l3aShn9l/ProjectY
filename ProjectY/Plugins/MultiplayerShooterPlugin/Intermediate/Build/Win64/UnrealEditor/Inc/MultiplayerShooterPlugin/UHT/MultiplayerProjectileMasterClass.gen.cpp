// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerShooterPlugin/Public/MultiplayerProjectileMasterClass.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerProjectileMasterClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MULTIPLAYERSHOOTERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerProjectileMasterClass();
	MULTIPLAYERSHOOTERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerProjectileMasterClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerShooterPlugin();
// End Cross Module References
	DEFINE_FUNCTION(AMultiplayerProjectileMasterClass::execOnHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit();
		P_NATIVE_END;
	}
	struct MultiplayerProjectileMasterClass_eventShowHitParticle_BP_Parms
	{
		UParticleSystem* SelectedEffect;
		FVector Location;
	};
	struct MultiplayerProjectileMasterClass_eventTick_BP_Parms
	{
		float DeltaTime;
	};
	static FName NAME_AMultiplayerProjectileMasterClass_BeginPlay_BP = FName(TEXT("BeginPlay_BP"));
	void AMultiplayerProjectileMasterClass::BeginPlay_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerProjectileMasterClass_BeginPlay_BP),NULL);
	}
	static FName NAME_AMultiplayerProjectileMasterClass_ShowHitParticle_BP = FName(TEXT("ShowHitParticle_BP"));
	void AMultiplayerProjectileMasterClass::ShowHitParticle_BP(UParticleSystem* SelectedEffect, FVector Location)
	{
		MultiplayerProjectileMasterClass_eventShowHitParticle_BP_Parms Parms;
		Parms.SelectedEffect=SelectedEffect;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerProjectileMasterClass_ShowHitParticle_BP),&Parms);
	}
	static FName NAME_AMultiplayerProjectileMasterClass_Tick_BP = FName(TEXT("Tick_BP"));
	void AMultiplayerProjectileMasterClass::Tick_BP(float DeltaTime)
	{
		MultiplayerProjectileMasterClass_eventTick_BP_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerProjectileMasterClass_Tick_BP),&Parms);
	}
	void AMultiplayerProjectileMasterClass::StaticRegisterNativesAMultiplayerProjectileMasterClass()
	{
		UClass* Class = AMultiplayerProjectileMasterClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AMultiplayerProjectileMasterClass::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this in blueprints to avoid overriding C++ begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this in blueprints to avoid overriding C++ begin play" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectileMasterClass, nullptr, "BeginPlay_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectileMasterClass, nullptr, "OnHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedEffect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::NewProp_SelectedEffect = { "SelectedEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectileMasterClass_eventShowHitParticle_BP_Parms, SelectedEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectileMasterClass_eventShowHitParticle_BP_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::NewProp_SelectedEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectileMasterClass, nullptr, "ShowHitParticle_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::PropPointers), sizeof(MultiplayerProjectileMasterClass_eventShowHitParticle_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerProjectileMasterClass_eventShowHitParticle_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectileMasterClass_eventTick_BP_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this in blueprints to avoid overriding C++ Tick\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this in blueprints to avoid overriding C++ Tick" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectileMasterClass, nullptr, "Tick_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::PropPointers), sizeof(MultiplayerProjectileMasterClass_eventTick_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerProjectileMasterClass_eventTick_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerProjectileMasterClass);
	UClass* Z_Construct_UClass_AMultiplayerProjectileMasterClass_NoRegister()
	{
		return AMultiplayerProjectileMasterClass::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningGun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningGun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileHitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintStringOfHitPhysicalMaterial_MetaData[];
#endif
		static void NewProp_bPrintStringOfHitPhysicalMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintStringOfHitPhysicalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StringDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerProjectileMasterClass_BeginPlay_BP, "BeginPlay_BP" }, // 2807346120
		{ &Z_Construct_UFunction_AMultiplayerProjectileMasterClass_OnHit, "OnHit" }, // 4066706157
		{ &Z_Construct_UFunction_AMultiplayerProjectileMasterClass_ShowHitParticle_BP, "ShowHitParticle_BP" }, // 1897016825
		{ &Z_Construct_UFunction_AMultiplayerProjectileMasterClass_Tick_BP, "Tick_BP" }, // 617583384
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultiplayerProjectileMasterClass.h" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMesh_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningPlayer_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, OwningPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningPlayer_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningGun_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningGun = { "OwningGun", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, OwningGun), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningGun_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningGun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_HitActor_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_HitActor_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_HitActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ShotDirection_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, ShotDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ShotDirection_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ShotDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileHitResult_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileHitResult = { "ProjectileHitResult", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, ProjectileHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileHitResult_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileHitResult_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_DamageType_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_DamageType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_MinimumVelocity_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "If the projectile goes under this velocity it gets destroyed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_MinimumVelocity = { "MinimumVelocity", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, MinimumVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_MinimumVelocity_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_MinimumVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_SetBit(void* Obj)
	{
		((AMultiplayerProjectileMasterClass*)Obj)->bPrintStringOfHitPhysicalMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial = { "bPrintStringOfHitPhysicalMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectileMasterClass), &Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringDuration = { "StringDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, StringDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringDuration_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectileMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringColor = { "StringColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectileMasterClass, StringColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringColor_MetaData), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_OwningGun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_HitActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ShotDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_ProjectileHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_MinimumVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::NewProp_StringColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerProjectileMasterClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::ClassParams = {
		&AMultiplayerProjectileMasterClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMultiplayerProjectileMasterClass()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerProjectileMasterClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerProjectileMasterClass.OuterSingleton, Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerProjectileMasterClass.OuterSingleton;
	}
	template<> MULTIPLAYERSHOOTERPLUGIN_API UClass* StaticClass<AMultiplayerProjectileMasterClass>()
	{
		return AMultiplayerProjectileMasterClass::StaticClass();
	}

	void AMultiplayerProjectileMasterClass::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MinimumVelocity(TEXT("MinimumVelocity"));

		const bool bIsValid = true
			&& Name_MinimumVelocity == ClassReps[(int32)ENetFields_Private::MinimumVelocity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerProjectileMasterClass"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerProjectileMasterClass);
	AMultiplayerProjectileMasterClass::~AMultiplayerProjectileMasterClass() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerProjectileMasterClass, AMultiplayerProjectileMasterClass::StaticClass, TEXT("AMultiplayerProjectileMasterClass"), &Z_Registration_Info_UClass_AMultiplayerProjectileMasterClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerProjectileMasterClass), 1030714608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_92232802(TEXT("/Script/MultiplayerShooterPlugin"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

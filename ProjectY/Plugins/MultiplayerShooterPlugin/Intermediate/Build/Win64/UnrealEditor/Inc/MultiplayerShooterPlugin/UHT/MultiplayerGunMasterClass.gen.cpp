// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerShooterPlugin/Public/MultiplayerGunMasterClass.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGunMasterClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	MULTIPLAYERSHOOTERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerGunMasterClass();
	MULTIPLAYERSHOOTERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerGunMasterClass_NoRegister();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGunFireReplication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication();
	UPackage* Z_Construct_UPackage__Script_MultiplayerShooterPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication;
class UScriptStruct* FMultiplayerGunFireReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGunFireReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerGunFireReplication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerGunFireReplication>()
{
	return FMultiplayerGunFireReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGunFireReplication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerGunFireReplication",
		nullptr,
		0,
		sizeof(FMultiplayerGunFireReplication),
		alignof(FMultiplayerGunFireReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGunFireReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication;
class UScriptStruct* FMultiplayerGunReloadReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerGunReloadReplication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerGunReloadReplication>()
{
	return FMultiplayerGunReloadReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGunReloadReplication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerGunReloadReplication",
		nullptr,
		0,
		sizeof(FMultiplayerGunReloadReplication),
		alignof(FMultiplayerGunReloadReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication;
class UScriptStruct* FMultiplayerGunBurstFireReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerGunBurstFireReplication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerGunBurstFireReplication>()
{
	return FMultiplayerGunBurstFireReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGunBurstFireReplication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerGunBurstFireReplication",
		nullptr,
		0,
		sizeof(FMultiplayerGunBurstFireReplication),
		alignof(FMultiplayerGunBurstFireReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication.InnerSingleton;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execOnRep_BurstFireReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BurstFireReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execOnRep_ReloadReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReloadReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execOnRep_FireReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FireReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execServerReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReload_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerReload_Validate"));
			return;
		}
		P_THIS->ServerReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execGetPickedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPickedUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execSetCanShootTrue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanShootTrue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execShotgunFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShotgunFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execServerBurstFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerBurstFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerBurstFire_Validate"));
			return;
		}
		P_THIS->ServerBurstFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execBurstFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BurstFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execServerFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerFire_Validate"));
			return;
		}
		P_THIS->ServerFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerGunMasterClass::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	struct MultiplayerGunMasterClass_eventSetThirdPerson_BP_Parms
	{
		bool ThirdPerson;
	};
	struct MultiplayerGunMasterClass_eventShowHitParticle_BP_Parms
	{
		UParticleSystem* SelectedEffect;
		FVector Location;
	};
	struct MultiplayerGunMasterClass_eventTick_BP_Parms
	{
		float DeltaTime;
	};
	static FName NAME_AMultiplayerGunMasterClass_BeginPlay_BP = FName(TEXT("BeginPlay_BP"));
	void AMultiplayerGunMasterClass::BeginPlay_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_BeginPlay_BP),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_Fire_BP = FName(TEXT("Fire_BP"));
	void AMultiplayerGunMasterClass::Fire_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_Fire_BP),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_GetPickedUp_BP = FName(TEXT("GetPickedUp_BP"));
	void AMultiplayerGunMasterClass::GetPickedUp_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_GetPickedUp_BP),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_ServerBurstFire = FName(TEXT("ServerBurstFire"));
	void AMultiplayerGunMasterClass::ServerBurstFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_ServerBurstFire),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_ServerFire = FName(TEXT("ServerFire"));
	void AMultiplayerGunMasterClass::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_ServerFire),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_ServerReload = FName(TEXT("ServerReload"));
	void AMultiplayerGunMasterClass::ServerReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_ServerReload),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP = FName(TEXT("SetShotgunFireRotation_BP"));
	void AMultiplayerGunMasterClass::SetShotgunFireRotation_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_SetThirdPerson_BP = FName(TEXT("SetThirdPerson_BP"));
	void AMultiplayerGunMasterClass::SetThirdPerson_BP(bool ThirdPerson)
	{
		MultiplayerGunMasterClass_eventSetThirdPerson_BP_Parms Parms;
		Parms.ThirdPerson=ThirdPerson ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_SetThirdPerson_BP),&Parms);
	}
	static FName NAME_AMultiplayerGunMasterClass_ShotgunFire_BP = FName(TEXT("ShotgunFire_BP"));
	void AMultiplayerGunMasterClass::ShotgunFire_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_ShotgunFire_BP),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_ShowHitParticle_BP = FName(TEXT("ShowHitParticle_BP"));
	void AMultiplayerGunMasterClass::ShowHitParticle_BP(UParticleSystem* SelectedEffect, FVector Location)
	{
		MultiplayerGunMasterClass_eventShowHitParticle_BP_Parms Parms;
		Parms.SelectedEffect=SelectedEffect;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_ShowHitParticle_BP),&Parms);
	}
	static FName NAME_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP = FName(TEXT("ShowMuzzleFlash_BP"));
	void AMultiplayerGunMasterClass::ShowMuzzleFlash_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP),NULL);
	}
	static FName NAME_AMultiplayerGunMasterClass_Tick_BP = FName(TEXT("Tick_BP"));
	void AMultiplayerGunMasterClass::Tick_BP(float DeltaTime)
	{
		MultiplayerGunMasterClass_eventTick_BP_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerGunMasterClass_Tick_BP),&Parms);
	}
	void AMultiplayerGunMasterClass::StaticRegisterNativesAMultiplayerGunMasterClass()
	{
		UClass* Class = AMultiplayerGunMasterClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BurstFire", &AMultiplayerGunMasterClass::execBurstFire },
			{ "Fire", &AMultiplayerGunMasterClass::execFire },
			{ "GetPickedUp", &AMultiplayerGunMasterClass::execGetPickedUp },
			{ "OnRep_BurstFireReplication", &AMultiplayerGunMasterClass::execOnRep_BurstFireReplication },
			{ "OnRep_FireReplication", &AMultiplayerGunMasterClass::execOnRep_FireReplication },
			{ "OnRep_ReloadReplication", &AMultiplayerGunMasterClass::execOnRep_ReloadReplication },
			{ "Reload", &AMultiplayerGunMasterClass::execReload },
			{ "ServerBurstFire", &AMultiplayerGunMasterClass::execServerBurstFire },
			{ "ServerFire", &AMultiplayerGunMasterClass::execServerFire },
			{ "ServerReload", &AMultiplayerGunMasterClass::execServerReload },
			{ "SetCanShootTrue", &AMultiplayerGunMasterClass::execSetCanShootTrue },
			{ "ShotgunFire", &AMultiplayerGunMasterClass::execShotgunFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this in blueprints to avoid overriding C++ begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this in blueprints to avoid overriding C++ begin play" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "BeginPlay_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "BurstFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "Fire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "GetPickedUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "GetPickedUp_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "OnRep_BurstFireReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "OnRep_FireReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "OnRep_ReloadReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "ServerBurstFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "ServerFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "ServerReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "SetCanShootTrue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "SetShotgunFireRotation_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics
	{
		static void NewProp_ThirdPerson_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdPerson;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::NewProp_ThirdPerson_SetBit(void* Obj)
	{
		((MultiplayerGunMasterClass_eventSetThirdPerson_BP_Parms*)Obj)->ThirdPerson = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::NewProp_ThirdPerson = { "ThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGunMasterClass_eventSetThirdPerson_BP_Parms), &Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::NewProp_ThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::NewProp_ThirdPerson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "SetThirdPerson_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::PropPointers), sizeof(MultiplayerGunMasterClass_eventSetThirdPerson_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerGunMasterClass_eventSetThirdPerson_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "ShotgunFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "ShotgunFire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedEffect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::NewProp_SelectedEffect = { "SelectedEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGunMasterClass_eventShowHitParticle_BP_Parms, SelectedEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGunMasterClass_eventShowHitParticle_BP_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::NewProp_SelectedEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "ShowHitParticle_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::PropPointers), sizeof(MultiplayerGunMasterClass_eventShowHitParticle_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerGunMasterClass_eventShowHitParticle_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "ShowMuzzleFlash_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGunMasterClass_eventTick_BP_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this in blueprints to avoid overriding C++ Tick\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this in blueprints to avoid overriding C++ Tick" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGunMasterClass, nullptr, "Tick_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::PropPointers), sizeof(MultiplayerGunMasterClass_eventTick_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerGunMasterClass_eventTick_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerGunMasterClass);
	UClass* Z_Construct_UClass_AMultiplayerGunMasterClass_NoRegister()
	{
		return AMultiplayerGunMasterClass::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerGunMasterClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarrelEndScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelEndScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarrelEndSceneThirdPerson_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelEndSceneThirdPerson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonGunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonGunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCharacterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCharacterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FireMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurstRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfShotsInBurst_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfShotsInBurst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfBurstShotsFired_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfBurstShotsFired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBurstFiring_MetaData[];
#endif
		static void NewProp_bIsBurstFiring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBurstFiring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShotgun_MetaData[];
#endif
		static void NewProp_bIsShotgun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShotgun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunAmountOfPellets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotgunAmountOfPellets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunAmountOfPelletsShot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotgunAmountOfPelletsShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunMinHorizontalSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunMinHorizontalSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunMaxHorizontalSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunMaxHorizontalSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunMinVerticalSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunMinVerticalSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunMaxVerticalSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunMaxVerticalSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShotgunFiring_MetaData[];
#endif
		static void NewProp_bIsShotgunFiring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShotgunFiring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticleRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticleRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLineTraceStartsFromGunBarrel_MetaData[];
#endif
		static void NewProp_bLineTraceStartsFromGunBarrel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineTraceStartsFromGunBarrel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoInMagazine_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoInMagazine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoInMagazine_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoInMagazine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReserveAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReserveAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxReserveAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReserveAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfTimeToReload_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountOfTimeToReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TorsoDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TorsoDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LegDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsesProjectile_MetaData[];
#endif
		static void NewProp_bUsesProjectile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesProjectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileToUse_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectileSpawnsFromGunBarrel_MetaData[];
#endif
		static void NewProp_bProjectileSpawnsFromGunBarrel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectileSpawnsFromGunBarrel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceInFrontOfCameraToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceInFrontOfCameraToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedProjectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShakeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayUnrealDefaultArmsAnimation_MetaData[];
#endif
		static void NewProp_bPlayUnrealDefaultArmsAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayUnrealDefaultArmsAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimationMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimationMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PickupLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PickupRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupLocationThirdPerson_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PickupLocationThirdPerson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupRotationThirdPerson_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PickupRotationThirdPerson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunFireRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotgunFireRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketThirdPerson_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketThirdPerson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultHitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadHitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadHitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChestHitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChestHitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TorsoHitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoHitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegHitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LegHitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticleScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitParticleScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugLine_MetaData[];
#endif
		static void NewProp_bShowDebugLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugLinePersistent_MetaData[];
#endif
		static void NewProp_bDebugLinePersistent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugLinePersistent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineDuration;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstFireReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurstFireReplication;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_BeginPlay_BP, "BeginPlay_BP" }, // 2986582057
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_BurstFire, "BurstFire" }, // 3105562326
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire, "Fire" }, // 230627293
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_Fire_BP, "Fire_BP" }, // 290072998
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp, "GetPickedUp" }, // 2626973506
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_GetPickedUp_BP, "GetPickedUp_BP" }, // 3686092615
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_BurstFireReplication, "OnRep_BurstFireReplication" }, // 1858951502
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_FireReplication, "OnRep_FireReplication" }, // 3201864966
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_OnRep_ReloadReplication, "OnRep_ReloadReplication" }, // 1989250585
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_Reload, "Reload" }, // 148994549
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerBurstFire, "ServerBurstFire" }, // 3649081958
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerFire, "ServerFire" }, // 1143034492
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_ServerReload, "ServerReload" }, // 1514480508
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_SetCanShootTrue, "SetCanShootTrue" }, // 2832432034
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_SetShotgunFireRotation_BP, "SetShotgunFireRotation_BP" }, // 3579400788
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_SetThirdPerson_BP, "SetThirdPerson_BP" }, // 423483135
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire, "ShotgunFire" }, // 174181530
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_ShotgunFire_BP, "ShotgunFire_BP" }, // 4001906863
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowHitParticle_BP, "ShowHitParticle_BP" }, // 3947911956
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_ShowMuzzleFlash_BP, "ShowMuzzleFlash_BP" }, // 2495553740
		{ &Z_Construct_UFunction_AMultiplayerGunMasterClass_Tick_BP, "Tick_BP" }, // 2318525460
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultiplayerGunMasterClass.h" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you want to use a static mesh instead replace this with \"UStaticMeshComponent\"\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want to use a static mesh instead replace this with \"UStaticMeshComponent\"" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_GunMesh_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_GunMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndScene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndScene = { "BarrelEndScene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, BarrelEndScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndScene_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndSceneThirdPerson_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndSceneThirdPerson = { "BarrelEndSceneThirdPerson", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, BarrelEndSceneThirdPerson), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndSceneThirdPerson_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndSceneThirdPerson_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonGunMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you want to use a static mesh instead replace this with \"UStaticMeshComponent\"\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want to use a static mesh instead replace this with \"UStaticMeshComponent\"" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonGunMesh = { "ThirdPersonGunMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ThirdPersonGunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonGunMesh_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonGunMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonCharacterMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonCharacterMesh = { "ThirdPersonCharacterMesh", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ThirdPersonCharacterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonCharacterMesh_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonCharacterMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_WeaponName_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_WeaponName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bCanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bCanShoot_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bCanShoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireMode_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "0 = Full Auto, 1 = Semi Auto, 2 = Burst (All fire modes work with shotgun)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireMode = { "FireMode", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, FireMode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireMode_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The amount of time between shots" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstRate_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The time between each shot in the burst" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstRate = { "BurstRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, BurstRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstRate_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfShotsInBurst_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfShotsInBurst = { "AmountOfShotsInBurst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, AmountOfShotsInBurst), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfShotsInBurst_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfShotsInBurst_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfBurstShotsFired_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfBurstShotsFired = { "AmountOfBurstShotsFired", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, AmountOfBurstShotsFired), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfBurstShotsFired_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfBurstShotsFired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsBurstFiring_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsBurstFiring_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bIsBurstFiring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsBurstFiring = { "bIsBurstFiring", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsBurstFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsBurstFiring_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsBurstFiring_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgun_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Does not work with projectile, if this is true it will use line trace" },
#endif
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgun_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bIsShotgun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgun = { "bIsShotgun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgun_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPellets_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPellets = { "ShotgunAmountOfPellets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ShotgunAmountOfPellets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPellets_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPellets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPelletsShot_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPelletsShot = { "ShotgunAmountOfPelletsShot", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ShotgunAmountOfPelletsShot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPelletsShot_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPelletsShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinHorizontalSpread_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinHorizontalSpread = { "ShotgunMinHorizontalSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ShotgunMinHorizontalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinHorizontalSpread_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinHorizontalSpread_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxHorizontalSpread_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxHorizontalSpread = { "ShotgunMaxHorizontalSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ShotgunMaxHorizontalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxHorizontalSpread_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxHorizontalSpread_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinVerticalSpread_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinVerticalSpread = { "ShotgunMinVerticalSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ShotgunMinVerticalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinVerticalSpread_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinVerticalSpread_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxVerticalSpread_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxVerticalSpread = { "ShotgunMaxVerticalSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ShotgunMaxVerticalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxVerticalSpread_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxVerticalSpread_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgunFiring_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgunFiring_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bIsShotgunFiring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgunFiring = { "bIsShotgunFiring", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgunFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgunFiring_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgunFiring_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_VerticleRecoil_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_VerticleRecoil = { "VerticleRecoil", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, VerticleRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_VerticleRecoil_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_VerticleRecoil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HorizontalRecoil_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HorizontalRecoil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRange_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "How far the line trace will go (does not apply to projectiles)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, FireRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRange_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bLineTraceStartsFromGunBarrel_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Weather the Line Trace starts from the player camera or the gun barrel (you might have to rotate the BarrelEndScene component)" },
#endif
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bLineTraceStartsFromGunBarrel_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bLineTraceStartsFromGunBarrel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bLineTraceStartsFromGunBarrel = { "bLineTraceStartsFromGunBarrel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bLineTraceStartsFromGunBarrel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bLineTraceStartsFromGunBarrel_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bLineTraceStartsFromGunBarrel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmmoInMagazine_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmmoInMagazine = { "AmmoInMagazine", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, AmmoInMagazine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmmoInMagazine_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmmoInMagazine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxAmmoInMagazine_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxAmmoInMagazine = { "MaxAmmoInMagazine", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, MaxAmmoInMagazine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxAmmoInMagazine_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxAmmoInMagazine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReserveAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReserveAmmo = { "ReserveAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReserveAmmo_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReserveAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxReserveAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxReserveAmmo = { "MaxReserveAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, MaxReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxReserveAmmo_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxReserveAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfTimeToReload_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfTimeToReload = { "AmountOfTimeToReload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, AmountOfTimeToReload), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfTimeToReload_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfTimeToReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultDamage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default Damage is also used for the chest\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Damage is also used for the chest" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultDamage = { "DefaultDamage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, DefaultDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultDamage_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadDamage = { "HeadDamage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, HeadDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadDamage_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoDamage = { "TorsoDamage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, TorsoDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoDamage_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegDamage = { "LegDamage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, LegDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegDamage_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bUsesProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Weather to use projectile or line trace (hitscan)" },
#endif
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bUsesProjectile_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bUsesProjectile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bUsesProjectile = { "bUsesProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bUsesProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bUsesProjectile_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bUsesProjectile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ProjectileToUse_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ProjectileToUse = { "ProjectileToUse", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ProjectileToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ProjectileToUse_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ProjectileToUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bProjectileSpawnsFromGunBarrel_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Weather the projectile spawns from the player camera or the gun barrel (you might have to rotate the BarrelEndScene component)" },
#endif
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bProjectileSpawnsFromGunBarrel_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bProjectileSpawnsFromGunBarrel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bProjectileSpawnsFromGunBarrel = { "bProjectileSpawnsFromGunBarrel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bProjectileSpawnsFromGunBarrel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bProjectileSpawnsFromGunBarrel_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bProjectileSpawnsFromGunBarrel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DistanceInFrontOfCameraToSpawn_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "1.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DistanceInFrontOfCameraToSpawn = { "DistanceInFrontOfCameraToSpawn", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, DistanceInFrontOfCameraToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DistanceInFrontOfCameraToSpawn_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DistanceInFrontOfCameraToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SpawnedProjectile_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SpawnedProjectile = { "SpawnedProjectile", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, SpawnedProjectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SpawnedProjectile_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SpawnedProjectile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The default sound cuts out when played rapidly but changing the sound will fix that" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireSound_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_CameraShakeScale_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_CameraShakeScale = { "CameraShakeScale", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, CameraShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_CameraShakeScale_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_CameraShakeScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPlayUnrealDefaultArmsAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPlayUnrealDefaultArmsAnimation_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bPlayUnrealDefaultArmsAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPlayUnrealDefaultArmsAnimation = { "bPlayUnrealDefaultArmsAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPlayUnrealDefaultArmsAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPlayUnrealDefaultArmsAnimation_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPlayUnrealDefaultArmsAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireAnimationMontage = { "FireAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, FireAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireAnimationMontage_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireAnimationMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocation_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The location the gun will snap to when picked up, relative to the socket or parent actor" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocation = { "PickupLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, PickupLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocation_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotation_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The rotation the gun will snap to when picked up, relative to the socket or parent actor" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotation = { "PickupRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, PickupRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotation_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocationThirdPerson_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The location the third person gun will snap to when picked up, relative to the socket or parent actor" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocationThirdPerson = { "PickupLocationThirdPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, PickupLocationThirdPerson), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocationThirdPerson_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocationThirdPerson_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotationThirdPerson_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The rotation the third person gun will snap to when picked up, relative to the socket or parent actor" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotationThirdPerson = { "PickupRotationThirdPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, PickupRotationThirdPerson), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotationThirdPerson_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotationThirdPerson_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunFireRotation_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunFireRotation = { "ShotgunFireRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ShotgunFireRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunFireRotation_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunFireRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The socket the gun will snap to when picked up" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, Socket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_Socket_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_Socket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SocketThirdPerson_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The socket the third person gun will snap to when picked up" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SocketThirdPerson = { "SocketThirdPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, SocketThirdPerson), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SocketThirdPerson_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SocketThirdPerson_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultHitParticle_MetaData[] = {
		{ "Category", "Particle Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultHitParticle = { "DefaultHitParticle", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, DefaultHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultHitParticle_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultHitParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadHitParticle_MetaData[] = {
		{ "Category", "Particle Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadHitParticle = { "HeadHitParticle", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, HeadHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadHitParticle_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadHitParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ChestHitParticle_MetaData[] = {
		{ "Category", "Particle Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ChestHitParticle = { "ChestHitParticle", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ChestHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ChestHitParticle_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ChestHitParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoHitParticle_MetaData[] = {
		{ "Category", "Particle Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoHitParticle = { "TorsoHitParticle", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, TorsoHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoHitParticle_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoHitParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegHitParticle_MetaData[] = {
		{ "Category", "Particle Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegHitParticle = { "LegHitParticle", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, LegHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegHitParticle_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegHitParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HitParticleScale_MetaData[] = {
		{ "Category", "Particle Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HitParticleScale = { "HitParticleScale", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, HitParticleScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HitParticleScale_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HitParticleScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_OwningPlayer_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, OwningPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_OwningPlayer_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_OwningPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DamageType_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DamageType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MuzzleFlashParticle_MetaData[] = {
		{ "Category", "Particle Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "This will attach to the BarrelEndScene component, to change the size of the muzzle flash rescale the BarrelEndScene component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MuzzleFlashParticle = { "MuzzleFlashParticle", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, MuzzleFlashParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MuzzleFlashParticle_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MuzzleFlashParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bShowDebugLine_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bShowDebugLine_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bShowDebugLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bShowDebugLine = { "bShowDebugLine", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bShowDebugLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bShowDebugLine_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bShowDebugLine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineColor = { "DebugLineColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, DebugLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineColor_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bDebugLinePersistent_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bDebugLinePersistent_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bDebugLinePersistent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bDebugLinePersistent = { "bDebugLinePersistent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bDebugLinePersistent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bDebugLinePersistent_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bDebugLinePersistent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineDuration = { "DebugLineDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, DebugLineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineDuration_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_SetBit(void* Obj)
	{
		((AMultiplayerGunMasterClass*)Obj)->bPrintStringOfHitPhysicalMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial = { "bPrintStringOfHitPhysicalMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGunMasterClass), &Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringDuration = { "StringDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, StringDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringDuration_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringColor = { "StringColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, StringColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringColor_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireReplication = { "FireReplication", "OnRep_FireReplication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, FireReplication), Z_Construct_UScriptStruct_FMultiplayerGunFireReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireReplication_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireReplication_MetaData) }; // 1785334070
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReloadReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReloadReplication = { "ReloadReplication", "OnRep_ReloadReplication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, ReloadReplication), Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReloadReplication_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReloadReplication_MetaData) }; // 2391609142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstFireReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGunMasterClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstFireReplication = { "BurstFireReplication", "OnRep_BurstFireReplication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGunMasterClass, BurstFireReplication), Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstFireReplication_MetaData), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstFireReplication_MetaData) }; // 3396448145
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_GunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BarrelEndSceneThirdPerson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonGunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ThirdPersonCharacterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_WeaponName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bCanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfShotsInBurst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfBurstShotsFired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsBurstFiring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPellets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunAmountOfPelletsShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinHorizontalSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxHorizontalSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMinVerticalSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunMaxVerticalSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bIsShotgunFiring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_VerticleRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HorizontalRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bLineTraceStartsFromGunBarrel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmmoInMagazine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxAmmoInMagazine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReserveAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MaxReserveAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_AmountOfTimeToReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bUsesProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ProjectileToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bProjectileSpawnsFromGunBarrel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DistanceInFrontOfCameraToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SpawnedProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_CameraShakeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPlayUnrealDefaultArmsAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireAnimationMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupLocationThirdPerson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_PickupRotationThirdPerson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ShotgunFireRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_Socket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_SocketThirdPerson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DefaultHitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HeadHitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ChestHitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_TorsoHitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_LegHitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_HitParticleScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_OwningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_MuzzleFlashParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bShowDebugLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bDebugLinePersistent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_DebugLineDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_bPrintStringOfHitPhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_StringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_FireReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_ReloadReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::NewProp_BurstFireReplication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGunMasterClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::ClassParams = {
		&AMultiplayerGunMasterClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMultiplayerGunMasterClass()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerGunMasterClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerGunMasterClass.OuterSingleton, Z_Construct_UClass_AMultiplayerGunMasterClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerGunMasterClass.OuterSingleton;
	}
	template<> MULTIPLAYERSHOOTERPLUGIN_API UClass* StaticClass<AMultiplayerGunMasterClass>()
	{
		return AMultiplayerGunMasterClass::StaticClass();
	}

	void AMultiplayerGunMasterClass::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_FireMode(TEXT("FireMode"));
		static const FName Name_FireRate(TEXT("FireRate"));
		static const FName Name_bIsBurstFiring(TEXT("bIsBurstFiring"));
		static const FName Name_VerticleRecoil(TEXT("VerticleRecoil"));
		static const FName Name_HorizontalRecoil(TEXT("HorizontalRecoil"));
		static const FName Name_FireRange(TEXT("FireRange"));
		static const FName Name_AmmoInMagazine(TEXT("AmmoInMagazine"));
		static const FName Name_MaxAmmoInMagazine(TEXT("MaxAmmoInMagazine"));
		static const FName Name_DefaultDamage(TEXT("DefaultDamage"));
		static const FName Name_HeadDamage(TEXT("HeadDamage"));
		static const FName Name_TorsoDamage(TEXT("TorsoDamage"));
		static const FName Name_LegDamage(TEXT("LegDamage"));
		static const FName Name_CameraShakeScale(TEXT("CameraShakeScale"));
		static const FName Name_DefaultHitParticle(TEXT("DefaultHitParticle"));
		static const FName Name_HeadHitParticle(TEXT("HeadHitParticle"));
		static const FName Name_ChestHitParticle(TEXT("ChestHitParticle"));
		static const FName Name_TorsoHitParticle(TEXT("TorsoHitParticle"));
		static const FName Name_LegHitParticle(TEXT("LegHitParticle"));
		static const FName Name_HitParticleScale(TEXT("HitParticleScale"));
		static const FName Name_FireReplication(TEXT("FireReplication"));
		static const FName Name_ReloadReplication(TEXT("ReloadReplication"));
		static const FName Name_BurstFireReplication(TEXT("BurstFireReplication"));

		const bool bIsValid = true
			&& Name_FireMode == ClassReps[(int32)ENetFields_Private::FireMode].Property->GetFName()
			&& Name_FireRate == ClassReps[(int32)ENetFields_Private::FireRate].Property->GetFName()
			&& Name_bIsBurstFiring == ClassReps[(int32)ENetFields_Private::bIsBurstFiring].Property->GetFName()
			&& Name_VerticleRecoil == ClassReps[(int32)ENetFields_Private::VerticleRecoil].Property->GetFName()
			&& Name_HorizontalRecoil == ClassReps[(int32)ENetFields_Private::HorizontalRecoil].Property->GetFName()
			&& Name_FireRange == ClassReps[(int32)ENetFields_Private::FireRange].Property->GetFName()
			&& Name_AmmoInMagazine == ClassReps[(int32)ENetFields_Private::AmmoInMagazine].Property->GetFName()
			&& Name_MaxAmmoInMagazine == ClassReps[(int32)ENetFields_Private::MaxAmmoInMagazine].Property->GetFName()
			&& Name_DefaultDamage == ClassReps[(int32)ENetFields_Private::DefaultDamage].Property->GetFName()
			&& Name_HeadDamage == ClassReps[(int32)ENetFields_Private::HeadDamage].Property->GetFName()
			&& Name_TorsoDamage == ClassReps[(int32)ENetFields_Private::TorsoDamage].Property->GetFName()
			&& Name_LegDamage == ClassReps[(int32)ENetFields_Private::LegDamage].Property->GetFName()
			&& Name_CameraShakeScale == ClassReps[(int32)ENetFields_Private::CameraShakeScale].Property->GetFName()
			&& Name_DefaultHitParticle == ClassReps[(int32)ENetFields_Private::DefaultHitParticle].Property->GetFName()
			&& Name_HeadHitParticle == ClassReps[(int32)ENetFields_Private::HeadHitParticle].Property->GetFName()
			&& Name_ChestHitParticle == ClassReps[(int32)ENetFields_Private::ChestHitParticle].Property->GetFName()
			&& Name_TorsoHitParticle == ClassReps[(int32)ENetFields_Private::TorsoHitParticle].Property->GetFName()
			&& Name_LegHitParticle == ClassReps[(int32)ENetFields_Private::LegHitParticle].Property->GetFName()
			&& Name_HitParticleScale == ClassReps[(int32)ENetFields_Private::HitParticleScale].Property->GetFName()
			&& Name_FireReplication == ClassReps[(int32)ENetFields_Private::FireReplication].Property->GetFName()
			&& Name_ReloadReplication == ClassReps[(int32)ENetFields_Private::ReloadReplication].Property->GetFName()
			&& Name_BurstFireReplication == ClassReps[(int32)ENetFields_Private::BurstFireReplication].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerGunMasterClass"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGunMasterClass);
	AMultiplayerGunMasterClass::~AMultiplayerGunMasterClass() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_Statics::ScriptStructInfo[] = {
		{ FMultiplayerGunFireReplication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics::NewStructOps, TEXT("MultiplayerGunFireReplication"), &Z_Registration_Info_UScriptStruct_MultiplayerGunFireReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerGunFireReplication), 1785334070U) },
		{ FMultiplayerGunReloadReplication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics::NewStructOps, TEXT("MultiplayerGunReloadReplication"), &Z_Registration_Info_UScriptStruct_MultiplayerGunReloadReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerGunReloadReplication), 2391609142U) },
		{ FMultiplayerGunBurstFireReplication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics::NewStructOps, TEXT("MultiplayerGunBurstFireReplication"), &Z_Registration_Info_UScriptStruct_MultiplayerGunBurstFireReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerGunBurstFireReplication), 3396448145U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerGunMasterClass, AMultiplayerGunMasterClass::StaticClass, TEXT("AMultiplayerGunMasterClass"), &Z_Registration_Info_UClass_AMultiplayerGunMasterClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerGunMasterClass), 1123777336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_756973285(TEXT("/Script/MultiplayerShooterPlugin"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
